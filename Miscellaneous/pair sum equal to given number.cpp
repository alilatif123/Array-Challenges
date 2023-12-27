#include <iostream>
using namespace std;
void pairsum(int array[],int size)
{
	int element;
	cin>>element;
	for(int i=0; i<=size-1; i++)
	{
		for(int j=0; j<=size-1; j++)
		{
			if(array[i]+array[j]==element)
			{
				cout<<"Sum of "<<array[i]<<" and  "<<array[j]<<" is equal to given Number"<<endl;
			}
		}
	}
}
int main()
{
	int size=4;
	int array[]={2,1,6,4};
	pairsum(array,size);
}

//Time complexity is O(n^2)
