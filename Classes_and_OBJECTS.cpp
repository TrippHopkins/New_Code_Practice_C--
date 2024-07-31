#include <iostream>

class Human{
    public:
        std::string name;
        std::string job;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

class Car{
    public:
    std::string make;
    std::string model;
    std::string color;
    int year;

    void accelerate(){
        std::cout << "You step on the Gas!\n";
    }
    void brake(){
        std::cout << "You step on the brakes!\n";
    }
};

int main(){

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.job = "Scientist";
    human1.age = 45;

    human1.name = "John";
    human1.job = "sales";
    human1.age = 32;

    Car car1;

    car1.make = "FORD";
    car1.model = "F1-50";
    car1.color = "White";
    car1.year = 2015;

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.color << '\n';
    std::cout << car1.year << '\n';

    car1.accelerate();



    //OBJECT = A cllection of attributes and methods
    //they can have characteristics and could preform actions
    //could be used to mimic real world items (phone, book, dog, etc)
    //created from a class which acts as the blue-print



    return 0;
}