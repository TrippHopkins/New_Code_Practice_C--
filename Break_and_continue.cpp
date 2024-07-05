#include <iostream>

int main()
{
    // break = break out of a loop (as in a switch statement)
    // continue = skip current iteration

    for(int i = 1; i <=20; i++){
        if(i == 13){
            //break; will stop the sequence if the if is true
            //continue; will check to see if statement is true, if it is, it skips that part of the sequence and continues it
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}