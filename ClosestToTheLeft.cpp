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
        int low=0, high=n-1, ans=n;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>key)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}


