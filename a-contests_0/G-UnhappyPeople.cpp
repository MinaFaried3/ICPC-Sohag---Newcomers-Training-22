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

    long long rooms, people;

    cin >> people >> rooms;

    long long unhappyRooms = people % rooms; // عدد الاوض اللى فيها ناس كتير
    long long equation = people / rooms;            // عدد الافراد المشترك ف كل الاوض

    long long unhappyPeople = (equation + 1) * unhappyRooms;

    cout << unhappyPeople;
}
