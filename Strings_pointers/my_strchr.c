#include <stdio.h>

char* my_strchr(char*str,char ch);

int main(){

    char* str = "Hello World";
    char ch = 'H';
 
    char* res = my_strchr(str,ch);

    if(res){
       printf("%s\n",res);
    }else{
       printf("Ther is no %d\n",ch);
    }




 }

 char* my_strchr(char*str,char ch){
     while(*str != '\0'){
           if(*str == ch){return str;}
           str++;
     }return NULL;

 }
