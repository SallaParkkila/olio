#include <iostream>
#include <cmath>

using namespace std;

class kompleksiluku{
    private:
        double Re,r;//reaaliosa
        double Im,i;//imaginääriosa
    public:
        void setReal(double r){ 
            Re = r;
        }
        void setImaginary(double i){
            Im = i;
        }
        void getReal(double r);
        void getImaginary(double i);
        kompleksiluku(){ 
            Re=Im=r=i=0;
        } 
        double abs(){ 
            return(sqrt(Re*Re+Im*Im));
        }
        double angleRad(){
            return(atan(Im/Re));
        }
        double angleDeg(){
            return(atan(Im/Re)*180/3.141592);
        }
};

int main(){
    kompleksiluku z;
    double num1,num2;
    char valinta;
    cout << "anna reaali ja imginaariosat" << endl;
    cin >> num1 >> num2;
    z.setReal(num1);z.setImaginary(num2);
    valikko1:
    cout << "1 = itseisarvo, 2 = kulma radiaaneina, 3 = kulma asteina, 0 = lopeta" << endl;
    cin >> valinta;
    switch(valinta){
        case '1':
            cout << "Itseisarvo = " << z.abs() << endl;
            break;
        case '2':
            cout << "Kulma radiaaneina = " << z.angleRad() << endl;
            break;
        case '3':
            cout << "Kulma asteina = " << z.angleDeg() << endl;
            break;
        case '0':
            goto end;
        default:
            cout << "stop" << endl;
            goto valikko1;
    }
    end:
    return 0;
}