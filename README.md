# RANK01 - ft_printf

<img alt="ft_printf" src=https://miro.medium.com/v2/resize:fit:300/1*LYybYyFIx9IOP8EW7rZzXA.png>

### ⭐ What is it?
### The `printf` function allows you to print variables of different types in a specified format. 

### ⭐ How does it work?
```
int x = 10;
printf("Valor de x: %d", x);
```

### ⭐ Here are the requirements:
- [x] Do not implement the original printf()'s buffer management.
- [x] Your function needs to handle the following conversions: cspdiuxX%
- [x] Your function will be compared with the original printf().
- [x] You must use the ar command to create your library.
Using the libtool command is prohibited.
- [x] Your libftprintf.a must be created in the root of your repository.
- [x] No free

### ⭐ You must implement the following conversions:
- [x] %c Prints a single character.
- [x] %s Prints a string (as defined by common C convention).
- [x] %p The void * pointer argument must be printed in hexadecimal format.
- [x] %d Prints a decimal number (base 10).
- [x] %i Prints an integer in base 10.
- [x] %u Prints an unsigned decimal number (base 10).
- [x] %x Prints a number in lowercase hexadecimal (base 16) format.
- [x] %X Prints a number in uppercase hexadecimal (base 16) format.
- [x] %% Prints a percentage sign
- [x] % just a percentage, does not print anything and does not give an error

### 🌼 I Created two Files with my functions.
📚 Functions:
First File -> [ft_printf_utils.c](https://github.com/chrisFernandesDev/ft_printf/blob/main/ft_printf_utils.c)
- int	ft_putchar(char c)
- int	ft_putstr(char *str)
- int	ft_putnbr(int n)
- int	ft_putunsigned(unsigned long nbr)
- int	ft_puthex(unsigned long long nbr, char define)

Second File -> [ft_printf_utils_sd.c](https://github.com/chrisFernandesDev/ft_printf/blob/main/ft_printf_utils_sd.c)
- int	ft_putptr(void *ptr)

📖 Created a Main with tests
[main.c](https://github.com/chrisFernandesDev/ft_printf/blob/main/main.c)
