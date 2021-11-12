#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, temp, shifts, comp;
    cin >> t;
    while (t--)
    {
        shifts = comp = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 1; i < n; i++)
        {
            int j = i;
            comp++;
            while ((j > 0) && (arr[j - 1] > arr[j]))
            {
                if (arr[j - 1] > arr[j])
                    comp++;
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;

                shifts++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i];
        cout << "\ncomparisons  = " << comp;
        cout << "\nshifts = " << shifts;
    }
    return 0;
}
