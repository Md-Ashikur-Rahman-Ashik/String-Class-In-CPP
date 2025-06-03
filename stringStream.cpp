#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString;
    getline(cin, ourString);
    cout << ourString;

    stringstream ss(ourString);
    string word;

    ss >> word;
    cout << word;

    return 0;
}