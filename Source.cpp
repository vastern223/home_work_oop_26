#include <iostream>
#include <string>
#include "Air_ticket_accounting.h"

using namespace std;

//������ 12 
//12. �������� �������� ����� ������ �� ���������.
//����� ������ ������ : ����� �����������, ����� �����, ������� � �������
//��������, ������ ���� �������.�������� ������� ������������� ���� ��
//��������� ���� � ��������� ���� � ��������� ������� :
// -��������� ������ � ������;
//- ��������� ������;
//- ��������� ������ �� ������� ������� ����� � ����� �������;
//- ��������� ��� ������.
//��� ���������� ����� ��������������� ������������ ���� list.

int main()
{
   
   Air_ticket_accounting Air;
    int chois=0;
    while (chois!=6)
    {
        cout << "1-Adding application" << endl;
        cout << "2-Search by flight number" << endl;
        cout << "3-Search by desired departure date" << endl;
        cout << "4-Show all applications" << endl;
        cout << "5-Delete all applications" << endl;
        cout << "6-Deleting applications flight number" << endl;
        cout << "7-Exit" << endl;
        cout << "->";
        cin >> chois;

        switch (chois)
        {
        case 1:
        {
            Air.Adding_application();
        }
        break;
        case 2:
        {
            Air.Search_by_flight_number();
        }
        break;
        case 3:
        {
            Air.Search_by_desired_departure_date();
        }
        break;
        case 4:
        {
            Air.Show_all_applications();
        }
        break;
        case 5:
        {
            Air.Delete_all_applications();
        }
        break;
        case 6:
        {
            Air.Deleting_applications_flight_number();
        }
        break;
        
        }
        system("pause");
        system("cls");
    }

    
    system("pause");
    return 0;
}