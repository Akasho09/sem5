#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Forward declaration of class Course to use it in the Student class
class Course;

class Student {
    string name;
    int id;
public:
    Student(string name, int id) : name(name), id(id) {}

    // Getters
    string getName() { return name; }
    int getId() { return id; }

    // Methods to enroll in and withdraw from courses
    void enrollInCourse(Course &course);
    void withdrawFromCourse(Course &course);
};

class Course {
    string courseName;
    int maxCapacity;
    vector<Student*> enrolledStudents;
public:
    Course(string courseName, int maxCapacity) : courseName(courseName), maxCapacity(maxCapacity) {}

    // Method to enroll a student in the course
    bool enroll(Student *student) {
        if (enrolledStudents.size() < maxCapacity) {
            enrolledStudents.push_back(student);
            cout << student->getName() << " successfully enrolled in " << courseName << endl;
            return true;
        } else {
            cout << courseName << " is at full capacity, cannot enroll " << student->getName() << endl;
            return false;
        }
    }

    // Method to withdraw a student from the course
    bool withdraw(Student *student) {
        for (int i = 0; i < enrolledStudents.size(); ++i) {
            if (enrolledStudents[i]->getId() == student->getId()) {
                enrolledStudents.erase(enrolledStudents.begin() + i);
                cout << student->getName() << " has successfully withdrawn from " << courseName << endl;
                return true;
            }
        }
        cout << student->getName() << " is not enrolled in " << courseName << endl;
        return false;
    }

    // Display enrolled students in the course
    void displayEnrolledStudents() {
        if (enrolledStudents.empty()) {
            cout << "No students are enrolled in " << courseName << endl;
        } else {
            cout << "Students enrolled in " << courseName << ":" << endl;
            for (int i = 0; i < enrolledStudents.size(); ++i) {
                cout << enrolledStudents[i]->getName() << " (" << enrolledStudents[i]->getId() << ")" << endl;
            }
        }
    }

    // Getter to get the course name
    string getCourseName() { return courseName; }
};

void Student::enrollInCourse(Course &course) {
    course.enroll(this);
}

void Student::withdrawFromCourse(Course &course) {
    course.withdraw(this);
}

int main() {
    // Creating some students
    Student s1("John Doe", 1);
    Student s2("Alice Smith", 2);
    Student s3("Bob Johnson", 3);

    // Creating a course with a maximum capacity of 2 students
    Course course1("Data Structures", 2);

    // Enrolling students
    s1.enrollInCourse(course1);
    s2.enrollInCourse(course1);
    s3.enrollInCourse(course1); // This should show a message that the course is at full capacity

    // Displaying the enrolled students
    course1.displayEnrolledStudents();

    // Withdrawal operation
    s2.withdrawFromCourse(course1);
    course1.displayEnrolledStudents(); // After withdrawal, only s1 should be left

    // Enrolling again after withdrawal
    s3.enrollInCourse(course1); // Now Bob should be able to enroll in the course
    course1.displayEnrolledStudents(); // Display after new enrollment

    return 0;
}
