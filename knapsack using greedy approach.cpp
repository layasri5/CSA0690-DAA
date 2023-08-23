#include <stdio.h>
#include <stdlib.h>

// Structure to represent an item
struct Item {
    int weight;
    int value;
};

// Function to calculate the maximum value using the greedy approach
double fractionalKnapsack(struct Item items[], int n, int capacity) {
    // Calculate the value-to-weight ratio for each item
    double ratios[n];
    for (int i = 0; i < n; i++) {
        ratios[i] = (double)items[i].value / items[i].weight;
    }

    // Sort items based on the value-to-weight ratio in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratios[i] < ratios[j]) {
                // Swap ratios
                double tempRatio = ratios[i];
                ratios[i] = ratios[j];
                ratios[j] = tempRatio;
                // Swap items
                struct Item tempItem = items[i];
                items[i] = items[j];
                items[j] = tempItem;
            }
        }
    }

    double maxValue = 0.0;
    int currentWeight = 0;
    for (int i = 0; i < n; i++) {
        if (currentWeight + items[i].weight <= capacity) {
            currentWeight += items[i].weight;
            maxValue += items[i].value;
        } else {
            int remainingCapacity = capacity - currentWeight;
            maxValue += (ratios[i] * remainingCapacity);
            break; 
        }
    }

    return maxValue;
}

int main() {
    int n, capacity;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    struct Item items[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the weight and value of item %d: ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    double maxTotalValue = fractionalKnapsack(items, n, capacity);

    printf("The maximum total value for the given knapsack capacity is: %.2lf\n", maxTotalValue);

    return 0;
}

