#include<iostream>
#include<cmath> 
using namespace std;
int main() {
    double x;
    double y;
    cout << "Enter the base value x: ";
    cin >> x;
    cout << "Enter the value you want the base to be raised to as  y: ";
    cin >> y;
    double result = pow(x, y);
    cout << "The result of " << x << "^" << y << " is: " << result << endl;

    return 0;
}
