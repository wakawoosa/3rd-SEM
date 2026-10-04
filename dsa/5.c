#include <stdio.h>

int main(){
	int size, i, x, key;
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
    printf("\nEnter key value: ");
    scanf("%d", &key);
    for(i = 0; i < size; i++){
        if (key == arr[i]){
        	printf("FOUND at position %d", i);
        	break;
		}
    }
    return 0;
}
