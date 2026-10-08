#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    // Array storing lowercase English words for numbers 1 to 9
    const char *words[] = {
        "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    if (n >= 1 && n <= 9) {
        printf("%s\n", words[n - 1]);
    } else if (n > 9) {
        printf("Greater than 9\n");
    }

    return 0;
}
