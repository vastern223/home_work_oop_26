#include "Air_ticket_accounting.h"



void Air_ticket_accounting:: Adding_application()
{
	cout << "Enter destination: ";
	cin >> destination;
	cout << "Enter Flight number: ";
	cin >> flight_number;
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Paternal: ";
	cin >> paternal;
	cout << "Enter Surname: ";
	cin >> surname;
	cout << "Enter Desired departure date: ";
	cin >> desired_departure_date;

	tickets.push_back(Air_tickets(destination, flight_number, desired_departure_date, name, surname, paternal));
}

void Air_ticket_accounting:: Search_by_flight_number()
{
	cout << "Enter Flight number: ";
	cin >> flight_number;

	for (auto iter = tickets.begin(); iter != tickets.end(); iter++)
	{
		if ((*iter).Get_flight_number() == flight_number)
		{
			(*iter).Show();
		}
	}
}

void  Air_ticket_accounting:: Search_by_desired_departure_date()
{
	cout << "Enter Desired departure date: ";
	cin >> desired_departure_date;

	for (auto iter = tickets.begin(); iter != tickets.end(); iter++)
	{
		if ((*iter).Get_desired_departure_date() == desired_departure_date)
		{
			(*iter).Show();
		}
	}
}

void  Air_ticket_accounting:: Show_all_applications()
{
	for (auto iter = tickets.begin(); iter != tickets.end(); iter++)
	{
		(*iter).Show();
		cout << endl;
	}
}

void  Air_ticket_accounting:: Delete_all_applications()
{
	tickets.erase(tickets.begin(), tickets.end());
}

void  Air_ticket_accounting:: Deleting_applications_flight_number()
{
	cout << "Enter Flight number for Delete: ";
	cin >> flight_number;

	for (auto iter = tickets.begin(); iter != tickets.end(); iter++)
	{
		if ((*iter).Get_flight_number() == flight_number)
		{
			tickets.erase(iter);
			break;
		}
	}


}