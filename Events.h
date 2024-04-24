#ifndef EVENTS_H
#define EVENTS_H

#include <string>
#include <iostream>

class Events {
private:
    std::string name;
    std::string place;
    std::string time;
    std::string date;
    int ticketsNumber;

public:
    Events();
    Events(std::string Name, std::string Place, std::string Time, std::string Date, int TicketsNumber);

    void setName(std::string name1);
    void setPlace(std::string place1);
    void setTime(std::string time1);
    void setDate(std::string date1);
    void setTicketsNumber(int ticketsNumber1);

    std::string getName();
    std::string getPlace();
    std::string getTime();
    std::string getDate();
    int getTicketsNumber();

    void displayEvent();
};

#endif // EVENTS_H
