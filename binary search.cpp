#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    int flag=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            cout<<"yes got it and the index is "<<mid;
            flag=1;
            break;
        }
        else if(k>a[mid])low=mid+1;
        else if(k<a[mid])high=mid-1;
    }
    if(flag==0)
    {
        cout<<"no";
    }
    return 0;
}
