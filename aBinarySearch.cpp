#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

        while(k--)
        {
            int key;
            cin>>key;

    int l=0, mid=0, r=n-1, c=0;
     while(l<=r)
    {
        mid=l+(r-l)/2;

        if(key==arr[mid])
        {
            c=1;
            break;
        }
        else if(key<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    if(c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        }
    return 0;
}

