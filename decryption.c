#include <stdio.h>

int main()
{
    char plaintext[1000], ch;
    int i, key;
    printf("Type a message you want decrypted using Caesars Cypher: ");
    gets(plaintext);
    printf("Enter Key Value used in prior text encryption: ");
    scanf("%d", &key);
    for (i = 0; plaintext[i] != '\0'; i++)
    {
        ch = plaintext[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;

            if (ch < 'Z')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            plaintext[i] = ch;
        }

        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - key;
        }
        if (ch < 'a')
        {
            ch = ch + 'z' - 'a' + 1;
        }
        plaintext[i] = ch;
    }
    
    printf("Decrypted message: %s", plaintext);
    return 0;
}
