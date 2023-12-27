#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{   
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if (arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    //print function
    for(int i=0; i<=n-1; i++)
    {
    	cout<<arr[i]<<" ";
	}
}
int main()
{
	int array[]={4,3,1,9};
	selection_sort(array,4);
}
