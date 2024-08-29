
#include <stdio.h>

int main() {
    // Write C code here
   int num;
   int resp;
  printf("Coloque um numero: ");
  scanf ("%d",&num);
  
  for (int i=1;i<=num;i++)
  {
      resp += i;
  }
  
  printf ("a resposta é %d", resp);

    return 0;
}
