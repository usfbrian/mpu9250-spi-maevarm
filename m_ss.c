#include "m_ss.h"

void init_mpu()
{
  NULL;  // TODO
  // WHOAMI
}

void init_ak()
{
  NULL;  // TODO
  // WHOAMI
}

void write_int16_to_usb(int16_t data)
{
  m_usb_tx_int(data);  // TODO: switch to two-byte transfer
///  m_usb_tx_char( (uint8_t)(data >> 8) );
///  m_usb_tx_char( (uint8_t)data );
}

void write_newline_to_usb()  { m_usb_tx_string("\n"); }