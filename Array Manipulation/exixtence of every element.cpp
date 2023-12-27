//find duplicate
#include<iostream>
#include<vector>

using namespace std;

void countFrequency( int arr[], int n) {
    int frequency[n]={0};
	for(int i=0; i<=n-1; i++)
    {   
    for(int j=0; j<=n-1; j++)
    {
      if(arr[i]==arr[j])
      {
          frequency[i]=frequency[i]+1;
      }
    }
    cout<<arr[i]<<" exits  "<<frequency[i]<<"  times"<<endl;
}
}
    
    
    
    //
    

int main() {
    int arr[5] = {1, 2, 2, 2, 2};
    countFrequency(arr,5);
    return 0;
}

//complexity is O(n^2)

