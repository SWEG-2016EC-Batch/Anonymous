#include <iostream>
using namespace std;
int main() {
    char employeeName[50];
    float workedHours,bonusRate,baseSalary,bonusPayment,tax,grossSalary, pension, taxrate,netSalary;
    
    cout << "Enter the employee name: ";
    cin.getline(employeeName, 50); 
    cout << "Enter the working time in hours: ";
    cin >> workedHours;
    if(workedHours>40){ cout<<"please enter over time bonus rate"<<endl;
    cin >> bonusRate;} else { cout<<"there is no bonus rate to calculate for you   "<<employeeName<<endl;bonusRate=0;}
    cout << "Enter the base salary: ";
    cin >> baseSalary;  
    bonusPayment = workedHours * bonusRate;
    grossSalary = baseSalary + bonusPayment;
   // Calculate the pension (7% of gross salary)
    pension = grossSalary * 0.07;
    // Calculate the tax of gross salary
   if (grossSalary>=3500){ taxrate=0.3;
   } else if(grossSalary>=2000){ taxrate=0.25;
   }else if(grossSalary>=1200){ taxrate=0.2;
   }else if(grossSalary>=600){ taxrate=0.15;
   }else if(grossSalary>=200){ taxrate=0.1;
   }else{ taxrate=0;}
   tax=( grossSalary* taxrate);
    // Calculate the net salary
    netSalary = grossSalary - (pension + tax);
    // Output results
    cout << "\n--- Salary Details for " << employeeName << " ---" << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "basic salary: $" << baseSalary << endl;
    cout << "worked hour: " << workedHours << "hrs"<<endl;
    cout << "Bonus rate: " << bonusRate<< endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout<<"tax: "<<tax;
    return 0;
}
