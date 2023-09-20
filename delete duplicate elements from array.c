//C program to delete duplicate elements from array

#include<stdio.h>
int main(){
    
    int i,k,j,size;
    
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    
    int array[size];
    
    for(i=0;i<size;i++){
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    
    for(i=0;i<size;i++){
        
        for(j=i+1;j<size;j++){
            
            if(array[i]==array[j]){
                
                for(k=j;k<size-1;k++){
                    
                    array[k]=array[k+1];
                }
                size--;
                
            }
            
        }    
    
    }
    
    for(i=0;i<size;i++){
    printf("%d \t",array[i]);
    }
    
    
    return 0;
}
