#include <iostream>
#define pi 3.1415926535
using namespace std;

class Muoto
{
    protected:
        float sade;
        float sade2;
  public:
  float getsade(){
      return sade;
  }
  float getsade2(){
      return sade2;
  }
  Muoto(){
    cout << "Kantaluokka" << endl;
  }
  void show()
  {
    cout << "Muodot" << endl;
  }
  ~Muoto(){}
};

class Ellipsi : public Muoto
{
public:
  Ellipsi(){
      sade=8;
      sade2=2;
  }
  void show()
  {
    cout << "Soikea" << endl;
  }
  ~Ellipsi(){
  }
};

class Ympyra : public Muoto
{
public:
  Ympyra(){
      sade=9;
      sade2=7;
  }
  void show()
  {
    cout << "Pyorea" << endl;
  }
  ~Ympyra(){}
};

int main()
{
  Muoto *a= new Muoto;
  Ellipsi *c= new Ellipsi;
  Ympyra *d= new Ympyra;
  a->show();
  d->show();
  c->show();
    cout << "ellipsin sade on " << c->getsade() <<" "<< "ellipsin pita-ala on " << pi*c->getsade()*c->getsade2() <<endl;
    cout << "ympyran sade on " << d->getsade() << " "<< "ympyran pinta-ala on " << pi*d->getsade() << endl;

  return 0;
}