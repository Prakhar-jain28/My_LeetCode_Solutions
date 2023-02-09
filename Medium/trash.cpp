#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define imax INT_MAX
#define imin INT_MIN
#define floop(n) for (int i = 0; i < n; i++)

const ll mod = 1e9 + 7;

int32_t main()
{

    unordered_map<string, int> map;
    map["ab"] = 3;
    map["abc"] = 4;
    map["abd"] = 5;

    for (auto it : map)
        cout << it.first;

    return 0;
}
