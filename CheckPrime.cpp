#include<iostream>
using namespace std;

int Prime(int n);

int main()
{
	int num, check = 0;
	cout<<"Enter a positive number : ";
	cin>>num;
	
	for(int i = 2; i <= num/2 ; ++i)
	{
		if(Prime(i) == 1)
		{
			if(Prime(num-i) == 1 )
			{
				cout<<num <<" = "<<i <<" + "<< num - i<<endl;
				check = 1;
			}
		}
	}
	if(check == 0)
	{
		cout<<"Sorry the number cannot be expressed as the sum of any two prime numbers."<<endl;
	}
	return 0;
}

int Prime(int number)
{
	int yesprime = 1;
	
	for(int i = 2; i <= number/2 ; ++i) 
	{
		if(number % i == 0)
		{
			yesprime = 0;
			break;
		}
	}
	return yesprime;
}
