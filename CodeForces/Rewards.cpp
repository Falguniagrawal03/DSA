#include<iostream>
using namespace std;
int main()
{
    int c1,c2,c3;
    cin>>c1>>c2>>c3;
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    int n;
    cin>>n;

    int cup = c1+c2+c3;
    int medals = m1+m2+m3;
    int x = cup/5;

    if(cup%5!=0)
    {
        x++;
    }
    int y = medals/10;
    if(medals%10!=0)
    {
        y++;
    }
    if(x+y<=n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
