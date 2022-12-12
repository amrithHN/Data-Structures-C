//
// Created by amrit on 12/11/2022.
//
#include <stdio.h>

//Simple array in C
void array_1d(){

    int array[10], i = 0;
    printf("Enter 10 numbers:\n");

    for (i = 0; i < sizeof(array)/sizeof(int); i++)
        scanf("%d", &array[i]);

    i=0;
    while (array[i]) {
        printf("%d", array[i]);
        i++;
    }
    return;
}

void array_2d(){

    int n=0,m=0;
    int array2d[20][20];
    printf("Enter n for nxm 2d array:");
    scanf("%d",&n);

    printf("Enter m for nxm 2d array:");
    scanf("%d",&m);

    printf("Enter 2d array :");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d",&array2d[i][j]);

    printf("Entered 2d array :");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            printf("%d ",array2d[i][j]);


}

int main() {

    array_1d();
    array_2d();

return 0;
}