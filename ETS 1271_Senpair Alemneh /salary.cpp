#include <iostream>
using namespace std;
int main(){

// declare and accept gross salary, over time hour, bonus rate, pension, tax, bonus, net income and employee name 

float gross_salary, over_time_hour, bonus_rate, pension, tax, bonus, net_income, income_salary;
 cout<<"please enter employee name: ";
 char employee_name [40];
 cin>> employee_name;
 cout<<"please enter employee's base salary in birr:"<<endl;
 cin>> gross_salary;
 cout<<"please enter employee's overtime hour in hour:"<<endl;
 cin>> over_time_hour;
 cout<<"please enter employee's bonus rate that is in the range of 0 and 1: "<<endl;
 cin>> bonus_rate;
  
// calculate bonus rate, income salary, pension, tax and net salary

  bonus = over_time_hour * bonus_rate;
  income_salary = bonus + gross_salary;
  pension = gross_salary * 0.05;
  tax = income_salary * 0.15;
  net_income = income_salary - ( tax+ pension);
  
//print the results 

  cout<<"employee name: "<<employee_name<<endl;
  cout<<"person's net income: "<<net_income<<" in birr"<<endl;
  cout<<"the person's gross salary: "<<gross_salary<<endl;
  cout<<"the person's bonus payment: "<< bonus<<endl;
  
  return 0;
   }
