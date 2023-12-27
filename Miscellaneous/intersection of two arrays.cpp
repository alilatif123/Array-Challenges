//intersection of two arrays of different size
#include <iostream>
using namespace std;
void intersection(int array[],int array2[],int size1,int size2)
{
	for(int i=0; i<=size1-1; i++)
	{
		for(int j=0; j<=size2-1; j++)
		{
			if(array[i]==array2[j])
			{
				cout<<array[i]<<endl;
				array2[j]=INT_MIN;
				break;
			}
		}
	}
}
int main()
{
	int size=2;
	int array1[size]={7,2};
	int array2[3]={3,7,3};
	intersection(array1,array2,size,3);
	

}

//Time complexity is O(n*m)
