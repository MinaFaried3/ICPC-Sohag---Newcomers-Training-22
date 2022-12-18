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
lol freq[1000001]{0};
int main()
{
    mino();
    int size;
    cin >> size;

    lol *arr = new lol[size];
    lol maxFreq = 0;
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
        maxFreq = max(maxFreq, freq[arr[i]]);
    }

    cout << size - maxFreq;
}