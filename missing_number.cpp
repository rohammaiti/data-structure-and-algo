#include <iostream>
#include <numeric>

using namespace std;

int main() 
{
    int num, i, missing_num, sum, array_sum;

    cout<<"Enter number of array elements- "<<endl;
    cin>>num;

    int arr[num];
    cout<<"Enter array elements- ";

    for ( i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    
    sum= (num+1)*(num+2)/2;

    array_sum=accumulate(arr, arr+num, 0);

    missing_num=sum-array_sum;

    cout<<"The missing number in the sequence is- "<<missing_num;
}
