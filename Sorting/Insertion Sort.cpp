#include <iostream>
using namespace std;
void print_array(int arr[], int n)
{
	for(int i=0; i<=n-1; i++)
	{
	   cout<<arr[i]<<" ";
	}
}
void insertionSort(int arr[],int n){
for(int i=1;  i<=n-1; i++)
    {
        int store_i=i;
        for(int j=i-1; j>=0; j--)
        {
            if(arr[i]>=arr[j])
            {
            arr[j+1]=arr[i];
                break;
            } else {
             swap(arr[j], arr[i]);
            i=i-1;
            }
        }
        i=store_i;
    }
    print_array(arr,n);
    }
int main()
{
	int array[]={3,5,3,1,2,4};
	insertionSort(array,6);
}
