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

    long long num, times;
    cin >> num >> times;

    while (times--)
    {
        int digit = num % 10;

        if (digit == 0)
            num /= 10;
        else
            num--;
    }
    cout << num;
}