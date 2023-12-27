#include <iostream>
using namespace std;
int calculate_square_root(int number)
{
	int start=0;
	int end=number;
	int ans=-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(mid*mid==number)
		{
			return mid;
		}
		else if(mid*mid>number)
		{
			end=mid-1;
		}
		else if(mid*mid<number)
		{
			start=mid+1;
			ans=mid;
		}
	}
	return ans;
}
float calculate_point(int number,float square, int point_limit)
{
	float decimal=1;
	for(float i=1; i<=point_limit; i++)
	{
	decimal=decimal/10;

while(square*square<number)
{

	square=square+decimal;
	if(square*square>number)
	{
		square=square-decimal;
		break;
	}
}
}
return square;
}

int main()
{
	int square=calculate_square_root(200);
	cout<<calculate_point(200,square,5)<<endl;
}
