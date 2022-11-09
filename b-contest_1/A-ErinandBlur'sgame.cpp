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
    string key;
    cin >> key;
    if (key == "A")
        cout << "<" << endl;
    else if (key == "S")
        cout << "v" << endl;
    else if (key == "W")
        cout << "^" << endl;
    else if (key == "D")
        cout << ">" << endl;
}