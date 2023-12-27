#include <iostream>
using namespace std;
int binarySearch(int array[],int start,int end, int key)
{
    int key_index=0;
	while(start<=end)
	{
		int middle=(start+end)/2;
		if(array[middle]==key)
		{
			key_index=middle;
			break;
		}
		else if(array[middle]>key)
		{
			end=middle-1;
		}
		else if(array[middle]<key)
		{
			start=middle+1;
		}
		
	}
	if(key_index==0)
	{
		return -1;
	}
    else
    {
        return key_index;
    }
}


int pivot_function(int arr[], int n)
{
int start=0;
int end=n-1;
int pivot_index;
while(start<=end)
{
    int mid=(start+end)/2;
    if(arr[mid]<arr[mid-1])
    {
        pivot_index=mid;
        break;
    }
    else if(arr[mid]>arr[0])
    {
        start=mid+1;
    } else if (arr[mid] < arr[0]) {
      end = end - 1;
    }
}
return pivot_index;
}

int main()
{
	int arr[]={4,5,6,1,2,3};
	int k;
	cout<<"Enter the value "<<endl;
	cin>>k;
    int n=6;
    int pivot=pivot_function(arr,n);
    if(k==arr[pivot])
    {
        cout<<pivot;
    }
    if(k>arr[pivot] && k>=arr[0])
    {
        int end=pivot-1;
       int ali=binarySearch(arr,0,end,k);
       cout<<ali;
    }
    else{
        int start=pivot+1;
       int ali=binarySearch(arr,start,n-1,k);
        cout<<ali;
    } 
}       
