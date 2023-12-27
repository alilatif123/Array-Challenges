#include <iostream>
using namespace std;
int pivot(int array[],int start,int end)
{
	int mid=(start+end)/2;
	if(start>end){
		return -1;
	}
	if(array[mid-1]>=array[mid] && array[mid+1]>=array[mid])
	{
		return mid;
	}
	if(array[0]>array[mid])
	{
		end=mid-1;
		pivot(array,start,end);
	}
		if(array[0]<array[mid])
	{
		start=mid+1;
		pivot(array,start,end);
	}
}

//print element
void print_element(int array[],int size){
	if(size==0)
	{
		return;
	}
	print_element(array,size-1);
	cout<<array[size-1]<<" ";
}

//take element
void take_element(int array[],int size){
	if(size==0)
	{
		return;
	}
	take_element(array,size-1);
	cout<<"Enter element of Array of index "<<size-1<<endl;
	cin>>array[size-1];
}
int main()
{
	int size;
	cout<<"Enter size of Array "<<endl;
	cin>>size;
	int array[size];
	take_element(array,size);
	cout<<endl;
	print_element(array,size);
	int ans=pivot(array,0,size-1);
	if(ans==-1){
		cout<<"Array is not sorted or rotated "<<endl;
	}
	else
	{
		cout<<" Pivot index is "<<ans<<" and element is "<<array[ans]<<endl;
	}
	return 0;
}
