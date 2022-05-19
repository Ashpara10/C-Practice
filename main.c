#include <stdio.h>

void calc(int a, int b,char o){

  if(o=='+'){
     printf("%d \n",a+b);
  }
  if(o=='-'){
     printf("%d \n",a-b);
  }
  if(o=='/'){
     printf("%d \n",a/b);
  }
  if(o=='*'){
     printf("%d \n",a*b);
  }
  
}
int main() {

    int a=557;
    float b=9897.00;
    char c='A';
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);

    int i = 100;
    while (i > 10) {
      printf("%d\n", i);
      i--;
    }
    return 0;
}

