/*
 Write a program that generate each of the following patterns. 
  1 - square of 5x5 with number from 1-5 in each row
  2 - rectangle of 4x6 alphabet from A-X
  3 - half right 5x5 pyramid of numbers 
  4 - half left 5x5 pyramid left of numbers 
  5 - half right 5x5 pyramid of alphabets 
  6 - square of 5x5 with alphabet from a-e in each row
  7 - hollow full rectangle of stars
  8 - inverted half pyramid of stars
  9 - hollow inverted half pyramid of stars
  10- full pyramid of stars
  11 - inverted full pyramid of stars
  12- hollow full pyramids of stars
 */
#include <iostream>
using namespace std;

int main() {
    int i, j;

    cout << "Pattern 1: Square of 5x5 with numbers 1-5 in each row" << endl;
    for (i = 0; i < 5; i++) {
        for (j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 2: Rectangle of alphabets A-X" << endl;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            cout << char('A' + (i * 6 + j)) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 3: Half 5x5 Pyramid right of numbers" << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 4: Half 5x5 Pyramid left of numbers" << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 5: Half 5x5 Pyramid right of alphabets" << endl;
    for (i = 1; i <= 5; i++) {
        for (j = 0; j < i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 6: Square of 5x5 with alphabets a-e in each row" << endl;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cout << char('a' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 7: Hollow full 7x8 rectangle of stars" << endl;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 8; j++) {
            if (i == 0  i == 6  j == 0  j == 7) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 8: Inverted half 6 row pyramid of stars" << endl;
    for (i = 6; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 9: Hollow inverted 6 row half pyramid of stars" << endl;
    for (i = 6; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (i == 6  i == 1  j == 1  j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 10: Full 6 row pyramid of stars" << endl;
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 6 - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 11: Inverted full 6 row pyramid of stars" << endl;
    for (i = 6; i >= 1; i--) {
        for (j = 1; j <= 6 - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pattern 12: Hollow full 6 row pyramids of stars" << endl;
    for (i = 1; i <= 6; i++) {
        for (j = 1; j <= 6 - i; j++) {
            cout << "  ";
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1  j == (2 * i - 1)  i == 6) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
