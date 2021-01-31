#include <iostream>
using namespace std;

#include <cstring>
/*
Да се дефинира класа Momche која содржи информации за име, презиме и години.
За класата да се дефинираат конструктори, деструктор и метод за печатење на објектот
на екран во формат:
Momche: Ime
Prezime
Godini.
Да се дефинира класа Devojche со истите атрибути и методи со разлика воформатот на печатење:
Devojche:
Ime
prezime
godini.
Креирајте класа Sredba која содржи податоци за едно момче и едно девојче.
Креирајте функција print() која ги печати податоците за момчето и девојчето во следниот формат:
Sredba:
Momche:
Ime
Prezime
Godini
Devojche:
Ime
Prezime
Godini.
Напишете функција daliSiOdgovaraat() која печати "Si odgovaraat" доколку разликата на нивните години е
помала или еднаква на 5 или "Ne si odgovaraat" во спротивно.
*/
class momce{
    private:
char ime[50];
char prezime[50];
int godini;
    public:
        momce (){}
        momce(char new_ime[], char new_prezime[], int new_godini){
        strcpy(this->ime,new_ime);
        strcpy(this->prezime,new_prezime);
        this->godini=new_godini;
        }
        int get_godini(){
        return godini;
        }
void pecati(){
cout<<"Ime na momce: "<<ime<<endl;
cout<<"Prezime na momce: "<<prezime<<endl;
cout<<"Godini na momce: "<<godini<<endl;
}
~momce(){}
};


class devojce{
private:
    char ime[50];
    char prezime[50];
    int godini;
public:
    devojce(){}
    devojce(char new_ime[], char new_prezime[], int new_godini){
    strcpy(this->ime,new_ime);
    strcpy(this->prezime,new_prezime);
    this->godini=new_godini;
    }

    int get_godini(){
    return godini;
    }
    void pecati(){
    cout<<"Ime devojce: "<<ime<<endl;
    cout<<"Prezime devojce: "<<prezime<<endl;
    cout<<"Godini devojce: "<<godini<<endl;

    }

    ~devojce(){}
};

class Sredba{
private:
    momce Momce;
    devojce Devojce;

public:
    Sredba(){}
    Sredba(momce new_momce, devojce new_devojce){
    this->Momce=new_momce;
    this->Devojce=new_devojce;
    }

    void print(){
    cout<<"Sredba: "<<endl;
    Momce.pecati();
    cout<<endl;
    Devojce.pecati();
    }

void daliSiOdgovaraat(){
    int godini_razlika=0;
    if(Momce.get_godini()>Devojce.get_godini()){

    godini_razlika=Momce.get_godini()-Devojce.get_godini();
    }
    else{

    godini_razlika=Devojce.get_godini()-Momce.get_godini();
    }


if(godini_razlika<=5){
    cout<<"Si odgovaraat."<<endl;
}
else
    cout<<"Ne si odgovaraat"<<endl;


}
    ~Sredba(){}
};


int main(){
momce Momce("Ime_Momce", "Prezime_momce", 25);
devojce Devojka("Ime_devojce", "Prezime_devojce", 19);
Sredba sredba(Momce, Devojka);
sredba.print();
sredba.daliSiOdgovaraat();


return 0;
}
