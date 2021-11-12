#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    int t, n, counts;
    cin >> t;
    while (t--)
    {
        cin >> n;
        counts = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (binary_search(arr.begin() + j, arr.end(), arr[i] + arr[j]))
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[i] + arr[j] << endl;
                    counts++;
                }
        if (counts == 0)
            cout << "No Sequence Found\n";
    }

    return 0;
}
