
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];
    int choice, i;

    printf("Enter a string: ");
    scanf("%99s", str1);

    printf("\nMENU");
    printf("\n1. String Length");
    printf("\n2. String Copy");
    printf("\n3. String Concatenation");
    printf("\n4. String Comparison");
    printf("\n5. String Reverse");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length of string is = %d", strlen(str1));
            break;

        case 2:
            strcpy(result, str1);
            printf("Copied string is = %s", result);
            break;

        case 3:
            printf("Enter second string: ");
            scanf("%99s", str2);
            strcpy(result, str1);
            strcat(result, str2);
            printf("Concatenated string is = %s", result);
            break;

        case 4:
            printf("Enter second string: ");
            scanf("%99s", str2);

            if(strcmp(str1, str2) == 0)
                printf("Both strings are equal");
            else
                printf("Both strings are not equal");
            break;

        case 5:
            strcpy(result, str1);
            for(i = strlen(result) - 1; i >= 0; i--)
                printf("%c", result[i]);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
