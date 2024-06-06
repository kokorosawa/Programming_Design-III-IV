#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    while (cin >> n)
    {
        vector<int> v(1000, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.begin() + n);
        int mid1 = v[n / 2];
        int mid2 = v[(n - 1)/ 2];
        int same = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == mid1 || v[i] == mid2){
                same++;
            }
        }
        cout << mid2 << " " << same << " " << mid1 - mid2 + 1 << endl;
    }
}