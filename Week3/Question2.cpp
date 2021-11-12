#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);
    int t, n, comp, swaps;
    cin >> t;
    while (t--)
    {
        comp = swaps = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                comp++;
                if (arr[i] > arr[j])
                {
                    swap(arr[i], arr[j]);
                    swaps++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\ncomparisons = " << comp;
        cout << "\nswaps = " << swaps << endl;
    }

    return 0;
}
