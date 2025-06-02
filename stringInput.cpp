#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    cin.ignore();

    string ourString;
    // cin >> ourString;
    getline(cin, ourString);
    cout << num << endl << ourString;

    return 0;
}