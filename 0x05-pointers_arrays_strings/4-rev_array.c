void swap_int(int *a, int *b);

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array that we are reversing
 * @n: number of elements of the array
 *
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int *p1 = a; 
	int *p2;
	int end;

	end = n - 1;
	p2 =  a + end;
	while (p1 < p2)
	{
		swap_int(p1, p2);
		p1++;
		p2--;
	}
}

/**
 * swap_int - from 0x04. swaps the values of two pointers
 * @a: pointer that will be switching values with b
 * @b: pointer that will be switching values with a
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
  int val1, val2;

  val1 = *a;
  val2 = *b;
  *a = val2;
  *b = val1;
}
