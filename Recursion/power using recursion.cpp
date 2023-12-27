#include <iostream>
using namespace std;
int claculate_power(int value,int power){
	if(power==0)
	{
		return 1;
	}
	return value*claculate_power(value,power-1);
}
int main()
{
	int value,power;
	cout<<"Enter value "<<endl;
	cin>>value;
	cout<<"Enter power "<<endl;
	cin>>power;
	int ans=claculate_power(value,power);
	cout<<power<<" power of "<<value<<" is "<<ans<<endl;
}
