//C program to check whether two matrices are equal or not


#include<stdio.h>
int main(){
    
    int row,column,i,j,isequal;
    
    printf("Enter the size of row:");
    scanf("%d",&row);
    
    printf("Enter the size of an column:");
    scanf("%d",&column);
    
    int array1[row][column],array2[row][column],array3[row][column];
    
    //scanf the elements of array1
    
    printf("Enter elements of array1: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Array1[%d][%d]:",i,j);
            scanf("%d",&array1[i][j]);
        }
    }
    
    
    //scan the numbers of array2
    
    printf("Enter elements of array2: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Array[%d][%d]:",i,j);
            scanf("%d",&array2[i][j]);
        }
    }
    
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            if(array1[i][j] == array2[i][j]){
                isequal=1;
                break;
            }else{
                isequal=2;
            }
        }
    }
    
    if(isequal==1){
        printf("\nMatrix are equal.");
    }else if(isequal==2){
        printf("\nMatrix are not equal.");
    }
    
    
    return 0;
}
