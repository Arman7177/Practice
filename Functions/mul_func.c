#include <stdio.h>

  void mul(int num);

int main(){
     
     int num;
         printf("Enter the number:\n");
         scanf("%d",&num);

         mul(num);

   return 0;
 }
 
    void mul(int num){
         for(int i = 1; i <= 10;++i){
             printf("%d * %d = %d\n",num,i,(num*i));
         }  
    }

