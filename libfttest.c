#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER 20

/* Global variables */
int	len = BUFFER;

/* Prototypes */
char *ft_setstr(); /* Returns a pointer to a string */
char ft_setchar(); /* Returns an integer */
size_t ft_setsizet(); /* Returns a size_t */
int ft_setint(); /* Returns an integer */


int	main(void)
{

	char test;
	char c;
	int num;
	int	result;
	size_t answer;
	size_t	buff;
	void	*p_result;
	char	*str1;
	char	*str2;
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
		printf(" G - ft_memset\n");
		printf(" H - ft_bzero\n");
		printf(" I - ft_memcpy\n");
		printf(" J - ft_memmove\n");
		printf(" K - ft_strlcpy\n");
		printf(" L - ft_strlcat\n");
		printf(" M - ft_toupper\n");
		printf(" N - ft_tolower\n");
		printf(" O - ft_strchr\n");
		printf(" P - ft_strrchr\n");
		printf(" Q - ft_strncmp\n");
		printf(" R - ft_memchr\n");
		printf(" S - ft_memcmp\n");
		printf(" T - ft_strnstr\n");
		printf(" U - ft_atoi\n");
		printf(" V - ft_calloc\n");
		printf(" W - ft_strdup\n");
		printf(" X - ft_substr\n");
		printf(" Y - ft_strjoin\n");
		printf(" Z - ft_strtrim\n");
		printf(" * - QUIT\n");
		printf("Enter test letter: ");
		test = getchar();
		switch (test)
		{
			case 'A': case 'a':
				printf("\nTESTS ft_isalpha\n");
				c = ft_setchar();
				result = ft_isalpha(c);
				if (result != 0)
					printf("It is a letter\n");
				else
					printf("It is not all letter\n");
				break;
			case 'B': case 'b':
				printf("\nTESTS ft_isdigit\n");
				num = ft_setint();
				result = ft_isdigit(num);
				if (result != 0)
					printf("It is an integer\n");
				else
					printf("It is not an integer\n");
				break;
			case 'C': case 'c':
				printf("\nTESTS ft_isalnum\n");
				printf("Enter a character or digit: ");
				scanf("%d", &num);
				result = ft_isalnum(num);
				if (result != 0)
					printf("It is alphanumeric\n");
				else
					printf("It is not alphanumeric\n");
				break;
			case 'D': case 'd':
				printf("\nTESTS ft_isascii\n");
				printf("Enter a hex num to test if it can be an ascii character: ");
				scanf("%X", &num2);
				result = ft_isascii(num2);
				if (result != 0)
					printf("That is %c in ascii\n", num2);
				else
					printf("That cannot be represented in ascii\n");
				break;
			case 'E': case 'e':
				printf("\nTESTS ft_isprint\n");
				printf("Enter a character, digit or symbol to see if it is printable: ");
				scanf("%d", &num);
				result = ft_isprint(num);
				if (result != 0)
					printf("That is printable\n");
				else
					printf("That is not printable\n");
				break;
			case 'F': case'f':
				printf("\nTESTS ft_strlen\n");
				str1 = ft_setstr();
				result = ft_strlen(str1);
				printf("Your string is %d characters long", result);
				break;
			case 'G': case 'g':
				printf("\nTESTS ft_memset\n");
				str1 = ft_setstr(len);
				printf("Enter a character: ");
				c = ft_setchar();
				printf("\nEnter a number: ");
				scanf("%d", &num2);
				ft_memset(str1, c, num2);
				printf("Your string is now: %s\n", str1);
				break;
			case 'H': case 'h':
				printf("TESTS ft_bzero\n");
				str1 = ft_setstr();
				ft_bzero(str1, len);
				printf("Your string is now: %s", str1);
				break;
			case 'I': case 'i':
				printf("\nTESTS ft_memcpy\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				n = ft_setsizet();
				printf("First String before memcpy: %s\n", str1);
				printf("Second string before memcpy: %s\n", str2);
				memcpy(str1, str2, n);
				printf("First string after memcpy: %s\n", str1);
				break;
			case 'J': case 'j':
				printf("TESTS ft_memmove\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				printf("First string before memmove: %s\n", str1);
				printf("Second string: %s\n", str2);
				n = setsizet();
				ft_memmove(str1, str2, n);
				printf("First string after memmove: %s\n", str1);
				break;
			case 'K': case 'k':
				printf("\nTESTS ft_strlcpy\n");
				str1 = setstr();
				printf("Set the size of the buffer:" );
				scanf("%d", &buff);
				char dest[buff];
				result = ft_strlcpy(dest, str1, buffer);
				printf("%d bytes were copied to the destination: %s\n", buffer, dest);
				break;
			case 'L': case 'l':
				printf("\nTESTS ft_strlcat\n");
				str1 = setstr();
				str2 = setstr();
				printf("Set the size of the buffer: ");
				scanf("%d", &buff);
				char catstr[buff];
				answer = strlcat(str1, str2, buff);
				printf("The size of the new string is: %d\n", answer);
				break;
			case 'M': case 'm':
				printf("\nTESTS ft_toupper\n");
				c = ft_setchar();
				ch = ft_setchar();
				printf("Character 1: %c and Character 2: %c\n", c, ch);
				c = ft_toupper(c);
				ch = ft_toupper(ch);
				printf("Character 1 after ft_toupper: %c and Character 2 after ft_toupper: %c\n", c, ch);
				break;
			case 'N': case 'n':
				printf("\nTESTS ft_tolower\n");
				c = ft_setchar();
				ch = ft_setchar();
				printf("Character 1: %c and Character 2: %c\n", c, ch);
				c = ft_tolower(c);
				ch = ft_tolower(ch);
				printf("Character 1 after ft_tolower: %c and Character 2 after ft_tolower: %c\n", c, ch);
				break;
			case 'O': case 'o':
				printf("\nTESTS ft_strchr\n");
				str1 = setstr();
				ch = setchar();
				p_result = ft_strrchr(str1, ch);
				printf("The string after the first result of %c is %s", ch, p_result);
				break;
			case 'P': case 'p':
				printf("\nTESTS ft_strrchr\n");
				str1 = setstr();
				ch = setchar();
				p_result = ft_strrchr(str1, ch);
				printf("The string after the last instance of %c is %s", ch, p_result);
				break;
			case 'Q': case 'q':
				printf("\nTESTS ft_strncmp\n");
				str1 = setstr();
				str2 = setstr();
				n = setint();
				printf("First string is %s and second strind is is %s and n is %d\n", str1, str2, n);
				result	= ft_strncmp(str1, str2, n);
				printf("Result is %d\n", result);
				break;
			case 'R': case 'r':
				printf("\nTESTS ft_memchr\n");
				str1 = ft_setstr();
				c = ft_setchar();
				n = ft_setsizet();
				str2 = memchr(str1, c, n);
				printf("String after %c is: %s\n", c, str2);
				break;
			case 'S': case 's':
				printf("\nTESTS ft_memcmp\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				n = ft_setsizet();
				result = ft_memcmp(str1, str2, n);
				if (result > 0)
					printf("Second string is less than first string\n");
				else if (result < 0)
					printf("First string is less than second string\n");
				else
					printf("Strings are equal\n");
				break;
			case 'T': case 'T':
				printf("\nTESTS ft_strnstr\n");
				str1 = setstr();
				str2 = setstr();
				printf("Enter a integer, up to %d: ", len);
				scanf("%d", &n);
				printf("First string is %s and second strind is is %s and n is %d\n", str1, str2, n);
				p_result = ft_strnstr(str1, str2, n);
				printf("Result is %s\n", p_result);
				break;
			case 'U': case 'u':
				printf("\nTESTS ft_atoi\n");
				str1 = ft_setstr();
				num = ft_atoi(str1);
				printf("The %d was taken from %s via ft_atoi\n", num, str1);
				break;
			case 'V': case 's':
				printf("\nTESTS ft_calloc\n");
				n = ft_setsizet();
				int size;
				printf("Enter the size of the variable you want to have an array of: 1 - Char 4 - Integer - 8 Long Int 16 - Long Long Int: ");
				scanf("%d", size);
				p_result = ft_calloc(n, size);
				printf("You have created an array that can hold %d items: %s\n", n, p_result);
				break;
			case 'W': case 't':
				printf("\nTESTS ft_strdup\n");
				str1 = ft_setstr();
				str2 = ft_strdup(str1);
				printf("String 1 is: %s and String 2 is a dupilicate: %s\n", str1, str2);
				break;
			case 'X': case 'x':
				printf("\nTESTS ft_substr\n");
				str1 = ft_setstr();
				num = ft_setint();
				str2 = ft_substr(str1, num, ft_strlen(str1));
				printf("Str2: %s is a substring of Str1: %s\n", str2, str1);
				break;
			case 'Y': case 'y':
				printf("\nTESTS ft_strjoin\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				p_result = ft_strjon(str1, str2);
				printf("The joining of Str1: %s and Str2: %s is: %s\n", str1, str2, p_result);
				break;
			case 'Z': case 'z':
				printf("\nTESTS ft_strtrim\n");
				printf("For this test you will need to create a string with the same set of characters at the beginning and end\n");
				str1 = ft_setstr();
				printf("Now you should enter what that set of beginning and ending characters was");
				str2 = ft_setstr();
				p_result = ft_strtrim(str1, str2);
				printf("The result of trimming %s from %s is %s\n", str2. str1, p_result);
				break;
			case '*':
				return (0);
		}
	}


}

char *ft_setstr()
{
	char str[len + 1];
	char ch;
	int i = 0;
	printf("\nEnter a string; no longer than %d characters to avoid overflow: ", len);
	i = 0;
	while (i < len && (ch = getchar()) != '\n')
	{
		str[i] = ch;
		++i;
	}
	str[i] = '\0';
	return (str);
}

char ft_setchar()
{
	char c;
	printf("\nEnter a character: ");
	c = getchar();
	return (c);
}

size_t ft_setsizet()
{
	size_t num;
	printf("\nEnter a number from 0 to %d (but you don't have to test various lengths): ", len);
	scanf("%d", &num);
	return (num);
}

int ft_setint()
{
	int num:
	printf("\nEnter a number (no larger than %d to avoid overflow): ", len);
	scanf("%d", &num);
	return (num);
}
