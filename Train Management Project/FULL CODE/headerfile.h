#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Registration
{
public:
    static int choice;
    string destination;
    static double charges;

    void trains();
    void information();
};

class Ticket
{
public:
    string name[100];
    string gender[100];
    string destination[100];
    double charges;
    char arr[100];

    void Bill();
    void dispBill();
    void dispDatabase();
    void deleteData();
};

class FoodOptions
{
public:
    void foodOptions();
};

class Management
{
public:
    int choice;
    Registration r;
    Ticket t;
    FoodOptions f;

    void mainMenu();
    void firstPage();
};

#endif // TRAIN_H
