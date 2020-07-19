#include"Air_ticket.h"

Air_tickets::Air_tickets()
{
	destination = "no_info";
	flight_number = "no_info";
	initials.name = "no_info";
	initials.paternal = "no_info";
	initials.surname = "no_info";
	desired_departure_date = "no_info";
}
Air_tickets::Air_tickets(string destination, string flight_number, string desired_departure_date, string name, string surname, string paternal)
{
	this->destination = destination;
	this->flight_number = flight_number;
	this->initials.name = name;
	this->initials.paternal = paternal;
	this->initials.surname = surname;
	this->desired_departure_date = desired_departure_date;
}

void Air_tickets:: Show()const
{
	cout << "Destination: " << destination << endl;
	cout << "Flight number: " << flight_number << endl;
	cout << "Name: " << initials.name << endl;
	cout << "Paternal: " << initials.paternal << endl;
	cout << "Surname: " << initials.surname << endl;
	cout << "Desired departure date: " << desired_departure_date << endl;
}
string Air_tickets:: Get_flight_number()
{
	return flight_number;
}
string Air_tickets:: Get_desired_departure_date()
{
	return desired_departure_date;
}