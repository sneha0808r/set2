//Using Two Pointer Technique
#include <stdio.h>

int main() {
    int a[]={1,2,4,5,7,11},n=6,x=9,left=0,right=n-1,sum=0,f=0;

    while (left < right) {
        sum = a[left] + a[right];
        if (sum == x) {
            f++;
            break;
        } 
        else if (sum < x) {
            left++;
        } else {
            right--; 
        }
    }
    if(f==0)
        printf("No\n");
    else
        printf("Yes\n");

}