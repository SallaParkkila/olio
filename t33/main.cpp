#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char c;
    ofstream tiedosto;
    int lkm=0;
    tiedosto.open("teksti2.txt");
    while ((c=cin.get())!=EOF){
        tiedosto << c;
        lkm++;
    }
    tiedosto.close();
    cout << "Kirjoitettiin " << lkm << " merkkia." << endl;
    return 0;
}