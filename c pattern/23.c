#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < n - i; k++) {
            printf("%c", 'A' + k);
            
        }
        printf("\n");
    }

    return 0;
}
