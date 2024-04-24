#include "Customer.h"

int Customer::count = 0; // Initialize the static member

Customer::Customer(int ID, std::string Name, std::string Email) {
    id = ID;
    name = Name;
    email = Email;
    count++;
}

Customer::Customer(std::string Name, std::string Email) {
    id = count + 1; // Increment count to generate new ID
    name = Name;
    email = Email;
    count++;
}

void Customer::setName(std::string name1) {
    name = name1;
}

void Customer::setEmail(std::string email1) {
    email = email1;
}

void Customer::setId(int id1) {
    id = id1;
}

std::string Customer::getName() {
    return name;
}

std::string Customer::getEmail() {
    return email;
}

int Customer::getId() {
    return id;
}

void Customer::displayCustomer() {
    std::cout << "Customer ID: " << id << std::endl;
    std::cout << "Customer Name: " << name << std::endl;
    std::cout << "Customer Email: " << email << std::endl;
}
