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
int main()
{
    fast();
    string day;
    cin >> day;
    if (day == "Saturday")
        cout << 6;
    else if (day == "Sunday")
        cout << 5;
    else if (day == "Monday")
        cout << 4;
    else if (day == "Tuesday")
        cout << 3;
    else if (day == "Wednesday")
        cout << 2;
    else if (day == "Thursday")
        cout << 1;
    else if (day == "Friday")
        cout << 0;
}