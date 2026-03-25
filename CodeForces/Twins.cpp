#include<iostream>
#include<algorithm>
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

    sort(arr, arr+n);
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
