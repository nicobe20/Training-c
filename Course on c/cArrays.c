#include <stdio.h>

//Training on arrays !!! very cool stuff :)


int main(){ 

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