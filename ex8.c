#include <stdio.h>

int main(int argc, char* argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Mahmoud";
    char full_name[] = {
        'M', 'a', 'h', 'm', 'o', 'u', 'd',
        ' ', 'H', '.', ' ',
        'H', 'a', 'n', 'a', 'f', 'y', '\0'
    };

    printf("The size of an int is: %ld.\n", sizeof(int));
    printf("The number of areas: %ld.\n",
            sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d.\n",
            areas[0], areas[1]);
    printf("The size of a char: %ld.\n", sizeof(char));
    printf("The size of a name: (char[]) : %ld.\n",
            sizeof(name));
    printf("The number of chars: %ld\n",
            sizeof(name) / sizeof(char));
    printf("The size of full_name (char[]): %ld.\n",
            sizeof(full_name));
    printf("The number of chars: %ld.\n",
            sizeof(full_name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n",
            name, full_name);
    return 0;
}
