    // Helper functions for music

    #include <cs50.h>
    #include <string.h>
    #include <stdio.h>
    #include <math.h>
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
        //The frequency, f, of some note is 2n/12 × 440

        // TODO
        //note = "3";
        char letter = ' ';
        char octave = ' ';
        bool sharp = false;
        double base_frequency = 0;
        //double shift_frequency = 0;

        float total_frequency = 0;

        letter = note[0];
        if (note[1]=='#')
            sharp = true;

    if(!sharp)
    {
        switch(letter)
        {

            octave = note[1] - '0';

            case 'C' :
                base_frequency = 16.35;
                break;
            case 'D' :
                base_frequency = 18.35;
                break;
            case 'E' :
                base_frequency = 20.60;
            case 'F' :
                base_frequency = 21.83;
                break;
            case 'G' :
                base_frequency = 24.50	;
                break;
            case 'A' :
                base_frequency = 27.50	;
                break;
            case 'B' :
                base_frequency = 30.87;
                break;
        }
    }
    else
    {
        octave = note[2] - '0';
        switch(letter) {

        case 'C' :
            base_frequency = 17.32;
            break;
        case 'D' :
            base_frequency = 19.45;
            break;
        case 'F' :
            base_frequency = 23.12;
            break;
        case 'G' :
            base_frequency = 25.96;
            break;
        case 'A' :
            base_frequency = 29.14	;
            break;

        }


        }

        total_frequency = base_frequency * (octave + 1);

       // total_frequency = pow (2.0, (shift_frequency*12)) *base_frequency;


        //total_frequency = (pow(2, shift_frequency/12.0) * 440.00);

        //total_frequency = base_frequency + shift_frequency;

        return total_frequency;
    }

    // Determines whether a string represents a rest
    bool is_rest(string s)
    {
        // TODO
        s = "";
        return !strlen(s);
    }

