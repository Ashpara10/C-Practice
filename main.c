#include <stdio.h>

void add(int a, int b,char o){

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
    add(10,378,'/');
    printf("Hello, world!2");
    return 0;
}

