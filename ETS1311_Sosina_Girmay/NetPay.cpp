#include <iostream>
#include <cmath>
using namespace std; 
int main(){
 
    double basic_sy, w_hr, ex_w_hr, bonus_rt, gr_sy, pension, tax, net_sy, bonus = 0;
    label1:
    cout<<"please enter your basic salary: ";
    cin>>basic_sy;
    cout<<"please enter your worked hour: ";
    cin>>w_hr;
    if(w_hr > 40){
        cout<<"please enter your bonus rate: ";
        cin>> bonus_rt;
        ex_w_hr = w_hr - 40;
        bonus = ex_w_hr * bonus_rt;
    }
    // check the validation of the inputs. 
    if(cin.fail()){
    	cout<<"\n Invalid input! please try again."<<endl;
    	cin.clear();
    	cin.ignore(1000,'\n');
    	goto label1;
	}
    pension = basic_sy *0.7; 
    gr_sy = basic_sy + bonus;
    if(gr_sy < 200) {
        tax = 0;
    } else if(gr_sy < 600){
        tax = gr_sy * 0.10;
    } else if(gr_sy < 1200){
        tax = gr_sy * 0.15;
    } else if(gr_sy < 2000){
        tax = gr_sy * 0.20;
    } else if(gr_sy < 3500){
        tax = gr_sy * 0.25;
    } else {
        tax = gr_sy * 0.30;
    }
    net_sy = gr_sy - pension - tax;
    cout<<"Your Net Pay is "<<net_sy;


    return 0;
}
