//C program to concatenate two strings

#include<stdio.h>
int main(){
 
    char array1[100],array2[100];
    
    printf("Enter a string: ");
    scanf("%s",&array1);
    printf("Enter a string: ");
    scanf("%s",&array2);
    
    int i=0,j=0;
    
    while(array1[i]!='\0'){
        i++;
    }
    
    
    while(array2[j]!='\0'){
        array1[i]=array2[j];
        i++;
        j++;
    }
    
    array1[i]='\0';
    
    printf("After concatenation: %s",array1);
    
    return 0;
}
