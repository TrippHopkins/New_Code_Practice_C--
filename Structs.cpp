#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};


int main(){


    student student1;
    student1.name = "Jerry";
    student1.gpa = 3.9;
    student1.enrolled = true;

    student student2;
    student2.name = "Tom";
    student2.gpa = 3.2;
    student2.enrolled = true;    

    student student3;
    student3.name = "Sally";
    student3.gpa = 3.7;
    student3.enrolled = false; 

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n' << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n' << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}