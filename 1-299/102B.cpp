#include<iostream>
using namespace std;
long long int func(long long int n)
{
    long long int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main()
{

    long long int m,n,t,b,c,d,i,j,k,x,y,z,ans,cnt=1,sum=0;
    string s,s1;
    cin>>s;
    if(s.size()!=1)
    {
        for(i=0; i<s.size(); i++)
        {
            sum+=(s[i]-'0');
        }

        while(sum>=10)
        {
            ans=sum;
            sum=func(ans);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    else
        cout<<"0"<<endl;


    return 0;}