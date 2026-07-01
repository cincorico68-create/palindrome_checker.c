#include <stdio.h>

int main() {
   
    int sets[7][10] = {
        {1, 2, 3, 2, 1},
        {5, 4, 4, 5},
        {1, 2, 3, 4, 5},
        {7},
        {9, 9},
        {3, 7},
        {1, 2, 3, 4, 5, 4, 3, 2, 1}
    }; 

    for (int i = 0; i < 7; i++) {
        printf("Set %d: ", i + 1);

        int length = 0;
        while (sets[i][length] != 0) {
            length++;
        }

        int idx = 0;
        int isPalindrome = 1;

        while (idx < length) {
            printf("%d ", sets[i][idx]);

            if (sets[i][idx] != sets[i][length - 1 - idx]) {
                isPalindrome = 0; 
            }
            idx++;
        }

        if (isPalindrome) {
            printf("-> Palindrome\n");
        } else {
            printf("-> Not Palindrome\n");
        }
    }

    return 0;
}