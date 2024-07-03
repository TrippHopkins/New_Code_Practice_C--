#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // the .length() will return the length of the string in characters


    if(name.length() > 12){
     std::cout << "Your name can't be over 12 characters";
    }
    else{
        std::cout << "welcome " << name;
    }


   // the .empty() checks if there was or was not user input
  

   if(!name.empty()){
    std::cout << "hello " << name;
   }
   else{
    std::cout << "you didn't enter your name";
   }


   // .clear() clears the data from a declaired variable

    //the .append() allows you to add a string onto a string
   

   name.append("@gmail.com");
    std::cout << "Your username is now " << name;


   // the name.at(x) returns whatever character is in that index
   // EXAMPLE : std::cout << name.at(1);
   // This will return whatever character is in the first index (Tripp hopkins - r)
   //the first character is always index 0


    //You can insert text or characters at a certain index with .instert( x, x) 
   

   name.insert(0, "@");
   std::cout << name;
 

  
  // the .find string allows you to search for a given character in the string
  // EXAMPLE: name.find('T') would return the index of where the letter 'T' can be found in name
  std::cout << name.find(' ');

  
  
  // using the .erase string, you can erase a given amount of characters from the input
  //EXAMPLE: name.erase(0, 3); would erase all characters with the indexes 0-3
  name.erase(0, 3);
  std::cout << name;

    return 0;
}