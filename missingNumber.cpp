#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin >> n;

    long long total=(long long)n*(n+1)/2;
    long long sum=0;
    for(int i=0;i<n-1;i++)
    {
        int n;
        cin>>n;
         sum+=n;
    }
    cout<<total-sum<<endl;
}

