#include <stdio.h>

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
   int arr2[100];
    
  // Code for Checkpoint 1 goes here

  int i = 0;
  while(i < 20){
    printf("%d\n",arr[i]);
    i++;
  }
    
  // Code for Checkpoint 2 goes here
  int z = 0;
  while(z < 100 ){
    arr2[z] = 4 + z;
    z++;
  }

    for(int x=0;x<100;x++){
    printf("%d\n",arr2[x]);
  }


}