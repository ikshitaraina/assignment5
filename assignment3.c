#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Addition is = %d", a + b);
            break;

        case 2:
            printf("Subtraction is = %d", a - b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
