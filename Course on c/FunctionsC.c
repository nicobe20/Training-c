#include <stdio.h>

//functions on c :) 
//this IS VERY IMPORTANT jiji


void myFunction(){
    //random process done inside this function.

    int A = 2+2;
    printf("Wow I just got exectued and A is: %d", A);

}

void mySecondFun(){

    printf("This is fun");



}

void ArrayFun(){   //i believe this has to have a parameter in order to run the for cycle!

//this is the example
    int i = 0;
    int Array1[] = {1,10,4,2,6,8,0};
    int len = sizeof(Array1)/sizeof(Array1[0]);
    printf("Length of array: %d \n",len);
    for(int i; i < len;i++){
        
            if(i == 1){
                Array1[i]=100;
                //printf("Updated value is: %d, on current pos: %d  \n",Array1[i],i);

            }

            printf("Current number: %d on current pos %d \n",Array1[i],i);

        
    }
    


}





int main(){
    //were gonna call the function that we make here :)
    myFunction(); 
    printf("\n");
    mySecondFun();
    printf("\n");

    ArrayFun();

    return 0;

}