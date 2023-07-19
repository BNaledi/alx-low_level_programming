/**
 * print_last_digit - protootype function
 *
 * Prints the last digit of a number.
 *
 * @n: Integer number that is checked.
 * Return: m, value of last digit.
 */
int print_last_digit(int n)
{
	int m = n % 10;
	{
		write(1, m, 4);
	}

	return (m);
}
