#include <iostream>
using namespace std;

//first position of element of array using binary search

int f_position(int array[],int key,int start,int end,int temp){
	int mid=(start+end)/2;
	if(start>end)
	{
		return temp;
	}
	if(array[mid]==key)
	{
	temp=mid;
	return f_position(array,key,start,mid-1,temp);
		}
	else if(key<array[mid]){
		return f_position(array,key,start,mid-1,temp);
	}
	else{
		return f_position(array,key,mid+1,end,temp); //if(key>array[mid])
	}
}

//last position of element of array using binary search

int l_position(int array[],int key,int start,int end,int temp){
	int mid=(start+end)/2;
	if(start>end)
	{
		return temp;
	}
	if(array[mid]==key)
	{
	temp=mid;
		return l_position(array,key,mid+1,end,temp); 
		}
	else if(key<array[mid]){
		return l_position(array,key,start,mid-1,temp);
	}
	else{
		return l_position(array,key,mid+1,end,temp); //if(key>array[mid])
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

bool check_sorted(int array[], int size){
	if(size==1)
	{
		return true;
	}
	if(array[0]>array[1])
	{
		return false;
	}
	return check_sorted(array+1,size-1);	
}
int main()
{
	int size,key,first,last;
	cout<<"Enter size of array "<<endl;
	cin>>size;
	int array[size];
	take_element(array,size);
	cout<<endl;
	print_element(array,size);
	bool sorted=check_sorted(array,size);
	if(sorted){
		cout<<"Yes array is sorted "<<endl;
		cout<<endl;
		cout<<"Enter key which you want to check fist and last position "<<endl;
		cin>>key;
		first=f_position(array,key,0,size-1,-1);
		last=l_position(array,key,0,size-1,-1);
		if(first==-1)
		{
			cout<<key <<" Key is not present in current array"<<endl;
		}
		else
		{
			cout<<"total occurance of element "<<key<<" is "<<1+(last-first)<<endl;
		}
	}
	else{
		cout<<"Array is not sorted"<<endl;
	}
}
