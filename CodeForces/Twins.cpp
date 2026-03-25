#include<iostream>
#include<algorithm>  //for sort we have used this header file also 
using namespace std;
int main()
{
    int n; //no.of coins
    cin>>n;
    int arr[n];
    int sum = 0;

    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      sum += arr[i];
    }

    sort(arr, arr+n);   //this is must here in this code
    reverse(arr, arr+n);
    int count = 0;
    int my_sum = 0;

    for(int i = 0;i<n;i++)
    {
        my_sum += arr[i];
        count++;
        if(my_sum > sum - my_sum)
        {
            break;
        }
    }
cout<<count;
}
