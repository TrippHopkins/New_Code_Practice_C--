#include <iostream>

int main(){

    // foreach loop = loop that eases the traversal over an iterable data set
    // best used to just display the amount in a array
    // less flexible syntax as a for loop

    std::string students[] = {"Jakob", "John", "Jerald", "Jones"};
    
    int grades[] = {65, 72, 81, 95};
    
    for(int grade : grades){
        std::cout << grade << '\n';
    }


    return 0;

}