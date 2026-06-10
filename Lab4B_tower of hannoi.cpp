#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

void moveDisk(char from, char to, int disk)
{
    cout << "Move Disk "
         << disk
         << " from "
         << from
         << " to "
         << to
         << endl;
}

int main()
{
    int n;
    cin >> n;

    stack<int> src, aux, dest;

    for (int i = n; i >= 1; i--)
        src.push(i);

    int totalMoves = pow(2, n) - 1;

    cout << "Minimum Moves = "
         << totalMoves << endl;

    return 0;
}