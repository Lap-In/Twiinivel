/*	==============================================================

							Main

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

#include <stdio.h>

#include "universe.h"

int main()
{
	char name[] = "25DA52249FE645";
	Universe uni;

	uni_st_init(&uni, name, STATE_SAFE, NATURE_PACIFIC, ERA_ORIGINAL, ERA_FALLOUT, ERA_ORIGINAL, SPECIES_PONY);

	uni_desc_all(&uni);

	return 0;
}