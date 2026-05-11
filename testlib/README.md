This project has been created as part
of the 42 curriculum by aiheins.

# Description :
```Libft is an comination of libc, linked lists, and other addiotional functions that can be used for my future projects. For most functions i wrote my own main's to be able to test them induaviually, since i am prone to make small spelling mistakes. In the instructions, i will explain how to use it, and below, i also have a detailed desctription of all the functions in the project.```

# Instructions :
First you clone the project, using git clone in the terminal. Giving a name like 'eval_libft' makes it easier to find and mannage. After, you use 'cd' to get into the project and call 'make': 

* ```$git clone git@vogsphere-v2.codam.nl:vogsphere/intra-uuid-df955bd0-09f5-4587-87be-66a33509b77c-7302103-aiheins eval_libft```
* ```$cd eval_libft```
* ```$make```

Now you should see a 'libft.a' file and object files like 'ft_*.o'.
if you want to test them induviually, you can remove the '//' from the main, and run the commands: ```$ccf ft_*.c (more 'ft_*.c' if they are being used in the program) libft.h```
```$a./out```

# Resources :
- Subject libft
- My peers (they truly are the best)
- The manual of the terminal
- Notes from piscine
- Browser

# Detailed description of all the functions in libft :

#### libc functions:
- ```ft_isalpha``` : Checks for an alphabetic character; If there is, return value is (1) and if not, the return value is (0).

- ```ft_isdigit``` : Checks for a digit (0 through 9). If there is, return value is (1) and if not, the return value is (0).

- ```ft_isalnum``` : Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

- ```ft_isascii``` : Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. If there is, return value is (1) and if not, the return value is (0).

- ```ft_isprint``` : Checks for any printable character including space. If there is, return value is (1) and if not, the return value is (0).

- ```ft_strlen``` : Calculates the length of the string s, excluding the terminating null byte. The return Value is the number of bytes in the string s.

- ```ft_memset``` : Fills the first n bytes of the memory area pointed to by s with the constant byte c and returns a pointer to the memory area s.

- ```ft_bzero``` : The function sets the first n bytes of the area starting at s to zero. There is no return value.
---------------------------------------------------------
- ```ft_memcpy``` : The function copies n bytes from memory area src to memory area dest. The memory areas must not overlap.

- ```ft_memmove``` : The function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

- ```ft_strlcpy``` : The function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. Returning the length of the src.

- ```ft_strlcat``` : The function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. Returning the total length of the string they tried to create, so the initial length of dst plus the length of src.

- ```ft_toupper``` : Converts the letter c to upper case, if possible.

- ```ft_tolower``` : Converts the letter c to lower case, if possible.

- ```ft_strchr``` : The function returns a pointer to the first occurrence of the character c in the string s or NULL if the character is not found.
---------------------------------------------------------
- ```ft_strrchr``` : The function returns a pointer to the last occurrence of the character c in the string s or NULL if the character is not found.

- ```ft_strncmp``` : The function only compares the first (at most) n bytes of s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.

- ```ft_memchr``` : The function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char. Returning a pointer to the matching byte or NULL if the character does not occur in the given memory area.

- ```ft_memcmp``` : The function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2. Returning  an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2.

- ```ft_strnstr``` : This function adds a limit on the number of characters beiing searched while looking for the first occurrence of the substring needle in the string haystack. Returning a pointer to the beginning of the substring, or NULL if the substring is not found.

- ```ft_atoi``` : The function converts the initial portion of the string pointed to by nptr to int. Returning the converted value.
---------------------------------------------------------
- ```ft_calloc``` : The function allocates memory, using malloc, for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().

- ```ft_strdup``` : The function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3). Returning a pointer to the duplicated string, or NULL if insufficient memory was available.

--------
#### additional functions:

- ```ft_substr``` : Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.

- ```ft_strjoin``` : Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.

- ```ft_strtrim``` : Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.

- ```ft_split``` : Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.

- ```ft_itoa``` : Allocates memory (using malloc(3)) and returns
a string representing the integer received as an
argument. Negative numbers must be handled.

- ```ft_strmapi``` : Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f.

- ```ft_striteri``` : Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.

- ```ft_putchar_fd``` : Outputs the character ’c’ to the specified file
descriptor.

- ```ft_putstr_fd``` : Outputs the string ’s’ to the specified file
descriptor.

- ```ft_putendl_fd``` : Outputs the string ’s’ to the specified file
descriptor followed by a newline.

- ```ft_putnbr_fd``` : Outputs the integer ’n’ to the specified file
descriptor.
------------------------------
#### linked lists functions

- ```ft_lstnew``` : Allocates memory (using malloc(3)) and returns
a new node. The ’content’ member variable is
initialized with the given parameter ’content’.
The variable ’next’ is initialized to NULL.

- ```ft_lstadd_front``` : Adds the node ’new’ at the beginning of the list.

- ```ft_lstsize``` : Counts the number of nodes in the list.

- ```ft_lstlast``` : Returns the last node of the list.

- ```ft_lstadd_back``` : Adds the node ’new’ at the end of the list.

- ```ft_lstdelone``` : Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.

- ```ft_lstclear``` : Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL

- ```ft_lstiter``` : Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.

- ```ft_lstmap``` : Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
-------



