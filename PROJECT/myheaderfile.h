#ifndef MYHEADERFILE_H
#define MYHEADERFILE_H

#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class Train
{
public:
    string trainNumber;
    string trainName;
    string source;
    string destination;
    string arrivalTime;
    string departureTime;
    float fare;

    Train() {}

    Train(string trainNumber, string trainName, string source, string destination, string arrivalTime, string departureTime, float fare)
    {
        this->trainNumber = trainNumber;
        this->trainName = trainName;
        this->source = source;
        this->destination = destination;
        this->arrivalTime = arrivalTime;
        this->departureTime = departureTime;
        this->fare = fare;
    }

    void displayTrain()
    {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Arrival Time: " << arrivalTime << endl;
        cout << "Departure Time: " << departureTime << endl;
        cout << "Fare: " << fare << endl;
    }
};

class User
{
public:
    string name;
    string trainNumber;
    string source;
    string destination;
    int numTickets;

    User() {}

    User(string name, string trainNumber, string source, string destination, int numTickets)
    {
        this->name = name;
        this->trainNumber = trainNumber;
        this->source = source;
        this->destination = destination;
        this->numTickets = numTickets;
    }

    void displayBooking()
    {
        cout << "Name: " << name << endl;
        cout << "Train Number: " << trainNumber << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Number of Tickets: " << numTickets << endl;
    }
};

class Admin
{
public:
    vector<Train> trains;

    void addTrain()
    {
        string trainNumber, trainName, source, destination, arrivalTime, departureTime;
        float fare;
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cout << "Enter Train Name: ";
        cin >> trainName;
        cout << "Enter Source: ";
        cin >> source;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Arrival Time: ";
        cin >> arrivalTime;
        cout << "Enter Departure Time: ";
        cin >> departureTime;
        cout << "Enter Fare: ";
        cin >> fare;

        Train newTrain(trainNumber, trainName, source, destination, arrivalTime, departureTime, fare);
        trains.push_back(newTrain);

        ofstream outFile("trains.txt", ios::app);
        if (outFile.is_open())
        {
            outFile << trainNumber << " " << trainName << " " << source << " " << destination << " " << arrivalTime << " " << departureTime << " " << fare << endl;
            outFile.close();
        }
    }

    void viewAllTrains()
    {
        ifstream inFile("trains.txt");
        string trainNumber, trainName, source, destination, arrivalTime, departureTime;
        float fare;
        while (inFile >> trainNumber >> trainName >> source >> destination >> arrivalTime >> departureTime >> fare)
        {
            Train train(trainNumber, trainName, source, destination, arrivalTime, departureTime, fare);
            train.displayTrain();
            cout << "---------------------------------" << endl;
        }
        inFile.close();
    }

    void viewBookings()
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
};

#endif
