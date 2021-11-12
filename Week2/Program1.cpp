#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int flag=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int k=j+1;
                if(arr[i]+arr[j]==arr[k])
                {
                    flag=1;
                    cout<<"Sequence found: "<<i<<" "<<j<<" "<<k<<"\n";
                }
            }
        }
        if(flag==0)
            cout<<"Sequence not found.\n";
    }
    return 0;
}
