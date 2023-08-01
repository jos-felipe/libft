# Libft

![norminette](https://github.com/jos-felipe/libft/actions/workflows/main.yml>/badge.svg)

A biblioteca Libft fornece funcões fundamentais para manipular e processar cadeias de caracteres e trechos de memória. 

strlen - calculate the length of a string

toupper - convert uppercase

tolower- convert lowercase

memset - fill memory with a constant byte

bzero - zero a byte string

memcpy - copy memory area

memmove - copy memory area

memchr - scan memory for a character

memcmp - compare memory areas

strchr - locate character in string

strrchr - locate character in string (last occurrence)

strlcpy, strlcat — size-bounded string copying and concatenation

strlcpy - Copia até 'size' caracteres de 'src' para 'dst'

strncmp - compare two strings

strnstr — locate a substring in a string

 atoi - converte uma cadeia de caracteres em um inteiro

 calloc - reserva espaço em memória de suficiente para acomodar 'n' elememtos de tamanho 'size' e valor zero

 strdup - salva uma cópia de uma cadeia de caracteres

 substr - Reserva espaço em memória (com malloc(3)) e retorna a sub-cadeia de caracteres de 's'. A sub-cadeia começa em 'start' e tem tamanho máximo igual a 'len'.

strjoin - Reserva espaço em memória (com malloc(3)) e retorna uma nova cadeia de caracteres que resulta da concatenação de 's1' e 's2'.

strtrim - Reserva espaço em memória (com malloc(3)) e retorna uma cópia de 's1' com os caracteres especificados em 'set' removidos do início e fim da  cadeia de caracteres.

itoa - Reserva espaço em memória (com malloc(3)) e retorna uma cadeia de caracteres que representa o inteiro recebido como argumento. Números negativos devem ser tratados.

split - Reserva espaço em memória (com malloc(3)) e retorna uma sequência de cadeia de caracteres obtidas ao separar 's' usando o caracter 'c' como delimitador. A sequência deve terminar com o ponteiro NULL.

strmapi - Aplica a função 'f' a cada caracter da cadeia 's', e passa seu índice como primeiro argumento para criar uma nova cadeia de caracteres (com malloc(3)) como resultado de sucessivas aplicações de 'f'. 
