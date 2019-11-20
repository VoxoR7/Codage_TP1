#include "hadamar.h"

#include <string.h>

#include <iostream>
#include <inttypes.h>

int main( int argc, char *argv[] ) {

    Hadamar h(atoi(argv[1]));

    h.afficherMatrice();

    printf("========================\n");

    int8_t *pt = h.ligneHadamar( 1);

    for ( uint8_t i = 0 ; i < h.getnbUtilisateursMax() ; i++ )
        printf("%2" PRId8" ", *(pt + i));
}