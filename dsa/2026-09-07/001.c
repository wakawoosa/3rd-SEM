#include <stdio.h>

void print(int arr[], int size){
    int i = 0;
    printf("The array is: ");
    for(i ; i < size; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void linear_search(int arr[], int size, int key){
    int i = 0, flag = 1;
    for(i ; i < size; i++){
        if( arr[i] == key){
            printf("\nFound by linear search at position %d\n", i);
            flag = 0;
        }
    }
    if( flag == 1){
        printf("\nKey value not found by linear search\n");
    }
}

void binary_search(int arr[], int size, int key){
    int low = 0, high = size - 1, mid;
    int i, j, temp;
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == key){
            printf("\nFound by binary search at position %d\n", mid);
            return;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    printf("\nKey value not found by binary search\n");
}


int main(){
    int size, i = 0, key;
    printf("Enter size of element: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array: ");
    for(i ; i < size ; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter key value: ");
    scanf("%d", &key);
    linear_search(arr , size , key);
    binary_search(arr , size , key);
    print(arr, size);
    return 0;
}