#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements of the array : ";
	cin>>n;
	cout<<endl;
	
	int arr[n];
	int *p1;
	p1 = arr;
	
	cout<<"Enter the elements : ";
	cout<<endl;
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];	
	}
	
	cout<<"Entered elements : "<<endl;
	for(int i = 0; i < n ; i++)
	{
		cout<<*p1<<endl;
		p1++;	
	}
	
	return 0;
}
