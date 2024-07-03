#include <iostream>

int main(){

    // && = checl if two conditions are true
    // || = check if at least one of two conditions are true
    // !  = reverses the logical state of its operand (if true, it becomes false and v/v)

    int temp;
    bool sunny = false;


    std::cout << "Enter the temp: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "The temp is Bad!\n";
    }
    else{
        std::cout << "the temp is Good!\n";
    }

    if(!sunny){
        std::cout << "It is not sunny";
    }
    else{
        std::cout << "it is sunny";
    }

    return 0;
}