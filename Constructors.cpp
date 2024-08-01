#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this ->name = name;
        this->age = age;
        this->gpa = gpa;
    }

};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main() {
    
    //constructor = special method that is automatically called when an object is instantiated
    //useful for assigning values to attributes as arguments

    Student student1("Jerry", 17, 3.5);
    Student student2("John", 16, 1.2);
    Student student3("Sandy", 18, 3.9);

    Car car1("Ford", "Mustang", 1995, "Red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    return 0;
}