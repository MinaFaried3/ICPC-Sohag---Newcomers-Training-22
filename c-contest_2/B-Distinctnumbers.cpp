#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <tuple>
#include <cmath>
#include <cstring>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <climits>
using namespace std;
#define lol long long int
#define endl '\n'
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.sync_with_stdio(NULL);
}

void solve1()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && a == c)
            cout << 1 << endl;
        else if (a != b && a != c && b != c)
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
}

void solve2()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && a == c)
            cout << 1 << endl;
        else if (a == b || a == c || b == c)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
}
int main()
{
    fast();
    solve2();
}