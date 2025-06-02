#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString = "Hello";
    // int stringSize = ourString.size();
    // for (int i = 0; i < stringSize; i++)
    // {
    //     /* code */
    //     cout << ourString[i] << " ";
    // }

    for (auto it = ourString.begin(); it < ourString.end(); it++)
    {
        /* code */
        cout << *it << " ";
    }

    return 0;
}