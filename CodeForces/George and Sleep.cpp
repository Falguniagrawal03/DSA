#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int sh =(s[0]-'0')*10+(s[1]-'0'); //at '0' will help to multiply string with number snd print the asky value
    int sm =(s[3]-'0')*10+(s[4]-'0');
    int th =(t[0]-'0')*10+(t[1]-'0');
    int tm =(t[3]-'0')*10+(t[4]-'0');
   
    int current = sh*60+sm;
    int sleep = th*60+tm;

    int x = current-sleep;

    if(x<0)
    {
        x +=1440;
    }
    int h = x/60;
    int m = x%60;

    if(h<10) cout<<"0";
    cout<<h<<":";
    if(m<10) cout<<"0";
    cout<<m;  
    return 0;
}
