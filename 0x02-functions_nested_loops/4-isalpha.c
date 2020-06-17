/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int r)
{
if ((r >= 65 && r <= 90) || (r >= 97 && r <= 122))
{
return (1);
}
return (0);
}
