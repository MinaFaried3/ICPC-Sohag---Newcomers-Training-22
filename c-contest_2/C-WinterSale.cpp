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
    int salesNum, wantedItems;
    cin >> salesNum >> wantedItems;
    lol *arr = new lol[salesNum];
    for (size_t i = 0; i < salesNum; i++)
        cin >> arr[i];
    

    sort(arr, arr + salesNum);
    cout << arr[salesNum - wantedItems];
}