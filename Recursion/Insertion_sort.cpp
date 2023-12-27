#include <iostream>
using namespace std;
void print_array(int array[],int size){
	if(size==0){
		return;
	}
	print_array(array,size-1);
	cout<<array[size-1]<<" ";
}
void swapping(int array[],int size){
	if(size==0 || array[size]>=array[size-1]){
		return;
	}
	if(array[size]<array[size-1])
	{
		swap(array[size],array[size-1]);
		size=size-1;
		swapping(array,size);
	}
}
void insertion_sort(int array[],int size){
	if(size==0){
		return;
	}
	insertion_sort(array,size-1);
	swapping(array,size-1);
}
int main(){
	int array[6]={23,11,23,6,1,2};
	insertion_sort(array,6);
	print_array(array,6);
}
