#include <iostream>

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};
enum Flavor {vanilla, chocolate, strawberry, mint};

// one thing to note is that if you don't explicitly assign a number to the enum, then it will start at 0 like an array and fill in after

int main(){

    // ENUMS = user-difined data type that consists of paired named-integer constants.

    Day today = friday;

    switch(today){
        case sunday: std::cout << "it's SUNDAY!\n";
                        break;
        case monday: std::cout << "it's MONDAY!\n";
                        break;
        case tuesday: std::cout << "it's TUESDAY!\n";
                        break;
        case wednesday: std::cout << "it's WEDNESDAY!\n";
                        break;
        case thursday: std::cout << "it's THURSDAY!\n";
                        break;
        case friday: std::cout << "it's FRIDAY!\n";
                        break;
        case saturday: std::cout << "it's SATURDAY!\n";
                        break;                                                                                                
    }

    return 0;
}