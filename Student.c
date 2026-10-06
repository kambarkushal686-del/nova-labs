#include <stdio.h>

int main()
{
    int n, i, marks, total = 0;
    float percentage;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Input marks using a loop
    for (i = 1; i <= n; i++)
    {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);

        total += marks;
    }

    // Calculate percentage
    percentage = (float)total / n;

    // Display total and percentage
    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    // Calculate grade using conditional statements
    if (percentage >= 90)
    {
        printf("Grade = A+\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade = A\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade = B\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade = C\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade = D\n");
    }
    else
    {
        printf("Grade = F\n");
    }

    return 0;
}

