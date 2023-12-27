#include <iostream>
using namespace std;
string reverse(string xyz, int start,int end){
	if(start>end){
		return xyz;
	}
	swap(xyz[start],xyz[end]);
	return reverse(xyz,++start,--end);
}

int main(){
	string abc;
	cout<<"Enter String "<<endl;
	cin>>abc;
	string xyz=reverse(abc,0,abc.length()-1);
	if(abc==xyz){
		cout<<"This string is palindrome "<<endl;
	}
	else{
		cout<<"This string is not palindrome "<<endl;
	}
}
