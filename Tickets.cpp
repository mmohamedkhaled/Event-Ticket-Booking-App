#include "tickets.h"

Tickets::Tickets() {
    // Default constructor
}

Tickets::Tickets(std::string name, std::string email, int customerId, int seat) {
    this->name = name;
    this->email = email;
    customerId = customerId;
    seat = seat;
}

void Tickets::setName(std::string customerName1) {
    name = customerName1;
}

void Tickets::setEmail(std::string email1) {
    email = email1;
}

void Tickets::setCustomerId(int customerId1) {
    customerId = customerId1;
}

void Tickets::setSeat(int seat1) {
    seat = seat1;
}

std::string Tickets::getName() {
    return name;
}

std::string Tickets::getEmail() {
    return email;
}

int Tickets::getCustomerId() {
    return customerId;
}

int Tickets::getSeat() {
    return seat;
}

void Tickets::ticketDisplay() {
    std::cout << "Customer Name: " << name << std::endl;
    std::cout << "Customer Email: " << email << std::endl;
    std::cout << "Customer ID: " << customerId << std::endl;
    std::cout << "Seat Number: " << seat << std::endl;
}
