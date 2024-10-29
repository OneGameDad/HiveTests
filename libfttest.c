#include "libft.h"
#include <stdio.h>
#include <stdlib.h"

#define LEN 20

int	main(void)
{
	int	len = LEN;
	char test;
	int c;
	int num2;
	int	result;
	size_t answer;
	size_t	buffer;
	char	*p_result;
	char	str1[LEN + 1];
	char	str2[LEN + 1];
	char	ch;
	size_t	n;
	size_t	i;

	while (1)
	{
		printf("Select a test and enter the code when prompted. The following tests are available:\n");
		printf(" A - ft_isalpha\n");
		printf(" B - ft_isdigit\n");
		printf(" C - ft_isalnum\n");
		printf(" D - ft_isascii\n");
		printf(" E - ft_isprint\n");
		printf(" F - ft_strlen\n");
		printf(" G - ft_strncmp\n");
		printf(" H - ft_strnstr\n");
		printf(" I - ft_strchr\n");
		printf(" J - ft_strrchr\n");
		printf(" K - ft_strlcat\n");
		printf(" L - ft_strlcpy\n");
		printf(" M - ft_memset\n");
		printf(" N - ft_\n");
		printf(" O - ft_\n");
		printf(" P - ft_\n");
		printf(" Q - ft_\n");
		printf(" R - ft_\n");
		printf(" S - ft_\n");
		printf(" T - ft_\n");
		printf(" U - ft_\n");
		printf(" V - ft_\n");
		printf(" W - ft_\n");
		printf(" X - ft_\n");
		printf(" Y - ft_\n");
		printf(" Z - ft_\n");
		printf(" * - QUIT\n");
		printf("Enter test letter: ");
		test = getchar();
		switch (test)
		{
			case 'A': case 'a':
				/* TESTS ft_isalpha */
				printf("Enter a character or number representing an ascii character: ");
				scanf("%d", &c);
				result = ft_isalpha(c);
				if (result != 0)
					printf("It is a letter\n");
				else
					printf("It is not all letter\n");
				break;
			case 'B': case 'b':
				/* TESTS ft_isdigit */
				printf("Enter a single digit: ");
				scanf("%d", &c);
				result = ft_isdigit(c);
				if (result != 0)
					printf("It is an integer\n");
				else
					printf("It is not an integer\n");
				break;
			case 'C': case 'c':
				/* TESTS ft_isalnum */
				printf("Enter a character or digit: ");
				scanf("%d", &c);
				result = ft_isalnum(str1);
				if (result != 0)
					printf("It is alphanumeric\n");
				else
					printf("It is not alphanumeric\n");
				break;
			case 'D': case 'd':
				/* TESTS ft_isascii */
				printf("Enter a hex num to test if it can be an ascii character: ");
				scanf("%X", &num2);
				result = ft_isascii(num2);
				if (result != 0)
					printf("That is %c in ascii\n", num2);
				else
					printf("That cannot be represented in ascii\n");
				break;
			case 'E': case 'e':
				/* TESTS ft_isprint */
				printf("Enter a character, digit or symbol to see if it is printable: ");
				scanf("%d", &c);
				result = ft_isprint(c);
				if (result != 0)
					printf("That is printable\n");
				else
					printf("That is not printable\n");
				break;
			case 'F': case'f':
				/* TESTS ft_strlen */
				printf("Enter a string, no longer than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\n')
				{
					str1[i] = ch;
					++i;
				}
				str[i] = '\0';
				result = ft_strlen(str1);
				printf("Your string is %d characters long", result);
				break;
			case 'G': case 'g':
				/* TESTS ft_strncmp */
				printf("Enter the first string; no longer than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\n')
				{
					str1[i] = ch;
					++i;
				}
				str1[i] = '\0';
				printf("Enter the second string; no longer than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\n')
				{
					str2[i] = ch;
					++i;
				}
				str2[i] = '\0';
				printf("Enter a integer, up to %d: ", len);
				scanf("%d", &n);
				printf("First string is %s and second strind is is %s and n is %d\n", s1, s2, n);
				result	= ft_strncmp(s1, s2, n);
				printf("Result is %d\n", result);
				break;
			case 'H': case 'h':
				/* TESTS ft_strnstr */
				printf("Enter the first string; no longer than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\n')
				{
					str1[i] = ch;
					++i;
				}
				str1[i] = '\0';
				printf("Enter the substring to find in the first string; less tha %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\n')
				{
					str2[i] = ch;
					++i;
				}
				str2[i] = '\0';
				printf("Enter a integer, up to %d: ", len);
				scanf("%d", &n);
				printf("First string is %s and second strind is is %s and n is %d\n", s1, s2, n);
				p_result	= ft_strnstr(s1, s2, n);
				printf("Result is %s\n", p_result);
				break;
			case 'I': case 'i':
				/* TESTS ft_strchr */
				printf("Enter a string, no longer than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) !+ '\n')
				{
					str1[i] = ch;
					++i;
				}
				str1[i] = '\0';
				printf("Enter a character to find in the string: ");
				ch = getchar();
				p_result = ft_strrchr(str1, ch);
				printf("The string after the first result of %c is %s", ch, p_result);
				break;
			case 'J': case 'j':
				/* TESTS ft_strrchr */
				printf("Enter a string, no longer than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) !+ '\n')
				{
					str1[i] = ch;
					++i;
				}
				str1[i] = '\0';
				printf("Enter a character to find in the string: ");
				ch = getchar();
				p_result = ft_strrchr(str1, ch);
				printf("The string after the last instance of %c is %s", ch, p_result);
				break;
			case 'K': case 'k':
				/* TESTS ft_strlcat */
				printf("Enter the first string; less than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\0')
				{
					str1[i] = ch;
					++i;
				}
				str1[i] = '\0';
				}
				printf("Enter the second string,. less than %d characrers: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\0')
				{
					str2[i] = ch;
					++i;
				}
				str2[i] = '\0';
				printf("Set the size of the buffer: ");
				scanf("%d", &buffer);
				char catstr[buffer];
				answer = strlcat(strcat, str1, buffer);
				printf("The size of the new string is: %d\n", answer);
				break;
			case 'L': case 'l':
				/*TESTS ft_strlcpy */
				printf("Enter a string; less than %d characters: ", len);
				i = 0;
				while (i < LEN && (ch = getchar()) != '\n')
				{
					str1[i] = ch;
					++i;
				}
				str1[i] = '\0';
				printf("Set the size of the buffer:" );
				scanf("%d", &buffer);
				char dest[buffer];
				result = ft_strlcpy(dest, str1, buffer);
				printf("%d bytes were copied to the destination: %s\n", buffer. dest);
				break;
			case 'M': case 'm':

				break;
			case 'N': case 'n':

				break;
			case 'O': case 'o':

				break;
			case 'P': case 'p':

				break;
			case 'Q': case 'q':

				break;
			case 'R': case 'r':

				break;
			case 'S': case 's':

				break;
			case 'T': case 't':

				break;
			case 'U': case 'u':

				break;
			case 'V': case 'v':

				break;
			case 'W': case 'w':

				break;
			case 'X': case 'x':

				break;
			case 'Y': case 'y':

				break;
			case 'Z': case 'z':

				break;
			case '*':
				return (0);
		}
	}


}
