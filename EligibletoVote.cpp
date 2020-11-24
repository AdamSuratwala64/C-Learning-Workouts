#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	string name;
	cout<<"Please enter your name : ";
	cin>>name;
	cout<<endl;
	
	int day;
	int month;
	float year;
	
	cout<<"Please enter your birth-date (in numbers only): "<<endl;
	cout<<"Day : ";
	cin>>day;
	
	cout<<"Month : ";
	cin>>month;
	
	cout<<"Year : ";
	cin>>year;
	cout<<endl;	
	
	time_t now;
	
	struct tm nowLocal;
	
	now=time(NULL);
	
	nowLocal = *localtime(&now);
	
	cout<<"Today is : " <<nowLocal.tm_mday <<" " <<nowLocal.tm_mon+1 <<" " << nowLocal.tm_year <<endl;
	
	int age_d = (nowLocal.tm_mday) - day;
	int age_m = (nowLocal.tm_mon+1) - month;
	float age_y = (nowLocal.tm_year+1900) - year;
	
	cout<<"\nYour current age is : "<< age_y<<" Years, "<<age_m <<" Months & "<<age_d<<" Days."<<endl;
		
	if(age_y>=18)
	{
		cout<<endl<<"Congratulations "<<name<<"! You are eligible to vote!"<<endl;
	}	
	else
	{
		int diff_y = 18 - age_y;
		int diff_m = 12 - age_m;
		int diff_d = 31 - age_d;
		
		if(age_y > nowLocal.tm_mon )
			diff_y-=1;

		cout<<endl<<"Sorry "<<name<<", You have to wait for "<<diff_y<<" Years, "<<diff_m<<" Months & "<<diff_d<<" Days."<<endl;
		cout<<"You are not eligible to vote."<<endl;
	}
		
	return 0;
}
