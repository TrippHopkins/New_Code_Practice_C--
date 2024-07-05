#include <iostream>

int main(){

    //same thing as a while loop but only for a certain amount of times
    //i stands for index
    
    //i = 10 is telling it to start at 10
    //i >= 0 is telling it to repeat until number reaches 0 or less than 0
    //i-=2 is telling it to decrease the value each tick by 2
    for(int i = 10; i >= 0; i-=2){
        std:: cout << i << '\n';
    }

    std::cout << "happy new year\n";

    return 0;
}