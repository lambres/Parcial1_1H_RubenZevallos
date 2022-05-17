/*
 * Track_Prod.h
 *
 *  Created on: 15 may. 2022
 *      Author: dario
 */
#ifndef TRACK_PROD_H_
#define TRACK_PROD_H_

#include "utn.h"
#include "Tracking.h"
#include "Producto.h"
#include "Usuario.h"
int TU_MostrarTodos(Tracking tArray[] ,int tTAM ,Producto pArray[] ,int pTAM ,int indexUser);
void TU_MostrarUno(Tracking Track, char * nombre);
int TU_MostrarEnViaje(Tracking tArray[] ,int tTAM ,Producto pArray[] ,int pTAM ,int indexUser);
int TU_MostrarVentasFinalizadas(Tracking tArray[] ,int tTAM ,Producto pArray[] ,int pTAM ,int indexUser);
int TU_MostrarArticulosConStock(Tracking tArray[] ,int tTAM ,Producto pArray[] ,int pTAM ,int indexUser);
int TP_DarAlta(Producto pArray[], int pTAM, Tracking tArray[],int tTAM, Usuario auxUser, int indexVendedor);

#endif /* TRACK_PROD_H_ */
