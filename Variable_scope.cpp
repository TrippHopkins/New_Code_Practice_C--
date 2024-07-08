#include <iostream>

void printNum();

int myNum = 3;

int main(){

    //local varialbes = declaired inside functions or blovks {}
   //Global variables = declaired outside of ALL FUNCTIONS
   //functions will use local variables before global variables
    // if you add '::' before displaying variable, it will use global version instead of local version
  
   int myNum = 1;
   
   printNum();
   std::cout << myNum << '\n';

    return 0;
}
void printNum(){
   
   int myNum = 2;
   
   std::cout << ::myNum << '\n';
}