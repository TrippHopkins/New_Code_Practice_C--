#include <iostream>

int searchArray(std::string array[], int size, std::string element);


int main() {

    std::string food[] = {"Pizza","hamburger","taco","onion","watermelon"};
    int size = sizeof(food)/sizeof(food[0]);
    int index;
    std::string myFood;

    std::cout << "enter element to search for: \n";
    std::getline(std::cin, myFood);

    index = searchArray(food, size, myFood);

    if(index != -1){
        std::cout << myFood << " Is at index " << index;

    }
    else{
        std::cout << myFood << " is not in the array";
    }
    return 0;
}
int searchArray(std::string array[], int size, std::string element){

    for(int i = 0 ; i < size ; i++){
        if (array[i] == element)
            return i;
    }
    return -1;
}