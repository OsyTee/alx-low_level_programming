#include <stdio>

/**
 * main -  prints the name of the file it was compiled from
 * Return: It printed name
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
