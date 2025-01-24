#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int N, int key)
{
    int low=0,mid;
    int high=N-1;
    while(low<high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]<key) low=mid+1;
        else high=mid;
    }
        return low;
}
int main()
{
    int n,i,m,j,cnt=0,ans,x,sum=0; cin>>n;
    int a[n],c[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        c[i]=sum;
    }
    cin>>m; int b[m];
    for(i=0; i<m; i++) cin>>b[i];
    for(j=0; j<m; j++) cout<<lowerBound(c,n,b[j])+1<<endl;

    return 0;
}
