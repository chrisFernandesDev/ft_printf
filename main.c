#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	int output_system;
	int output_ft_printf;

	/////////////////////////////////
	//  	  NO SPECIFIERS		   //
	/////////////////////////////////
	ft_printf("----------------NO SPECIFIERS---------------\n");
	output_system = printf("SY -> Test String \t TEeeEEEeEEsT String\n");
	output_ft_printf = ft_printf("FT -> Test String \t TEeeEEEeEEsT String\n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> T \t t \n");
	output_ft_printf = ft_printf("FT -> T \t t \n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%c			   //
	/////////////////////////////////
	ft_printf("------------%%c------------\n");
	char ltr = 'C';
	output_system = printf("SY -> I love %c\n", ltr);
	output_ft_printf = ft_printf("FT -> I love %c\n", ltr);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ltr = '\0';
	output_system = printf("SY -> %c\n", ltr);
	output_ft_printf = ft_printf("FT -> %c\n", ltr);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %c\n", '0' + 48);
	output_ft_printf = ft_printf("FT -> %c\n", '0' + 48);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %c %c %c \n", '1', '2', '3');
	output_ft_printf = ft_printf("FT -> %c %c %c \n", '1', '2', '3');
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %c %c %c \n", '2', '1', 0);
	output_ft_printf = ft_printf("FT -> %c %c %c \n", '2', '1', 0);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %c %c %c \n", ' ', ' ', ' ');
	output_ft_printf = ft_printf("FT -> %c %c %c \n", ' ', ' ', ' ');
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %c %c %c \n", '0', 0, '1');
	output_ft_printf = ft_printf("FT -> %c %c %c \n", '0', 0, '1');
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%s			   //
	/////////////////////////////////
	ft_printf("------------%%s------------\n");
	char *str = "Christina";
	output_system = printf("SY -> Hi I'm %s\n", str);
	output_ft_printf = ft_printf("FT -> Hi I'm %s\n", str);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	char long_str[] = "The mouse chewed through the cork of the King of Russia's bottle of rum. The mouse chewed through the king of Rome's clothes, the queen got angry and decided to mend it. The mouse bit the fox's tail. The spider scratches the frog, the frog scratches the spider, neither the spider scratches the frog, nor the frog scratches the spider.";
	output_system = printf("SY -> %s\n", long_str);
	output_ft_printf = ft_printf("FT -> %s\n", long_str);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	char str2[] = "The spider scratches the frog, the frog scratches the spider, neither the spider scratches the frog, nor the frog scratches the spider.";
	output_system = printf("SY -> %s\n", str2);
	output_ft_printf = ft_printf("FT -> %s\n", str2);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %s\n", "");
	output_ft_printf = ft_printf("FT -> %s\n", "");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %s\n", "-");
	output_ft_printf = ft_printf("FT -> %s\n", "-");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %s %s\n", "-", "4");
	output_ft_printf = ft_printf("FT -> %s %s\n", "-", "4");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %s %s%s\n", "-", "4", "2");
	output_ft_printf = ft_printf("FT -> %s %s%s\n", "-", "4", "2");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	char *example = NULL;
	output_system = printf("SY -> This should be NULL: %s\n", example);
	output_ft_printf = ft_printf("FT -> This should be NULL: %s\n", example);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%p			   //
	/////////////////////////////////
	ft_printf("------------%%p------------\n");
	char *ptr = "c";
	output_system = printf("SY -> %p\n", ptr);
	output_ft_printf = ft_printf("FT -> %p\n", ptr);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	void *example_ptr = NULL;
	output_system = printf("SY -> %p\n", example_ptr);
	output_ft_printf = ft_printf("FT -> %p\n", example_ptr);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %p\n", (void *)-2);
	output_ft_printf = ft_printf("FT -> %p\n", (void *)-2);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %p\n", (void *)-1);
	output_ft_printf = ft_printf("FT -> %p\n", (void *)-1);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %p\n", (void *)1);
	output_ft_printf = ft_printf("FT -> %p\n", (void *)1);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %p\n", (void *)15);
	output_ft_printf = ft_printf("FT -> %p\n", (void *)15);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %p\n", (void *)16);
	output_ft_printf = ft_printf("FT -> %p\n", (void *)16);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %p\n", (void *)17);
	output_ft_printf = ft_printf("FT -> %p\n", (void *)17);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("LONG_MIN && LONG_MAX------------------------\n");

	output_system = printf("SY ->  %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	output_ft_printf = ft_printf("FT ->  %p %p \n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("INT_MIN && INT_MAX------------------\n");
	output_system = printf("SY ->  %p %p \n", (void *)INT_MIN, (void *)INT_MAX);
	output_ft_printf = ft_printf("FT ->  %p %p \n", (void *)INT_MIN, (void *)INT_MAX);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("ULONG_MAX && -ULONG_MAX------\n");
	output_system = printf("SY ->  %p %p \n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	output_ft_printf = ft_printf("FT ->  %p %p \n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("0 && 0--------------------\n");
	output_system = printf("SY ->  %p %p \n", (void *)0, (void *)0);
	output_ft_printf = ft_printf("FT ->  %p %p \n", (void *)0, (void *)0);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	/////////////////////////////////
	//				%d			   //
	/////////////////////////////////
	ft_printf("------------%%d------------\n");
	ft_printf("POSITIVE NUMBERS----------\n");
	int nbr_pos = 42;
	output_system = printf("system -> %d\n", nbr_pos);
	output_ft_printf = ft_printf("My ft_printf -> %d\n", nbr_pos);
	printf("OUTPUT system = %d\n", output_system);
	ft_printf("OUTPUT My ft_printf = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("INT_MAX-------------------\n");
	output_system = printf("SY -> %d\n", INT_MAX);
	output_ft_printf = ft_printf("FT -> %d\n", INT_MAX);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("NEGATIVE NUMBERS----------\n");
	int nbr_neg = -42;
	output_system = printf("SY -> %d\n", nbr_neg);
	output_ft_printf = ft_printf("FT -> %d\n", nbr_neg);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_neg = -1000000;
	output_system = printf("SY -> %d\n", nbr_neg);
	output_ft_printf = ft_printf("FT -> %d\n", nbr_neg);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> very long negative number: %d\n", -50000454);
	output_ft_printf = ft_printf("FT -> very long negative number: %d\n", -50000454);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("INT_MIN--------------------\n");
	output_system = printf("SY -> %d\n", INT_MIN);
	output_ft_printf = ft_printf("FT -> %d\n", INT_MIN);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%i			   //
	/////////////////////////////////
	ft_printf("------------%%i------------\n");
	int nbr_i = 42;
	output_system = printf("SY -> %i\n", nbr_i);
	output_ft_printf = ft_printf("FT -> %i\n", nbr_i);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	int nbr_i_neg = -42;
	output_system = printf("SY -> %i\n", nbr_i_neg);
	output_ft_printf = ft_printf("FT -> %i\n", nbr_i_neg);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	/////////////////////////////////
	//				%u			   //
	/////////////////////////////////
	ft_printf("------------%%u------------\n");
	unsigned nbr_u = 42;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %u\n", 4294967295u);
	output_ft_printf = ft_printf("FT -> %u\n", 4294967295u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = -16;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = -101;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = INT_MAX;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = INT_MIN;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = -9;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = -99;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	nbr_u = -10;
	output_system = printf("SY -> %u\n", nbr_u);
	output_ft_printf = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%x			   //
	/////////////////////////////////
	ft_printf("------------%%x------------\n");
	unsigned nbr_x = 520;
	output_system = printf("SY -> %x\n", nbr_x);
	output_ft_printf = ft_printf("FT -> %x\n", nbr_x);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> 17 in hexadecimal = %x\n", 17);
	output_ft_printf = ft_printf("FT -> 17 in hexadecimal = %x\n", 17);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> 999999 in hexadecimal = %x\n", 999999);
	output_ft_printf = ft_printf("FT -> 999999 in hexadecimal = %x\n", 999999);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	output_ft_printf = ft_printf("FT -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %d\n", -100);
	output_ft_printf = ft_printf("FT -> %d\n", -100);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %d\n", -15);
	output_ft_printf = ft_printf("FT -> %d\n", -15);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 10);
	output_ft_printf = ft_printf("FT -> %x\n", 10);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 11);
	output_ft_printf = ft_printf("FT -> %x\n", 11);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -42);
	output_ft_printf = ft_printf("FT -> %x\n", -42);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 42);
	output_ft_printf = ft_printf("FT -> %x\n", 42);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 15);
	output_ft_printf = ft_printf("FT -> %x\n", 15);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 1000);
	output_ft_printf = ft_printf("FT -> %x\n", 1000);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 0);
	output_ft_printf = ft_printf("FT -> %x\n", 0);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 1);
	output_ft_printf = ft_printf("FT -> %x\n", 1);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 9);
	output_ft_printf = ft_printf("FT -> %x\n", 9);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -1);
	output_ft_printf = ft_printf("FT -> %x\n", -1);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -2);
	output_ft_printf = ft_printf("FT -> %x\n", -2);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -101);
	output_ft_printf = ft_printf("FT -> %x\n", -101);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", INT_MAX);
	output_ft_printf = ft_printf("FT -> %x\n", INT_MAX);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", INT_MIN);
	output_ft_printf = ft_printf("FT -> %x\n", INT_MIN);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", UINT_MAX);
	output_ft_printf = ft_printf("FT -> %x\n", UINT_MAX);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 100);
	output_ft_printf = ft_printf("FT -> %x\n", 100);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -99);
	output_ft_printf = ft_printf("FT -> %x\n", -99);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -16);
	output_ft_printf = ft_printf("FT -> %x\n", -16);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -9);
	output_ft_printf = ft_printf("FT -> %x\n", -9);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -14);
	output_ft_printf = ft_printf("FT -> %x\n", -14);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 16);
	output_ft_printf = ft_printf("FT -> %x\n", 16);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 99);
	output_ft_printf = ft_printf("FT -> %x\n", 99);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 101);
	output_ft_printf = ft_printf("FT -> %x\n", 101);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -11);
	output_ft_printf = ft_printf("FT -> %x\n", -11);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", -10);
	output_ft_printf = ft_printf("FT -> %x\n", -10);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %x\n", 17);
	output_ft_printf = ft_printf("FT -> %x\n", 17);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%X			   //
	/////////////////////////////////
	ft_printf("------------%%X------------\n");
	unsigned nbr_X = 520;
	output_system = printf("SY -> %X\n", nbr_X);
	output_ft_printf = ft_printf("FT -> %X\n", nbr_X);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	/////////////////////////////////
	//		% PERCENTAGE TESTS	   //
	/////////////////////////////////
	ft_printf("------------%%%%------------\n");
	output_system = printf("SY -> %%\n");
	output_ft_printf = ft_printf("FT -> %%\n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %% %%\n");
	output_ft_printf = ft_printf("FT -> %% %%\n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %% %% %%\n");
	output_ft_printf = ft_printf("FT -> %% %% %%\n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	output_system = printf("SY -> %%  %%  %%\n");
	output_ft_printf = ft_printf("FT -> %%  %%  %%\n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	ft_printf("--------------------------------MIX-------------------------------\n");
	output_system = printf("SY -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	output_ft_printf = ft_printf("FT -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	return (0);
}