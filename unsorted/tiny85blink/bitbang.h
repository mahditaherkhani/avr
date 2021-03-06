/*
 *      bitbang.h
 *
 *      Copyright 2009 Nathaniel Robert Lewis <linux.robotdude@gmail.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 *
 *      This header controls a bitbanged serial port
 *
 */

#ifndef _AVR_BITBANG_H_
#define _AVR_BITBANG_H_

#include <stdint.h>

#define BAUD 9600

void txb_b ( volatile uint8_t *port, uint8_t pin, uint8_t byte );
uint8_t rxb_b( volatile uint8_t *port, uint8_t pin );

void serout( volatile uint8_t *port, uint8_t pin, uint8_t *bytes, uint8_t num );
void serin( volatile uint8_t *port, uint8_t pin, uint8_t *bytes, uint8_t num );

void printstr( volatile uint8_t *port, uint8_t pin, char *str );
int getstr( volatile uint8_t *port, uint8_t pin, char* str, char term );

#endif
