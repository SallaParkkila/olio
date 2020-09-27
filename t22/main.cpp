#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    vector<float> v;
    float luvut;

    cout << "syota luvut joiden keskiarvon haluat laskea (muu kuin numero lopettaa)" <<endl;
    while (cin >> luvut)
        v.push_back(luvut);

    float average = accumulate( v.begin(), v.end(), 0.0)/v.size();
    cout << "keskiarvo on " << average << endl;

    return 0;

}