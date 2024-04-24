#include "events.h"

Events::Events() {
    // Default constructor
}

Events::Events(std::string Name, std::string Place, std::string Time, std::string Date, int TicketsNumber) {
    name = Name;
    place = Place;
    time = Time;
    date = Date;
    ticketsNumber = TicketsNumber;
}

void Events::setName(std::string name1) {
    name = name1;
}

void Events::setPlace(std::string place1) {
    place = place1;
}

void Events::setTime(std::string time1) {
    time = time1;
}

void Events::setDate(std::string date1) {
    date = date1;
}

void Events::setTicketsNumber(int ticketsNumber1) {
    ticketsNumber = ticketsNumber1;
}

std::string Events::getName() {
    return name;
}

std::string Events::getPlace() {
    return place;
}

std::string Events::getTime() {
    return time;
}

std::string Events::getDate() {
    return date;
}

int Events::getTicketsNumber() {
    return ticketsNumber;
}

void Events::displayEvent() {
    std::cout << "Event name: " << name << std::endl;
    std::cout << "Event place: " << place << std::endl;
    std::cout << "Event date: " << date << std::endl;
    std::cout << "Event time: " << time << std::endl;
    std::cout << "Number of tickets: " << ticketsNumber << std::endl;
}
