#include <stdio.h>

int main()
{
  char moji[128];

  /*  scanf("%[^\n]", &moji); */
  while((fgets(moji, 128, stdin)) != NULL) {
    printf("%s", moji);
  }

  return 0;
}
