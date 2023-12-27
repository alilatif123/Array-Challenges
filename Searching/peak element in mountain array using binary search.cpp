#include <iostream>
using namespace std;
void peakElement(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		
		//mid element is the peak element
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
		{
			cout<<"Peak element is "<<arr[mid]<<" with Index Number "<<mid<<endl;
			break;
		}
		//mid is in right side of mountain
		else if(arr[mid]<arr[mid+1])
		{
			start=mid+1;		}
		//mid is in the left side of mountain
		else if(arr[mid]>arr[mid+1])
		{
			end=mid-1;
		}
		
	}
}
int main()
{
	int array[5]={3,5,3,2,0};
	peakElement(array,5);
}
