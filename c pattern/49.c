#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",'A' + k-1);
            k++;
        }
        printf("\n");
    }
    return 0;
}