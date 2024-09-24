#include <iostream>
using namespace std;

int main() {
    int choice;

    // Start a while loop that will continue running until the user chooses to exit
    while (true) {
        // Display a simple menu
        cout << "\nMenu:\n";
        cout << "1. Print Hello\n";
        cout << "2. Print Goodbye\n";
        cout << "3. Print Your Choice\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Switch based on user input
        switch (choice) {
            case 1:
                cout << "Hello\n";
                continue;
            case 2:
                cout << "Goodbye\n";

            case 3:
                cout << "You chose option " << choice << endl;

            case 4:
                cout << "Exiting...\n";
                return 0;  // Exiting the program

            default:
 cout << "Exiting...\n";
                return 0;  // Exiting the program       
    }

    return 0;
}
}

