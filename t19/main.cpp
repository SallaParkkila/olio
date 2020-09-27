#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

bool parillinen(int i){
    return((i%2)==0);
}
void List(list <int> l)
{
    cout << "0 syotetty:" << endl;
    list <int> :: iterator i;
    for(i = l.begin(); i != l.end(); i++)
    cout << "- " << *i << endl;
}

int main()
{

    int temp=1;
    list <int> numbers;
    while(temp != 0)
    {
        cout << "Syota numero, nolla lopettaa" << endl;
        cin >> temp;
        if(temp != 0)
        numbers.push_back(temp);
    }
    List(numbers);
    int myCount = count_if(numbers.begin(), numbers.end(), parillinen);

    cout << "Parillisia " << myCount << endl;

    return 0;
}