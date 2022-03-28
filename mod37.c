int		main(void)
{
	int		numbers[22] = {202, 137, 390, 235, 114, 369, 198, 110, 350, 396, 390, 383, 225, 258, 38, 291, 75, 324, 401, 142, 288, 397};
	int		modulus = 37;
	int		converted[22];
	int		i = -1;

	printf("numbers : ");
	while (++i < 22)
		printf("%d ", numbers[i]);
	printf("\n");

	printf("converted : ");
	i = -1;
	while (++i < 22)
	{
		converted[i] = numbers[i] % modulus;
		printf("%d ", converted[i]);
		if (converted[i] >= 0 && converted[i] <= 25) // ASCII 65 - 0
			converted[i] += 65;
		else if (converted[i] >= 26 && converted[i] <= 35) // ASCII 48 - 26
			converted[i] += 22;
		else if (converted[i] == 36)
			converted[i] += 59; // ASCII 95 - 36
	}
	printf("\n");

	i = -1;
	while (++i < 22)
		printf("%c", converted[i]);
	printf("\n");

	return (0);
}

/**
gcc mod37.c
./a.out    
numbers : 202 137 390 235 114 369 198 110 350 396 390 383 225 258 38 291 75 324 401 142 288 397 
converted : 17 26 20 13 3 36 13 36 17 26 20 13 3 36 1 32 1 28 31 31 29 27 
picoCTF{R0UND_N_R0UND_B6B25531}
**/
