#include <iostream>
using namespace std;
void sayDigit(int num,string array[]){
	if(num==0)
	{
		return;
	}
	int single_digit=num%10;
	num=num/10;
	sayDigit(num,array);
	cout<<array[single_digit]<<" ";
}
int main(){
	int num;
	cout<<"Enter Number "<<endl;
	cin>>num;
	string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	sayDigit(num,array);
}
