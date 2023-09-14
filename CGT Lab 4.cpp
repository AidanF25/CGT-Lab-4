#include <iostream>
using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}

void factorial() {
    int n, result = 1; // Initialize result to 1
    do {
        cout << "Enter a number: " << endl;
        cin >> n;
        if (n <= 0) {
            cout << "Please enter a positive number. ";
        }
    } while (n <= 0);
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    cout << "Factorial of " << n << " is " << result << endl;
}

void arithmetic() {
    int start;
    int difference;
    int elements;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the common difference: ";
    cin >> difference;

    cout << "Enter the number of elements in the sequence: ";
    do {
        cin >> elements;
        if (elements <= 0) {
            cout << "Please enter a positive number. " << endl;
        }
    } while (elements <= 0);


    cout << "Arithmetic Sequence:" << endl;

    for (int i = 0; i < elements; ++i) {
        cout << start + i * difference;
        if (i < elements - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

void geometric() {
    int start2;
    int multiply;
    int elements2;
    cout << "Enter the starting number: ";
    cin >> start2;

    cout << "Enter the number to multiply each time: ";
    cin >> multiply;


        cout << "Enter the number of elements in the sequence: ";
        do {
        cin >> elements2;
        if (elements2 <= 0) {
            cout << "please enter a positive number. " << endl;
        }
    } while (elements2 <= 0);

    cout << "Geometric Sequence:" << endl;

    int currentValue = start2;
    for (int i = 0; i < elements2; ++i) {
        cout << currentValue;
        if (i < elements2 - 1) {
            cout << ", ";
        }
        currentValue *= multiply;
    }

    cout << endl;
}

int main() {
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;
        // Quit if the user chooses to exit (or any invalid choice)
        if (choice > 3 || choice < 1) {
            return 0;
        }
        else if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }
        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}
