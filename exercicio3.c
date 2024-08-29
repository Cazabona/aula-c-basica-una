// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int num;
  printf("Coloque um numero: ");
  scanf ("%d",&num);
  
  for (int i=2;i<num;i++)
  {
     if(num%i ==0){
         printf("n é primo");
         return 0;
     }
  }
  
  printf ("é primo");
 

    return 0;
}
