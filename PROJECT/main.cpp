#include <bits/stdc++.h>
#include "myheaderfile.h"

using namespace std;

class Main_menu
{
private:
    int choice;

public:
    Main_menu()
    {
        string username = "Nikhil", us;
        string password = "1234", pas;
        string admin = "Aryan", ad;
        string password1 = "Admin", pa;
        int login;
    start:
        system("cls");

        cout << "                     [LOGIN PORTAL]\n\n\n"
             << endl;

        cout << "SELECT YOUR CHOICE:  " << endl;
        cout << "1. USER\n2. ADMIN" << endl;
        cin >> login;

        if (login == 1)
        {
            system("cls");
            cout << "Enter Username : " << endl;
            cin >> us;
            cout << "Enter Password : " << endl;
            cin >> pas;
            if (us == username && pas == password)
            {
                system("cls");
                user_portal();
            }
            else
            {
                cout << "Invalid Choice!!!\n\nDo you want to continue? y/n" << endl;
                char again;
                cin >> again;
                if (again == 'y')
                {
                    goto start;
                }
                else
                    exit(0);
            }
        }
        else if (login == 2)
        {
            cout << "Enter Username : " << endl;
            cin >> ad;
            cout << "Enter Password : " << endl;
            cin >> pa;
            if (ad == admin && pa == password1)
            {
                system("cls");
                admin_portal();
            }
            else
            {
                cout << "Invalid Choice!!!\n\nDo you want to continue? y/n" << endl;
                char again;
                cin >> again;
                if (again == 'y')
                {
                    goto start;
                }
                else
                    exit(0);
            }
        }
        else
        {
            cout << "Invalid Choice!!!\n\nDo you want to continue? y/n" << endl;
            char again;
            cin >> again;
            if (again == 'y')
            {
                goto start;
            }
            else
                exit(0);
        }
    }

    void user_portal()
    {
        system("cls");
        cout << "\t\t\t\n\n[ARSHKHIL RAILWAYS]" << endl;
        cout << "  ----------------------------------- MAIN MENU------------------------------------\n";
        cout << "|-------------------------------------------------------------------------------------|\n";
        cout << "|                                                                                     |" << endl;
        cout << "|                      Press 1 to Search Trains                                       |" << endl;
        cout << "|                      Press 2 to View Train Timings                                  |" << endl;
        cout << "|                      Press 3 to View Ticket Fares                                   |" << endl;
        cout << "|                      Press 4 to Book Tickets                                        |" << endl;
        cout << "|                      Press 5 to View Booked Tickets                                 |" << endl;
        cout << "|                      Press 6 to Cancel Tickets                                      |" << endl;
        cout << "|                      Press 7 to Exit                                                |" << endl;
        cout << "|                                                                                     |" << endl;
        cout << "|-------------------------------------------------------------------------------------|\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            searchTrains();
            break;
        case 2:
            viewTrainTimings();
            break;
        case 3:
            viewTicketFares();
            break;
        case 4:
            bookTickets();
            break;
        case 5:
            viewBookedTickets();
            break;
        case 6:
            cancelTickets();
            break;
        case 7:
            exit(0);

        default:
            break;
        }
    }

    void searchTrains()
    {
        ifstream inFile("trains.txt");
        string trainNumber, trainName, source, destination, arrivalTime, departureTime;
        float fare;
        cout << "Enter Source: ";
        string src;
        cin >> src;
        cout << "Enter Destination: ";
        string dest;
        cin >> dest;
        while (inFile >> trainNumber >> trainName >> source >> destination >> arrivalTime >> departureTime >> fare)
        {
            if (source == src && destination == dest)
            {
                Train train(trainNumber, trainName, source, destination, arrivalTime, departureTime, fare);
                train.displayTrain();
                cout << "---------------------------------" << endl;
            }
        }
        inFile.close();
    }

    void viewTrainTimings()
    {
        ifstream inFile("trains.txt");
        string trainNumber, trainName, source, destination, arrivalTime, departureTime;
        float fare;
        while (inFile >> trainNumber >> trainName >> source >> destination >> arrivalTime >> departureTime >> fare)
        {
            Train train(trainNumber, trainName, source, destination, arrivalTime, departureTime, fare);
            cout << "Train Number: " << trainNumber << endl;
            cout << "Arrival Time: " << arrivalTime << endl;
            cout << "Departure Time: " << departureTime << endl;
            cout << "---------------------------------" << endl;
        }
        inFile.close();
    }

    void viewTicketFares()
    {
        ifstream inFile("trains.txt");
        string trainNumber, trainName, source, destination, arrivalTime, departureTime;
        float fare;
        while (inFile >> trainNumber >> trainName >> source >> destination >> arrivalTime >> departureTime >> fare)
        {
            Train train(trainNumber, trainName, source, destination, arrivalTime, departureTime, fare);
            cout << "Train Number: " << trainNumber << endl;
            cout << "Fare: " << fare << endl;
            cout << "---------------------------------" << endl;
        }
        inFile.close();
    }

    void bookTickets()
    {
        ofstream outFile("bookings.txt", ios::app);
        string name, trainNumber, source, destination;
        int numTickets;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Number of Tickets: ";
        cin >> numTickets;
        User user(name, trainNumber, source, destination, numTickets);
        outFile << name << " " << trainNumber << " " << source << " " << destination << " " << numTickets << endl;
        outFile.close();
    }

    void viewBookedTickets()
    {
        ifstream inFile("bookings.txt");
        string name, trainNumber, source, destination;
        int numTickets;
        while (inFile >> name >> trainNumber >> source >> destination >> numTickets)
        {
            User user(name, trainNumber, source, destination, numTickets);
            user.displayBooking();
            cout << "---------------------------------" << endl;
        }
        inFile.close();
    }

    void cancelTickets()
    {
        cout << "Enter Train Number to cancel booking: ";
        string trainNumber;
        cin >> trainNumber;
        ifstream inFile("bookings.txt");
        ofstream tempFile("temp.txt");
        string name, tNumber, source, destination;
        int numTickets;
        bool found = false;
        while (inFile >> name >> tNumber >> source >> destination >> numTickets)
        {
            if (tNumber == trainNumber)
            {
                found = true;
            }
            else
            {
                tempFile << name << " " << tNumber << " " << source << " " << destination << " " << numTickets << endl;
            }
        }
        inFile.close();
        tempFile.close();
        remove("bookings.txt");
        rename("temp.txt", "bookings.txt");
        if (found)
        {
            cout << "Booking canceled successfully." << endl;
        }
        else
        {
            cout << "No booking found for the given train number." << endl;
        }
    }

    void admin_portal()
    {
        system("cls");
        cout << "\t\t\t\n\n[ARSHKHIL RAILWAYS]" << endl;
        cout << "  ----------------------------------- MAIN MENU------------------------------------\n";
        cout << "|-------------------------------------------------------------------------------------|\n";
        cout << "|                                                                                     |" << endl;
        cout << "|                      Press 1 to Add Train                                           |" << endl;
        cout << "|                      Press 2 to View All Trains                                     |" << endl;
        cout << "|                      Press 3 to View Bookings                                       |" << endl;
        cout << "|                      Press 4 to Exit                                                |" << endl;
        cout << "|                                                                                     |" << endl;
        cout << "|-------------------------------------------------------------------------------------|\n";
        cin >> choice;
        Admin admin;
        switch (choice)
        {
        case 1:
            admin.addTrain();
            break;
        case 2:
            admin.viewAllTrains();
            break;
        case 3:
            admin.viewBookings();
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    }
};

int main()
{
    Main_menu menu;
    return 0;
}
