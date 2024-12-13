#include <iostream>
using namespace std;

int main(){


double gross_salary, over_time_hour, tax_rate, bonus_rate, pension, tax, bonus, over_time_bonus_rate, net_income, base_salary;
double std_work_hrs_permonth= 176; 
double hourly_rate; 

cout<<"please enter employee name: ";
char employee_name [40];
cin.getline(employee_name,40);
cout<<"please enter employee's base salary in birr: ";
cin>> base_salary;
cout<<"please enter employee's bonus rate that is in the range of 0 and 1: ";
cin>> bonus_rate;
cout<<"please enter employee's overtime hour in hour: ";
cin>> over_time_hour;


if(over_time_hour > 40)
{
	cout<<"please enter over time bonus rate: ";
	cin>>over_time_bonus_rate;
} 

 if(gross_salary <= 200)
 {
	tax_rate= 0;
 }
 else if(gross_salary >= 200 && gross_salary <= 600)
 {
	tax_rate= 0.1;
 }
 else if(gross_salary >= 600 && gross_salary <= 1200)
 {
	tax_rate= 0.15;
 }
else if(gross_salary >= 1200 && gross_salary <= 2000)
 {
	tax_rate= 0.2;
 }
 else if(gross_salary >= 2000 && gross_salary <= 3500)
 {
	tax_rate= 0.25;
 }
 else 
 {
	tax_rate= 0.3;
 }
 
if (over_time_hour > 40)
{
	bonus_rate = over_time_bonus_rate;
}

hourly_rate= base_salary / std_work_hrs_permonth;
bonus = over_time_hour* hourly_rate * bonus_rate;
gross_salary = bonus + base_salary;
pension = gross_salary * 0.07;
tax = gross_salary * tax_rate;
net_income = gross_salary - ( tax+ pension);


cout<<endl;
cout<<"employee name: "<<employee_name<<endl;
cout<<employee_name<<"'s basic salary: "<<base_salary<<"in birr"<<endl;
cout<<employee_name<<"'s net income: "<<net_income<<" in birr"<<endl;
cout<<employee_name<<"'s bonus payment: "<< bonus<<"in birr"<<endl;
  
return 0;
}
