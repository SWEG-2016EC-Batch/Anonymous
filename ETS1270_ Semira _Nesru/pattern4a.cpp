include <iostream>
using namespace std;
//declaring functions 
void five_num_five_times();
void alphabets_upto_x();
void num_half_pyramid_left();
void num_half_pyramid_right();
void aphabets_half_pyramid();
void five_aphabets_five_times();
void hollow_rectangle();
void inverted_half_pyramid();
void hollow_inverted_half_pyramid();
void full_pyramid();
void inverted_full_pyramid();
void hollow_pyramid();
int main(){
	
	// menu display
	cout<<"******* MENU *******"<<endl;
	cout<<endl;
	cout<<"Enter 1 to print natural numbers upto 5, 5 times."<<endl;
	cout<<"Enter 2 to print alphabets upto x, in 4 rows."<<endl;
	cout<<"Enter 3 to print natural numbers upto 5, 5 times in half pyramid to the left."<<endl;
	cout<<"Enter 4 to print natural numbers upto 5, 5 times in half pyramid to the right."<<endl;
	cout<<endl;
	cout<<"Enter 5 to print alphabets upto e, 5 times in half pyramid."<<endl;
	cout<<"Enter 6 to print alphabets upto e, 5 times."<<endl;
	cout<<"Enter 7 to print hollow rectangle."<<endl;
	cout<<"Enter 8 to print inverted half pyramid."<<endl;
	cout<<endl;
	cout<<"Enter 9 to print hollow inverted half pyramid."<<endl;
	cout<<"Enter 10 to print full pyramid."<<endl;
	cout<<"Enter 11 to print inverted full pyramid."<<endl;
	cout<<"Enter 12 to print hollow pyramid."<<endl;
	cout<<endl;
	
	int choice;
	
	do{
	cout<<"please enter number to choose the patterns: ";
	int number;
	cin>>number;
	cout<<endl;
	
		if(cin.fail()  number == 0  number > 12)
		{
		cout<<" Please enter the correct number from the menu. "<<endl;
		cin.ignore();
		cin.clear();
		cin>>number;
	    }
		switch(number)
		{
		case 1:
			five_num_five_times();
			break;
		case 2:
			alphabets_upto_x();
			break;
		case 3:
			num_half_pyramid_left();
			break;
		case 4:
			num_half_pyramid_right();
			break;
		case 5:
			aphabets_half_pyramid();
			break;
		case 6:
			five_aphabets_five_times();
			break;
		case 7:
			hollow_rectangle();
			break;
		case 8:
			inverted_half_pyramid();
			break;
		case 9:
			hollow_inverted_half_pyramid();
			break;
		case 10:
			full_pyramid();
			break;
		case 11:
			inverted_full_pyramid();
			break;
		case 12:
			hollow_pyramid();
			break;
	}
	
cout<<"would you like to see more patterns? (0 / 1) "<<endl;
cin>>choice;
	
}while(choice==1);
cout<<"good bye! 🙁 "<<endl;
 
return 0;
}
// pattern 1
void five_num_five_times()
{
cout<<endl;
cout<<"pattern 1"<<endl;
cout<<endl;
for(int i=1; i<=5; i++)
{
 	for(int j=1; j<=5; j++)
 	{
 		cout<<j<<" ";
	}
cout<<endl;
}
}
// pattern 2
void alphabets_upto_x()
{
cout<<endl;
cout<<" pattern 2"<<endl;
for(char i='A'; i<='X'; i++)
{
	cout<<i<<"  ";
	if ((i+2)%6==0)
	{
		cout<<endl;
	}
} 
cout<<endl;	
}
// pattern 3
void num_half_pyramid_left()
{
cout<<endl;
cout<<"pattern 3 "<<endl;
for(int i=1; i<=5; i++)
{
	for(int j=1; j<=5-(5-i); j++)
	{
	cout<<j<<" ";
	}
	cout<<endl;
}
}
// pattern 4
void num_half_pyramid_right()
{
cout<<endl;
cout<<"pattern 4"<<endl;
for (int i=1; i<=5; i++)
{
	for (int k=5-i; k>0; k--)
	{
        cout<< "  ";
    }
    for(int j=i; j>=1; j --)
	{	
        cout <<j<< " ";
    }
cout << endl;
}
}
// pattern 5
void aphabets_half_pyramid()
{
cout<<endl;
cout<<"pattern 5"<<endl;
for(int i=1; i<=5; i++)
{
	for(char j='A'; j<'A'+i; j++)
	{
		cout<<j<<" ";
	}
	cout<<endl;
}
}
// pattern 6
void five_aphabets_five_times()
{
cout<<endl;
cout<<"pattern 6"<<endl;
for(int i=1; i<=5; i++)
{
	cout<<"a, b, c, d, e ";
	cout<<endl;
}
}
// hollow rectangle 
void hollow_rectangle()
{
cout<<endl;
cout<<"hollow rectangle"<<endl;
for(int i= 1; i<=6; i++)
{
	for(int j=1; j<=7; j++)
	{
		if ( j<=1||j==7||i==1||i==6 )
		{
			cout<<"* ";
		}
		else 
		{
			cout<<"  ";
		}
	}
	cout<<endl;
} 
}
// inverted half pyramid 
void inverted_half_pyramid()
{
cout<<endl;
cout<<"inverted half pyramid "<<endl;
for(int i = 0; i < 5; i++)
	{
		for(int j =1; j<= 5-i; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
//hollow inverted half pyramid 
void hollow_inverted_half_pyramid()
{
cout<<endl;
cout<<"hollow inverted half pyramid"<<endl;
for(int i= 6; i>=1; i--)
{
	for (int j= 1; j<=i; j++)
	{if(j==1||i==6||i==1||i==j)
		{
		cout<<"* ";
		}
		else 
		{
		cout<<"  ";
		}
	
	}
	cout<<endl;
}
}
//full pyramid 
void full_pyramid()
{
cout<<endl;
cout<<"full pyramid "<<endl;
for(int i=1; i<=6; i++)
{
	for(int j = 1; j <=6-i ; j++)
	{
		cout<<"  ";
	}
	for(int k=1; k<=i; k++)
	{
	    cout<<"  * ";
	}
	cout<<endl;
}
}
//inverted full pyramid 
void inverted_full_pyramid()
{
cout<<endl;
cout<<"inverted full pyramid "<<endl;
for(int i=1; i<=6; i++)
{
	for(int j=1; j<=6-(6-i); j++)
	{
		cout<<"  ";
	}
	for(int k=0; k<=6-i; k++)
	{
		cout<<"  * ";
	}
cout<<endl;
}
}
//hollow pyramid
void hollow_pyramid()
{
cout<<endl;
cout<<"hollow pyramid"<<endl;
for(int i=1; i<=6; i++)
{
	for(int j=1; j<=6-i; j++)
	{
		cout<<"  ";
	}
	for(int k=1; k<=6-(6-i); k++)
	{
		if (i==6||k==1||k==6-(6-i))
		{
			cout<<"  * ";
		}
		else
		{
			cout<<"    ";
		}
	}
cout<<endl;
}
}
