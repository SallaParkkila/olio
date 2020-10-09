#include <iostream>
#define pi 3.141
using namespace std;

class muoto{
    public:
        double a,b;
        virtual double area()=0;
};

class suorakulmio : public muoto{
public:
    suorakulmio(){
        a=b=0;
    }
    suorakulmio(double W, double L){
        a=W;
        b=L;
        cout << "suorakulmio jonka sivut: leveys = " << a << ", korkeus = " << b << endl;
    }
    suorakulmio(const suorakulmio &t){
        a=t.a;
        b=t.b;
    }
    double area(){
        return a*b;
    }
};

class nelio : public suorakulmio{
public:
    nelio(){
        a=0;
    }
    nelio(double sivu){
        a=sivu;
        cout << "nelio jonka sivun pituus: " << a << endl;
    }
    double area(){
        return a*a;
    }
};

class ellipsi : public muoto{
public:
    ellipsi(){
        a=b=0;
    }
    ellipsi(double W, double L){
        a=W;
        b=L;
        cout << "ellipsi jonka sateet: A = " << a <<", B = " << b << endl;
    }
    double area(){
        return pi*a*b;
    }
};

class ympyra : public muoto{
    public:
    ympyra(){
        a=0;
    }
    ympyra(double sade){
        a=sade;
        cout << "ympyra jonka sade: " << a << endl;
    }
    double area(){
        return pi*a*a;
    }
};

int main(){
    ellipsi el(15,20);
    ympyra ym(15);
    nelio ne(25);
    suorakulmio sk(10,15);
    muoto*a = &el;
    muoto*b = &ym;
    muoto*c = &ne;
    muoto*d = &sk;
    cout << "ellipsin pinta-ala:     " << a->area() << endl;
    cout << "ympyran pinta-ala:      " << b->area() << endl;
    cout << "nelion pinta-ala:       " << c->area() << endl;
    cout << "suorakulmion pinta-ala: " << d->area() << endl;
    return 0;
}