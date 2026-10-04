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
    printf("ARRAY IN REVERSE ORDER IS = ");
	for( i = size-1 ; i >= 0; i--){
		printf("%d ", arr[i]);
	}
    return 0;
}
