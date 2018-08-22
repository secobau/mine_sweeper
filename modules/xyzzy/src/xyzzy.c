/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 ******************************************************************************/

		/* macros */
	#include "data.h"
		/* game_action() */
	#include "game.h"

	#include "xyzzy.h"


void	xyzzy_lin	(void)
{
	int	i;
	int	j;
	int	action;

	for (i = 0; i < board.rows; i++) {
		for (j = 0; j < board.cols; j++) {
			if (board.usr[i][j] == USR_CLEAR) {
				action	= ACT_STEP;
				game_action(action, &i, &j);

				action	= ACT_FLAG;
				game_action(action, &i, &j);
			}
		}
	}
}

void	xyzzy_p		(void)
{
	int	i;
	int	fields;

	fields	= board.rows * board.cols;

	for (i = 0; i < fields; i++) {
		xyzzy_lin();
	}
}

/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*--| END OF FILE |-----------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*--| END OF FILE |-----------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
