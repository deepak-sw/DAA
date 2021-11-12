#include <bits/stdc++.h>
using namespace std;
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t, n;
    cin >> t;
    string s;
    while (t--)
    {
        vector<int> arr(26, 0);
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
            arr[(int)(s[i]) - 97]++;
        int res = arr[0];
        for (int i = 1; i < 26; i++)
            res = max(arr[i], res);
        if(res == 1){
            cout<<"No Duplicates Present\n";
            continue;
        }
        cout << res << endl;
    }
    return 0;
}
