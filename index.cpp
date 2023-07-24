#include <iostream>

using namespace std;

struct Date
{
    short day = 1,
          month = 1,
          year = 1800;
};
struct Address
{
    string street,
        city;
    int zipCode = 0;
};
struct Customer
{
    long long ID = 0;
    string name;
    Date dob;
    Address address;
    bool isRegistered = false;
};

int main()
{
    Customer customerOne = {75384, "Mohammed", {5, 12, 1987}, {"King Charl's st.", "Leeds", 8412}, true},
             customerTwo = {69530, "Amr", {4, 9, 1991}, {"Salah Salem st.", "Cairo", 99211}, false},
             customerThree = {85032, "Mahmoud", {21, 3, 1998}, {"67 Main road east", "Queen's Land", 22180}, true};
    vector<Customer> customers = {customerOne, customerTwo};
    customers.push_back(customerThree);
    for (Customer &customer : customers)
    {
        auto [ID, name, dob, address, isRegistered] = customer;
        cout << boolalpha << endl
             << "User: " << name << ", id(" << ID << ")" << endl
             << "Year of Birth: " << dob.year << endl
             << "Living in " << address.city;
    }
    return 0;
}