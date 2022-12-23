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

    int cubesNum;
    cin >> cubesNum;

    int *cubes = new int[cubesNum];

    int threeCubesNum = 0, normalCubesNum = 0;

    for (size_t i = 0; i < cubesNum; i++)
    {
        cin >> cubes[i];
        threeCubesNum += (cubes[i] % 3 == 0);
        normalCubesNum += (cubes[i] % 3 != 0);
    }

    int *threeCubes = new int[threeCubesNum];
    int *normalCubes = new int[normalCubesNum];

    int threeIdx = 0, normalIdx = 0;

    for (size_t i = 0; i < cubesNum; i++)
    {
        if (cubes[i] % 3 == 0)
        {
            threeCubes[threeIdx++] = cubes[i];
        }
        else
        {
            normalCubes[normalIdx++] = cubes[i];
        }
    }

    sort(threeCubes, threeCubes + threeCubesNum);
    sort(normalCubes, normalCubes + normalCubesNum);

    for (size_t i = 0; i < normalCubesNum; i++)
        cout << normalCubes[i] << " ";
    for (size_t i = 0; i < threeCubesNum; i++)
        cout << threeCubes[i] << " ";
}