#include"TicketReservationSystem.hpp"

int main(){
    TicketReservationSystem reservationSystem;

    Event event1("Concert","2023-06-15","Stadium A",1000);
    reservationSystem.addEvent(event1);

    Event event2("Theatre Show","2023-07-20","Theatre B",1500);
    reservationSystem.addEvent(event2);

    Event event3("Sports Match","2023-08-10","Arena C",500);
    reservationSystem.addEvent(event3);

    reservationSystem.displayEvents();

    int selectedEventIndex;
    cout<<"Select an event by entring its index: ";
    cin>>selectedEventIndex;

    double ticketPrice;
    cout<<"Enter ticket price: ";
    cin>>ticketPrice;

    string userName;
    cout<<"Enter user name: ";
    cin>>userName;

    reservationSystem.reserveTicket(selectedEventIndex, ticketPrice, userName);

    reservationSystem.displayTickets();


    return 0;
}