#include <iostream>
using namespace std;
void zero_left_side(int array[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
       for(int j=i+1; j<=n-1; j++)
       {
        if(array[i]==0)
        {
        swap(array[i],array[j]);
        }
        }
     }
     //print array
     for(int i=0; i<=n-1; i++)
     {
     	cout<<array[i]<<" ";
	 }
}
int main()
{
	int array[]={5,0,8,9,7,0,8};
	zero_left_side(array,7);
}
