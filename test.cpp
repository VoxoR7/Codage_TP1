#include "hadamar.h"

#include <string.h>

#include <iostream>
#include <inttypes.h>

int main( int argc, char *argv[] ) {

    Hadamar h(atoi(argv[1]));

    h.afficherMatrice();

    Hadamar h2(h);

    /*h2.afficherMatrice();*/

    int8_t *pt = h.ligneHadamar( 1);

    for ( uint8_t i = 0 ; i < h.getnbUtilisateursMax() ; i++ )
        printf("%2" PRId8" ", *(pt + i));

    printf("\n");

    int8_t *pt2 = h.ligneHadamar( 3);

    for ( uint8_t i = 0 ; i < h.getnbUtilisateursMax() ; i++ )
        printf("%2" PRId8" ", *(pt2 + i));

    printf("\n");

    int8_t *pt3 = h2.ligneHadamar( 5);

    for ( uint8_t i = 0 ; i < h.getnbUtilisateursMax() ; i++ )
        printf("%2" PRId8" ", *(pt3 + i));

    printf("\n");
}