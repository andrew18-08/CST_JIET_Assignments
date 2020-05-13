#include<iostream>
using namespace std;

int main()
{    
	int a[]={1,2,3,4,5,6,7,8,9,6};
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		a[i+1]=a[i]^a[i+1];
	}
	cout<<a[i];
	return 0;
}


