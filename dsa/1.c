#include <stdio.h>

int main(){
    int size, i, x;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array: ");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(x = 0; x < size; x++){
        printf("%d ",arr[x]);
    }
    return 0;
}