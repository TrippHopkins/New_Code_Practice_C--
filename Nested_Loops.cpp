#include <iostream>

int main(){
    
    // a loop inside of a loop
    //any kind
    //common naming convension for the interior loop is j
    //this is because you don't want overlap of index characters
    int rows;
    int columns;
    char symbol;

    std::cout << "please enter the number of rows you would like: ";
    std::cin >> rows;

    std::cout << "How many columns: ";
    std::cin >> columns;

    std::cout << "what symbol would you like to use: ";
    std::cin >> symbol;


   
    for(int i = 1; i <=rows; i++)
    {
        for(int j = 1; j <=columns; j++ ){
        std::cout << symbol;
        }
        std::cout << '\n';
    }

   return 0;
}