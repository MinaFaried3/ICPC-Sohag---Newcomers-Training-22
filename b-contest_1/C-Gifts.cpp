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
    cin.tie(0);
    cout.sync_with_stdio(0);
}

int main()
{
    fast();

    long long giftsNum, coins, gift;
    cin >> giftsNum >> coins;
    long long min_ = LLONG_MAX;
    while (giftsNum--)
    {
        cin >> gift;

        if (min_ >= gift)
            min_ = gift;
    }

    cout << (coins / min_);
}