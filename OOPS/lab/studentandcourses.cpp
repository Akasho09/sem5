#include <iostream>
#include <vector>
#include <string>
using namespace std;

// CLASS STUDENT
class student
{
    int enrollid;

public:
    static int count;
    student() { count++; }
    student(int i, string s)
    {
        enrollid = i;
        count++;
    }
    void display()
    {
        cout << "student enroll id : " << enrollid << endl;
    }
    int getid()
    {
        return enrollid;
    }
    void setdata(int i)
    {
        this->enrollid = i;
    }


};


// COURSE CLASS
class course
{
    int capacity;
    int enrolled;
    vector<int> enrolledstudents;

public:
    course() {}
    course(int c, int e)
    {
        capacity = c;
        enrolled = e;
    }
    void addstudent(student s)
    {
        if (enrolled <= capacity)
        {
            enrolled++;
            enrolledstudents.push_back(s.getid());
            cout << "------Enrolled Student ------\n";
        }
        else
            cout << " -----FULL CAPACITY!." << " ONLY " << capacity << " STUDENTS CAN BE ADMITTED -----\n\n ";
    }
    void display()
    {
        cout <<"\n------------------COURSE AND ENROLLED STUDENTS ID's ------------------\n";
        cout << " Capacity :  " << capacity << endl
             << " Enrolled :  " << enrolled << endl;
             cout <<"ID's\n";
        for (int i = 0; i < enrolledstudents.size(); i++)
        {
            cout << enrolledstudents[i];
            if (i < enrolledstudents.size() - 1)
                cout << " , ";
        }
        cout << endl <<endl;
    }
   
   int deleteStudent(int id) {
        for (int i=0;i<enrolledstudents.size();i++) {
            if (enrolledstudents[i] == id) {
                cout << "--Deleting student with ID: " << id << " from the course.\n\n";
                enrolledstudents.erase(enrolledstudents.begin()+i);
                return 1;
            }
        }
        cout << "--Student with ID " << id << " not found in the course.\n\n";
        return 0;
    }
       
};

int student ::count = 0;

int main()
{
    // course c1(10,0);
    // course c2(15,5);
    // course c3(20,10);
    // student s1( 06 , "c1");
    // c1.addstudent();
    // c1.display();

    course MATHS(70, 0);
    course PHYSICS(50, 0);
    course CHEMISTRY(70, 0);

    int n;
    while (1)
    {
        cout << "Enter CHOICE \n";
        cout << " 1 TO ADD STUDENT TO MATHS COURSE \n 2 TO ADD STUDENT TO PHYSICS COURSE  \n 3 TO ADD STUDENT TO CHEMISTRY COURSE \n 4 TO PRINT MATH COURSE AND ITS ENROLLED STUDENTS \n "
              <<"5 TO PRINT PHYSICS COURSE AND ITS ENROLLED STUDENTS \n 6 TO PRINT CHEMISTRY COURSE AND ITS ENROLLED STUDENTS\n"
              << " 7 TO PRINT TOTAL NUMBER OF ENROLLED STUDENTS \n 8 TO DELETE STUDENT FROM A COURSE \n";
        cin >> n;
        switch (n)
        {
            // 1 to add student to MATHS
        case 1:
        {
            student s;
            int i;
            cout << " Enter student id : ";
            cin >> i;
            s.setdata(i);
            MATHS.addstudent(s);
            continue;
        }
        case 2:
        {
            student s;
            int i;
            cout << " Enter student id : ";
            cin >> i;
            s.setdata(i);
            PHYSICS.addstudent(s);
            continue;
        }
        case 3:
        {
            student s;
            int i;
            cout << " Enter student id ";
            cin >> i;
            s.setdata(i);
            CHEMISTRY.addstudent(s);
            continue;
        }
        case 4:
        {
            MATHS.display();
            continue;
        }
        case 5:
        {
            PHYSICS.display();
            continue;
        }
        case 6:
        {
            CHEMISTRY.display();
            continue;
        }
        case 7:
        {
            cout <<"TOTAL NUMBER OF STUDENTS ARE : " <<student::count <<endl <<endl;
            continue;
        }
        case 8:
        {
            int id;
            cout << "Enter id of student to erase\n";
            cin >>id;
            if (MATHS.deleteStudent(id)){}
            else if(PHYSICS.deleteStudent(id)){}
            else if(CHEMISTRY.deleteStudent(id)){}
            continue;
        }
        default:
            cout << "Exiting...\n";
            return 0;
        }
    }
}