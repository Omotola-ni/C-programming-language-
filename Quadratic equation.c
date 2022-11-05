#include<stdio.h>
#include<math.h>


int main(){
    
    printf("/n");
    
    printf("This program solves a simple quadratic equation in the form (ax + by+ c)  where x is the quadratic term and y is the linear term\n");
    printf("\n");
    
    printf("•••••••••••••••••••••••••••••••••••••••••••••••••\n");
    printf("\n");
    
    int a;
    int b;
    int c;
    
    printf("Enter the Coeficient of x (a) : ");
    scanf("%d", &a);
    
    printf("Enter the coefficienr of y  (b) : ");
    scanf("%d", &b);
    
    printf("Enter the value of c : ");
    scanf("%d", &c);
    
    double d = (b*b )  - (4*a*c);
    
    if (d >0){
      /*If the roots are real and different*/
    double root1 = (-b + sqrt(d)) / (a*2) ;
    double root2 = (-b - sqrt(d)) / (a*2);
     
     printf("root1 is %.2lf\n", root1);
     printf("root2 is %.2lf", root2);
     
       } else  if (d ==0){
      /*If the roots are real and equal*/
    double root1 = (-b ) / (a*2) ;
    double root2 = (-b )/ (a*2);
     
     printf("root1 is %.2lf\n", root1);
     printf("root2 is %.2lf", root2);
     
       }
       else{
           
           printf("This equation has Real and Imaginary roots \n");
           /*if the solution has real and imaginary roots*/
           double realRoot = (-b)/(a*2);
           double imaginaryRoot = sqrt(-d)/(a*2);
           
           printf("Root 1  is %.2lf + %.2lfi \n Root 2 is %.2lf - %.2lfi", realRoot, imaginaryRoot, realRoot, imaginaryRoot);
           
           }
    
 }