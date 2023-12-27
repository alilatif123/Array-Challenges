#include <iostream>
using namespace std;
void sort_upto_2(int arr[], int n)
{
	for(int i=0; i<=n-1; i++)
	{
		for(int j=i+1; j<=n-1; j++)
		{
			if((arr[i]==1 || arr[i]==2) && (arr[j]==0))
			{
				swap(arr[i],arr[j]);
			}
			if(arr[i]==2 && arr[j]==1)
			{
				swap(arr[i],arr[j]);
			}
		}
	}
	//print array
for(int i=0; i<=n-1; i++)
{
	cout<<arr[i]<<" ";
}
}

int main()
{
	int arr[]={1,0,2,1,2,0,1,0,2,1};
	int length=10;
	sort_upto_2(arr,length);
	
}
