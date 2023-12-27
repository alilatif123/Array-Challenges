//sum of three element of array equal to given element(Number)
#include <iostream>
using namespace std;
void tripletSum(int array[], int size)
{
	int number;
	cout<<"Enter number"<<endl;
	cin>>number;
	for(int i=0; i<=size-1; i++)
	{
		for(int j=i+1; j<=size-1; j++)
		{
			for(int k=j+1; k<=size-1; k++)
			{
				if(array[i]+array[j]+array[k]==number)
				{
					cout<<"Sum of "<<array[i]<<" ,"<<array[j]<<" ,"<<array[k]<<" is  "<<number<<endl;
				}
			}
		}
}
}
int main(){
	int array[5]={10,7,6,2,5};
	tripletSum(array,5);
	
}
