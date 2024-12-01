#include <iostream>
using namespace std;
int main(){
    string name;
    float weekly_working, bonus_rate, base_salary, bonus = 1, tax = 1, pension = 1, net_salary = 0, gross_salary = 0;
//ask the user to provide all the neccessary inputs.
 label1: 
        cout<<"please enter your name: ";
        cin>>name;
        cout<<"enter your base salary: ";
        cin>>base_salary;
        cout<<"enter your weekly working hour: ";
        cin>>weekly_working;
        cout<<"enter your bonus rate: ";
        cin>>bonus_rate;
    if(cin.fail()){
        cout<<"Invalid input! Please try again."<<endl;
        cin.clear();
        cin.ignore(1000,'\n');
        goto label1; 
    }
 // now calculate the bonus, gross salary, pension, tax and net salary. 
 // since we need monthly working hour but we have weekly working hour, we need to multiply the weekly working hour by 4.
// tax rate = 0.15 from the base salary. and pension rate = 0.05 from gross balary. 
        weekly_working *= 4;
            bonus = weekly_working * bonus_rate;
        gross_salary = base_salary + bonus;
            pension = base_salary * 0.05;
            tax = gross_salary * 0.15;
        net_salary = gross_salary + bonus - tax - pension;
// now print all the outputs to the user. 
    cout<<"Dear "<<name<<","<<endl;
    cout<<"Your gross salary is "<<gross_salary<<" and \n Your net salary is "<<net_salary<<endl;

    return 0;
}