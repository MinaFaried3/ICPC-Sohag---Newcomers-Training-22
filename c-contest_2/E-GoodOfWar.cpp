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
void solve1()
{
    int size;
    cin >> size;
    lol *arr1 = new lol[size];
    lol *arr2 = new lol[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    sort(arr2, arr2 + size);

    for (size_t i = 0; i < size; i++)
    {
        cout << (find(arr2, arr2 + size, arr1[i]) - arr2) << " ";
    }
}
void solve2()
{
    int size;
    cin >> size;
    lol *arr = new lol[size];

    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        int count = 0;

        for (size_t x = 0; x < size; x++)
        {
            if (i == x)
                continue;

            if (arr[i] > arr[x])
                count++;
        }

        cout << count << " ";
    }
}
int main()
{
    fast();
    solve1();
}