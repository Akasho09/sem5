#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student {
private:
    std::string name;
    int rollNumber;

public:
    Student(std::string name, int rollNumber)
        : name(name), rollNumber(rollNumber) {}

    std::string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

class Course {
private:
    std::string courseName;
    int capacity;
    std::vector<Student> enrolledStudents;

public:
    Course(std::string courseName, int capacity)
        : courseName(courseName), capacity(capacity) {}

    std::string getCourseName() const {
        return courseName;
    }

    int getCapacity() const {
        return capacity;
    }

    bool addStudent(const Student& student) {
        if (enrolledStudents.size() < capacity) {
            enrolledStudents.push_back(student);
            std::cout << "Student " << student.getName() 
                      << " enrolled in " << courseName << " successfully!\n";
            return true;
        } else {
            std::cout << "Course " << courseName << " is full. Cannot enroll student.\n";
            return false;
        }
    }

    void displayEnrolledStudents() const {
        std::cout << "Enrolled students in " << courseName << ":\n";
        for (const auto& student : enrolledStudents) {
            std::cout << " - " << student.getName() 
                      << " (Roll No: " << student.getRollNumber() << ")\n";
        }
    }
};

int main() {
    // Creating Students
    cout <<endl;
    Student s1("Alice", 101);
    Student s2("Bob", 102);
    Student s3("Charlie", 103);

    // Creating Courses with capacity
    Course c1("Mathematics", 2);
    Course c2("Physics", 1);

    // Enrolling Students in Courses
    c1.addStudent(s1);
    c1.addStudent(s2);
    c1.addStudent(s3); // This should fail as the capacity is only 2

    c2.addStudent(s3);

    // Display enrolled students for each course
    c1.displayEnrolledStudents();
    c2.displayEnrolledStudents();

    return 0;
}
