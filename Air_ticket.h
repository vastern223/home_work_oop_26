#pragma once
#include <iostream>
#include <string> 
#include <list>
using namespace std;

class Air_tickets//заявка
{
private:

	struct Initials
	{
		string name;
		string surname;
		string paternal;
	};

  string destination;
  string flight_number;
  Initials  initials;
  string desired_departure_date;

public:

	Air_tickets();
	Air_tickets(string destination, string flight_number, string desired_departure_date, string name, string surname, string paternal);
	void Show()const;
	string Get_flight_number();
	string Get_desired_departure_date();
	

};

