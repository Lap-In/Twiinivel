/*  ==============================================================

                            Universe

        Definition of the universe structure modeling a explorable
        world for Twilight and function to help handling the 
        structure.

        /author:    Kévin 'LapInPUT' POULAIN
        /date:      01/04/2017

                                *~*

        Copyright (c) 2017 Kévin 'Lap-In' Poulain

        This work is licensed under the Creative Commons 
        Attribution-ShareAlike 4.0 International License.

        To view a copy of this license,
        read the LICENCE file drom the git repo or 
        visit http://creativecommons.org/licenses/by-sa/4.0/ or 
        send a letter to Creative Commons, PO Box 1866, 
        Mountain View, CA 94042, USA.
    ==============================================================  */

#ifndef UNIVERSE_H
#define UNIVERSE_H

#include <stdio.h>

#include "universe_define.h"

/******************************/
/* = The universe structure = */
/******************************/

struct universe_st
{
    char *name;
    char state; 
    char nature;
    char era_alpha;
    char era_beta;
    char era_gamma;
    char species;
    //place_st places[MAX_PLACES];
};

/* Allow the structure to be called Universe */
typedef struct universe_st Universe;

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
void uni_st_init(struct universe_st *uni, char *p_name, char p_state, char p_nature, char p_era_alpha, char p_era_beta, char p_era_gamma, char p_species);

/**
    Reset the structure with all his member to
    NULL.

    /param  uni     the structure to zero-ify
*/
void uni_st_zero(struct universe_st *uni);

/**********************************/
/* = Universe Describe Function = */
/**********************************/

/**
    Describe in the console all of the universe.

    /param  uni     the universe to describe
*/
void uni_desc_all(const struct universe_st *uni);

/**
    Give a string representation of the given 
    state.

    /param  p_state     the state to describe.
*/
char *uni_str_state(const char p_state);

/**
    Give a string representation of the given 
    nature.

    /param  p_nature    the nature to describe.
*/
char *uni_str_nature(const char p_nature);

/**
    Give a string representation of the given 
    era.

    /param  p_era   the era to describe.
*/
char *uni_str_era(const char p_era);

/**
    Give a string representation of the given 
    species.

    /param  p_species   the species to describe.
*/
char *uni_str_species(const char p_species);

#endif
