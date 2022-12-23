#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <stdio.h>
#include <assert.h>
#include <memory.h>
#include <bitset>
using namespace std;

#define lol long long int
#define endl '\n'
#define sz(v) ((int)((v).size()))
#define loop0(n) for (size_t i = 0; i < n; i++)
#define loop(i, n) for (int i = 0; i < (int)(n); ++i)
#define loopSz(i, v) for (int i = 0; i < sz(v); ++i)
#define BREAK cout << "--------------------------------------------------------------------" << endl
#define LABEL(i, title) cout << " " << i << " - " << title << " :-" << endl
#define full(arr, val) memset(arr, val, sizeof(arr) - 1)

void mino()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    mino();
    const int size = 100001;
    int frequency[size]{0}, visited[size]{0};

    int count;
    cin >> count;
    int index, value;
    for (int i = 0; i < count; i++)
    {

        cin >> index >> value;

        frequency[index] = value;
        visited[index] = 1;
    }

    lol sum = 0;
    cin >> count;
    bool valid = true;
    for (size_t i = 0; i < count; i++)
    {
        cin >> index;

        if (!visited[index] && valid)
        {
            valid = false;
            continue;
        }

        sum += frequency[index];
    }

    if (valid)
    {
        cout << "YES" << endl
             << sum;
    }
    else
    {
        cout << "NO";
    }
}