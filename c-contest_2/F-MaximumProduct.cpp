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

    lol start1, end1, start2, end2;

    cin >> start1 >> end1 >> start2 >> end2;

    lol condition1 = start1 * start2;
    lol condition2 = start1 * end2;
    lol condition3 = end1 * start2;
    lol condition4 = end1 * end2;

    cout << max(condition1, max(condition2, max(condition3, condition4)));
}