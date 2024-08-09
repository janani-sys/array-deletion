#include<stdio.h>
int main(){
    int len,index;
    printf("Enter the Length of the Array : ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the Array Elements : \n");
    for(int i =0; i<len; i++){
        scanf("%d",&arr[i]);
    }
    printf("Given Array : \n");
    for(int i = 0; i<len; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the Index Position of Element to be deleted : ");
    scanf("%d",&index);
    for(int i = index; i<len; i++){
        arr[i] = arr[i+1];
    }
    len--;
    printf("Updated Array : \n");
    for(int i = 0; i<len; i++){
        printf("%d\t",arr[i]);
    }
}

