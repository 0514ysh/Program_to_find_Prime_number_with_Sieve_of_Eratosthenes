#include <stdio.h>
#include <stdlib.h>

void eratosthenesSieve(int *num,int arr[]) {

    for (int i = 2; i <= *num; i++) {
        arr[i] = i;
    }
    for (int i = 2; i <= *num; i++) {
        if (arr[i] == 0) continue;
        for (int j = 2 * i; j <= *num; j += i) {
            arr[j] = 0;
        }
    }
    for (int i = 2; i <= *num; i++) {
        if (arr[i] != 0) printf("%d ", arr[i]);

    }
}

int main()
{
    int num = 0;
    int arr[10000001] = { '\0' };

    scanf_s("%d", &num);

    eratosthenesSieve(&num,arr);

    return 0;
}