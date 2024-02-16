#include <stdio.h>

int main(){

    int earth;
    int planets;
    printf("Enter your earth weight:");
    scanf("%d", &earth);
    printf("Enter the destination planet: ");
    scanf("%d", &planets);
    

    switch (planets){
        //mercury
        case 1:
        float mercury = (0.38*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Mercury is : %.1f ", mercury);
        break;
        //Venus
        case 2: 
        float Venus = (0.91*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Venus is : %.1f ", Venus);
        break;
        //Mars
        case 3:
        float Mars = (0.38*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Mars is : %.1f ", Mars);
        break;
        //Jupiter
        case 4:
        float Jupiter = (2.34*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Jupiter is : %.1f ", Jupiter);
        break;
        //Saturn
        case 5: 
        float Saturn = (1.06*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Saturn is : %.1f ", Saturn);
        break;
        //Uranus
        case 6: 
        float Uranus = (0.92*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Uranus is : %.1f ", Uranus);
        break;
        //Neptune
        case 7:
        float Neptune = (1.19*(9.8) * earth)/9.8;
        printf("Your weigth on Earth is : %d\n",earth);
        printf("Your wigth on planet Neptune is : %.1f ", Neptune);
        break;

        //default case.
        default: 
        printf("No planet found :(");
        break;
        


    }




}