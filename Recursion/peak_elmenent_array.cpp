#include <iostream>
using namespace std;
int peak_element(int array[],int start,int end)
{
	int mid=(start+end)/2;
	if(start>end)
	{
		return -1;
	}
	if(array[mid]>array[mid-1] && array[mid]>array[mid+1])
	{
		return mid;
	}
	//mid>mid-1 so it means ye mountain ka left part hai
	if(array[mid]>array[mid-1])
	{
		return peak_element(array,mid+1,end);
	}
	
	//mid<mid-1 so it means ye mountain ka left part hai
	if(array[mid]<array[mid-1])
	{
		return peak_element(array,start,mid-1);
	}
}
void take_element(int array[], int size)
{
	if(size==0)
	{
		return;
	}
	take_element(array, size-1);
	cout<<"Ener element of Array of index "<<size-1<<endl;
	cin>>array[size-1];
}


void print_element(int array[], int size)
{
	if(size==0)
	{
		return;
	}
	print_element(array, size-1);
	cout<<array[size-1]<<" ";
}

int main()
{
	int size;
	cout<<"Enter size of array "<<endl;
	cin>>size;
	int array[size];
	if(size<3)
	{
		cout<<"We are solving peak element Question which required atleast array of size three "<<endl;
	}
	else
	{
		take_element(array,size);
		cout<<endl;
		print_element(array,size);
		int ans=peak_element(array,0,size-1);
		if(ans==-1)
		{
			cout<<"There is no Peak element"<<endl;
		}
		else
		{
			cout<<"Peak element is at index "<<ans<<" and element is "<<array[ans]<<endl;
		}
	}

}
