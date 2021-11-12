#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n>>num;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int start = 0;
        int  end = n-1;
        int middle = (start+end)/2;
        while(start <= end)
        {
            if(a[middle]<num)
                start = middle+1;
            else if(a[middle]==num)
            {
                cout<<"found at location- "<<middle+1;
                break;
            }
            else
                end = middle-1;
            middle = (start+end)/2;
        }
        if(start>end)
            cout<<"Can't find the element "<<n;
        cout<<endl;
        return 0;
    }
   return 0;
}
