#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * random_char - program that generates random valid passwords 
 *	for the program 101-crackme.
 *
 * Return: Void
 */



// Function to generate a random character
char random_char() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    const size_t charset_size = sizeof(charset) - 1;
    return charset[rand() % charset_size];
}

// Function to generate a random valid password
void generate_password(int length) {
    if (length < 8) {
        printf("Password length must be at least 8 characters.\n");
        return;
    }

    for (int i = 0; i < length; i++) {
        printf("%c", random_char());
    }

    printf("\n");
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int password_length;
    printf("Enter the desired password length: ");
    scanf("%d", &password_length);

    generate_password(password_length);

    return 0;
}

