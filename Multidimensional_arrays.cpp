#include <iostream>

int main(){

    //the first bracket is rows and the second is columns
    //the rows CAN be dynamic but the columns HAVE to be set
    // THIS IS CALLED A "2 DIMENSIONAL ARRAY"
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    //these nested loops iterates over the rows (outer loop) and columns (inner loop)
    for(int i = 0 ; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}