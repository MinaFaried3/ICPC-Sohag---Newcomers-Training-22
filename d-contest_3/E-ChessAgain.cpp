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

int dirR[4]{-1, 1, -1, 1};
int dirC[4]{-1, -1, 1, 1};

int main()
{
    mino();
    const int size = 8;
    char board[size][size];

    int queenRow, queenCol, kingRow, kingCol;

    for (int i = 0; i < size; i++)
        for (int x = 0; x < size; x++)
        {
            cin >> board[i][x];

            if (board[i][x] == 'Q')
            {
                queenRow = i;
                queenCol = x;
            }
            else if (board[i][x] == 'K')
            {
                kingRow = i;
                kingCol = x;
            }
        }

    int currRow = queenRow;
    int currCol = queenCol;

    int count = 6;
    for (int x = 1; x <= count; x++)
    {
        for (int i = 0; i < 4; i++)
        {
            int rIdx = currRow + (dirR[i] * x);
            int cIdx = currCol + (dirC[i] * x);

            if (rIdx == kingRow && cIdx == kingCol)
            {
                cout << "Check";
                return 0;
            }
        }
    }

    bool check = (queenRow == kingRow) || (queenCol == kingCol);
    if (check)
        cout << "Check";
    else
        cout << "Not check";
}

/*
........
......K.
.......Q
........
........
........
........
........
*/
