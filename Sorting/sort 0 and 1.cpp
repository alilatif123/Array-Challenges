#include <iostream>
using namespace std;
void sort_zero_one(int arr[],int size)
{
	for(int i=0; i<=size-1; i++)
	{
		for(int j=i+1; j<=size-1; j++)
		{
		if(arr[i]==1 && arr[j]==0)
		{
			swap(arr[i],arr[j]);
		}			
		}
		
	}
	//print all array elements
	for(int i=0; i<=size-1; i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={1,0,1,1,0,1};
	sort_zero_one(arr,6);
}
