#include <iostream>
#include <string>

int main(){

    //pointers = variables that store a memory address of another variable
    //           sometimes it's easier to work with an address

    // & address-of operator
    // dereference operator

    std::string name = "Tripp";
    int age = 15;
    std::string freePizzas[5] = {"P1", "P2", "P3", "P4", "P5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *freePizzas << '\n';

    return 0;
}