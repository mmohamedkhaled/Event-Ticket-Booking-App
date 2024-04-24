#ifndef TICKETS_H
#define TICKETS_H

#include <string>
#include <iostream>

class Tickets {
private:
    std::string name;
    std::string email;
    int customerId;
    int seat;

public:
    Tickets();
    Tickets(std::string name, std::string email, int customerId, int seat);

    void setName(std::string customerName1);
    void setEmail(std::string email1);
    void setCustomerId(int customerId1);
    void setSeat(int seat1);

    std::string getName();
    std::string getEmail();
    int getCustomerId();
    int getSeat();

    void ticketDisplay();
};

#endif // TICKETS_H
