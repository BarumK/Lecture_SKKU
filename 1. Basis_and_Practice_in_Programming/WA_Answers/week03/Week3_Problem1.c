#include <stdio.h>

int main(void) {

  int x,y;
  printf("Enter a coordinate point :");
  scanf("%d %d", &x, &y);

  if (x==0) {
    if (y==0)
      printf("The point(%d,%d) lies at the intersection of the two axes.\n", x,y);
    else
      printf("The point(%d,%d) lies at y axe.\n", x,y);
  } else if(y==0) {
      printf("The point(%d,%d) lies at x axe.\n", x,y);
  } else {
    if(x>0) {
      if(y>0)
        printf("The point(%d,%d) lies in the First quadrant.\n", x,y);
      else
        printf("The point(%d,%d) lies in the Fourth quadrant.\n", x,y);
    } else {
      if(y>0)
        printf("The point(%d,%d) lies in the Second quadrant.\n", x,y);
      else
        printf("The point(%d,%d) lies in the Third quadrant.\n", x,y);
    }
  }
  return 0;
}