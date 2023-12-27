#include <iostream>
using namespace std;
int first_position(int arr[],int size, int key)
{
	int start=0;
	int end=size-1;
	int firt_occurance=-1;
	while(start<=end)
	{
	
	int middle=(start+end)/2;
	if(arr[middle]==key)
	{
		firt_occurance=middle;
		end=middle-1;		
	}
	else if(arr[middle]>key)
	{
	    end=middle-1;	
	}
	else if(arr[middle]<key)
	{
	    start=middle+1;	
	}
}
if(firt_occurance==-1)
{
	return -1;
}
else
{
	return firt_occurance;
}
}

int last_position(int arr[],int size, int key)
{
	int start=0;
	int end=size-1;
	int last_occurance=-1;
	while(start<=end)
	{
		int middle=(start+end)/2;
		if(arr[middle]==key)
		{
			last_occurance=middle;
			start=start+1;
		}
		else if(arr[middle]>key)
		{
			end=middle-1;
		}
		else if(arr[middle]<key)
		{
			start=middle+1;
		}
	}
	if(last_occurance==-1)
{
	return -1;
}
else
{
	return last_occurance;
}
}
//logic
int count_occurrences(int array[], int size, int key)
{
	int first=first_position(array,size,key);
	int last=last_position(array,size,key);
	int index=(last-first)+1;
	if(first==-1 && last==-1)
	{
		cout<<"Element no exist"<<endl;
	}
	else
	{
		cout<<"Element occur  "<<index<<" times"<<endl;
	}
}
int main()
{
	int array[]={1,1,2,3,3,3,4,4};
	int occurances=count_occurrences(array,8,3);
}
