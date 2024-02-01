#include<stdio.h>
int main(){
    int a[50],n,i;
    printf("enter the size of the array ");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("reversed array is");
    for (i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
}