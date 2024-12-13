#include <iostream>
using namespace std;

// Function declarations
void reverseing();
void counting_digits();
void even_products();
void first_last_number_sum();
void swap_first_last_digit();
void palindrom();
void frequency_of_digit();
void strong();
void perfect();

int main() {
    // Menu display
    cout << "** MENU *****" << endl;
    cout << endl;
    cout << "What would you like to perform? " << endl;
    cout << endl;
    cout << "Enter 1 to reverse the number." << endl;
    cout << "Enter 2 to count the digits." << endl;
    cout << "Enter 3 to find the product of the even digits in the number." << endl;
    cout << "Enter 4 to print the first and last digit and add them." << endl;
    cout << "Enter 5 to swap the first and last digit of the number." << endl;
    cout << "Enter 6 to check whether the number is palindrome or not." << endl;
    cout << "Enter 7 to check the frequency of each digit in a given integer." << endl;
    cout << "Enter 8 to check whether the number is strong or not." << endl;
    cout << "Enter 9 to check whether the number is perfect or not." << endl;
    cout << endl;

    int choice = 1; // Initialize choice to enter the loop
    do {
        int num;
        cout << "Please choose from 1 to 9: ";
        cin >> num;
        cout << endl;

        // Input validation
        if (cin.fail() || num < 1 || num > 9) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Please enter a valid number from the menu." << endl;
            continue; // Skip the rest of the loop and prompt again
        }

        // Switch case for menu options
        switch(num) {
            case 1: reverseing(); break;
            case 2: counting_digits(); break;
            case 3: even_products(); break;
            case 4: first_last_number_sum(); break;
            case 5: swap_first_last_digit(); break;
            case 6: palindrom(); break;
            case 7: frequency_of_digit(); break;
            case 8: strong(); break;
            case 9: perfect(); break;
        }

        cout << "Would you like to play with numbers more? (0/1): ";
        cin >> choice;

    } while(choice == 1);
    
    cout << "Goodbye :(" << endl;

    return 0;
}

void reverseing() {
    cout << endl;
    cout << "Reversing the number" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int digit, reversed_num = 0;
    while(num1 > 0) {
        digit = num1 % 10;
        num1 /= 10;
        reversed_num = reversed_num * 10 + digit;
    }
    cout << "The reversed number is: " << reversed_num << endl;
}

void counting_digits() {
    cout << endl;
    cout << "Counting the digits of the number" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int count = 0;
    while (num1 > 0) {
        num1 /= 10;
        count++;
    }
    cout << "The number of digits is: " << count << endl;
}

void even_products() {
    cout << endl;
    cout << "Finding the even digits of the number and multiplying" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int digit, product = 1;
    bool has_even = false; // To check if there are any even digits
    while (num1 > 0) {
        digit = num1 % 10;
        if(digit % 2 == 0) {
            product *= digit;
            has_even = true; // Found at least one even digit
        }
        num1 /= 10;
    }
    
    if (has_even) {
        cout << "The product of the even digits is: " << product << endl;
    } else {
        cout << "There are no even digits in the number." << endl;
    }
}

void first_last_number_sum() {
    cout << endl;
    cout << "Finding the last and first digits of the number and adding them" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int last_digit = num1 % 10; // Last digit
    int first_digit;

    // Find first digit
    while (num1 >= 10) {
        num1 /= 10;
    }
    
    first_digit = num1; // Now num1 is the first digit

    cout << "The last digit is: " << last_digit << endl;
    cout << "The first digit is: " << first_digit << endl;

    int sum = last_digit + first_digit;
    cout << "The sum is: " << sum << endl;
}

void swap_first_last_digit() {
    // Implementation for swapping first and last digits will go here
}

void palindrom() {
    // Implementation for checking palindrome will go here
}

void frequency_of_digit() {
    // Implementation for checking frequency of each digit will go here
}

void strong() {
    // Implementation for checking if a number is strong will go here
}

void perfect() {
    // Implementation for checking if a number is perfect will go here
}