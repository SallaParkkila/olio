#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main() {
    int a=100,b=50;
    cout <<"arvo a= "<< a <<endl;
    cout <<"arvo b= "<< b <<endl;
    swap(a,b);
    cout <<" a= "<< a <<" b= "<< b <<endl;

    float x=34.28,y=89.55;
    cout <<"arvo x= "<< x <<endl;
    cout <<"arvo y= "<< y <<endl;
    swap(x,y);
    cout <<" x= "<< x <<" y= "<< y <<endl;

}
