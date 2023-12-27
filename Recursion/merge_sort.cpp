#include <iostream>
using namespace std;
void take_element(int array[],int size){
	if(size==0){
		return;
	}
	take_element(array,size-1);
	cout<<"Enter Element of Array of Index "<<size-1<<endl;
	cin>>array[size-1];
}
void print_array(int array[],int size){
	if(size==0){
		return;
	}
	print_array(array,size-1);
	cout<<array[size-1]<<" ";
}
void merge(int array[],int start,int mid,int end){
	int size_temp1=mid-start+1;
	int temp1[size_temp1];
	int size_temp2=end-mid;
	int temp2[size_temp2];
	//copy_temp1 array
	for(int i=0; i<=size_temp1-1; i++)
	{
		temp1[i]=array[i];
	}
	//copy_temp2 array
	int dalna=mid;
	for(int i=0; i<=size_temp2-1; i++)
	{
		dalna=dalna+1;
		temp2[i]=array[dalna];
	}
	int a=0;//pointer of array 1
	int b=0;//pointer of array 2
	int c=0;//mai hon original ka pointer
	while(a<size_temp1 && b<size_temp2)
	{
		if(temp1[a]<temp2[b]){
			array[c]=temp1[a];
			a=a+1;
			c=c+1;
		}
		else if (temp1[a]>temp2[b]){
			array[c]=temp2[b];
			b=b+1;
			c=c+1;
		}
		else if(temp1[a]==temp2[b])
		{
			array[c]=temp1[a];
			a=a+1;
			b=b+1;
			c=c+1;
		}
	}
	while(a<size_temp1)
	{
		array[c]=temp1[a];
		a=a+1;
		c=c+1;		
	}
	while(b<size_temp2)
	{
		array[c]=temp2[b];
		b=b+1;
		c=c+1;		
	}

}
void merge_sort(int array[],int start,int end){
	if(start>=end){
		return;
	}
	int mid=(start+end)/2;
	merge_sort(array,0,mid);
	merge_sort(array,mid+1,end);
	merge(array,0,mid,end);
}

int main(){
	int size=8;
	int array[size]={3,46,41,41,5,6,4,2};
//	take_element(array,size);
	cout<<"Before "<<endl;
	print_array(array,size);
	merge_sort(array,0,size-1);
	cout<<endl;
	cout<<"After "<<endl;
	print_array(array,size);
}
