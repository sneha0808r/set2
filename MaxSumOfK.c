#include <stdio.h>

int main(){
    int i,j,n,k,sum=0,sum1;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter thte value of k : ");
    scanf("%d",&k);

    if(k>n){
        printf("Invalid index");
        return -1;
    }

    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the value at position %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<k;i++){
        sum=sum+a[i];
    }

    sum1=sum;
    for(i=k;i<n;i++){
        sum1 += a[i] - a[i-k];
        if(sum1>sum){
            sum=sum1;
        }
    }
    printf("Maximum of %d consicutive element is : %d",k,sum);

    return 0;
}