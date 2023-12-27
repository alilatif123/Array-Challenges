#include <iostream>
using namespace std;
int cal_pow(int num,int power){
	if(power==0)
	{
		return 1;
	}
	return num*cal_pow(num,power-1);
}
int main()
{
	int num,power;
	cout<<"Enter number "<<endl;
	cin>>num;
	cout<<num<<" power of "<<endl;
	cin>>power;
	int ans=cal_pow(num,power);
	cout<<ans<<endl;
}
