//C program count total duplicate elements in array

#include<stdio.h>
int main(){
    
    int i,j,count=0,size;
    
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
                count++;
                break;
            }
            
        }
        
    }
    
    printf("Number of duplicate array:%d ",count);
    
    return 0;
    
}
