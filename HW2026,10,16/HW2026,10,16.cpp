// HW2026,10,16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Student {

private:
    string name;
    float age;
    int year;

public:

    // Constructor
    Student(string name, float age, int year) {
        this->name = name;
        this->age = age;
        this->year = year;
    }

    // Getters
    string getName() {
        return name;
    }

    float getAge() {
        return age;
    }

    int getYear() {
        return year;
    }

    // Setters
    void setName(string name) {
        this->name = name;
    }

    void setAge(float age) {
        this->age = age;
    }

    void setYear(int year) {
        this->year = year;
    }
    Student& operator++() {
        (this->year)++;
        return *this;
    }
    Student operator++(int) {
        Student old = *this;
        (this->year)++;
        return old;
    }
    Student& operator--() {
        (this->year)--;
        return *this;
    }
    Student operator--(int) {
        Student old = *this;
        (this->year)--;
        return old;
    }
    Student& operator+=(float i) {
        (this->age)+=i;
        return *this;
    }
    Student& operator-=(float i) {
        (this->age) -= i;
        return *this;
    }
    void print() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Year: " << year << endl;
    }
};

istream& operator>>(istream& a, Student& b) {
    string name;
    float age;
    int year;
    a >> name;
    a >> age;
    a >> year;
    b.setName(name);
    b.setAge(age);
    b.setYear(year);
    return a;
}
ostream& operator<<(ostream& a, Student b) {
    a<<b.getName();
    a<<b.getAge();
    a<<b.getYear();
    return a;
}


int main()
{
    Student a = { "b",12.5,1 };
    cout << a<<endl;
    cout << a++ << endl;
    cout << ++a << endl;
    cout << a << endl;
    cout << a-- << endl;
    cout << --a << endl;
    cout << a << endl;
    cout << (a+=2.2) << endl;
    cout << (a-=2) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
