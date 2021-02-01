#include <iostream>
#include <cstring>
using namespace std;

/*

Да се напише класа Datum во која ќе се чуваат ден, месец и година (цели броеви).
Да се напише класа Vraboten во која се чува име на вработениот (не повеќе од20 знаци), плата и датум на раѓање
(објект од класата Datum).
Да се напишат две функции кои како аргументи примаат низа од вработени и големина на низата. 
Едната функција го враќа вработениот со најголема плата,а другата функција го враќа најмладиот вработен во фирмата.
Во главната програма потребно е да се испечатат на екран податоците за најмалдиот и најплатениот вработен. 
Печатењето на вработениот да биде реализирано со посебна функција print()во рамките на класата Vraboten.
*/



class Datum{
private:
    int den;
    int mesec;
    int godina;
public:
    Datum(){}
    Datum(int new_den, int new_mesec, int new_godina){
    this->den=new_den;
    this->mesec=new_mesec;
    this->godina=new_godina;
    }
    Datum(Datum &d){
     this->den=d.den;
    this->mesec=d.mesec;
    this->godina=d.godina;

    }
int get_den(){
return den;
}
int get_mesec(){
return mesec;
}
int get_godina(){
return godina;
}

    ~Datum(){}
};



class Vraboten{
private:
    char ime[20];
    int plata;
    Datum datum_ragjanje;
public:
    Vraboten (){}
    Vraboten(char new_ime[], int new_plata, Datum new_datum){
    strcpy(this->ime,new_ime);
    this->plata=new_plata;
    this->datum_ragjanje=new_datum;
    }

    Datum get_datum(){
    return datum_ragjanje;
    }


    Vraboten(Vraboten &v){
    strcpy(this->ime,v.ime);
    this->plata=v.plata;
    this->datum_ragjanje=v.datum_ragjanje;
    }


    void print(){
    cout<<"Najplateniot vraboten e "<<ime<<" so plata "<<plata<<endl;
    cout<<"Najmladiot vraboten e "<<ime<<" so data na ragjanje: "<<datum_ragjanje.get_den()<<" "<<datum_ragjanje.get_mesec()<<" "<<datum_ragjanje.get_godina()<<endl;

    }
    int get_plata(){
    return plata;
    }
    ~Vraboten(){}
};


Vraboten najgolema_plata(Vraboten v[], int n){
Vraboten najgolema_plata=v[0];

for(int i=1;i<n;i++){
    if(v[i].get_plata()>najgolema_plata.get_plata()){
        najgolema_plata=v[i];
    }
}

    return najgolema_plata;
}


Vraboten najmlad_vraboten(Vraboten v[], int n){
Vraboten najmlad=v[0];

for(int i=1;i<n;i++){
    if(v[i].get_datum().get_godina()<najmlad.get_datum().get_godina()){
        if(v[i].get_datum().get_mesec()<najmlad.get_datum().get_mesec()){
            if(v[i].get_datum().get_den()<najmlad.get_datum().get_den()){
                najmlad=v[i];
            }
        }
    }
}
return najmlad;
}



int main(){
Datum d1(1,1,1980);
Datum d2(1,2,1983);
Datum d3(11,12,1984);
Vraboten v[3];
Vraboten v1("Marjan",40000,d1);
Vraboten v2("Stefan",30000,d2);
Vraboten v3("Marko",20000,d3);
v[0]=v1;
v[1]=v2;
v[2]=v3;
najmlad_vraboten(v,3).print();
najgolema_plata(v,3).print();




return 0;
}
