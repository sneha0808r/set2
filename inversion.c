//Que2
#include <stdio.h>

void main(){
    int n, i ,j,count=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(a[i]>a[j]  && i<j){
                printf("(%d,%d)",a[i],a[j]);
                count++;
            }
        }
    }
    printf("\nCount=%d",count);

}