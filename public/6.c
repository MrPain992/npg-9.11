#include <stdio.h>
int main()
{
    int number, i;

    printf("Enter a positive integer: ");
    scanf("%d",&number);

    printf("Factors of %d are: ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
			//zmiana 6 master
            printf("%d ",i);
        }
    }

	//zmiana 6
    return 0;
}