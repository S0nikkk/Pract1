#ifndef PHONE_H
#define PHONE_H

#include <string>
using namespace std;

class Phone {
private:
    int id;
    string lastName;
    string firstName;
    string pobat;
    int accountNumber;
    double cityCallTime;
    double nocityCallTime;
public:
    Phone(int id, const string& lastName, const string& firstName, const string& pobat,
          int accountNumber, double cityCallTime, double nocityCallTime);

    void setId(int id);
    void setSurname(const std::string& lastName);
    void setName(const std::string& firstName);
    void setPobat(const std::string& pobat);
    void setNumber(int accountNumber);
    void setCityTime(double cityCallTime);
    void setNoCityTime(double nocityCallTime);

    int getId() const;
    string getSurname() const;
    string getName() const;
    string getPobat() const;
    int getNumber() const;
    double getCityTime() const;
    double getNoCityTime() const;

    string toString() const;
};

#endif // PHONE_H
