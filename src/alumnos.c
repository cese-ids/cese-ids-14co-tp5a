/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}

   bool MartinDuarte(char * cadena, size_t espacio) {
        const struct alumno_s alumno = {
            .apellidos = "DUARTE",
            .nombres = "Martin Nicolás",
            .documento = "38.170.436",
        };

        return SerializarAlumno(cadena, espacio, &alumno);
    }

bool AlejandroPermingeat(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "PERMINGEAT",
        .nombres = "Alejandro",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };
}

bool LucasOrsi(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ORSI",
        .nombres = "Lucas",
        .documento = "38.492.146",
    };
    return SerializarAlumno(cadena, espacio, &alumno);
}


bool GermanVelardez(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "Velardez",
        .nombres = "German",
        .documento = "37.165.604",
    };
    return SerializarAlumno(cadena, espacio, &alumno);
}

/*=====[Implementations of private functions]================================*/
