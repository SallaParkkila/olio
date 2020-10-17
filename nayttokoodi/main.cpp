#include <iostream>
#include <string>
#include <fstream> //Tiedoston lukeminen ja kirjoittaminen

using namespace std;

class KompleksiluvutVirtuaalinen{ //Virtuaaliluokka
    public:
        virtual string Virtuaalinen()=0; //Julkinen, kaikilla oikeus käyttää
};  //;!

class Kompleksiluvut:public KompleksiluvutVirtuaalinen //Johdettu luokka, kompleksiluku=reaaliosa ja imaginääriosa
{
    private: //Yksityinen, vain luokan omat jäsenfunktiot ja määritellyt ystävät (kapselointi)
      float reaali;
      float imaginaari;

    public: //Julkinen tämäkin, kaikilla oikeus käyttää
        string Virtuaalinen(){
            string Teksti="Tekstia";
            return Teksti;
        }
       Kompleksiluvut(): reaali(0), imaginaari(0){ } //määritelty nollaksi
       void input()
    //input ottaa sisään syötetyt tiedot
       {
           cout << "Syota 1 reaali- ja 1 imaginaariluku eroteltuna valilynnilla "; //kysyy käyttäjältä luvut ja ottaa sisään cin
           cin >> reaali;
           cin >> imaginaari;
       }

       //Operaattorin ylikuormaus
       Kompleksiluvut operator - (Kompleksiluvut k2)
       {
           Kompleksiluvut temp;
           temp.reaali = reaali - k2.reaali; //tekee laskutoimituksen reaali 1.-reaali 2.
           temp.imaginaari = imaginaari - k2.imaginaari; //sama kuin yllä, mutta imaginääriluvuille

           return temp; //palauttaa temp
       }

       void output() //output syöttää ulos tiedot
       {
           if(imaginaari < 0) //Annetaan ehto imaginäärin suurudesta
               cout << "Kompleksiluku: "<< reaali << imaginaari << "i\n"; //Tulostus näin....
           else
               cout << "Kompleksiluku: " << reaali << "+" << imaginaari << "i\n"; //...tai näin jos imaginääri on vähemmän kuin 0
       }
}; //;!

int main() //Main funktio, jossa kompleksiluvut käyttää julkisia jäseniä (public)
{
    Kompleksiluvut k1, k2, tulos;

    cout<<"1. Kompleksiluku:\n"; //tulostuu näytölle ennen void inputin tulostusta
    k1.input(); //k1 sisään

    cout<<"2. Kompleksiluku: \n"; //tulostuu näytölle ennen void inputin tulostusta
    k2.input(); //k2 sisään

    tulos = k1 - k2;
    tulos.output(); //Tulos ulos

    ofstream teksti;//Tiedostoon kirjoitus
    Kompleksiluvut kl;
    teksti.open("tekstitiedosto.txt"); //Luodaan tekstitiedosto
    teksti << kl.Virtuaalinen() << " tiedostoon" << endl; //Tulostetaan tiedostoon "Tekstia tiedostoon"
    teksti.close(); //Lopetetaan tekstin kirjoittaminen
    return 0;
}