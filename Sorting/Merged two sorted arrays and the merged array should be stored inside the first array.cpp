//solve in leetcode website

#include <iostream>
using namespace std;
//printing array
void print_array(int array1[],int size3)
{
	for(int i=0; i<=size3-1; i++)
	{
		cout<<array1[i]<<" ";
	}
}
void merged_two_sorted_array(int array1[], int size1, int array2[], int size2)
{
        int i=size1-1 , j=size2-1;
         int k=size1+size2-1;
        while(i>=0 && j>=0 ){
            if(array1[i]>array2[j]){
                array1[k]=array1[i] ;
                i-- ;
                k--;
                }else{
                    array1[k]=array2[j];
                    j-- ;
                    k--;
                }
        }
        while(i>=0){
                    array1[k]=array1[i];
                    i-- ;
                    k--;
                }  
        while(j>=0){
                    array1[k]=array2[j];
                    j-- ;
                    k--;
                }          
    
	//print array
	print_array(array1,size1+size2);
}
int main()
{
	int array1[]={1,2,3};
	int array2[]={2,5,6};
	merged_two_sorted_array(array1,3,array2,3);
}
