#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int find_lower(vector<int>& v, int x) {
    int l=-1, r=v.size();
    while (r>l+1)
    {
        int m=(l+r)/2;
        if(v[m]>x) r=m;
        else l=m;
    }
    return l;
}
int find_upper(vector<int>& v, int x) {
    int l=-1, r=v.size();
    while(r>l+1)
    {
        int m=(l+r)/2;
        if (v[m]<x) l=m;
        else r=m;
    }
    return r;
}

int main(void) 
{
    int n;
    cin>>n;

    vector<int> v(n);
    for (auto& x : v) {
        cin>>x;
    }

    sort(v.begin(),v.end());

    int k;
    cin>>k;

    int l,r;
    while(k--)
    {
        cin >>l>>r;
        int a=find_upper(v,l);
        int b=find_lower(v,r);
        cout << b-a+1;
        if (k) cout<<" ";
    }
    cout<<endl;
    return 0;
}
