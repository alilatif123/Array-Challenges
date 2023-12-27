#include <iostream>
using namespace std;
int square_root(int array[],int start,int end,int number,int ans){
	int mid=(start+end)/2;
	if(start>end){
		return ans;
	}
	if(array[mid]*array[mid]==number)
	{
		ans=array[mid];
		return ans;
	}
	if(array[mid]*array[mid]>number){
		return square_root(array,start,mid-1,number,ans);
	}
	if(array[mid]*array[mid]<number){
		ans=array[mid];
		return square_root(array,mid+1,end,number,ans);
	}
	
	
	
}
void print_array(int array[],int number){
	if(number==-1)
	{
		return;
	}
	print_array(array,number-1);
	cout<<array[number]<<" ";
}
void array_intialization(int array[],int number){
	if(number==-1)
	{
		return;
	}
	array_intialization(array,number-1);
	array[number]=number;
}
int main(){
	int number;
	cout<<"Enter number for square root "<<endl;
	cin>>number;
	int array[number]={0};
	//array intialization
	array_intialization(array,number);
	//print array
	print_array(array,number);
	//square root
	cout<<endl;
	int ans=square_root(array,0,number,number,ans);
	cout<<"Square root of "<<number<< " is "<<ans<<endl;
}
