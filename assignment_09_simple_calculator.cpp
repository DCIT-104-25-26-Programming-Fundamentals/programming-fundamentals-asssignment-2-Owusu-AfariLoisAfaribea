// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// -----------------------------------------------------------------------------
// OPERATIONS YOUR CALCULATOR MUST SUPPORT
// -----------------------------------------------------------------------------
//
//   1. Addition          ( + )    e.g.  10 + 3  =  13
//   2. Subtraction       ( - )    e.g.  10 - 3  =  7
//   3. Multiplication    ( * )    e.g.  10 * 3  =  30
//   4. Division          ( / )    e.g.  10 / 3  =  3.33
//   5. Modulus           ( % )    e.g.  10 % 3  =  1  (remainder)
//   6. Exponentiation    ( ^ )    e.g.  2 ^ 8   =  256
//   7. Quit
//
// -----------------------------------------------------------------------------
// HOW THE MENU SHOULD LOOK
// -----------------------------------------------------------------------------
//
//   ============================
//        SIMPLE CALCULATOR
//   ============================
//   1. Addition
//   2. Subtraction
//   3. Multiplication
//   4. Division
//   5. Modulus
//   6. Exponentiation
//   7. Quit
//   Select an operation (1-7):
//
// -----------------------------------------------------------------------------
// EXPECTED INTERACTION EXAMPLE
// -----------------------------------------------------------------------------
//
//   Select an operation (1-7): 4
//   Enter first number : 10
//   Enter second number: 3
//   Result: 10 / 3 = 3.33
//
//   Select an operation (1-7): 4
//   Enter first number : 5
//   Enter second number: 0
//   Error: Cannot divide by zero.
//
//   Select an operation (1-7): 7
//   Goodbye!
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Each arithmetic operation MUST be written as its own function.
// - Use a loop so the calculator keeps running until the user selects Quit.
// - Division by zero must be caught and handled with a clear error message
//   (do NOT let the program crash).
// - Use fixed and setprecision(2) to display results to 2 decimal places.
// - Handle invalid menu choices gracefully.
// - For exponentiation use a loop or the pow() function from <cmath>.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}
int mod(int a, int b) {
    return a % b;
}
double power(double a, double b) {
    return pow(a, b);
}
int main(){
    int choice;
    double a, b;
    do {
        cout << "\n1. Addition" << endl;
        cout << "\n2. Subtraction" << endl;
        cout << "\n3. Multiplication" << endl;
        cout << "\n4. Division" << endl;
        cout << "\n5. Modulus" << endl;
        cout << "\n6. Exponentiation" << endl;
        cout << "\n7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        if (choice == 7) {
    cout << "Goodbye!" << endl;
    break;
}
    if(choice < 1 || choice > 7) {
        cout << "Invalid choice. Please select a number between 1 and 7." << endl;
        continue;
    }
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << fixed << setprecision(2);

    if (choice == 1) {
        cout << "Result: " << a << " + " << b << " = " << add(a, b) << endl;
    } else if (choice == 2) {
        cout << "Result: " << a << " - " << b << " = " << subtract(a, b) << endl;
    } else if (choice == 3) {
        cout << "Result: " << a << " * " << b << " = " << multiply(a, b) << endl;
    } else if (choice == 4) {
        if (b == 0) {
            cout << "Error: Cannot divide by zero." << endl;
        } else {
            cout << "Result: " << a << " / " << b << " = " << divide(a, b) << endl;
        }
    } else if (choice == 5) {
        if (static_cast<int>(b) == 0) {
            cout << "Error: Cannot perform modulus by zero." << endl;
        } else {
            cout << "Result: " << static_cast<int>(a) << " % " << static_cast<int>(b) 
                 << " = " << mod(static_cast<int>(a), static_cast<int>(b)) << endl;
        }
    } else if (choice == 6) {
        cout << "Result: " << a << "^" << b << " = " << power(a, b) << endl;
    }while (true);
    if (choice == 7) {
        cout << "Goodbye!" << endl;
        break;
    }
    } while (true);
    return 0;
} 
