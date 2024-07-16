#include <iostream>

int main(){

    // a NULL value is a special value that means something has no value
    //if a pointer is holding a null value, it is not pointing to anything

    //nullptr = keyword represents a null pointer literal

    //nullptrs are helpful when determaining if an adress
    //was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;
    
    if(pointer == nullptr){
        std::cout << "NOPE";
    }
    else{
        std::cout << "yep";
    }

    return 0;
}