import java.util.Calendar;

public class Date {
    private int day, month, year;
    
    // Array to map month names and days in each month
    private static final String[] MONTH_NAMES = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    private static final int[] DAYS_IN_MONTH = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    // Constructor for MM/DD/YYYY
    public Date(int month, int day, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
        validateDate();
    }

    // Constructor for "MonthName DD, YYYY"
    public Date(String monthName, int day, int year) {
        this.day = day;
        this.year = year;
        this.month = getMonthFromName(monthName);
        validateDate();
    }

    // Constructor for DDD YYYY (day number of the year)
    public Date(int dayOfYear, int year) {
        this.year = year;
        convertDayOfYearToDate(dayOfYear);
    }

    // Validate date for invalid days or leap years
    private void validateDate() {
        if (isLeapYear(year)) {
            DAYS_IN_MONTH[2] = 29; // Adjust for leap year
        } else {
            DAYS_IN_MONTH[2] = 28;
        }
        if (month < 1 || month > 12 || day < 1 || day > DAYS_IN_MONTH[month]) {
            throw new IllegalArgumentException("Invalid date");
        }
    }

    // Convert day of the year (DDD) to MM/DD
    private void convertDayOfYearToDate(int dayOfYear) {
        if (isLeapYear(year)) {
            DAYS_IN_MONTH[2] = 29; // Adjust for leap year
        } else {
            DAYS_IN_MONTH[2] = 28;
        }
        int cumulativeDays = 0;
        for (int i = 1; i <= 12; i++) {
            if (cumulativeDays + DAYS_IN_MONTH[i] >= dayOfYear) {
                this.month = i;
                this.day = dayOfYear - cumulativeDays;
                return;
            }
            cumulativeDays += DAYS_IN_MONTH[i];
        }
        throw new IllegalArgumentException("Invalid day of year");
    }

    // Helper to determine if a year is a leap year
    private boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Get month index from month name
    private int getMonthFromName(String monthName) {
        for (int i = 1; i < MONTH_NAMES.length; i++) {
            if (MONTH_NAMES[i].equalsIgnoreCase(monthName)) {
                return i;
            }
        }
        throw new IllegalArgumentException("Invalid month name");
    }

    // Output the date in MM/DD/YYYY format
    public String toMMDDYYYY() {
        return String.format("%02d/%02d/%04d", month, day, year);
    }

    // Output the date in "Month DD, YYYY" format
    public String toLongFormat() {
        return String.format("%s %d, %d", MONTH_NAMES[month], day, year);
    }

    // Output the date in DDD YYYY format
    public String toDayOfYearFormat() {
        int dayOfYear = 0;
        for (int i = 1; i < month; i++) {
            dayOfYear += DAYS_IN_MONTH[i];
        }
        dayOfYear += day;
        return String.format("%03d %04d", dayOfYear, year);
    }

    // Override toString to provide a default output format
    @Override
    public String toString() {
        return toMMDDYYYY();
    }

    // Main method to test the class
    public static void main(String[] args) {
        // Test MM/DD/YYYY constructor
        Date date1 = new Date(6, 14, 1992);
        System.out.println("MM/DD/YYYY: " + date1.toMMDDYYYY());
        System.out.println("Long Format: " + date1.toLongFormat());
        System.out.println("Day of Year Format: " + date1.toDayOfYearFormat());

        // Test "MonthName DD, YYYY" constructor
        Date date2 = new Date("June", 14, 1992);
        System.out.println("MM/DD/YYYY: " + date2.toMMDDYYYY());
        System.out.println("Long Format: " + date2.toLongFormat());
        System.out.println("Day of Year Format: " + date2.toDayOfYearFormat());

        // Test DDD YYYY constructor
        Date date3 = new Date(166, 1992);
        System.out.println("MM/DD/YYYY: " + date3.toMMDDYYYY());
        System.out.println("Long Format: " + date3.toLongFormat());
        System.out.println("Day of Year Format: " + date3.toDayOfYearFormat());
    }
}
