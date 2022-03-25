#include <stdio.h>

int main()
{
    char plaintext[1000], ch;
    int i, key;
    printf("Type a message you want encrypted using Caesars Cyper: ");
    gets(plaintext);
    //enter an INT for key, not a float or a char
    //for ex.. a key value of 1; plaintext "Hello World" = "Ifmmp Xpsme", and so forth..
    printf("Enter Key Value: ");
    scanf("%d", &key);
    for (i = 0; plaintext[i] != '\0'; ++i)
    {
        ch = plaintext[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;

            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            plaintext[i] = ch;
        }

        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
        }
        if (ch > 'z')
        {
            ch = ch - 'z' + 'z' - 1;
        }
        plaintext[i] = ch;
    }
    
    printf("Encrypted message: %s", plaintext);
    return 0;
}