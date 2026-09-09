#include <stdio.h>

void linear_search(int arr[],int size, int key){
    int i = 0, flag = 1;
    for(i ; i < size; i++){
        if(arr[i] == key){
            printf("Key value found at position %d", i+1);
            flag = 0;
        }
    }
    if(flag == 1){
        printf("Key value not found in the given array");
    }
}

int main(){
    int size, i = 0, key;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array");
    for(i ; i < size ; i++){
        scanf("%d", arr[i]);
    }
    printf("Enter key value");
    scanf("%d", &key);
    linear_search(arr, size, key);
}