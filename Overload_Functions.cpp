#include <iostream>

void create();
void create(std::string part1);
void create(std::string part1, std::string part2);

int main(){

    create("wood", "Servos");
    
    
    return 0;
}

void create(){
    std::cout << "create complete!\n";
}
void create(std::string part1){
        std::cout << "This create includes " << part1 << '\n';
}
void create(std::string part1, std::string part2){
        std::cout << "This create includes " << part1 << " and " << part2 << '\n';
}