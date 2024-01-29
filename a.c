#include<stdio.h>
int main(){
    int a[50],size,pos,num,i;
    printf("enter the size of array ");
    scanf("%d",&size);
    if(size>50){
        printf("size overflow");
    }else{
        printf("enter the element of array");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("enter the item to be inserted");
        scanf("%d",&num);
        printf("enter the position ");
        scanf("%d",&pos);
        if(pos<=0||pos>size+1){
            printf("Invalid position");
        }
        else{
            for(i=size-1;i>=pos-1;i--){
                a[i+1]=a[i];
            }
            a[pos-1]=num;
            size++;
            for(i=0;i<size;i++){
            printf("updated array is :%d\n",a[i]);
         
            }
        
        }
    }
    return 0;
}
