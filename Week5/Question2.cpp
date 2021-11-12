#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, int n, int ele)
{
    if (ele < arr[0] || ele > arr[n - 1])
    {
        cout << "No pairs exist\n";
        return;
    }
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] == ele)
        {
            cout << arr[l] << " " << arr[r] << endl;
            return;
        }
        if (arr[l] + arr[r] < ele)
            l++;
        else
            r--;
    }
    cout<<"No pairs exist\n";
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int ele;
    while (t--)
    {
        cin >> ele;
        solve(arr, n, ele);
    }

    return 0;
}
