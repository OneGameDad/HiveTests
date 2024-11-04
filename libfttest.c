#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <limits.h>
#include <string.h>
#include <ctype.h>

#define BUFFER 20

/* Global variables */
int	len = BUFFER;
char 	letter;
char	ch;
char 	c;
int 	num;
int 	fd;
size_t	buff;
size_t	m;
size_t	n;
size_t	i;
size_t	j;
char	*p_char1;
char	*p_char2;
char	**p_arr1;
char	**p_arr2;
char	*str1;
char	*str2;
char 	*str3;
char 	*str4;
char	*str5;
char	*str6;
t_list	*first;
t_list	**list;

/* Prototypes */
char *ft_setstr(); /* Returns a pointer to a string */
char ft_setchar(); /* Returns an integer */
size_t ft_setsizet(); /* Returns a size_t */
int ft_setint(); /* Returns an integer */
char test(unsigned int i, char str); /*Tests for ft_strmapi and ft_striteri*/
void print_list(t_list *lst);
void print_content(void *content);


int	main(void)
{
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
		printf(" 0 (Zero) - ft_split\n");
		printf(" 1 - ft_itoa\n");
		printf(" 2 - ft_strmapi\n");
		printf(" 3 - ft_striteri\n");
		printf(" 4 - ft_putchar_fd\n");
		printf(" 5 - ft_putstr_fd\n");
		printf(" 6 - ft_putendl_fd\n");
		printf(" 7 - ft_putnbr_fd\n");
		printf("BONUS TESTS - TODO\n");
		printf(" 8 - ft_lstnew\n");
		printf(" 9 - ft_lstadd_front\n");
		printf(" ! - ft_lstsize\n");
		printf(" @ - ft_lstlast\n");
		printf(" # - ft_lstadd_back\n");
		printf(" & - ft_listiter\n");
		printf(" ? - ft_lstmap\n");
		printf(" $ - ft_lstdelone\n");
		printf(" %% - ft_lstclear\n");
		printf(" * - QUIT\n");
		printf("Enter test letter: ");
		letter = getchar();
		switch (letter)
		{
			case 'A': case 'a':
				printf("\nTESTS ft_isalpha\n");
				c = ft_setchar();
				printf("Your function returns: %d , the original function returns: %d", ft_isalpha(c), isalpha(c));
				break;
			case 'B': case 'b':
				printf("\nTESTS ft_isdigit\n");
				num = ft_setint();
				printf("Your functions returns: %d, the original function returns: %d", ft_isdigit(num), isdigit(num));
				break;
			case 'C': case 'c':
				printf("\nTESTS ft_isalnum\n");
				printf("Enter a character or digit: ");
				scanf("%d", &num);
				printf("Your functions returns: %d, the original function returns: %d", ft_isalnum(num), isalnum(num));
				break;
			case 'D': case 'd':
				printf("\nTESTS ft_isascii\n");
				printf("Enter a hex num to test if it can be an ascii character: ");
				scanf("%X", &num);
				printf("Your functions returns: %d, the original function returns: %d", ft_isascii(num), isascii(num));
				break;
			case 'E': case 'e':
				printf("\nTESTS ft_isprint\n");
				printf("Enter a character, digit or symbol to see if it is printable: ");
				scanf("%d", &num);
				printf("Your functions returns: %d, the original function returns: %d", ft_isprint(num), isprint(num));
				break;
			case 'F': case'f':
				printf("\nTESTS ft_strlen\n");
				str1 = ft_setstr();
				printf("Your functions returns: %zu, the original function returns: %lu", ft_strlen(str1), strlen(str1));
				break;
			case 'G': case 'g':
				printf("\nTESTS ft_memset\n");
				str1 = ft_setstr(len);
				printf("Enter a character: ");
				c = ft_setchar();
				printf("\nEnter a number: ");
				scanf("%d", &num);
				str3 = ft_memset(str1, c, num);
				str4 = memset(str1, c, num);
				printf("Your functions returns: %s, the original function returns: %s", str3, str4);
				break;
			case 'H': case 'h':
				printf("TESTS ft_bzero\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				n = strlen(str1);
				m = strlen(str2);
				ft_bzero(str1, n);
				bzero(str2, m);
				printf("Your functions returns: %s, the original function returns: %s", str1, str2);
				break;
			case 'I': case 'i':
				printf("\nTESTS ft_memcpy\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				strcpy(str3, str1);
				strcpy(str4, str2);
				str5 = ft_memcpy(str1, str2, c);
				str6 = memcpy(str3, str4, c);
				n = ft_setsizet();
				printf("Your functions returns: %s, the original function returns: %s", str5, str6);
				break;
			case 'J': case 'j':
				printf("TESTS ft_memmove\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				strcpy(str3, str1);
				strcpy(str4, str2);
				printf("First string before memmove: %s\n", str1);
				printf("Second string: %s\n", str2);
				n = ft_setsizet();
				str5 = ft_memmove(str1, str2, c);
				str6 = memmove(str3, str4, c);
				printf("Your functions returns: %s, the original function returns: %s", str5, str6);
				break;
			case 'K': case 'k':
				printf("\nTESTS ft_strlcpy\n");
				str1 = ft_setstr();
				strcpy(str2, str1);
				printf("Set the size of the buffer:" );
				scanf("%zd", &buff);
				char *dest1;
				char *dest2;
				dest1 = malloc(sizeof(char) * (buff + 1));
				dest2 = malloc(sizeof(char) * (buff + 1));
				i = ft_strlcpy(dest1, str1, buff);
				j = strlcpy(dest2, str2, buff);
				printf("Your functions returns: %d, the original function returns: %d", i, j);
				break;
			case 'L': case 'l':
				printf("\nTESTS ft_strlcat\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				printf("Set the size of the buffer: ");
				scanf("%zd", &buff);
				char catstr1;
				char catstr2;
				catstr1 = malloc(sizeof(char) * (buff + 1));
				catstr2 = malloc(sizeof(char) * (buff + 1));
				printf("Your functions returns: %zu, the original function returns: %zu", ft_strlcat(catstr1, str1, buff), strlcat(catstr2, str2, buff));
				break;
			case 'M': case 'm':
				printf("\nTESTS ft_toupper\n");
				c = ft_setchar();
				ch = ft_setchar();
				printf("Your functions returns: %c, the original function returns: %c", ft_toupper(c), toupper(ch));
				break;
			case 'N': case 'n':
				printf("\nTESTS ft_tolower\n");
				c = ft_setchar();
				ch = ft_setchar();
				printf("Your functions returns: %c, the original function returns: %c", ft_tolower(c), tolower(ch));
				break;
			case 'O': case 'o':
				printf("\nTESTS ft_strchr\n");
				str1 = ft_setstr();
				strcpy(str2, str1);
				ch = ft_setchar();
				printf("Your functions returns: %s, the original function returns: %s", ft_strchr(str1, ch), strchr(str2, ch));
				break;
			case 'P': case 'p':
				printf("\nTESTS ft_strrchr\n");
				str1 = ft_setstr();
				strcpy(str2, str1);
				ch = ft_setchar();
				printf("Your functions returns: %s, the original function returns: %s", ft_strrchr(str1, ch), strrchr(str2, ch));
				break;
			case 'Q': case 'q':
				printf("\nTESTS ft_strncmp\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				strcpy(str3, str1);
				strcpy(str4, str2);
				n = ft_setint();
				printf("Your functions returns: %d, the original function returns: %d", ft_strncmp(str1, str2, n), strncmp(str3, str4, n));
				break;
			case 'R': case 'r':
				printf("\nTESTS ft_memchr\n");
				str1 = ft_setstr();
				c = ft_setchar();
				n = ft_setsizet();
				str2 = ft_memchr(str1, c, n);
				printf("Your functions returns: %s, the original function returns: %s", ft_memchr(str1, c, n), memchr(str1, c, n));
				break;
			case 'S': case 's':
				printf("\nTESTS ft_memcmp\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				n = ft_setsizet();
				printf("Your functions returns: %d, the original function returns: %d", ft_memcmp(str1, str2, n), memcmp(str1, str2, n));
			case 'T': case 't':
				printf("\nTESTS ft_strnstr\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				strcpy(str3, str1);
				strcpy(str4, str2);
				printf("Enter a integer, up to %d: ", len);
				scanf("%zd", &n);
				printf("Your functions returns: %s, the original function returns: %s", ft_strnstr(str1, str2, n), strnstr(str1, str2, n));
				break;
			case 'U': case 'u':
				printf("\nTESTS ft_atoi\n");
				str1 = ft_setstr();
				printf("Your functions returns: %d, the original function returns: %d", ft_atoi(str1), atoi(str1));
				break;
			case 'V': case 'v':
				printf("\nTESTS ft_calloc\n");
				n = ft_setsizet();
				int size;
				printf("Enter the size of the variable you want to have an array of: 1 - Char 4 - Integer - 8 Long Int 16 - Long Long Int: ");
				scanf("%d", &size);
				p_char1 = ft_calloc(n, size);
				printf("Your functions returns: %s, the original function returns: %s", ft_calloc(n, size), calloc(n, size));
				break;
			case 'W': case 'w':
				printf("\nTESTS ft_strdup\n");
				str1 = ft_setstr();
				str2 = ft_strdup(str1);
				str3 = strdup(str1);
				printf("Your functions returns: %s, the original function returns: %s", str2, str3);
				break;
			case 'X': case 'x':
				printf("\nTESTS ft_substr\n");
				str1 = ft_setstr();
				num = ft_setint();
				str2 = ft_substr(str1, num, ft_strlen(str1));
				str3 = substr(str1, num, strlen(str1));
				printf("Your functions returns: %s, the original function returns: %s", str2, str3);
				break;
			case 'Y': case 'y':
				printf("\nTESTS ft_strjoin\n");
				str1 = ft_setstr();
				str2 = ft_setstr();
				str3 = ft_strjoin(str1, str2);
				str4 = strjoin(str1, str2);
				printf("Your functions returns: %s, the original function returns: %s", str3, str4);
				break;
			case 'Z': case 'z':
				printf("\nTESTS ft_strtrim\n");
				printf("For this test you will need to create a string with the same set of characters at the beginning and end\n");
				str1 = ft_setstr();
				printf("Now you should enter what that set of beginning and ending characters was");
				str2 = ft_setstr();
				str3 = ft_strtrim(str1, str2);
				str4 = strtrim(str1, str2);
				printf("Your functions returns: %s, the original function returns: %s", str3, str4);
				break;
			case '0':
				printf("\nTESTS ft_split\n");
				printf("You will be prompted to enter a string. Be sure to enter one that has a certain character ever so often.\n");
				str1 = ft_setstr();
				printf("You will be prompted to now provide the character that divides the string.\n");
				c = ft_setchar();
				p_arr1 = ft_split(str1, c);
				p_arr2 = strtok(c, str1);
				printf("The split string by %c looks like this:\n", c);
				i = 0;
				while (p_arr1[i] && p_arr2[2])
				{
					printf("Your function returns: %s\n", p_arr1[i]);
					printf("Original function returns: %s\n", p_arr2[i]);
					++i;
				}
				break;
			case '1':
				printf("\nTESTS ft_itoa\n");
				num = ft_setint();
				str1 = ft_itoa(num);
				str2 = itoa(num);
				printf("Your functions returns: %s, the original function returns: %s", str1, str2);
				break;
			case '2':
				printf("\nTESTS ft_strmapi\n");
				str1 = ft_setstr();
				str2 = ft_strmapi(str1, test);
				str3 = strmapi(str1, test);
				printf("Your functions returns: %s, the original function returns: %s", str2, str3);
				break;
			case '3':
				printf("\nTESTS ft_striteri\n");
				str1 = ft_setstr();
				strcpy(str2, str1);
				ft_striteri(str1, test);
				striteri(str2, test);
				printf("Your functions returns: %s, the original function returns: %s", str1, str2);
				break;
			case '4':
				printf("\nTESTS ft_putchar_fd\n");
				c = ft_setchar();
				fd = 1;
				printf("\nYour function:\n");
				ft_putchar_fd(c, fd);
				printf("\nOriginal function:\n");
				putrchar_fd(c, fd);
				break;
			case '5':
				printf("\nTESTS ft_putstr_fd\n");
				str1 = ft_setstr();
				fd = 1;
				printf("\nYour function:\n");
				ft_putstr_fd(str1, fd);
				printf("\nOriginal function:\n");
				putstr_fd(str1, fd);
				break;
			case '6':
				printf("\nTESTS ft_putendl_fd\n");
				str1 = ft_setstr();
				fd = 1;
				printf("\nYour function:\n");
				ft_putendl_fd(str1, fd);
				printf("\nOriginal function:\n");
				putendl_fd(str1, fd);
				break;
			case '7':
				printf("\nTESTS ft_putnbr_fd\n");
				num = ft_setint();
				fd = 1;
				printf("\nYour function:\n");
				ft_putnbr_fd(num, fd);
				printf("\nOriginal function:\n");
				putnbr_fd(num, fd);
				break;
			case '8':
				printf("\nTESTS ft_lstnew\n");
				str1 = ft_setstr();
				first = ft_lstnew(str1);
				list = &first;
				printf("Your linked list node contains the following content: %s", first->content);
				break;
			case '9':
				printf("\nTESTS ft_lstadd_front\n");
				str2 = ft_setstr();
				ft_lstadd_front(list, ft_lstnew(str2));
				print_list(*list);
				break;
			case '!':
				printf("\nTESTS ft_lstsize\n");
				printf("Your list is %d long\n", ft_lstsize(*list));
				break;
			case '@':
				printf("\nTESTS ft_lstlast\n");
				printf("Last element: %s\n", ft_lstlast(*list)->content);
				break;
			case '#':
				printf("\nTESTS ft_lstadd_back\n");
				str3 = ft_setstr();
				ft_lstadd_back(*list, ft_lstnew(str3));
				print_list(*list);
				break;
			case '&':
				printf("\nTESTS ft_listiter\n");
				printf("ft_lstiter with print_content\n");
				ft_lstiter(*list, &print_content);
				break;
			case '?':
				printf("\nTESTS ft_lstmap\n");
				t_list	*list_copy = ft_lstmap(first, &list, &free);
				print_list(list_copy);
				break;
			case '$':
				printf("\nTESTS ft_lstdelone\n");
				num = ft_lstsize(*list);
				printf("Pick a number between 1 and %d\n", num);
				scanf("%d", &num);
				printf("List before deleting node %d:\n", num);
				print_list(list_copy);
				ft_lstdelone(&list_copy, num);
				printf("List after deleting node %d:\n", num);
				print_list(list_copy);
				break;
			case '%':
				printf("\nTESTS ft_lstclear\n");
				print_list(list_copy);
				ft_lstclear(&list_copy, &free);
				print_list(list_copy);
				break;
			case '*':
				return (0);
			default:
				break;
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
	scanf("%zd", &num);
	return (num);
}

int ft_setint()
{
	int num;
	printf("\nEnter a number (no larger than %d to avoid overflow): ", len);
	scanf("%d", &num);
	return (num);
}

char    test(unsigned int i, char str)
{
    printf("My inner function: index = %d and %c\n", i, str);
    return (str);
}

void print_list(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst) {
		printf("%zu:%s\n", i, lst->content);
		lst = lst->next;
		++i;
	}
	printf("\n");
}

void print_content(void *content)
{
	printf("%s\n", content);
}
