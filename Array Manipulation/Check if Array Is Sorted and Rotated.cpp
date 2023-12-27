#include <iostream>
using namespace std;
bool Array_Is_Sorted_and_Rotated(int array[],int size)
{
	int count=0;
    int n=size-1;
    //array sorted
    if (size == 1) {
        return true;
    }
    for(int i=0; i<=n; i++)
    {
        if(array[i]<array[i+1] || array[i] == array[i+1])
        {
            count=1;
        }
        else
        {
            count=0;
            break;
        }
    }
    if(count==1)
    {
    	return true;
	}
    
    //array rotated
    int start=0;
    int end=n;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(array[mid]>array[mid+1])//mid+1 is a pivot
        {
            count=1;
            break;
        }
        else if(array[mid]>array[0])//left part is already sorted
        {
            start=mid+1;
        }
        else if(array[mid]<array[0])//right part is already sorted
        {
            end=mid-1;
        }
    }
    if(count==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
	int array[]={1};
	int result=Array_Is_Sorted_and_Rotated(array,1);
	cout<<result;
}
