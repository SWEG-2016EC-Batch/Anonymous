#include <iostream>
using namespace std;

int main() {
    int i, j;
    int rows, cols;

    // Get user input for pattern dimensions
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Pattern 1: Square with numbers 1-" << cols << " in each row" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 2: Rectangle of alphabets A-" << char('A' + (rows * cols) - 1) << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << char('A' + (i * cols + j)) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 3: Half pyramid right of numbers" << endl;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 4: Half pyramid left of numbers" << endl;
    for (i = 1; i <= rows; i++) {
        for (j = 0; j < rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 5: Half pyramid right of alphabets" << endl;
    for (i = 1; i <= rows; i++) {
        for (j = 0; j < i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 6: Square of " << rows << "x" << cols << " with alphabets a-e in each row" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << char('a' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 7: Hollow full rectangle of stars" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i == 0  i == rows - 1  j == 0  j == cols - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 8: Inverted half pyramid of stars" << endl;
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 9: Hollow inverted half pyramid of stars" << endl;
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (i == rows  i == 1  j == 1  j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 10: Full pyramid of stars" << endl;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 11: Inverted full pyramid of stars" << endl;
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 12: Hollow full pyramid of stars" << endl;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1  j == (2 * i - 1)  i == rows) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
