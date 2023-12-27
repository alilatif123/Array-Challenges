#include <iostream>
using namespace std;
void first_position(int arr[],int size, int key)
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
	cout<<"Key not Exit "<<endl;
}
else
{
	cout<<"First occurance is at Index "<<firt_occurance<<endl;
}
}

void last_position(int arr[],int size, int key)
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
	cout<<"Key not Exit "<<endl;
}
else
{
	cout<<"Second occurance is at Index "<<last_occurance<<endl;
}
}
int main()
{
	int array[]={1,1,2,3,3,3,4,4};
	first_position(array,8,4);
	last_position(array,8,4);
}
