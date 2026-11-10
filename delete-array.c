// delete an element at a given position

#include<stdio.h>

int main(){

    int a[100],n,pos,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter position:");
    scanf("%d",&pos);

    if(pos<1||pos>n){
        printf("invalid position");
        return 0;
    }
    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    for(i=0;i<n;i++)
        printf("%d",a[i]);

    return 0;
}