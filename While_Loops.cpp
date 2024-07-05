#include <iostream>

int main()
{
   std::string name;

   //kind of like an if statement but repeats code until condition is true
   //checks at the beginning of the loop if true, then checks again at the end, if still false, it repeats the process
   
   while(name.empty()){
    std::cout << "Enter Your name: ";
    std::getline(std::cin, name);
   }

   std::cout << "Hello " << name;

    return 0;
}