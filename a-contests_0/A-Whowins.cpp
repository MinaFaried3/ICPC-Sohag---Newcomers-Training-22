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
    long long player1, player2;
    cin >> player1 >> player2;
    if (player1 > player2)
    {
        cout << "Omar\n";
    }
    else if (player1 < player2)
    {
        cout << "Anas\n";
    }
    else if (player1 == player2)
    {
        cout << "Tie\n";
    }
}