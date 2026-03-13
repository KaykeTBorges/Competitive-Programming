#include <stdio.h>
 
int main() {
 int first, second;

 scanf("%d", &first);
 scanf("%d", &second);
 
 if(first){
     if(second){
         printf("A\n");
     }else if(!second){
         printf("B\n");
     }
 }else if(!first){
     printf("C\n");
 }
 
    return 0;
}