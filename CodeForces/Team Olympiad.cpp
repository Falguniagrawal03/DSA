#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int one[5000],two[5000],three[5000];
    int count_prog = 0, count_maths = 0, count_pe = 0;

    for(int i=0;i<n;i++)
    { 
        cin>>arr[i]; 
        if(arr[i]==1)
        {
        one[count_prog++]=i+1;
        }
        else if(arr[i]==2)
        {
            two[count_maths++]=i+1;
        }
        else
        {
            three[count_pe++]=i+1;
        }
    }

    int w = min(count_prog, min(count_maths, count_pe));
    cout<<w<<endl;
    for(int i=0;i<w;i++)
    {
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
    return 0;
}
