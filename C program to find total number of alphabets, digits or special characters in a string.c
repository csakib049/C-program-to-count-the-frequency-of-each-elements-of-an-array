//C program to find total number of alphabets, digits or special characters in a string


#include<stdio.h>
int main(){
    
    int i,alphabets=0,digits=0,others=0;
    char array[100];
    
    printf("Enter any string: ");
    scanf("%s",&array);
    
    for(i=0;array[i]!='\0';i++){
      if(array[i]>='a' && array[i]<='z' || array[i]>='A' && array[i]<='Z'){
          
          alphabets++;
          
      }else if(array[i]>='0' && array[i]<='9'){
          
          digits++;
          
      }else{
          
          others++;
          
      }
      
    }
    
    printf("Alphabets:%d\nDigits:%d\nOthers:%d\n",alphabets,digits,others);
    
    
    
    return 0;
}
