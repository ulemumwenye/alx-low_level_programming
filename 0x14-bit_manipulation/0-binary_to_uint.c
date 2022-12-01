#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
  unsigned int res = 0;
  int base = 1, i = 0;

  if (b == NULL)
    return (0);

  while (b[i + 1])
    {
      if (b[i] != '0' && b[i] != '1')
	return (0);
      i++;
    }

  while (i >= 0)
    {
      res += ((b[i] - '0') * base);
      base *= 2;
      i--;
    }


  return (res);

=======
	unsigned int res = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		res += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}


	return (res);

>>>>>>> b4f1e60f15bf56a857a8d10f42e06317e78005e9
}
