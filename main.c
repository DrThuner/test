#include <stdio.h>
#include <ctype.h>

int count_nonspace(const char* str)
{
    int count = 0;
    while(*str)
    {
        if(!isspace(*str++))
            count++;
    }
    return count;
}

int main()
{
    printf("Wpisz zdanie\n");
    char input[256];
    fgets(input, sizeof(input), stdin);
    printf("Ilosc znakow w zdaniu: %d\n", count_nonspace(input));
}
