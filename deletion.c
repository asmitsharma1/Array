#include<stdio.h>
int main(){
    int arr[50],i,pos,size;
    printf("eneter the size of the array");
    scanf("%d",&size);
    if(size>50){
        printf("invalid size");

    }else{
        printf("enter the element of the array");
        for(i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("enter the element which you want to delete ");
        scanf("%d",pos);
        for(i=pos-1;i<size-1;i++){
            arr[i+1]=arr[i];
        }
        printf("updated array is ");
        for(i=0;i<size;i++){
            printf("arr[%d]=%d",i,arr[i]);
        }
    }
}