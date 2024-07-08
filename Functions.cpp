#include <iostream>

void happyBirthday(std::string name, int age);


int main(){

    std::string name;
    std::cout << "what is your name? \n";
    std::cin >> name;
    int age = 21;
    happyBirthday(name, age);

return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "\nhappy birthday to you\n";
    std::cout << "happy birthday to you\n";
    std::cout << "happy birthday to dear " << name << '\n';
    std::cout << "happy birthday to you\n\n";
    std::cout << "you are " << age << " years old\n\n";
}