#include <stdio.h>

int main(){

    int arr[10];

        printf("Enter the number: \n");
        
        int index = 0;

        for(int i = 0; i < 10;++i){
            scanf("%d",&arr[i]);
            if(arr[i] > arr[index]){
               index = i;
            }
        }printf("The index of max number is %d\n",index);

    return 0;

 }
