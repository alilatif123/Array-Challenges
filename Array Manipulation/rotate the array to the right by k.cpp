#include <iostream>
using namespace std;

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void circular_rotate_array(int array[], int size, int k)
{
    //temp array with same size as array
    int temp[size] = {0};
       k=k%size;
    for (int i = 0; i <= size-1; i++)
 
    {
        //circular shift
        if ((i + k) > size-1)
        {
            temp[i + k - (size-1+1)] = array[i];
        }
        //simple shift
        else
        {
            temp[i + k] = array[i];
        }
    }
    //assign temp array to main array
    for (int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }
    //calling function for printing elements
    print_array(array, size);
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    circular_rotate_array(array, 7, 4);

}

