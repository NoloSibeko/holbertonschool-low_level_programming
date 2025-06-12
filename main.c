#include <stdio.h>

int _atoi(char *s);

int main(void)
{
    char *str = "   ---+--+1234ab567";
    int num = _atoi(str);
    printf("%d\n", num);
    return 0;
}
