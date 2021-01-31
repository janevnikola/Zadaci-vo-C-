#include <iostream>
#include <cmath>
using namespace std;

/*
Да се напише класа за опишување на геометриско тело триаголник.
Во класатада се напишат методи за пресметување на плоштината и периметарот на триаголникот.

Потоа да се напише главна програма во која ќе се инстнацира еден објект од оваа класа со вредности
за страните кои претходно ќе се прочитаат од стандарден влез. На овој објект да се повикат соодветните
методи за пресметување на плоштината и периметарот.
*/

class Triagolnik{
private:
    float stranaA;
    float stranaB;
    float stranaC;
public:
    Triagolnik(){}
    Triagolnik(float new_stranaA, float new_stranaB, float new_stranaC){
    this->stranaA=new_stranaA;
    this->stranaB=new_stranaB;
    this->stranaC=new_stranaC;
    }

    void presmetaj_plostina(){
    float s=(stranaA+stranaB+stranaC)/2;
    float plostina=sqrt(s*(s-stranaA)*(s-stranaB)*(s-stranaC));
    cout<<"Plostinata iznesuva "<<plostina;
    }

    void presmetaj_perimetar(){

    cout<<"Perimetarot iznesuva: "<<stranaA+stranaB+stranaC<<endl;
    }
    ~Triagolnik(){}
};
int main(){
    cout<<"Vnesete gi dolzinite na stranite na triagolnikot: ";
    int a,b,c;
    cin>>a>>b>>c;
Triagolnik triagolnik(a,b,c);
triagolnik.presmetaj_perimetar();
triagolnik.presmetaj_plostina();


return 0;
}
