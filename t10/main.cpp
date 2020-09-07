#include <iostream>
using namespace std;
int strcount(char *s,char c)
{
    int count=0;
    while ((*s)!='\0')
    {
        if ((*s)==c)
        count++;
        s++;
    }
    return count;
}
int main()
{
    char s[]="olio-ohjelmointi";
    char c;
    cout << "mita merkkia haetaan?" << endl;
    cin.get(c);
    cout << "merkkeja loytyi " << strcount(s, c) << endl;
    return 0;
}