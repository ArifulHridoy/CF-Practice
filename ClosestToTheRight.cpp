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
        int st=0, ed=n;
        while(st<ed)
        {
            int mid=st+(ed-st)/2;

            if(arr[mid]>=key) ed=mid;
            else st=mid+1;
        }
        cout<<ed+1<<endl;
    }
    return 0;
}

