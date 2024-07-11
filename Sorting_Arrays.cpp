#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {1, 6, 3, 7 ,2, 4, 9, 8, 5, 10};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        std::cout << element << " ";

    }

    return 0;
}
void sort(int array[], int size){

//                      THIS IS CALLED A "BUBBLE SORT",
//                      NOT the most effecient but good for beginners


    //declaring integer temp
    int temp;
    //for when integer i is equal to 0 ; and i is less than size minus 1 (this is because we don't need to sort the last number because it will be the biggest)
    //then incriment i + 1 each time
    for(int i = 0 ; i < size - 1; i++){
        //same thing just using j because i is taken already
        for(int j = 0 ; j < size - i - 1; j++){
            // if array at index j is greater than array at j + 1 (which means the value to the right)
            if(array[j] > array[j + 1]){
                //then set array at index j to temp variable
                temp = array[j];
                //swap array at index j with array at index j + 1 (to the right)
                array[j] = array[j + 1];
                //then set array at index j + 1 to temp ( moving it to the left)
                array[j + 1] = temp;
            }
        }
    }
}