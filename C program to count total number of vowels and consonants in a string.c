//C program to count total number of vowels and consonants in a string

#include<stdio.h>
int main(){
    
    int i,vowel=0,consonent=0;
    char array[100];
    
    printf("Enter a string: ");
    scanf("%s",&array);
    
    for(i=0;array[i]!='\0';i++){
        if(array[i]>='a' && array[i]<='z'  ||  array[i]>='A' && array[i]<='Z'){
            
            if(array[i]=='a'|| array[i]=='e'|| array[i]=='i'|| array[i]=='o'|| array[i]=='u'|| array[i]=='A'|| array[i]=='E'|| array[i]=='I'|| array[i]=='O'|| array[i]=='U'){
                
                vowel++;
                
            }else{
                
                consonent++;
                
            }
        }
    }
    
    printf("Vowel:%d\nConsonent:%d\n",vowel,consonent);
    
    return 0;
}
