#include <iostream>
using namespace std;

//print element
void print_element(int array[], int size)
{
	if(size==0)
	{
		return ;
	}
	print_element(array,size-1);
	cout<<array[size-1]<<" ";
	return;
}


//take input from user
void take_element(int array[], int size)
{
	if(size==0)
	{
		return ;
	}
	take_element(array,size-1);
	cout<<"Enter array of index "<<size-1<<endl;
	cin>>array[size-1];
	return;
}
int main(){
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int array[size];
	take_element(array,size);
	cout<<endl<<endl;
	print_element(array,size);
}
