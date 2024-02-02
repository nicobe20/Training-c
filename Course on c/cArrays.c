#include <stdio.h>

//Training on arrays !!! very cool stuff :)


int main(){ 

    int Array1[] = {1,10,4,2,6,8,0};
    int len = sizeof(Array1)/sizeof(Array1[0]);
    printf("Length of array: %d \n",len);
    for(int i; i < len;i++){
        printf("Current number on current pos: %d, %d\n",Array1[i],i);
            if(i == 1){
                Array1[6] = 100;

            }
        
    }


}