#include <iostream>
using namespace std;
	//print array
void print_array(int arr3[], int size3)
{
	for(int i=0; i<=size3-1; i++)
	{
		cout<<arr3[i]<<" ";
	}
	cout<<endl;
}
void merge_array(int arr1[], int size1, int arr2[], int size2)
{
	int size3=size1+size2;
	int arr3[size3];
	int i=0;
	int j=0;
	int k=0;
	while(i<=size1-1 && j<=size2-1)
	{
		if(arr1[i]<=arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<=size1-1)
	{
	    arr3[k]=arr1[i];
		i++;
		k++;
	}
	while(j<=size2-1)
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
	//print array
print_array(arr3,size3);
	
}
int main()
{
	int array1[]={1,2,3};
	int array2[]={2,5,6};
	merge_array(array1,3,array2,3);
}
