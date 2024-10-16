//Que1
#include <stdio.h>

int maxSubArraySum(int a[], int size) {
    int sum = a[0]; 
    int max_sum = a[0];

    for (int i = 1; i < size; i++) {
        if (sum < 0){
            sum = a[i]; 
        }
        else{
            sum += a[i];
        }
        if (sum > max_sum){
            max_sum = sum;
        }
    }

    return max_sum;
}

int main() {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(a) / sizeof(a[0]);

    int result = maxSubArraySum(a, size);
    printf("The maximum subarray sum is %d\n", result);

    return 0;
}
