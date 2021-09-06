

#include <heads_main.h>

int main()
{

  struct beast ac1;
  //предоставление выбора

  printf("Hello, how do you wish to call me?\n");
  scanf(ac1.name);
  getchar();

  printf("Thank you. What kind of beast am I?\n1 - a bird\n2 - a crocodile\n3 - a zebra\n4 - a cyclope\n5 - a tiger\n");
  scanf("%d", &ac1.id);
  getchar();
  default_beasts(&ac1);
  printf("So I am %s", ac1.name);
  getchar();

  return 0;
}