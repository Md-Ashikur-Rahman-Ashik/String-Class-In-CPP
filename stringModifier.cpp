#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString = "Hello World ";
    // string secondString = "Hi";
    // ourString += secondString;
    // ourString.push_back('A');
    // ourString.erase(5);
    ourString.replace(6, 5, "Bangladesh");

    cout << ourString;

    return 0;
}