#include <stdio.h> 
//break cycle 


int main(){


    for (int i; i <= 10; i+= 2){

        if(i == 1 ){
            break;
        }
        else{
            printf("The number is par: %d \n", i);


        }


    }

}
