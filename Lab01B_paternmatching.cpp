#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text, pattern;

    cout << "Enter Text: ";
    cin >> text;

    cout << "Enter Pattern: ";
    cin >> pattern;

    int n = text.length();
    int m = pattern.length();

    cout << "Pattern found at index: ";

    for (int i = 0; i <= n - m; i++)
    {
        int j;

        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m)
            cout << i << " ";
    }

    return 0;
}