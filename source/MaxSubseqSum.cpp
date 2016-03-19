#include <iostream>

int maxSubseqSum(int a[], int N) {
    int thisSum, maxSum;
    int i;
    thisSum = maxSum = 0;
    for (i = 0; i < N; i++) {
        thisSum += a[i]; /* 向右累加 */
        if (thisSum > maxSum) {
            maxSum = thisSum;
        } else if (thisSum < 0) {
            thisSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int b[] = {-1, 3, -2, 4, -6, 1, 6, -1}; 
    std::cout << "Max subsequence sum: " << maxSubseqSum(b, (sizeof(b) / sizeof(*b))) << std::endl;
    return 0;
}
