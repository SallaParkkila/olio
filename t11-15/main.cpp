#include <iostream>
using namespace std;

class Suorakulmio{
    double leveys,korkeus,W,H,W2,H2;
public:
    Suorakulmio(){
        //t12
        W=0;
        H=0;
        W2=0;
        H2=0;

    }
    //t13
    Suorakulmio(double W,double H){
        W=leveys;
        H=korkeus;
    }
    Suorakulmio(const Suorakulmio &s){
        W=s.W;
        H=s.H;
    }

    //t11
    void setW (double leveys){
        W=leveys;
    }
    void setH (double korkeus){
        H=korkeus;
    }
    double getW() const{
        return W;
    }
    double getH() const{
        return H;
    }

    void tulosta(){
        cout << "leveys: " << W << " " << "korkeus: " << H << " " << "pinta-ala: " << area() << endl;
    }
    //t14
    double area() const{
        double area=W*H;
        return area;
    }
    
    // t15
    int compare(Suorakulmio suorak2) const{
        double suorak1 = this->area();
        if (suorak1>suorak2.area())
        return 1;
        if (suorak1==suorak2.area())
        return 0;
        if (suorak1<suorak2.area())
        return -1;
    }

};

int main () {
    Suorakulmio suorak1;
    Suorakulmio suorak2;
    double W, H, W2, H2;
    suorak1.tulosta();
    suorak2.tulosta();
    cout << "syota leveys ja korkeus: ";
    cin >> W >> H;
    cout << "syota toinen leveys ja korkeus: ";
    cin >> W2 >> H2;
    suorak1.setW(W);
    suorak1.setH(H);
    suorak2.setW(W2);
    suorak2.setH(H2);
    suorak1.tulosta();
    suorak2.tulosta();
    cout << "vertailu: " << suorak1.compare(suorak2);
    return 0;
}