#include <iostream>
using namespace std;

int main() {
// declare the inputs (tank capacity, miles traveled per gallon, total miles)
double  tank_capacity, miles_traveled_per_gallon, total_miles;

// accept the inputs (tank capacity, miles traveled per gallon, total miles) from the user

cout << "Enter the capacity of the fuel tank in gallons: ";
cin >> tank_capacity;
cout << "Enter the miles to be driven: ";
cin >> miles_traveled_per_gallon;

//calculate the total miles
total_miles = tank_capacity * miles_traveled_per_gallon;

// print the total miles that can be drivrn without refuling 
cout << "The automobile can be driven for " << total_miles << " miles without refueling." << endl;

    return 0;
}
