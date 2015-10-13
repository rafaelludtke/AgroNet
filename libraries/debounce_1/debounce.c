#include "debounce.h"

/** Brief Debounce input according to debTime parameter.
 *  Param buttonInput input to debounce
 *  Param *buttonDebounced pointer to debounced output
 *  Param *counter pointer to debounce counter
 *  Param debTime Number of needed function calls to toogle output
 */
void debounce(uint8_t buttonInput, uint8_t *buttonDebounced, uint16_t *counter, uint16_t debTime){   
    if (buttonInput == *buttonDebounced){
        *counter = 0;
        return;
    }
    else
        if(*counter >= debTime){
            *counter = 0;
            *buttonDebounced = buttonInput;
            return;
        }   
        (*counter)++;
        return;
}

