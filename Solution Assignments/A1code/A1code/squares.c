#include <stdio.h>

int main() {
  int squares, temp;
  do {
    printf("How many squares do you want? ");
    scanf("%d", &squares);
  }
  while (squares <= 0 || squares > 50);

  for (; squares > 0; squares -= 5) {
    temp = squares > 5 ? 5 : squares % 5;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < temp; j++) printf("### ");
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
