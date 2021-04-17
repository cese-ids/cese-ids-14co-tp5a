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

bool FrancoGeronimo(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "GERONIMO",
        .nombres = "Franco",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool AlejandroRougier(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ALEJANDRO",
        .nombres = "Rougier",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool RodriguezOsvaldo(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "RODRIGUEZ",
        .nombres = "Osvaldo",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool IvanVargasMarza(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VARGAS MARZA",
        .nombres = "Ivan",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool NicolasVargas(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VARGAS",
        .nombres = "Nicolas",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool FedericoMeghinasso(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MEGHINASSO",
        .nombres = "Federico",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool MatiasMeghinasso(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "MEGHINASSO",
        .nombres = "Matias",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool MartinDuarte(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "DUARTE",
        .nombres = "Martin",
        .documento = "00.000.000",
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
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool NahuelFigueroa(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "FIGUEROA",
        .nombres = "Nahuel",
        .documento = "39.996.762",
    };
    return SerializarAlumno(cadena, espacio, &alumno);
}

bool LucasOrsi(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ORSI",
        .nombres = "Lucas",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool GermanVelardez(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "VELARDEZ",
        .nombres = "German",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool JoseAlvarado(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ALVARADO",
        .nombres = "Jose",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool LincolnDeleon(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "DELEON",
        .nombres = "Lincoln",
        .documento = "00.000.000",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool DamianCaputo(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "Caputo",
        .nombres = "Damian",
        .documento = "34.137.919",
    };
    return SerializarAlumno(cadena, espacio, &alumno);
}

/*=====[Implementations of private functions]================================*/
