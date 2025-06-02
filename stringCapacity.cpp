#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString = "Hello World";
    // cout << ourString.size() << endl;
    // cout << ourString.max_size() << endl;
    // cout << ourString.capacity() << endl;

    // ourString.clear();

    // if (ourString.empty() == true)
    // {
    //     cout << "This string is Empty";
    // }
    // else
    // {
    //     cout << "There is value in the string";
    // }

    ourString.resize(15, '0');

    cout << ourString;

    return 0;
}