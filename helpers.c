    // Helper functions for music

    #include <cs50.h>
    #include <string.h>
    #include <stdio.h>
    #include "helpers.h"


    // Converts a fraction formatted as X/Y to eighths
    int duration(string fraction)
    {
        // TODO
        int numerator = fraction[0] - '0';
        int denominator = fraction[2] - '0';
        int duration = (numerator * 8)/(denominator * 1);

        return duration;
    }

    // Calculates frequency (in Hz) of a note
    int frequency(string note)
    {
        //G4
        //G#5
        // FOR STRLEN

        // TODO
        //note = "3";
        char letter = ' ';
        char octave = ' ';

        letter = note[0];
        octave = note[1];
        int value = octave;

        return value;
    }

    // Determines whether a string represents a rest
    bool is_rest(string s)
    {
        // TODO
        s = "";
        return !strlen(s);
    }

