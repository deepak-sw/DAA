#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int lb, int ub, int ele)
{
    if (ub >= lb)
    {
        int mid = lb + (ub - lb) / 2;
        if (ele == arr[mid])
            return mid;
        if (ele > arr[mid])
            return search(arr, (mid + 1), ub, ele);
        else
            return search(arr, lb, (mid - 1), ele);
    }
    return -1;
}

int Fun(int arr[], int n, int k)
{
    int count = 0, i;
    sort(arr, arr + n);
    for (i = 0; i < n - 1; i++)
        if (search(arr, i + 1, n - 1, arr[i] + k) != -1)
            count++;

    return count;
}

int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cin >> k;
        cout << Fun(arr, n, k);
    }
    return 0;
}
