#include "Phone.h"
#include <sstream>

Phone::Phone(int id, const string& lastName, const string& firstName, const string& pobat,
             int accountNumber, double cityCallTime, double nocityCallTime)
    : id(id), lastName(lastName), firstName(firstName), pobat(pobat), accountNumber(accountNumber),
      cityCallTime(cityCallTime), nocityCallTime(nocityCallTime) {}

void Phone::setId(int id) { this->id = id; }
void Phone::setSurname(const string& lastName) { this->lastName = lastName; }
void Phone::setName(const string& firstName) { this->firstName = firstName; }
void Phone::setPobat(const string& pobat) { this->pobat = pobat; }
void Phone::setNumber(int accountNumber) { this->accountNumber = accountNumber; }
void Phone::setCityTime(double cityCallTime) { this->cityCallTime = cityCallTime; }
void Phone::setNoCityTime(double nocityCallTime) { this->nocityCallTime = nocityCallTime; }

int Phone::getId() const { return id; }
string Phone::getSurname() const { return lastName; }
string Phone::getName() const { return firstName; }
string Phone::getPobat() const { return pobat; }
int Phone::getNumber() const { return accountNumber; }
double Phone::getCityTime() const { return cityCallTime; }
double Phone::getNoCityTime() const { return nocityCallTime; }

string Phone::toString() const {
    ostringstream oss;
    oss << "ID: " << id << ", Surname: " << lastName << ", Name: " << firstName
        << ", Patronymic: " << pobat << ", Account Number: " << accountNumber
        << ", City Call Time: " << cityCallTime << " mins, Long-Distance Call Time: " << nocityCallTime << " mins";
    return oss.str();
}
