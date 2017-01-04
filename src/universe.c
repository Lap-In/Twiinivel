/*	==============================================================

							Universe

		Declaration of the function defined in the universe.h
		file.

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

#include "universe.h"

/**********************************/
/* = Universe Handling Function = */
/**********************************/

/**
    Initialize the given universe structure with
    the given parameter.

    /param  p_uni       the structure to initialize
            p_name      the name of the universe
            p_state     the state to set
            p_nature    the nature to set
            p_era_alpha the era_alpha to set
            p_era_beta  the era_beta to set
            p_era_gamma the era_gamma to set
            p_species   the species to set
*/
void uni_st_init(struct universe_st *uni, char *p_name, char p_state, char p_nature, char p_era_alpha, char p_era_beta, char p_era_gamma, char p_species)
{
	uni->state = p_state; 
    uni->nature = p_nature;
    uni->era_alpha = p_era_alpha;
    uni->era_beta = p_era_beta;
    uni->era_gamma = p_era_gamma;
    uni->species = p_species;

    return;
}

/**
    Reset the structure with all his member to
    NULL.

    /param  uni     the structure to zero-ify
*/
void uni_st_zero(struct universe_st *uni)
{
	uni->name = NULL;
	uni->state = NULL; 
    uni->nature = NULL;
    uni->era_alpha = NULL;
    uni->era_beta = NULL;
    uni->era_gamma = NULL;
    uni->species = NULL;

    return;
}

/**********************************/
/* = Universe Describe Function = */
/**********************************/

/**
    Describe in the console all of the universe.

    /param  uni     the universe to describe
*/
void uni_desc_all(const struct universe_st *uni)
{
	printf("[UNIVERSE %s]\n[%s\n Danger level = %s.\n Era = [%s,%s,%s]\n\n A%s universe.]\n", uni->name, uni_str_species(uni->species), uni_str_nature(uni->nature), uni_str_era(uni->era_alpha), uni_str_era(uni->era_beta), uni_str_era(uni->era_gamma), uni_str_state(uni->state));
}

/**
    Give a string representation of the given 
    state.

    /param  p_state 	the state to describe.
*/
char *uni_str_state(const char p_state)
{
	switch(p_state)
	{
		case STATE_EMPTY:
			return "n empty";

		case STATE_SAFE:
			return " safe";

		case STATE_DAMAGED:
			return " damaged";

		default:
			return "[CLASSIFIED]";
	}
}

/**
    Give a string representation of the given 
    nature.

    /param  p_nature 	the nature to describe.
*/
char *uni_str_nature(const char p_nature)
{
	switch(p_nature)
	{
		case NATURE_PACIFIC:
			return "pacific";

		case NATURE_NEUTRAL:
			return "neutral";

		case NATURE_HOSTILE:
			return "hostile";

		default:
			return "[CLASSIFIED]";
	}
}

/**
    Give a string representation of the given 
    era.

    /param  p_era 	the era to describe.
*/
char *uni_str_era(const char p_era)
{
	switch(p_era)
	{
		case ERA_ORIGINAL:
			return "-";

		case ERA_FALLOUT:
			return "FALLOUT";

		default:
			return "[CLASSIFIED]";
	}
}

/**
    Give a string representation of the given 
    species.

    /param  p_species 	the species to describe.
*/
char *uni_str_species(const char p_species)
{
	switch(p_species)
	{
		case SPECIES_PONY:
			return "Pony world";

		default:
			return "[CLASSIFIED]";
	}
}