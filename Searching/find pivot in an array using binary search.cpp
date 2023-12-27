#include <iostream>
using namespace std;

void pivot(int arr[], int size) {
	int start=0;
	int end=size-1;
	while(start<end)
	{
		int mid=(start+end)/2;
		if(arr[mid]<arr[mid-1])//pivot found
		{
			cout<<"Pivot Element is "<<arr[mid]<<" with Index "<<mid<<endl;
		break;
		}
		else if(arr[mid]>arr[0])//left part is sorted which means pivot is not present in left part of mid
		{
			start=mid+1;
		}
		else if(arr[mid]<arr[0])//right part is sorted
		{
			end=mid-1;
		}
	}
}


int main() {
    int arr[] = {10, 11,7,6,8,9};
    pivot(arr, 6);
}

