#include <iostream>
using namespace std;

// Function declarations
void reverse();
void counting();
void products();
void sum();
void swap();
void palindrom();
void frequency();
void strong();
void perfect();

int main() {
    // Menu display
    cout << "** MENU *****" << endl;
    cout << endl;
    cout << "What would you like to perform? " << endl;
    cout << endl;
    cout << "Enter 1 to reverse the number." << endl;
    cout << "Enter 2 to count the digits." << endl;
    cout << "Enter 3 to find the product of the even digits in the number." << endl;
    cout << "Enter 4 to print the first and last digit and add them." << endl;
    cout << "Enter 5 to swap the first and last digit of the number." << endl;
    cout << "Enter 6 to check whether the number is palindrome or not." << endl;
    cout << "Enter 7 to check the frequency of each digit in a given integer." << endl;
    cout << "Enter 8 to check whether the number is strong or not." << endl;
    cout << "Enter 9 to check whether the number is perfect or not." << endl;
    cout << endl;

    int choice = 1; // Initialize choice to enter the loop
    do {
        int num;
        cout << "Please choose from 1 to 9: ";
        cin >> num;
        cout << endl;

        // Input validation
        if (cin.fail() || num < 1 || num > 9) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "Please enter a valid number from the menu." << endl;
            continue; // Skip the rest of the loop and prompt again
        }

        // Switch case for menu options
        switch(num) {
            case 1: reverse(); break;
            case 2: counting(); break;
            case 3: products(); break;
            case 4: sum(); break;
            case 5: swap(); break;
            case 6: palindrom(); break;
            case 7: frequency(); break;
            case 8: strong(); break;
            case 9: perfect(); break;
        }

        cout << "Would you like to play with numbers more? (0/1): ";
        cin >> choice;

    } while(choice == 1);
    
    cout << "Goodbye :(" << endl;

    return 0;
}

void reverse() {
    cout << endl;
    cout << "Reversing the number" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int digit, reversed_num = 0;
    while(num1 > 0) {
        digit = num1 % 10;
        num1 /= 10;
        reversed_num = reversed_num * 10 + digit;
    }
    cout << "The reversed number is: " << reversed_num << endl;
}

void counting() {
    cout << endl;
    cout << "Counting the digits of the number" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int count = 0;
    while (num1 > 0) {
        num1 /= 10;
        count++;
    }
    cout << "The number of digits is: " << count << endl;
}

void products() {
    cout << endl;
    cout << "Finding the even digits of the number and multiplying" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int digit, product = 1;
    bool has_even = false; // To check if there are any even digits
    while (num1 > 0) {
        digit = num1 % 10;
        if(digit % 2 == 0) {
            product *= digit;
            has_even = true; // Found at least one even digit
        }
        num1 /= 10;
    }
    
    if (has_even) {
        cout << "The product of the even digits is: " << product << endl;
    } else {
        cout << "There are no even digits in the number." << endl;
    }
}

void sum() {
    cout << endl;
    cout << "Finding the last and first digits of the number and adding them" << endl;
    unsigned long long int num1;
    cout << "Please enter a number: ";
    cin >> num1;

    int last_digit = num1 % 10; // Last digit
    int first_digit;

    // Find first digit
    while (num1 >= 10) {
        num1 /= 10;
    }
    
    first_digit = num1; // Now num1 is the first digit

    cout << "The last digit is: " << last_digit << endl;
    cout << "The first digit is: " << first_digit << endl;

    int sum = last_digit + first_digit;
    cout << "The sum is: " << sum << endl;
}
void swap()
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
void frequency()
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


