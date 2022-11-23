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
    int size;
    cin >> size;
    lol *mainArr = new lol[size];
    lol *div3Arr = new lol[size];
    lol *not3Arr = new lol[size];

    int is3Idx = 0, not3Idx = 0;

    for (size_t i = 0; i < size; i++)
    {
        cin >> mainArr[i];
        if (mainArr[i] % 3 == 0)
            div3Arr[is3Idx++] = mainArr[i];
        else
            not3Arr[not3Idx++] = mainArr[i];
    }

    sort(div3Arr, div3Arr + is3Idx);
    sort(not3Arr, not3Arr + not3Idx);

    for (size_t i = 0; i < not3Idx; i++)
        cout << not3Arr[i] << " ";

    for (size_t i = 0; i < is3Idx; i++)
        cout << div3Arr[i] << " ";
}