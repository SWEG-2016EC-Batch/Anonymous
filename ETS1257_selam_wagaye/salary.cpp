#include<iostream>
using namespace std;

int main() {
    string employeename;
    double weeklyhours, bonusrate, basesalary, bonuspayment,grosssalary, pension, tax, netsalary;      
    cout << "Enter the Employee Full Name: ";
    getline(cin, employeename);  
    cout << "Enter the weekly working hours: ";
    cin >> weeklyhours;
    cout << "Enter the bonus rate per hour: ";
    cin >> bonusrate;
    cout << "Enter the base salary in birr: ";
    cin >> basesalary;
    bonuspayment = weeklyhours * bonusrate;
    grosssalary = basesalary + bonuspayment;
    pension = grosssalary * 0.05;
    tax = grosssalary * 0.15;
    netsalary = grosssalary - (pension + tax);
    cout << "---- Salary Details for " << employeename << " with weekly working hour "<< weeklyhours<<", bounus rate per hour "<< bonusrate<<" and base salary in birr of "<<basesalary<< " is: ----" <<endl;
    cout << "Bonus Payment:" << bonuspayment <<"birr"<< endl;
    cout << "Gross Salary:" << grosssalary <<"birr" <<endl;
    cout << "Net Salary:" << netsalary <<"birr" <<endl;

    return 0;
}
