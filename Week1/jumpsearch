#include<bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[], int n, int x)
{

    int a = sqrt(n);
    int i = 0;
    while (arr[min(a, n) - 1] < x)
    {
        i = a;
        a += sqrt(n);
        if (i >= n)
            return -1;
    }
    while (arr[i] < x)
    {
        i++;
        if (i == min(a, n))
            return -1;
    }
    if (arr[i] == x)
        return i;

    return -1;
}

int main()
{
    int n,num;
    cin>>n>>num;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res = jumpSearch(a, n, num);
    if (res == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << res;
    cout<<endl;
    return 0;
}
