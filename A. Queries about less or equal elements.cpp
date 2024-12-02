#include <iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<m; j++)
    {
        cin>>b[j];
    }
    sort(a,a+n);
    for(int j=0; j<m; j++)
    {
        ll l=0,r=n-1;
        ll mid;
        ll ans=-1;


        while(l<=r)
        {
            ll f=0;
            mid=(l+r)/2;
            if(a[mid]<=b[j])
            {
                ans=mid;
                l=mid+1;

            }
            else
            {
                r=mid-1;
            }

        }
        cout<<ans+1<<" ";
    }

    cout<<endl;
    return 0;
}
