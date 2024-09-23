#include <stdio.h>
int isPalindrome(int num) 
{
    int original = num;
    int reversed = 0;
    int remainder;
    

    for ( ; num != 0; num /= 10) 
	{
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }
    
    
    if (original == reversed) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

