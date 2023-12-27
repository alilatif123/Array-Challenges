#include <iostream>
using namespace std;
void counting(int num){
	//base
	if(num==-1)
	{
		return;
	}
	//recursive relashion
	cout<<num<<endl;
	counting(num-1);
	if(num==0){
		cout<<endl;
	}
	cout<<"return "<<num<<endl;
}
int main(){
	int num;
	cin>>num;
	cout<<endl;
	counting(num);
}
