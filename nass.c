#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Odd numbers between 1 to 15 and 15 to 45\n");
    
    for(counter = 1; counter <= 45; counter++) {  
        
        if(counter%2 == 1) { 
            
            printf("%d ", counter);  
        }  
    }  
   
    return 0;  
} 

