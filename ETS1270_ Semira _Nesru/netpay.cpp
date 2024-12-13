+ #include<iostream>
+ using namespace std;
+ int main(){
+ float basic_salary,gross_salary,net_pay,worked_hrs,bonus_rate,bonus,pension,tax,tax_rate,extra_worked_hrs,bonus_payment=0;
  
+ cout<<"enter basic_salary: "<<endl;
+ cin>>basic_salary;
+ cout<<"enter worked hours: "<<endl;
+ cin>>worked_hrs;
+ if(worked_hrs>40){
+ cout<<"enter over time bonus rate/hour"<<endl;
+ cin>>bonus_rate;
+ bonus=worked_hrs*bonus_rate; 
+ }
+ gross_salary=basic_salary+bonus;
+ pension=basic_salary*0.7;
+ tax=gross_salary*tax_rate;

+ if(gross_salary>=3500)
+ {
+ tax=gross_salary*0.3;
+ }
+ else if(gross_salary>=2000)
+ {
+  tax=gross_salary*0.25;
+ }
+ else if(gross_salary>=1200)
+ {
+ tax=gross_salary*0.2;
+ }
+ else if(gross_salary>=600)
+ {
+ tax=gross_salary*0.15;
+ }
+ else if(gross_salary>=200)
+ {
+ tax=gross_salary*0.1;
+ }
+ else{
+ tax=0;
+ }
+ net_pay=(gross_salary-pension-tax);
+ cout<<"net pay = "<<net_pay<<endl;

+ return 0;
+ }
