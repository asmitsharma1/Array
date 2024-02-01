#include<stdio.h>
int main(){
    int a[50];
    int pos,size,i;
    printf("enter the size of array");
    scanf("%d",&size);
    if (size >50){
        printf("invalid size");
    }else{
        printf("enter the element of array");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);

        }
        printf("enter the item to be deleted ");
        scanf("%d",&pos);
        if (pos>=size){
            printf("invalid position");
        }
        else{
            for(i=pos-1;i<size-1;i++){
                a[i]=a[i+1];
            }
            printf("updated array is");
            for (i=0;i<size-1;i++){
                
                printf("a[%d]=%d\n",i,a[i]);
            }
        }
    }
}
