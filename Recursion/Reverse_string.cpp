#include <iostream>
using namespace std;
void reverse(string &abc, int start,int end){
	if(start>end){
		return;
	}
	swap(abc[start],abc[end]);
	return reverse(abc,++start,--end);
}

int main(){
	string abc="abcde";
	reverse(abc,0,abc.length()-1);
	cout<<abc;
}
