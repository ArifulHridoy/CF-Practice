#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int a[100000];

int upperBound(int arr[], int N, int key)
{
    int low=0,mid;
    int high=N;
    while(low<high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]<=key) low=mid+1;
        else high=mid;
    }
        return low;
}


int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);
    int q; cin>>q;
    while(q--)
    {
        int coins; cin>>coins;
        cout<<upperBound(a,n,coins)<<endl;
    }
}
