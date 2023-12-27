#include <iostream>
using namespace std;
bool check_palindrome(string &abc,int start,int end){
	if(start>end){
		return true;
	}
	if(abc[start]!=abc[end])
	{
		return false;
	}
	return check_palindrome(abc,++start,--end);
}
int main()
{
	string abc;
	cout<<"Enter string which you want to check "<<endl;
	cin>>abc;
	bool ans=check_palindrome(abc,0,abc.length()-1);
	if(ans==true)
	{
		cout<<"Yes it is palindrome"<<endl;
	}
	else{
		cout<<"No it is not palindrome"<<endl;
	}
}
