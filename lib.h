#pragma once 
#include <cstdint>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 *  
 * @param IDS es la estructura donde se guarda la informacion del header
 * 
 */
struct IDS{

    uint16_t Upper;
    uint8_t Info;
    uint8_t device;
    uint16_t Lower;
    uint16_t Id;

};

/**
 * @brief 
 * 
 * @param IDLOWER es la estructura donde se almacena los valores del IDlower
 * 
 */

struct IDLOWER{
    uint16_t IdLower[3];
};

/**
 * @brief  es la funcion que organiza el vector y lo imprime
 * 
 * @param f  es el archivo .dat de donde se saca la informacion
 * @param ids es la estructura donde se guarda todo el header
 * @param idl  es la estructura donde se guarda los Idlower
 * @param j son la cantidad de datos del archivo
 */

void lecst(FILE *f, IDS *ids, IDLOWER *idl,int j);

/**
 * @brief  es la funcion que devuelve la cantidad de Ids
 * 
 * @param f 
 * @param c 
 * @return int 
 */

int countdevices(FILE *f,int c);

/**
 * @brief es la funcion que busca el seguimiento de ids
 * 
 * @param f  es el aerchivo .dat donde se saca la informacion
 * @param idl  es la estructura donde se busca los idlower
 * @param h  es el valor de entero donde se busca el seguimiento
 */

void BusId(FILE *f,IDLOWER *idl,int h);
