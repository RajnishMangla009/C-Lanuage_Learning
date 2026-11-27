#include <stdio.h>

int main() {
  char str[200];
  int i, alpha = 0, digit = 0;
  int vowel = 0, consonant = 0;
  int space = 0, special = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  for (i = 0; str[i] != '\0'; i++) {
    if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
      alpha++;

      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
          str[i] == 'O' || str[i] == 'U') {
        vowel++;
      } else {
        consonant++;
      }
    } else if (str[i] >= '0' && str[i] <= '9') {
      digit++;
    } else if (str[i] == ' ') {
      space++;
    } else {
      special++;
    }
  }

  printf("Alphabets = %d\n", alpha);
  printf("Digits = %d\n", digit);
  printf("Vowels = %d\n", vowel);
  printf("Consonants = %d\n", consonant);
  printf("Spaces = %d\n", space);
  printf("Special Characters = %d\n", special);

  return 0;
}
