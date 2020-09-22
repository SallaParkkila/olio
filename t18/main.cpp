#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void List(list <int> l)
{
    cout << "0 syotetty:" << endl;
    list <int> :: iterator i;
    for(i = l.begin(); i != l.end(); i++)
    cout << "- " << *i << endl;
}

int main()
{
    int temp;
    list <int> numbers;
    while(temp != 0)
    {
        cout << "Syota numero:" << endl;
        cin >> temp;
        if(temp != 0)
        numbers.push_back(temp);
    }
    List(numbers);
    return 0;
}