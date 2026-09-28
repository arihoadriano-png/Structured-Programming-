#include <stdio.h>
#include <stdlib.h>

int main()
  {
      int n,n2,n3,n4;
      printf("N1\tN2\tN3\tN4\t\n");
      for(int n=1;n<=10;n++ ){

      n2=n*n;
      n3=n*n*n;
      n4=n*n*n*n;
      printf("%d\t%d\t%d\t%d\t\n",n,n2,n3,n4);
      }





    return 0;
}
