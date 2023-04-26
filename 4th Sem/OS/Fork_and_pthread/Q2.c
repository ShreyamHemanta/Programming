#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int isPalindrome(int n) {
    int rev = 0;
    int original = n;
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (original == rev)
        return 1; 
    else
        return 0; 
}
int isPrime(int n) {
    if (n <= 1)
        return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1; 
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    pid_t pid;
    pid = fork();

    if (pid == -1)
    {
        perror("fork");
        return 1;
    } 
    else if (pid == 0) 
    {
        if (isPalindrome(num))
            printf("%d is a palindrome.\n", num);
        else
            printf("%d is not a palindrome.\n", num);
    } 
    else 
    {
        if (isPrime(num))
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }
    return 0;
}