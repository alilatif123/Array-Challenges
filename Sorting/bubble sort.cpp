#include <iostream>
using namespace std;
//print array
void print_array(int arr[], int size)
{
	for(int i=0; i<=size-1; i++)
	{
		cout<<arr[i]<<" ";
	}
}
void bubble_sort(int arr[], int size)
{
	for(int i=1; i<=size-1; i++)
	//round 1 to  n-1
	{
		bool check=false;
		for(int j=0; j<=size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				check=true;
			}
		}
		if(check==false)
		{
			break;
		}
	}
	print_array(arr,size);
}

int main()
{
	int array[]={4,6,8,7,1,3,2,5};
	bubble_sort(array,8);
	
}
