#include <iostream>
#include <vector>

// Function to find the minimum possible sum of the array
int findMinSum(std::vector<int>& Numbers) {
    int sum = 0;
    int prev = 0; // Initialize the previous number

    // Iterate through the array
    for (int i = 0; i < Numbers.size(); ++i) {
        if (Numbers[i] == -1) {
            // Find the minimum bit-even number greater than or equal to the previous number
            int encryptedNum = prev;
            while (__builtin_popcount(encryptedNum) % 2 != 0) {
                encryptedNum++;
            }
            Numbers[i] = encryptedNum;
        }
        sum += Numbers[i];
        prev = Numbers[i]; // Update the previous number
    }

    return sum;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> Numbers(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> Numbers[i];
    }

    int result = findMinSum(Numbers);
    std::cout << result << std::endl;

    return 0;
}