#include <iostream>

int main(){

    // do while loop = do some block of code first, then repeat again if condition is true
    int number;
    
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);
    //the while loop at the end is telling the 'do' to run the code again if the number is less than 0.
    //if not, then it moves on the displaying the number

    std::cout << "the number is: " << number;
    
    
    return 0;
}