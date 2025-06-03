#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString;
    getline(cin, ourString);
    cout << ourString << endl;

    stringstream ss(ourString);
    string word;

    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}