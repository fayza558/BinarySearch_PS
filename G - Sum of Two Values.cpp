

#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long

using namespace std;

int main()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        ll l=i+1,r=n-1;

        while(l<=r)
        {
           ll mid =(l+r)/2;
            if(v[mid].first==x-v[i].first)
            {
               cout<<v[i].second+1<<" "<<v[mid].second+1<<endl;
               return 0 ;
            }
            else if(v[mid].first<x-v[i].first)
            {
                l=mid+1;
            }else if(v[mid].first>x-v[i].first)
            {
                r=mid-1;
            }
        }

    }
        cout<<-1<<endl;


    return 0;
}

