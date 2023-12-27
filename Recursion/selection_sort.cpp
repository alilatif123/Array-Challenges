#include <iostream>
using namespace std;
int swaping(int array[],int index,int original_size,int min_index){
	if(index>=original_size){
		return min_index;
		
	}
	if(array[min_index]>array[index])
	{
		min_index=index;
	}
	return swaping(array,index+1,original_size,min_index);
	
	
}
void selection_sort(int array[],int index,int original_size){
	if(index==0){
		return;
	}
	selection_sort(array,index-1,original_size);
	int min=swaping(array,index,original_size,index-1);
	swap(array[index-1],array[min]);
	
}
int main()
{
	int array[5]={64,5,12,22,11};
	selection_sort(array,5,5);
		//print array
	for(int i=0; i<=5-1; i++)
	{
		cout<<array[i]<<" ";
	}
}

