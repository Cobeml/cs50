#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int cardNumber = get_long("Number: ");

    int numLength = floor(log10(cardNumber) + 1);

// creating an array with the digits from cardNumber WHAT DID I DO WRONG??
    int digitArray[numLength];
    for (int i = 0; i < numLength; i++)
    {
        digitArray[i] = floor(cardNumber / pow(10, numLength - i - 1));
        printf("%i\n", digitArray[i]);
        cardNumber -= digitArray[i] * pow(10, numLength - i);
    }
printf("%i\n", cardNumber);
//use card number digits to calculate the luhn number
    int luhnNum = 0;


    if (cardNumber)

    if (cardNumber < 0)
    {
        printf("INVALID\n");
    }
}
//if last digit of luhn number is not 0 then print INVALID
//if cardnumber begins with 4 and is 13 or 16 digits long then print VISA
//if cardnumber is 15 digits print AMEX
//if cardnumber is 16 digits print MASTERCARD
//else print INVALID