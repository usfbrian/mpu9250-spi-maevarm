#ifndef M_SPI_H
#define M_SPI_H

#include "m_general.h"
#include <stdlib.h>

#define CS_HIGH() set(PORTB, 0)
#define CS_LOW() clear(PORTB, 0)

void m_spi_init();
uint8_t m_read_spi_register(uint8_t);
void m_write_spi_register(uint8_t, uint8_t);

#endif