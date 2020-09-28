#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
#include <numeric>
using namespace std;

void lottery(int arr[], int n) { 

    unsigned seed = 0; 

    shuffle(arr, arr + n, 
            default_random_engine(seed)); 

    for (int i = 0; i < 7; ++i) 
        cout << arr[i] << " "; 
        cout <<" lottonumerot";
    cout<<endl;
    for (int i = 7; i < 10; ++i)
        cout << arr[i] << " ";
        cout<<" lisanumerot"; 
    cout << endl; 
} 

int main(){
int v[39] ;
std::iota (std::begin(v), std::end(v), 1);
int n = sizeof(v) / sizeof(v[0]);
lottery(v, n);
}