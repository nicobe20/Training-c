#include <stdio.h>

//ejemplo de switch de w3schools.


int main() {
  int day = 8; //this prints the default option.
  
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
      printf("This is the default option");   // default case runs if no other case is true.

  }
    
  return 0;
}