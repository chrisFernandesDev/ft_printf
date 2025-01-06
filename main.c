#include "ft_printf.h"

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

	output_system = printf("SY -> %%\n");
	output_ft_printf = ft_printf("SY -> %%\n");
	printf("OUTPUT SY = %d\n", output_system);
	ft_printf("OUTPUT FT = %d\n", output_ft_printf);

	ft_printf("\n");

	/////////////////////////////////
	//				%c			   //
	/////////////////////////////////
	

	return (0);
}