#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1: std::cout << "you win small\n";
            break;
        case 2: std::cout << "you win small + 1\n";
            break;
        case 3: std::cout << "you win medium\n";
            break;
        case 4: std::cout << "you win medium +1\n";
            break;
        case 5: std::cout << "you win large\n";
            break;
    }

    return 0;
}