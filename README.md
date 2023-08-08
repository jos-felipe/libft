# Libft

![norminette](https://github.com/jos-felipe/libft/actions/workflows/main.yml/badge.svg)

## Descrição das funções:

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

strlcat — size-bounded string copying and concatenation

strlcpy - Copia até 'dstsize' menos um caracteres da cadeia 'src' para 'dst' e adiciona o caracter nulo caso 'dstsize' seja diferente de zero.

strncmp - compare two strings

strnstr — locate a substring in a string

atoi - converte uma cadeia de caracteres em um inteiro

calloc - Reserva espaço em memória suficiente para acomodar 'n' elememtos de tamanho 'size' e valor zero.

strdup - salva uma cópia de uma cadeia de caracteres

substr - Reserva espaço em memória (com malloc(3)) e retorna a sub-cadeia de caracteres de 's'. A sub-cadeia começa em 'start' e tem tamanho máximo igual a 'len'.

strjoin - Reserva espaço em memória (com malloc(3)) e retorna uma nova cadeia de caracteres que resulta da concatenação de 's1' e 's2'.

strtrim - Reserva espaço em memória (com malloc(3)) e retorna uma cópia de 's1' com os caracteres especificados em 'set' removidos do início e fim da  cadeia de caracteres.

itoa - Reserva espaço em memória (com malloc(3)) e retorna uma cadeia de caracteres que representa o inteiro recebido como argumento. Números negativos devem ser tratados.

split - Reserva espaço em memória (com malloc(3)) e retorna uma sequência de cadeias de caracteres obtidas ao separar 's' usando o caracter 'c' como delimitador. A sequência deve terminar com o ponteiro 'NULL'.

strmapi - Aplica a função 'f' a cada caracter da cadeia 's'. Em seu primeiro argumento, 'f' recebe a posição do caracter, Uma nova cadeia de caracteres deve ser criada (com malloc(3)) para armazenar o caracter devolvido por 'f'.

striteri - Aplica a função 'f' a cada caracter da cadeia 's'. Em seu primeiro argumento, 'f' recebe a posição do caracter. O endereço de cada caracter é passado à 'f' para ser modificado se necessário. 

putchar_fd - Coloca o caracter 'c' no descritor de arquivo fornecido.

putstr_fd - Coloca a cadeia de caracteres 's' no descritor de arquivo fornecido.

putendl_fd - Coloca a cadeia de caracteres 's' no descritor de arquivo fornecido seguido de uma quebra de linha.

putnbr_fd - Coloca o inteiro 'n' no descritor de arquivo fornecido.

