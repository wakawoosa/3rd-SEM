#include <stdio.h>

int main(){
    int i = 0, size, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("\n%d\n", sum);
}