#include <iostream>
#include <algorithm>
using namespace std;
void inbuild_sort(int arr[],int size)
{
	//sort
	
	sort(arr,arr+size);
	reverse(arr,arr+size);
	//print
	for(int i=0; i<=size-1; i++)
	{
		cout<<arr[i]<< " ";
	}
}
int main()
{
	int size=5;
	int arr[size]={2,5,1,4,3};
	inbuild_sort(arr,5);
	
}

