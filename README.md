# **`printf`**


>Write your own `printf` function.


## Welcome
This Is A rebuild of the standard `printf` function in C.

### Format Types

| c | single character |
| s | string |
| d | integer in decimal |
| i | integer |
| % | percent sign |

### Examples

Character: printf("%c", 'H'); Output: H

String: printf("%s", 'I am a string !'); Output: I am a string !

Integer: printf("%i", 5); Output: 5

### Prototype
#include "main.h"
```bash
int _printf(const char *format, ...);
```
### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
### Return Value
* The number of characters printed.

## Info

Printf function by holberton school student.
