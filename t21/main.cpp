#include <bits/stdc++.h> 
using namespace std; 

void reverseStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
} 

int main() 
{ 
    string str,str2;
    cout << "kirjoita jotakin" << endl;
    cin >> str;
    str=str2;
    reverseStr(str);
    if (str2==str){
        cout << "on palindromi" << endl;
    }
    else{
        cout << "ei ole palindromi" << endl;
    }
    return 0; 
}