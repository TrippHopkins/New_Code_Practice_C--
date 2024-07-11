#include <iostream>

int main(){

    //sizeof() = determains the size, in bytes, of a:
    //           variable, data type, class, objects, etc.
    //  Usful for knowing how many total objects are in an array, as in (1,5,10,15,20), the size of this would be 5 bytes due to there being 5 objects in this array


    std::string name = "tripp";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"John", "Tyler", "Rob", "Jacob"};

    std::cout << sizeof(students)/sizeof(std::string) << " Bytes\n";

    return 0;
}