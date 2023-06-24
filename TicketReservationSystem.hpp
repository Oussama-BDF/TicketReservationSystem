#include"Event.hpp"
#include"Ticket.hpp"

//****************************TicketReservationSystem Class*********************************
class TicketReservationSystem{
    vector<Event> events;
    vector<Ticket> tickets;

    public:
        //Add an event in the events vector
        void addEvent(Event e){
            this->events.push_back(e);
        }
        //display all the events in the systrem
        void displayEvents(){
            for(int i=0; i<this->events.size(); i++){
                cout<<"Event Number: "<<i<<endl;
                cout<<"Event Name: "<<this->events.at(i).getName()<<endl;
                cout<<"Event Date: "<<this->events.at(i).getDate()<<endl;
                cout<<"Evant Location: "<<this->events.at(i).getLocation()<<endl<<endl;
            }
        }
        //Reserve a ticket
        void reserveTicket(int idEvent, double price, string name){
            //but first, we need to check if there is an available seat for this event (we already have a methode "reserveSeat()" that does this)
            if(this->events.at(idEvent).reserveSeat()){
                Ticket t(price, name, idEvent);
                this->tickets.push_back(t);
            }
            else    cout<<"Il n'y a plus de place pour l'evenement : "<<this->events.at(idEvent).getName()<<endl;
        }
        //Display all the tickets
        void displayTickets(){
            for(int i=0; i<this->tickets.size(); i++){
                cout<<"Ticket Id: "<<this->tickets.at(i).getIdTicket()<<endl;
                cout<<"Ticket Price: "<<this->tickets.at(i).getPrice()<<endl;
                cout<<"Ticket UserName: "<<this->tickets.at(i).getUserName()<<endl;
                cout<<"Ticket Event Name: "<<this->events.at(this->tickets.at(i).getIdEvent()).getName()<<endl; //Afficher le nom de l'événement du ticket de l'indice i
            }
        }
};