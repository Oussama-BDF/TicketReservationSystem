#include<iostream>
#include<vector>
using namespace std;

//****************************Ticket Class*********************************
class Ticket{
    int idTicket; //Primary key
    double price;
    string userName;
    int idEvent; //Foreign key
    static int cmp;
    //la variable "cmp" va nous permettre de mettre la valeur de "idTicket" unique (voir le constructeur)
    //L'initialisation de "cmp" doit etre hors de la classe (on va l'initialiser par 1)

    public:
        //Constructor
        Ticket(double price, string userName, int idEvent):price(price),userName(userName),idEvent(idEvent){
            this->idTicket=cmp;
            cmp++;
        }
        //Getters
        int getIdTicket(){ return this->idTicket; }
        double getPrice(){ return this->price; }
        string getUserName(){ return this->userName; }
        int getIdEvent(){ return this->idEvent; }

};
int Ticket::cmp=1;