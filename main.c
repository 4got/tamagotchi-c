

#include <heads_main.h>

int main()
{

  struct character ac1;
  //предоставление выбора

  printf("Hello, how do you wish to call me?");
  scanf(ac1.name);
  getchar();

  printf("Thank you. What kind of beast am I?\n1 - a bird\n2 - crocodile\n3 - zebra\n4 - cyclope\n5 - tiger\n");
  scanf("%d", &ac1.beast);
  getchar();
  printf("So I am %s", ac1.name);
  switch (ac1.beast)
  {
  case 1:
    /* code */
    break;

  default:
    break;
  }
  return 0;
}