//C program to print all unique elements in array

#include<stdio.h>
int main(){
    
    int i,j,size,count,array[100],frequency[100];
    
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
  
    for(i=0;i<size;i++){
      if(frequency[i]==1){
          printf("Unique element is :%d",array[i]);
         }
    }
    
    return 0;
}
