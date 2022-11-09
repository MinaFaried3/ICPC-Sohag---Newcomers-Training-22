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
int lucky(long long num)
{
    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;

        sum += digit;

        if (digit != 7 && digit != 4)
            return 0;

        num /= 10;
    }

    return sum;
}
int main()
{
    fast();
    int tests;
    cin >> tests;
    while (tests--)
    {
        long long start, end, sum = 0;
        cin >> start >> end;

        if (start > end)
            swap(start, end);

        for (long long i = start; i <= end; i++)
                sum += lucky(i);

        cout << sum << endl;
    }
}