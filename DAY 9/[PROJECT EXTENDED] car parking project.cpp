#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Car class
class Car
{
public:
    string vehicleID;
    string licensePlate;
    string registrationDate;
    string ownerID;

    Car(string vid, string lp, string rd, string oid)
        : vehicleID(vid), licensePlate(lp), registrationDate(rd), ownerID(oid) {}

    void display() const
    {
        cout << "Vehicle ID: " << vehicleID << ", License Plate: " << licensePlate
             << ", Registration Date: " << registrationDate << ", Owner ID: " << ownerID << endl;
    }
};

// Customer class
class Customer
{
public:
    string id;
    string name;
    string phoneNumber;
    string email;

    Customer(string cid, string cname, string phone, string mail)
        : id(cid), name(cname), phoneNumber(phone), email(mail) {}

    void display() const
    {
        cout << "Customer ID: " << id << ", Name: " << name
             << ", Phone Number: " << phoneNumber << ", Email: " << email << endl;
    }
};

// Employee class
class Employee
{
public:
    string employeeID;
    string name;
    string role;
    string contact;

    Employee(string eid, string ename, string erole, string econtact)
        : employeeID(eid), name(ename), role(erole), contact(econtact) {}

    void display() const
    {
        cout << "Employee ID: " << employeeID << ", Name: " << name
             << ", Role: " << role << ", Contact: " << contact << endl;
    }
};

// Payment class
class Payment
{
public:
    string transactionID;
    double amount;
    string dateStamp;
    string status;

    Payment(string tid, double amt, string ds, string sts)
        : transactionID(tid), amount(amt), dateStamp(ds), status(sts) {}

    void display() const
    {
        cout << "Transaction ID: " << transactionID << ", Amount: " << amount
             << ", Date: " << dateStamp << ", Status: " << status << endl;
    }
};

// SecuritySurveillance class
class SecuritySurveillance
{
public:
    string securityID;
    string location;
    string detectTime;
    string status;

    SecuritySurveillance(string sid, string loc, string dtime, string sts)
        : securityID(sid), location(loc), detectTime(dtime), status(sts) {}

    void display() const
    {
        cout << "Security ID: " << securityID << ", Location: " << location
             << ", Detection Time: " << detectTime << ", Status: " << status << endl;
    }
};

// ParkingLot class
class ParkingLot
{
public:
    int capacity;
    vector<Car> parkedCars;

    ParkingLot(int cap) : capacity(cap) {}

    bool parkCar(const Car &car)
    {
        if (parkedCars.size() < capacity)
        {
            parkedCars.push_back(car);
            cout << "Car parked: " << car.licensePlate << endl;
            return true;
        }
        else
        {
            cout << "Parking lot is full!" << endl;
            return false;
        }
    }

    void displayParkedCars() const
    {
        cout << "Parked Cars:\n";
        for (const auto &car : parkedCars)
        {
            car.display();
        }
    }
};

int main()
{
    // Creating objects
    ParkingLot myParkingLot(10);

    Car car1("BC123", "AB1234", "2024-07-01", "C001");
    Car car2("YZ457", "XY5678", "2024-07-02", "C002");
    Car car3("MN423", "MN8765", "2024-07-03", "C003");
    Car car4("QR6124", "QR4321", "2024-07-04", "C004");

    Customer cust1("C001", "Sanjay Gore", "1234567890", "sanjay@example.com");
    Customer cust2("C002", "Janvi Manse", "0987654321", "janvi@example.com");
    Customer cust3("C003", "Aliya Kapse", "1122334455", "aliya@example.com");
    Customer cust4("C004", "Meena Sharma", "5566778899", "meena@example.com");

    Employee emp1("E001", "John Doe", "Manager", "john@example.com");
    Employee emp2("E002", "Jane Doe", "Staff", "jane@example.com");

    Payment pay1("T001", 50.0, "2024-07-01", "Paid");
    Payment pay2("T002", 100.0, "2024-07-02", "Pending");

    SecuritySurveillance sec1("S001", "Entrance", "2024-07-01 08:00", "Active");
    SecuritySurveillance sec2("S002", "Exit", "2024-07-01 18:00", "Inactive");

    // Parking cars
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.parkCar(car3);
    myParkingLot.parkCar(car4);

    // Displaying parked cars
    myParkingLot.displayParkedCars();

    // Displaying other details
    cout << "\nCustomers:\n";
    cust1.display();
    cust2.display();
    cust3.display();
    cust4.display();

    cout << "\nEmployees:\n";
    emp1.display();
    emp2.display();

    cout << "\nPayments:\n";
    pay1.display();
    pay2.display();

    cout << "\nSecurity & Surveillance:\n";
    sec1.display();
    sec2.display();

    return 0;
}