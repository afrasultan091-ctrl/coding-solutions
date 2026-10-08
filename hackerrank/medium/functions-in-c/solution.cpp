#include <stdio.h>

// Helper function to return the maximum of two numbers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function to return the maximum of four numbers
int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    if (scanf("%d %d %d %d", &a, &b, &c, &d) == 4) {
        int ans = max_of_four(a, b, c, d);
        printf("%d\n", ans);
    }
    return 0;
}
