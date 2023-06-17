#include<stdio.h>
int main(){
    int array[100],i,j,size,count,frequency[100];
    
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        printf("Array[%d]: ",i);
        scanf("%d",&array[i]);
        frequency[i]=-1;
    }
    
    for(i=0;i<size;i++){
        count=1;
        for(j=i+1;j<size;j++){
         
           if(array[i]==array[j]){
               count++;
               frequency[j]=0;
               
           }   
        }
        
        if(frequency[i]!=0){
            frequency[i]=count;
        }
    }
    
    printf("Frequency: \n");
    for(i=0;i<size;i++){
        if(frequency[i]!=0){
         printf("Frequency of %d is %d \n",array[i],frequency[i]);   
        }
    }
    return 0;
}
