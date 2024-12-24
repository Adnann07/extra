
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        int j=0;
        while(j)
        {
            if(v[i]+j==v[i+1])

            {
                cout<<j<<endl;
                break;
            }
            j++;
        }


    }



}
