#include<iostream>
using namespace std;
int factorial(int num)
{
	if(num==0)
	{
		return 1;
	}
	return num*factorial(num-1);

}
int main()
{
	//factorial
	int num;
	cin>>num;
	int result=factorial(num);
	cout<<result;
 } 




//counting

//void counting(int num){
//	if(num==0)
//	{
//		cout<<"0";
//		return;
//			}
//	cout<<num<<" ";
//	counting(num-1);
//}
//int main()
//{
//	int num;
//	cin>>num;
//	counting(num);
//}


