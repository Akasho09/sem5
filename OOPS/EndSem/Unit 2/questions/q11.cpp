#include <iostream>
using namespace std;

class Set {
private:
    int *Elements;  // Pointer to dynamically allocated array of integers
    int size;       // Size of the set

public:
    // Constructor to create an empty set
    Set() {
        size = 0;
        Elements = new int[0];  // Allocate an empty array
    }

    // Destructor to free allocated memory
    ~Set() {
        delete[] Elements;
    }

    // Add an element to the set (overload the += operator)
    void operator+=(int element) {
        // Check if the element already exists in the set
        for (int i = 0; i < size; i++) {
            if (Elements[i] == element) {
                return;  // Element already exists, no need to add
            }
        }

        // Add the element to the set
        int *newElements = new int[size + 1];
        for (int i = 0; i < size; i++) {
            newElements[i] = Elements[i];
        }
        newElements[size] = element;

        delete[] Elements;
        Elements = newElements;
        size++;
    }

    // Remove an element from the set (overload the -= operator)
    void operator-=(int element) {
        // Check if the element exists in the set
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (Elements[i] == element) {
                index = i;
                break;
            }
        }

        if (index == -1) return;  // Element not found, do nothing

        // Remove the element from the set
        int *newElements = new int[size - 1];
        for (int i = 0, j = 0; i < size; i++) {
            if (i != index) {
                newElements[j++] = Elements[i];
            }
        }

        delete[] Elements;
        Elements = newElements;
        size--;
    }

    // Friend function to get the union of two sets (overload the + operator)
    friend Set operator+(const Set &s1, const Set &s2) {
        Set result;
        for (int i = 0; i < s1.size; i++) {
            result += s1.Elements[i];
        }
        for (int i = 0; i < s2.size; i++) {
            result += s2.Elements[i];
        }
        return result;
    }

    // Friend function to get the intersection of two sets (overload the * operator)
    friend Set operator*(const Set &s1, const Set &s2) {
        Set result;
        for (int i = 0; i < s1.size; i++) {
            for (int j = 0; j < s2.size; j++) {
                if (s1.Elements[i] == s2.Elements[j]) {
                    result += s1.Elements[i];
                    break;
                }
            }
        }
        return result;
    }

    // Function to print the contents of the set
    void print() const {
        cout << "{ ";
        for (int i = 0; i < size; i++) {
            cout << Elements[i];
            if (i < size - 1) cout << ", ";
        }
        cout << " }" << endl;
    }
};

// Main function to demonstrate the functionality
int main() {
    Set set1, set2;

    // Adding elements to Set 1
    set1 += 1;
    set1 += 2;
    set1 += 3;

    // Adding elements to Set 2
    set2 += 2;
    set2 += 3;
    set2 += 4;

    // Printing sets
    cout << "Set 1: ";
    set1.print();
    cout << "Set 2: ";
    set2.print();

    // Union of Set 1 and Set 2
    Set unionSet = set1 + set2;
    cout << "Union of Set 1 and Set 2: ";
    unionSet.print();

    // Intersection of Set 1 and Set 2
    Set intersectionSet = set1 * set2;
    cout << "Intersection of Set 1 and Set 2: ";
    intersectionSet.print();

    // Removing an element from Set 1
    set1 -= 2;
    cout << "Set 1 after removing 2: ";
    set1.print();

    return 0;
}
