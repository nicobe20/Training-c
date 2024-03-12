#include <stdio.h>

int main(){
  int i;
  int resultFizz;
  int resultBuzz; 
  for(int i = 1;i<=100 ; i++){
    int resultFizz = i % 3;
    int resultBuzz = i % 5;

    if(resultFizz == 0 && resultBuzz == 0){
      printf("FizzBuzz\n");

    }

    else if (resultFizz == 0){
      printf("Fizz\n");
    }
    else if(resultBuzz == 0){
      printf("Buzz\n");
    }
    else{
      printf("%d\n",i);
    }
      
    }
    }
      
// codecademy FizzBuzz training
