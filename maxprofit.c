//Que9
#include <stdio.h>

int maxProfit(int arr[], int n) {
    if (n <= 1) 
        return 0; 

    int min_price = arr[0];
    int max_profit = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min_price) {
            min_price = arr[i];
        }
        
        int profit = arr[i] - min_price;
        if (profit > max_profit) {
            max_profit = profit;
        }
    }
    
    return max_profit; 
}

int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxProfit(arr, n);
    printf("Maximum profit: %d\n", result);

    return 0;
}
