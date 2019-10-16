#include <stdio.h>

int main() {
    char string[100] = "Hello Kurnool";
    int i, start = 0, longest = 0, longest_pos = 0;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ')
		 {
            start = i + 1;
        }
		 else
		  {
            if (i - start > longest) 
			{
                longest = i - start;
                longest_pos = start;
            }
        }
    }    
    printf("longest word: %d letters, '%.*s'\n",
           longest, longest, string + longest_pos);

    return 0;
}
