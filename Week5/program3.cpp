#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int arr[a], brr[b];
    for (int i = 0; i < a; i++)
        cin >> arr[i];
    for (int i = 0; i < b; i++)
        cin >> brr[i];
    int p1 = 0, p2 = 0;
    while (p1 < a && p2 < b)
    {
        if (arr[p1] == brr[p2])
        {
            cout << arr[p1] << " ";
            p1++;
            p2++;
        }
        else if (arr[p1] < brr[p2])
            p1++;
        else
            p2++;
    }
    return 0;
}
