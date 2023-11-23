#include <iostream>

class EventLocation {
public:
    std::string name;
    int max_seats;
    int num_rows;
    int num_zones;
    int seats_per_row;

    EventLocation(std::string name, int max_seats, int num_rows, int num_zones, int seats_per_row)
        : name(name), max_seats(max_seats), num_rows(num_rows), num_zones(num_zones), seats_per_row(seats_per_row) {}
};

class Event {
public:
    std::string name;
    std::string date;
    std::string time;
    EventLocation location;

    Event(std::string name, std::string date, std::string time, EventLocation location)
        : name(name), date(date), time(time), location(location) {}
};

int main() { 
	std::cout << std::endl << "Hello, professor!";
	std::cout << std::endl << "Goodbye!";
}