#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>

class Customer {
private:
    int id;
    std::string name;
    std::string email;
    static int count; // Static member to keep track of the count of customers

public:
    Customer(int ID, std::string Name, std::string Email);
    Customer(std::string Name, std::string Email);

    void setName(std::string name1);
    void setEmail(std::string email1);
    void setId(int id1);

    std::string getName();
    std::string getEmail();
    int getId();
    
    void displayCustomer();
};

#endif // CUSTOMER_H
