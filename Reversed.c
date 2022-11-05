#include <stdio.h>  
#include <string.h> 


void reversed(char theSentence[500]) ;
    
int main(){
    printf("\n");
    printf("This Program Reverses A Word/Sentence \n");
    printf("\n");
    printf("••••••••••••••••••••••••••••••••••••••••••••••••\n");
    char theSentence[500] ;
    printf("Enter the Word/Sentence you want to reverse : ");
    fgets( theSentence, 500, stdin);
    printf("\n");
    
    reversed(theSentence);
    
    return 0;
    
    
}


void reversed(char theSentence[500]){
    
        int length= strlen(theSentence);  /*Length of the sentence*/
    
        char reversed[length]; /*stores the reversed sentence*/
    
        for (int j= length - 1; j >= 0; j-- ){
       
        reversed[j] = theSentence[length - j -1];
        
        /*this for loop operation  replaces the last index of the original sentence with the first index */
        
        }
          printf("The reversed sentence is :    %s ", reversed);
    
    
}
