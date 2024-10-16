//Que 5
#include<stdio.h>

int main(){
    int a[10],i,j,n,f=-1;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter elements of an array\n");
    
    for(i=0;i<n;i++){
        printf("element %d : ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=n;i++){
        int sum=0;
        int sum1=0;
        for(j=0;j<i;j++){
            sum=sum+a[j];
        }
        for(j=i+1;j<n;j++){
            sum1=sum1+a[j];
        }
        if(sum==sum1){
            f=i+1;
            break;
        }
    }
    if (f == -1) {
        printf("No equilibrium index exists.\n");
        printf("Equilibrium index: %d\n",f);
    } 
    else {
        printf("Equilibrium index: %d\n",f);
    }
}