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
using namespace std;
#define lol long long int
#define endl '\n'
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}

int main()
{
    fast();
    int a, b, x;
    cin >> a >> b >> x;
    if (a > x || x > (a + b))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    } // a<=x && x<=(a+b)
    return 0;
}