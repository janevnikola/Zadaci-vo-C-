#include <iostream>
using namespace std;

#include <cstring>



/*
Да се напише класа која опишува една e-mail порака.
Во класата треба да се имплементира метод за прикажување на целокупната порака на екран.
Потоа да се напише главна програма во која се внесуваат параметрите на пораката, се
инстанцира објект од оваа класа и се печати на екран неговата содржина.
За проверување на валидноста на e-mail пораката (постоење на знакот @воадресата) да се напише соодветна функција
*/
class Email{
private:
    char to[50];
    char subject[100];
    char body[500];
public:
    Email(){}
    Email (char *new_to,char *new_subject, char *new_body){
    strcpy(this->to,new_to);
    strcpy(this->subject,new_subject);
    strcpy(this->body,new_body);
    }


    void show_email(){
    cout<<"To: "<<to<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Body: "<<body;
    }
~Email(){}
};

int valid_mail(char *to){
    int brojac=0;
while(*to!=0){
    if(*to++=='@'){//dali se naogja @ vo adresata
        brojac++;
    }
}
return (1==brojac);
}



int main(){
char to[50]={"mail1@gmail.com"};
char subject[100]={"Mail about the new subjects"};
char body[500]={"Hello mr John, i am writing about the new subjects"};
Email email(to, subject, body);

if(valid_mail(to)){
email.show_email();
}
else{
    cout<<"The email addres is not valid"<<endl;
}
return 0;
}

