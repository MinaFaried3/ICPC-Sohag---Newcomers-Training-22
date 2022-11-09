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
    int minutes;
    cin >> minutes;

    int initHour = 19;
    int hours = minutes / 60;
    initHour += hours;
    minutes %= 60;

    cout << initHour << ':';

    if (minutes < 10)
        cout << '0' << minutes;
    else
        cout << minutes;
}