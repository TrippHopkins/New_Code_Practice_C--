#include <iostream>

int main(){

    //array = a data structure that can hold multiple values
    //        values are accessed by an index number
    //        "kind of like a variable that holds multiple values"
    
    //if you don't know what to put in the array, you can declare the array than assign values later
    //however, you must declare the array size
    /* example
    
    
    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Corvette"
    

    */

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    //the first index is always 0 because computer run on a 0-9 template and not a 1-10 template
    //can only store values with the same data type
    
    cars[0] = "Camaro";
    
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}