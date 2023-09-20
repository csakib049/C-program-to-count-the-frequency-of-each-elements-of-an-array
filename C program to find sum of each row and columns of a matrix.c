//C program to find sum of each row and columns of a matrix

#include<stdio.h>
int main(){
    
    int row,column,i,j,sum=0;
    
    printf("Enter the size of row:");
    scanf("%d",&row);
    
    printf("Enter the size of an column:");
    scanf("%d",&column);
    
    int array[row][column];
    
    //scanf the elements of array
    
    printf("Enter elements of array1: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    
    for(i=0;i<row;i++){
        sum=0;
        for(j=0;j<column;j++){
       sum=sum+array[i][j];
        }
       printf("Sum of elements of Row %d = %d\n",i+1, sum);
    }
    
    
      for(i=0;i<row;i++){
        sum=0;
        for(j=0;j<column;j++){
       sum=sum+array[j][i];
        }
       printf("Sum of elements of column %d = %d\n",i+1, sum);
    }
    
   
    
    return 0;
}
