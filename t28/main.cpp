#include <iostream>
#include <string>
using namespace std;

class suorakulmio{
private:
    double l,p;
    protected:
        double leveys,pituus;
public:
    suorakulmio(){
        l=0;
        p=0;
    }
    suorakulmio(double l,double p){
        l=leveys;
        p=pituus;
    }
    void setLeveys(double leveys){
        l=leveys;
    }
    void setPituus(double pituus){
        p=pituus;
    }
    double getLeveys(double l){
        return l;
    }
    double getPituus(double p){
        return p;
    }
    void tulosta(){
        cout << "leveys: " << l << " pituus: " << p << endl;
        cout << "pinta-ala: " << l*p << endl;
    }
};

class nelio : public suorakulmio{
public:
    nelio(){}
    void show(){
    cout << "Nelio" << endl;
    }
    ~nelio(){}
};


int main(){
    suorakulmio sk;
    nelio nl;
    float leveys=10,pituus=15;
    sk.setLeveys(leveys);sk.setPituus(pituus);
    sk.tulosta();
    nl.show();
    return 0;
}