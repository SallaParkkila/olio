#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Generator{
    Generator():arvo(1){}
    int operator()(){return arvo++;}
    int arvo;
};

int main()
{
    vector<int>vektori(100);
    generate(vektori.begin(),vektori.end(),Generator());
    vector<int>::const_iterator it,loppu=vektori.end();
    for(it=vektori.begin();it !=loppu;++it){
        cout << *it << endl;
    }
    return 0;
}