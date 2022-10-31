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

int solution1()
{
    string str;
    cin >> str;
    char chr = str[0];
    int pos = str[1] - '0';
    if (str == "h8" || str == "h1" || str == "a8" || str == "a1")
    {
        cout << 2;
        return 0;
    }

    if (str == "h2" || str == "h7" || str == "a2" || str == "a7" || str == "b8" || str == "b1" || str == "g8" || str == "g1")
    {
        cout << 3;
        return 0;
    }

    if (((chr >= 'c' && chr <= 'f') && (pos == 1 || pos == 8)) ||
        ((chr == 'h' || chr == 'a') && (pos >= 3 && pos <= 6)) ||
        (str == "b2" || str == "g2" || str == "b7" || str == "g7"))
    {
        cout << 4;
        return 0;
    }

    if (((chr >= 'c' && chr <= 'f') && (pos == 2 || pos == 7)) ||
        ((chr == 'b' || chr == 'g') && (pos >= 3 && pos <= 6)))
    {
        cout << 6;
        return 0;
    }
    if (chr >= 'c' && chr <= 'f' && pos >= 3 && pos <= 6)
    {
        cout << 8;
        return 0;
    }
}

void solution2()
{
    char chr;
    int pos;
    cin >> chr >> pos;
    int counts = 0;

    // 2 up - left right
    if (pos + 2 <= 8)
    {

        if (chr + 1 <= 'h')
            counts++;
        if (chr - 1 >= 'a')
            counts++;
    }

    // 1 up - 2 left right
    if (pos + 1 <= 8)
    {
        if (chr + 2 <= 'h')
            counts++;
        if (chr - 2 >= 'a')
            counts++;
    }

    // 2 down - left right
    if (pos - 2 >= 1)
    {
        if (chr + 1 <= 'h')
            counts++;
        if (chr - 1 >= 'a')
            counts++;
    }

    // 2 down - left right
    if (pos - 1 >= 1)
    {
        if (chr + 2 <= 'h')
            counts++;
        if (chr - 2 >= 'a')
            counts++;
    }

    cout << counts;
}

int main()
{
    fast();
    solution2();
}