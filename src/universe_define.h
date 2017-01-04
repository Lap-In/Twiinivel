/*	==============================================================

							Universe Define

		Series of constant for an easier handling of the universe
		structure.

		/author:	Kévin 'LapInPUT' POULAIN
		/date:		01/04/2017

								*~*

		Copyright (c) 2017 Kévin 'Lap-In' Poulain

		This work is licensed under the Creative Commons 
		Attribution-ShareAlike 4.0 International License.

		To view a copy of this license,
		read the LICENCE file drom the git repo or 
		visit http://creativecommons.org/licenses/by-sa/4.0/ or 
		send a letter to Creative Commons, PO Box 1866, 
		Mountain View, CA 94042, USA.
	==============================================================	*/

#ifndef UNIVERSE_DEFINE_H
#define UNIVERSE_DEFINE_H

/**************************/
/* = General Properties = */
/**************************/

/* Maximum interesting places an universe can contain */
#define MAX_PLACES 		5

/************************/
/* = State Properties = */
/************************/

#define NBR_STATE 		3

#define STATE_EMPTY 	0
#define STATE_SAFE 		1
#define STATE_DAMAGED 	2

/*************************/
/* = Nature Properties = */
/*************************/

#define NBR_NATURE 		3

#define NATURE_PACIFIC 	0
#define NATURE_NEUTRAL 	1
#define NATURE_HOSTILE 	2

/**********************/
/* = Era Properties = */
/**********************/

#define NBR_ERA 		3

#define ERA_ORIGINAL 	0
#define ERA_FALLOUT 	1

/**************************/
/* = Species Properties = */
/**************************/

#define NBR_SPECIES 	3

#define SPECIES_PONY 	0

#endif