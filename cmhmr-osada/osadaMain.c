/*
 * osadaMain.c
 *
 *  Created on: 5/9/2016
 *      Author: utnso
 */
#include <stdint.h>
#include "osada.h"
#include <stdlib.h>

int main(void) {
	osada_file * osada = malloc(sizeof(osada_file));
	osada_file_state *b;
	//osada->state = "TESt";
	printf("%s",osada->state);
}