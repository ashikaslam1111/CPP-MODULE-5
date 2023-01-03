#include<bits/stdc++.h>
using namespace std;
class arrayy
{
private:
    int* a;
    int cap;
    int sz;
    void increase_capa()
    {
        cap=cap*2;
        int* temp=new int[cap];
        for(int i=0; i<sz; i++)
        {
            temp[i]=a[i];
        }
        delete []a;
        a=temp;
    }
public:
    arrayy()
    {
        a=new int[1];
        cap=1;
        sz=0;
    }
    void push(int x)
    {
        if(cap==sz)
        {
            increase_capa();
        }
        a[sz]=x;
        sz++;
    }
    void insertele(int z,int pos)
    {
        if(cap==sz)
        {
            increase_capa();
        }
        for(int i=sz-1; i>=pos; i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=z;
        sz++;
    }
    void prin()
    {
        for(int i=0; i<sz; i++)
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    arrayy ar;
    ar.push(24);
    ar.push(84);
    ar.insertele(22,1);
    ar.prin();
    return 0;
}
