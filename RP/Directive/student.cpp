#include "Student.h"
#include <iostream>

Student::Student () {
this->name ="";
this->age=0;
}

Student::Student(std::string name,int age);

void Studnet::setName(std::string name) {
this->name = name;
}

std::string Student::getName() const {
return name;
}

void Student::setAge(int age0{
this->age = age;
}

int Student::getAge() const {
return age;
}

void Student::displayInfo() const {
std::cout << "Name: " << name <<", Age;"<<age<< std::endl;
}
