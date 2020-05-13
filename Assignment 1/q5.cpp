#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the no.";
	cin>>n;
	
    if (n == 0 || n == 1)  
       cout<<n;
  
    
    int start = 1, end = n, ans;    
    while (start <= end)  
    {         
        int mid = (start + end) / 2; 
  
        if (mid*mid == n) 
            return mid; 
  
        
        if (mid*mid < n)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else 
            end = mid-1;         
	} 
   
   
cout<<"the square root of "<<n<<" is "<<ans;   
return 0;
} 	
	

