#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string myString;
    string reverseString;

    cout << "kirjoita jotain ";
    cin >> myString;

    reverseString = myString;
    reverse(reverseString.begin(), reverseString.end());

    if (myString == reverseString)
        cout << "on palindromi" << endl;
    else
        cout << "ei ole palindromi" << endl;

    return 0;
}
