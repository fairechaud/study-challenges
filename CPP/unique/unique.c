#include <stdio.h>

int isUnique(char str[]) {
  int checker = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    int mask = (1 << (str[i] - 'a'));
    if ((checker & mask) > 0) {
      return 0; // Character already encountered
    }
    checker |= mask; // Set the bit corresponding to the character
  }
  return 1; // All characters unique
}

int main() {
  char str[1001];
  printf("Enter the string\n");
  scanf("%s", str);

  if (isUnique(str)) {
    printf("The string has all unique characters\n");
  } else {
    printf("The string has duplicate characters\n");
  }

  return 0;
}
