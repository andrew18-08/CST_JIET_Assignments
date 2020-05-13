#include<iostream>
using namespace std;

int main()
{
	int a,i;
	int sum=0;
	int lh=0, ch=0;
	cout<<"enter the no. of blocks";
	cin>>a;
	while(sum<=a)
	{ 
		lh = ch;
		ch++;
		sum+=ch;
		
	}
	cout<<lh;
	
}
