#include <iostream>

int main() {

    //fill() = fills a range of elements with a specific value
    //         fill(begin, end, value)

/*  std::string soda[10] = {"Coke", "Coke", "Coke", "Coke", "Coke", "Coke", "Coke", "Coke", "Coke", "Coke"};

    for(std::string sodas : soda){
        std::cout << sodas << '\n';
    }
*/    

    //declaring the constant size variable to be 99
    const int size = 99;
    
    //creating array 'sodas' with the size of 99 (size variable)
    std::string sodas[size];

    //fill from the beginning to the 1/3 mark with the word 'coke'
    fill(sodas, sodas + (size/3), "Coke");
    
    //fill from 1/3 mark to 2/3s mark  with the word 'pepsi'
    fill(sodas + (size/3), sodas + (size * 2/3), "pepsi");
    
    //fill from 2/3s mark to end with 'sprite'
    fill(sodas + (size * 2/3), sodas + size, "sprite");

    //for the element soda in sodas
    //display soda and start new line
    for(std::string soda : sodas){
        std::cout << soda << '\n';
    }
    

    return 0;
}