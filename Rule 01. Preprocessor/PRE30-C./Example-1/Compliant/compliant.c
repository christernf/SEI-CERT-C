#include <stdio.h>
#define assign(ucn, val) ucn = val
  
void func(void) {
  int \u0401;
  assign(\u0401, 4);
  printf("The value assigned is: %d \n", \u0401);
}

int main(){
    func();
    return 0;
}