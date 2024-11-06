#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;
    static int dateCount;

    bool isValidDate(int d, int m, int y) {
        if (y < 0 || m < 1 || m > 12 || d < 1 || d > 31)
            return false;
        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
            return false;
        if (m == 2) {
            bool isLeap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
            if (d > 29 || (d == 29 && !isLeap))
                return false;
        }
        return true;
    }

public:
    // Default constructor
    Date() : day(0), month(0), year(0) {
        dateCount++;
    }

    // Parameterized constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {
        if (!isValidDate(d, m, y)) {
            day = month = year = 0;
            std::cout << "Invalid date provided, setting to default (0, 0, 0).\n";
        }
        dateCount++;
    }

    Date(Date &d){
    day=d.day;
    month=d.month;
    year=d.year;
    dateCount++;
    }

    // Destructor
    ~Date() {
        dateCount--;
    }

    // Static function to get the date count
    static int getDateCount() {
        return dateCount;
    }

    // Setters
    void setDay(int d) {
        if (isValidDate(d, month, year))
            day = d;
        else
            std::cout << "Invalid day provided.\n";
    }

    void setMonth(int m) {
        if (isValidDate(day, m, year))
            month = m;
        else
            std::cout << "Invalid month provided.\n";
    }

    void setYear(int y) {
        if (isValidDate(day, month, y))
            year = y;
        else
            std::cout << "Invalid year provided.\n";
    }

    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            std::cout << "Invalid date provided.\n";
        }
    }

    // Getters
    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    // Display date
    void display() const {
        std::cout << (day < 10 ? "0" : "") << day << "/"
                  << (month < 10 ? "0" : "") << month << "/"
                  << year << "\n";
    }

    // Operator overloads
    bool operator<(const Date& other) const {
        if (year != other.year)
            return year < other.year;
        if (month != other.month)
            return month < other.month;
        return day < other.day;
    }

    bool operator>(const Date& other) const {
        return other < *this;
    }

    bool operator==(const Date& other) const {
        return day == other.day && month == other.month && year == other.year;
    }

    bool operator!=(const Date& other) const {
        return !(*this == other);
    }

    // Pre-increment
    Date& operator++() {
        setDay(day + 1);
        if (!isValidDate(day, month, year)) {
            day = 1;
            ++month;
            if (month > 12) {
                month = 1;
                ++year;
            }
        }
        return *this;
    }

    // Post-increment
    Date operator++(int) {
        Date temp = *this;
        ++(*this);
        return temp;
    }

    // Pre-decrement
    Date& operator--() {
         this->day=this->day-1;
        if (!isValidDate(day, month, year)) {
            --month;
            if (month < 1) {
                month = 12;
                --year;
            }
            day = 31;
            while (!isValidDate(day, month, year)) {
                --day;
            }
        }
        return *this;
    }

    // Post-decrement
    Date operator--(int) {
        Date temp = *this;
        --(*this);
        return temp;
    }
};

// Initialize static member
int Date::dateCount = 0;

int main() {
    Date date1; // Default date
    Date date2(10, 12, 2024); // Specific date

    date1.display(); // Should show 00/00/0
    date2.display(); // Should show 10/12/2024

    date2.setDay(25);
    date2.setMonth(10);
    date2.setYear(2023);
    date2.display(); // Should show 25/10/2023

    std::cout << "Date count: " << Date::getDateCount() << "\n";

    Date date3(1, 1, 2024);
    std::cout << (date2 < date3 ? "date2 is earlier\n" : "date2 is not earlier\n");

    std::cout << "Date count: " << Date::getDateCount() << "\n";


   Date d4 = --date3;
    d4.display();
    
    --date3;
    date3.display();

    ++date3;
    date3.display();

     std::cout << "Date count: " << Date::getDateCount() << "\n";


    return 0;
}
