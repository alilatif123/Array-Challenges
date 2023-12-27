#include <iostream>
using namespace std;
//array print
void print_array(int arr[],int size)
{
	cout<<"Array is "<<endl;
	cout<<endl;
	for(int i=0; i<=size-1; i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reverseArray(int arr[] , int m,int size)
{
	int start=m+1;
	int end=size-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start=start+1;
		end=end-1;
	}
	print_array(arr,7);
}
int main()
{
	int array[]={3,5,6,8,9,1,2};
	reverseArray(array,4,7);
}

