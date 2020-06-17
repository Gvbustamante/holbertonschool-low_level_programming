/**
 * _isalpha - check the code for Holberton School students.
 * @r : character letter
 * Return: 1= letter and 0= other character.
 */
int _isalpha(int r)
{
if ((r >= 65 && r <= 90) || (r >= 97 && r <= 122))
{
return (1);
}
return (0);
}
