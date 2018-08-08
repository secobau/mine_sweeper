/******************************************************************************
 *	Copyright (C) 2015	Alejandro Colomar Andrés		      *
 ******************************************************************************/

		/* printf() */
	#include <stdio.h>

		/* alx_prn_file() */
	#include "alx_file.h"

		/* VERSION */
	#include "data.h"

	#include "about.h"


void	print_help		(void)
{
	alx_prn_file("../files/HELP.txt");
}

void	print_version		(void)
{
	printf("PNP-Solver\t" VERSION "\n\n");
}

void	print_usage		(void)
{
	alx_prn_file("../files/USAGE.txt");
}

void	print_cpright		(void)
{
	alx_prn_file("../files/COPYRIGHT.txt");
}

void	print_disclaim		(void)
{
	alx_prn_file("../files/DISCLAIMER.txt");
}

void	print_license		(void)
{
	alx_prn_file("../files/LICENSE.txt");

}