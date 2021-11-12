#include <bits/stdc++.h>
using namespace std;
string find_duplicates(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            return "YES";
    }
    return "NO";
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << find_duplicates(arr) << endl;
    }

    return 0;
}
