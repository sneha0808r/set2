//Que6 (a)
//naivee approch
#include<stdio.h>

void main(){
    int a[]={1, 2, 4, 5, 7, 11},n=6,x=9,f=0;
    for(int i=0;i<n;i++){
        for(int j=i+i;j<n;j++){
            if(a[i]+a[j]==x){
                f=1;
                break;
            }
        }
    }
    if(f=1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}