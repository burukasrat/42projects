#include <unistd.h>

#define EVEN(n) (n % 2 == 0)

#define EVEN_MSG "I have an even number of arguments\n"

#define ODD_MSG "I have an odd number of arguments\n"

#define SUCCESS 0

typedef enum {
	TRUE,
	FALSE
} t_bool;