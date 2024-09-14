#include <iostream>
using namespace std;
bool ispalindrome(int num)
{
 	 if(num<0)return false;
 	 int original=num;
  int reversed=0;
  while(num !=0)
  {
  	reversed= reversed*10+num%10;
  	num/=10;
	    }
	    return original==reversed;
	    }
int main()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
	if(ispalindrome(num))
	{
		cout<<num<<" is a palindrome."<<endl;
	}
	else
	{
		cout<<num<<" is not a palindrome."<<endl;
	}
	return 0;
}