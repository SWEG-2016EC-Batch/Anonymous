#include <iostream>
using namespace std;

void reverseing();
void counting_digits();
void even_products();
void first_last_number_sum();
void swap_first_last_digit();
void palindrom();
void frequency_of_digit();
void strong();
void perfect();

int main()
{
	//the menu display. 
	cout<<"********** MENU *********"<<endl;
	cout<<endl;	
	cout<<"What would you like to perform? "<<endl;
	cout<<endl;	
	cout<<"Enter 1 to reverse the number."<<endl;
	cout<<"Enter 2 to count the digits."<<endl;
	cout<<"Enter 3 to find the product of the even digits in the number. "<<endl;
	cout<<"Enter 4 to print the first and the last digit the adds them."<<endl;
	cout<<endl;	
	cout<<"Enter 5 to swap the first and the last digit of the number."<<endl;
	cout<<"Enter 6 to check wheather the number is palindrome or not."<<endl;
	cout<<"Enter 7 to check the frequency of each digit in a given integer"<<endl;
	cout<<"Enter 8 to check wheather the number is strong or not."<<endl;
	cout<<"Enter 9 to check wheather the number is perfect or not."<<endl;
	cout<<endl;
	
	int choice;
do{
	cout<<"Please choose from 1 to 9: ";
	int num;
	cin>>num;
	cout<<endl;
	if (cin.fail() || num ==0 || num>9)
		{
			cout<<"Please enter the correct number from the menu."<<endl;
			cin.ignore();
			cin.clear();
			cin>>num;	
		}
		switch(num)
		{
			case 1:
				reverseing();
				break;
			case 2:
				counting_digits();
				break;
			case 3:
				even_products();
				break;
			case 4:
				first_last_number_sum();
				break;
			case 5:
				swap_first_last_digit();
				break;
			case 6:
				palindrom();
				break;
			case 7:
				frequency_of_digit();
				break;
			case 8:
				strong();
				break;
			case 9:
				perfect();
				break;
		}
cout<<"would you like to play with numbers more? (0/1)"<<endl;
cin>>choice;
}while(choice==1);
cout<<"good bye :("<<endl;

return 0;
}

void reverseing()
{
	cout<<endl;
	cout<<"reversing the number"<<endl;
	// acceptin the number to perform the required.
	unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	int digit;
	int reversed_num=0;
	// reversing 
	while(num1>0)
	{
	digit = num1 % 10;
	num1 /= 10;
	reversed_num = reversed_num *10 + digit;
	}
	//display the result 
	cout<<"the revesed number is: "<<reversed_num<<endl;
}
void counting_digits()
{
	cout<<endl;
	cout<<"counting the digit of the number"<<endl;
	// acceptin the number to perform the required.
	unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	int digit;
	int count = 0;
	// counting 
	while (num1>0)
	{
	digit = num1 % 10;
	num1 /= 10;
	count++;
	}
	//display the result 
	cout<<"the number of digits are: "<<count<<endl;
}
void even_products()
{
	cout<<endl;
	cout<<"finds the even digits of the number and multiplies"<<endl;
	// acceptin the number to perform the required.
	unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	int digit;
	int product= 1;
	// finds the even numbers and multiplies
	while (num1>0)
	{
	digit = num1 % 10;
		if(digit%2 == 0)
		{
			product *= digit;
		}
	num1 /= 10;
	}
	//display the result 
	cout<<"the procuct of the even digits is: "<<product<<endl;
}
void first_last_number_sum()
{
	cout<<endl;
	cout<<"finds the last and first digits of the number and adds them"<<endl;
	// acceptin the number to perform the required.
	unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	int digit,sum, num1_first, num1_last;
	// finds the last digit 
	num1_last = num1 % 10;
	cout<<"The last digit is: "<<num1_last<<endl;
	//finds the first digit
	while (num1>0)
	{
		digit = num1 % 10;
		num1 /= 10;
	}
	//display the result 
	num1_first = digit;
	cout<<"The first digit is: "<<num1_first<<endl;
	sum= num1_last + num1_first;
	cout<<"The sum is: "<<sum;
}
void swap_first_last_digit()
{
	cout<<endl;
	cout<<"swaps the first and the last digits of the number"<<endl;
	// acceptin the number to perform the required.
    unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	int digit, num1_first, num1_last, a;
	
	// finding the last and the first digits
	num1_last = num1 % 10;
	while (num1>0)
	{
		digit = num1 % 10;
		num1 /= 10;
	}
	num1_first = digit;
	cout<<"The first digit is: "<<num1_first<<endl;
	cout<<"The last digit is: "<<num1_last<<endl;
	cout<<endl;
	
	//swapping 
	cout<<"after the swap: "<<endl;
	a = num1_first;
	num1_first = num1_last;
	num1_last = a;
  //display the result
	cout<<"The first digit is: "<<num1_first<<endl;
	cout<<"The last digit is: "<<num1_last<<endl;
}
void palindrom()
{
	cout<<endl;
	cout<<"checking for palindrom"<<endl;
	// acceptin the number to perform the required.
	unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	int digit;
	int reversed_num = 0;
	int original_num = num1;
	cout<<"The original number is: "<<original_num<<endl;
	
	// find the revesed number 
	while(num1>0)
	{
		digit = num1 % 10;
		num1 /= 10;
		reversed_num = reversed_num * 10 + digit;
	}

	cout<<"The reversed number is: "<<reversed_num<<endl;
	
	//check if the number are palindrom or not 
	if(reversed_num == num1)
	{
		cout<<"The number is palindrom"<<endl;
	}
	else
	{
		cout<<"The number is not palindrom"<<endl;	
	}
}
void frequency_of_digit()
{
cout<<endl;
cout<<"check the frequency of digits"<<endl;
// acceptin the number to perform the required.
unsigned long long int num1;
cout<<"please enter a number: ";
cin>>num1;
cout<<endl;

int num_copy, count, digit;
// finding the frequency
for(int i=0; i<=9; i++)
{
	count=0;
	num_copy=num1;
	
	while(num_copy>0){
		digit= num_copy % 10;
		if (digit==i)
		{
			count++;
		}
	num_copy /= 10;
	}
	if (count>0)
	{
	cout<<"The frequency of "<<digit<<" is: "<<count<<endl;
	}
}	
}
void strong()
{
	cout<<endl;
	cout<<"checking for strong number"<<endl;
	// acceptin the number to perform the required.
	 unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	unsigned long long int number_copy = num1;
	
int digit; 
unsigned long long int fact=1, sum=0;
// finding the sum of factorial.
	while( num1 > 0 )
	{
		digit = num1 % 10;
		num1 /= 10;
		
		for(int i=1; i <= digit; i++)
		{
			fact *= i;
		}
		if(digit==1 || digit==0)
			{
				fact=0;
			}
		sum += fact;
		fact=1;
	}
	cout<<"the sum of the factorial is: "<<sum<<endl;
	// checking if the number is strong or not  
	if( sum == number_copy)
	{
		cout<<"the number is strong number. "<<endl;
	}
	else
	{
		cout<<"the number is not a strong number "<<endl;
	}
}
void perfect()
{
	// acceptin the number to perform the required.
  cout<<endl;
	cout<<"checking for perfect number"<<endl;
	unsigned long long int num1;
	cout<<"please enter a number: ";
	cin>>num1;
	
	unsigned long long int number_copy=num1;
	int divisor=0, sum = 0 ;
// sum of the divisors 
	for(int i=1; i<num1; i++)
	{
		if (num1 % i == 0)
		{
		divisor = i;	
		}	
	sum+=divisor;
	divisor=0;
	}
	cout<<"the sum of the divisors: "<<sum<<endl;
// wheather the number is perfect number or not 
	if(sum-number_copy == number_copy)
	{
		cout<<"the number is a perfect number."<<endl;
	}
	else
	{
		cout<<"the number is not a perfect number."<<endl;
	}
}
