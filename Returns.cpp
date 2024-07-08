#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main(){

    std::string firstName = "tripp";
    std::string lastName = "hopkins";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << "!" << '\n';
    return 0;
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}


/*
double square(double length);
double cube(double length);

int main(){

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << area << '\n';
    std::cout << volume << '\n';

    return 0;
}

double square(double length){
    return length * length;
}
double cube(double length){
    return length * length * length;
}
*/
