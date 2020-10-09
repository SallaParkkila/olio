#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char c;
    ifstream tiedosto;
    int lkm=0;
    tiedosto.open("teksti.txt");
    while ((c=tiedosto.get())!=EOF){
        cout << c;
        lkm++;
    }
    tiedosto.close();
    cout << "Luettiin " << lkm << " merkkia."<< endl;
    return 0;
}