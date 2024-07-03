#include <iostream>

int main (){
// replaced if/else statments
    int grade = 75;

/*replaces 
    if(grade >=60){
        std::cout << "you pass";
    }
    else{
    std::cout << "you fail";
    }
*/
    
    //grade >= 60 ? std::cout << "you pass" : std::cout << "you fail";

   // int number = 8;

    //number % 2 ? std::cout << "odd" : std::cout << "even";

    bool hungry = false;

    //hungry ? std::cout << "YOU ARE HUNGRY" : std::cout << "you are full...";
    std::cout << (hungry ? "You are HUNGRY" : "You are FULL");

    return 0;
}