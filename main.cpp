#include <iostream>
#include <queue>
#include "events.h"
#include "Customer.h"
#include "tickets.h"

const int MAX_CUSTOMERS = 6; // Maximum number of customers

void registerCustomers(Customer customers[], int count);
void reserveTickets(Events& event, Customer customers[], int& counter, tickets& firstTicket, tickets& secondTicket);
void cancelTicket(tickets& ticket, int& ticketCount, int& eventTickets);

int main() {
    queue<int> ticketQueue;
    int counter = 0;
    Events Amr1, Amr2;
    tickets firstTicket, secondTicket;
    Customer customers[MAX_CUSTOMERS];

    // Register customers
    registerCustomers(customers, counter);

    // Set event details
    Amr1.setname("Amr Diab concert 1");
    Amr1.setplace("Cairo");
    Amr1.setdate("12 Sep 2023");
    Amr1.settime("3:50");
    Amr1.setticketsNumber(2);

    Amr2.setname("Amr Diab concert 2");
    Amr2.setplace("Giza");
    Amr2.setdate("23 Nov 2045");
    Amr2.settime("8:50");
    Amr2.setticketsNumber(2);

    // Display event details
    Amr1.display_Event();
    Amr2.display_Event();

    // Reserve tickets
    reserveTickets(Amr1, customers, counter, firstTicket, secondTicket);

    // Cancel ticket
    cancelTicket(firstTicket, counter, Amr1.getticketsNumber());
    cancelTicket(secondTicket, counter, Amr1.getticketsNumber());

    return 0;
}

void registerCustomers(Customer customers[], int count) {
    for (int j = 0; j < MAX_CUSTOMERS; j++) {
        std::cout << "Customer " << j + 1 << ", enter your name: ";
        std::cin >> customers[j].name;
        std::cout << "Customer " << j + 1 << ", enter your email: ";
        std::cin >> customers[j].email;
        customers[j].setId(j + 1);
    }
}

void reserveTickets(Events& event, Customer customers[], int& counter, tickets& firstTicket, tickets& secondTicket) {
    int customerid;
    int seat[MAX_CUSTOMERS];

    do {
        std::cout << "Enter your customer ID to reserve a ticket: ";
        std::cin >> customerid;

        if (customerid >= 1 && customerid <= MAX_CUSTOMERS) {
            std::cout << "Enter your preferred seat: ";
            std::cin >> seat[counter];
            counter++;
            event.setticketsNumber(event.getticketsnumber() - 1); // Decrement available tickets
        } else {
            std::cout << "Invalid customer ID. Please register first." << std::endl;
        }
    } while (event.getticketsnumber() > 0);

    firstTicket = tickets(customers[customerid - 1].getname(), customers[customerid - 1].getemail(), customerid, seat[0]);
    secondTicket = tickets(customers[customerid].getname(), customers[customerid].getemail(), customerid + 1, seat[1]);

    std::cout << "Tickets reserved successfully!" << std::endl;
}

void cancelTicket(tickets& ticket, int& ticketCount, int& eventTickets) {
    int cancel, customerid;
    std::cout << "If you want to cancel your ticket, enter your customer ID and 1: ";
    std::cin >> customerid >> cancel;

    if (cancel == 1) {
        ticket.setname("");
        ticket.setemail("");
        ticket.setcustomerid(0);
        ticket.setseat(0);
        ticketCount--;
        eventTickets++;
        std::cout << "Ticket canceled successfully!" << std::endl;
    }
}
