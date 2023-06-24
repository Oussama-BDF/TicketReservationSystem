#include<iostream>
#include<vector>
using namespace std;

//****************************Event Class*********************************
class Event{
    string name, date, location;
    int availableSeats;

    public:
        //Constructor
        Event(string name, string date, string location, int availableSeats):name(name),date(date),location(location),availableSeats(availableSeats){}
        //Getters
        string getName(){ return this->name; }
        string getDate(){ return this->date; }
        string getLocation(){ return this->location; }
        //Reserve a seat for an event
        //but first, we need to check if there is an available seat for this event?
        bool reserveSeat(){ 
            if(this->availableSeats > 0){
                this->availableSeats --;
                return true;
            }
            return false;
        }
};