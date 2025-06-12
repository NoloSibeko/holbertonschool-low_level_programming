/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert
 *
 * Return: The integer value of the string, or 0 if no number found.
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, result = 0, started = 0;

    while (s[i])
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0') * sign;
            if (sign < 0 && result > 0)
                result = -result;
            started = 1;
        }
        else if (started)
            break;
        i++;
    }

    return result;
}
