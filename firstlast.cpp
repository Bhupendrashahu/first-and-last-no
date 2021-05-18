#include<iostream>
using namespace std;
int main()
{
	int n,l;
	cout<<"enter the no \n ";
	cin>>n;
	l=n%10;
	cout<<"last element is "<<l;
	while(n>=10)
	{
		n=n/10;
		
	}
	cout<<"first element"<<n;
}
