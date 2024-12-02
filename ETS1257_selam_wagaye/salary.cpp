#include <iostream>
#include <string>

using namespace std;

    string Firstname,Lastname;
    double working_hours, bonus_rate, base_salary;

int main() {

    cout<<" Enter the first name of the person"<<endl;
    cin>>Firstname;
     cout<<" Enter the last name of the person"<<endl;
    cin>>Lastname;
     string Fullname = (Firstname +" "+ Lastname);

    cout << "Enter weekly working hours: "<<endl;
    cin >> working_hours;

    cout << "Enter bonus rate per hour: "<<endl;
    cin >> bonus_rate;

    cout << "Enter base salary in dollar: "<<endl;
    cin >> base_salary;

    double bonus_payment = bonus_rate * working_hours;
    double gross_salary = base_salary + bonus_payment;

    double pension = base_salary * 0.05;
    double tax = base_salary * 0.15;

    double net_salary = gross_salary - (pension + tax);

    cout <<"Dear "<< Fullname <<" your payment for this month is "<< endl;

    cout << "Bonus Payment: $ " << bonus_payment << endl;
    cout << "Gross Salary: $" << gross_salary << endl;
    cout << "Net Salary: $" << net_salary << endl;
    return 0;
}
