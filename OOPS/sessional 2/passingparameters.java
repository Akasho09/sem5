class LibraryItem {
    protected String title;
    protected int id;

    // Base class constructor
    public LibraryItem(String title, int id) {
        this.title = title;
        this.id = id;
        System.out.println("LibraryItem Constructor: " + title + " (ID: " + id + ")");
    }
}

// Derived class for Book
class Book extends LibraryItem {
    private String author;

    // Derived class constructor
    public Book(String title, int id, String author) {
        super(title, id); // Call base class constructor
        this.author = author;
        System.out.println("Book Constructor: " + title + " by " + author);
    }
}

// Derived class for Magazine
class Magazine extends LibraryItem {
    private int issue;

    // Derived class constructor
    public Magazine(String title, int id, int issue) {
        super(title, id); // Call base class constructor
        this.issue = issue;
        System.out.println("Magazine Constructor: " + title + " (Issue: " + issue + ")");
    }
}

// Derived class for Newspaper
class Newspaper extends LibraryItem {
    private String date;

    // Derived class constructor
    public Newspaper(String title, int id, String date) {
        super(title, id); // Call base class constructor
        this.date = date;
        System.out.println("Newspaper Constructor: " + title + " (Date: " + date + ")");
    }
}

public class passingparameters {
    public static void main(String[] args) {
        Book book = new Book("The Great Gatsby", 1, "F. Scott Fitzgerald");
        Magazine magazine = new Magazine("National Geographic", 2, 2023);
        Newspaper newspaper = new Newspaper("The New York Times", 3, "2024-10-17");
    }
}




// class base {

//     base() {
//         super (a,b);
//         this->c=c;
//     }
// }

