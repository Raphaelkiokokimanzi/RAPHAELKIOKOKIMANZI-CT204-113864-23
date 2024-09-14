#include <iostream>
using namespace std;
bool ispalindrome(string word)
{
	for(int i=0;i<word.length()/2;i++)
		if(word[i]!=word[word.length()-i-1])
			return false;
		
		return true;
}

int main()
{
	string word;
	cout<<" enter a word:";
	cin>>word;
	if(ispalindrome(word))
	{
		cout<<word<<" is a palindrome."<<endl;
	}
	else
	{
		cout<<word<<" is not apalindrome."<<endl;
	}
	return 0;
}