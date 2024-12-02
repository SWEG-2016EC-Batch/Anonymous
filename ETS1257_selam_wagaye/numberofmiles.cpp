#include<iostream>
using namespace std;
int main() {
    float fuel_tank_capacity;
    float miles_per_gallon;
    cout << "Enter the fuel tank capacity of the automobile in gallons: "<<endl;
    cin >> fuel_tank_capacity;
    cout << "Enter the miles per gallon the automobile can drive: "<<endl;
    cin >> miles_per_gallon;
    float number_of_miles = fuel_tank_capacity * miles_per_gallon;
    cout << "The automobile can be driven " << number_of_miles << " miles without refueling." << endl;

    return 0;
}
