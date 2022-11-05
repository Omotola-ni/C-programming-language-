#include <stdio.h>
#include <string.h>
    
  
int main(){
    
    printf("This program counts from 1 to any integer N \n");
    printf("\n");
    
    printf("•••••••••••••••••••••••••••••••••••••••••••••••••\n");
    printf("\n");
    
    int number;
    printf("Enter any integer: ");
    scanf("%d", &number);
    
    for (int m= 0; m<=number; m++){
      
      printf("%d \n", m);
      
      }
      
    
    return 0;
}