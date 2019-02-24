#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int p;
    int max_sum = 0;
    int now_sum = 0;
    for (int i = 0; i < x; i++) {
        scanf("%d", &p);
        now_sum = now_sum + p;
        if(now_sum>max_sum){
            max_sum = now_sum;
        }
        if (now_sum<0){
            now_sum = 0;
        }
    }
    printf("%d", max_sum);
    return 0;
}