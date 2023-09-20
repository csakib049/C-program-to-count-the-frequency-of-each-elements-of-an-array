#include<stdio.h>
int main(){

int i;
char array[100];


printf("Enter a string: ");
scanf("%s",&array);


for(i=0;array[i]!='\0';i++){
    
    if(array[i]>='a' && array[i]<='z'){
    
    array[i]=array[i]-32;
    
    }else if (array[i]>='A' && array[i]<='Z'){
        
        array[i]=array[i]+32;
        
    }
    
}




printf("%s",array);

return 0;

}
