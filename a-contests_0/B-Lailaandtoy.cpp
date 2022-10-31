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
    double coin1, coin2, cost;
    cin >> coin1 >> coin2 >> cost;
    if (coin1 + coin2 >= cost)
    {
        cout << "Yes\n";
    }
    else if (coin1 + coin2 < cost)
    {
        cout << "No\n";
    }
}