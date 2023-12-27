#include <iostream>
using namespace std;
void fabonicci(int a,int b,int c,int d)
{
	if(c-2==d)
	{
		cout<<"ruk jao"<<endl;
		return;
	}
	int sum=a+b;
	a=b;
	b=sum;
	cout<<sum<<" ";
	d++;
	fabonicci(a,b,c,d);
}
int main(){
	int a=0,b=1,c,d=0;
	cout<<"kha tha fabonicci series chaiye ap ko "<<endl;
	cin>>c;
	cout<<endl;
	cout<<a<<" "<<b<<" ";
	fabonicci(a,b,c,d);
}
