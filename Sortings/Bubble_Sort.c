#include<stdio.h>

void bubbleSort(int a[], int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(a[j] > a[j +1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n, i;
    printf("Enter the size\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    printf("After sort\n");
    for(i = 0; i < n; i++){
        printf("%d", a[i]);
    }

}

/*

OUTPUT:

Enter the size
5
Enter the array elements
1
5
2
7
3
After sort
1 2 3 5 7

*/
