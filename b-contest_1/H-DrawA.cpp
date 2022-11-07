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

int main()
{
    fast();
    int size;
    cin >> size;
    int sideSpace = size - 1;
    int innerSpace = -1;

    for (int i = 1; i <= size; i++)
    {

        for (int s = 1; s <= sideSpace; s++) // side space
            cout << " ";

        if (i == 1)
            cout << "^";
        else
        {
            cout << "/";
            for (int x = 1; x <= innerSpace; x++)
            {
                if (i == (size / 2) + 1)
                    cout << "-";
                else
                    cout << " ";
            }

            cout << "\\";
        }

        cout << endl;
        sideSpace--;
        innerSpace += 2;
    }
}