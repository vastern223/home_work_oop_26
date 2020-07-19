#pragma once
#include <iostream>
#include "Air_ticket.h"
#include <string> 
#include <list>
   

using namespace std;

class Air_ticket_accounting// облік авіаквитків 
{
private:
	
	string name;
	string surname;
	string paternal;
	string destination;
	string flight_number;
	string desired_departure_date;

	list<Air_tickets>tickets;

public:
	void Adding_application();
	void Search_by_flight_number();
	void Search_by_desired_departure_date();
	void Show_all_applications();
	void Delete_all_applications();
	void Deleting_applications_flight_number();
	
};

