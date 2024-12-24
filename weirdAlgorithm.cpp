#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;

    while(n)
    {
         cout<<n<<" ";
        if(n==1) break;
        if(n%2==0)
    {
        n/=2;
    }
    else if(n%2!=0) n=(n*3)+1;


    }
}
