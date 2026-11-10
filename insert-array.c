// insert an element at a given position in an array

#include<stdio.h>

int main(){
    int a[100],n,pos,value,i;

    printf("enter size:");
    scanf("%d",&n);

    printf("enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter position and value:");
    scanf("%d%d",&pos,&value);

    if(pos<1||pos>n+1){
        printf("invalid position or array full");
        return 0;
    }

    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }

    
    a[pos-1]=value;
    n++;

    printf("updated array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
 

    return 0;

}