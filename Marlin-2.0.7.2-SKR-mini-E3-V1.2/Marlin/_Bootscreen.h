/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file '135446922-vector-illustration-of-simple-alien-icon-isolated-.jpg'
 */
#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT 5000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  100
#define CUSTOM_BOOTSCREEN_ANIMATED true
#define CUSTOM_BOOTSCREEN_FRAME_TIME 500

const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xF0,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0xF0,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xC0,0x00,0x0F,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xC0,0x00,0x0F,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xF0,0x00,0x3F,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xF0,0x00,0x3F,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xFC,0x00,0xFF,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xFC,0x00,0xFF,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xFF,0x03,0xFF,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0xFF,0xFF,0x03,0xFF,0xFC,0x30,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x3F,0xFF,0x03,0xFF,0xF0,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x30,0x3F,0xFF,0x03,0xFF,0xF0,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x3F,0xFF,0xCF,0xFF,0xC0,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x3F,0xFF,0xCF,0xFF,0xC0,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x03,0xFF,0xCF,0xFF,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x03,0xFF,0xCF,0xFF,0x00,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x00,0x3F,0x03,0xF0,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0C,0x00,0x3F,0x03,0xF0,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0x00,0xFC,0x03,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x03,0x00,0xFC,0x03,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0C,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char custom_start_bmp1[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0x80,0x01,0xF8,0x00,0x1F,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x80,0x3F,0xFF,0xC0,0x1F,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x00,0x7F,0xFF,0xE0,0x0F,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x01,0xFF,0xFF,0xF8,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x01,0xFF,0xFF,0xF8,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x03,0xFF,0xFF,0xFC,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x07,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x07,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x3F,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFF,0xC0,0x00,0x00,
  0x00,0x01,0xFF,0xF8,0x03,0x87,0xFE,0x04,0x01,0xFF,0xF8,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x03,0x81,0xF8,0x1C,0x01,0xFF,0xFF,0x00,0x00,
  0x00,0x7F,0xFF,0xF8,0x03,0xC0,0xF0,0x3C,0x01,0xFF,0xFF,0xE0,0x00,
  0x03,0xFF,0xFF,0xFF,0x01,0xF9,0xF9,0xF8,0x0F,0xFF,0xFF,0xFC,0x00,
  0x07,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFE,0x00,
  0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80
};

const unsigned char custom_start_bmp2[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0x80,0x01,0xF8,0x00,0x1F,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x80,0x3F,0xFF,0xC0,0x1F,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x00,0x7F,0xFF,0xE0,0x0F,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x01,0xFF,0xFF,0xF8,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x01,0xFF,0xFF,0xF8,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x03,0xFF,0xFF,0xFC,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x07,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x07,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x3F,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFF,0xC0,0x00,0x00,
  0x00,0x01,0xFF,0xF8,0x03,0x87,0xFE,0x04,0x01,0xFF,0xF8,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x03,0x81,0xF8,0x1C,0x01,0xFF,0xFF,0x00,0x00,
  0x00,0x7F,0xFF,0xF8,0x03,0xC0,0xF0,0x3C,0x01,0xFF,0xFF,0xE0,0x00,
  0x03,0xFF,0xFF,0xFF,0x01,0xF9,0xF9,0xF8,0x0F,0xFF,0xFF,0xFC,0x00,
  0x07,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFE,0x00,
  0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
  0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,
  0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,
  0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xF0,
  0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xF0,
  0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xF0,
  0xFF,0xFC,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x03,0xFF,0xF0,
  0xFF,0xFC,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xF0,
  0x3F,0xFE,0x00,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xF0,0x07,0xFF,0xC0,
  0x3F,0xFF,0x81,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xF8,0x1F,0xFF,0xC0,
  0x1F,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
  0x07,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,
  0x03,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,
  0x00,0x7F,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,
  0x00,0x1F,0xFF,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,0xFF,0x80,0x00,
  0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,
  0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
  0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char custom_start_bmp3[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xC0,0x00,0x3F,0xFC,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x07,0xFE,0x00,0x00,0x07,0xFE,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x03,0xFF,0x80,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0xE0,0x00,0x00,0x00,0x7F,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3F,0x80,0x01,0xF8,0x00,0x1F,0xC0,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x80,0x3F,0xFF,0xC0,0x1F,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x00,0x7F,0xFF,0xE0,0x0F,0xF0,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x01,0xFF,0xFF,0xF8,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x01,0xFF,0xFF,0xF8,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x01,0xFC,0x03,0xFF,0xFF,0xFC,0x03,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x07,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x07,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x3F,0xF8,0x03,0xFF,0xFF,0xFC,0x01,0xFF,0xC0,0x00,0x00,
  0x00,0x01,0xFF,0xF8,0x03,0x87,0xFE,0x04,0x01,0xFF,0xF8,0x00,0x00,
  0x00,0x0F,0xFF,0xF8,0x03,0x81,0xF8,0x1C,0x01,0xFF,0xFF,0x00,0x00,
  0x00,0x7F,0xFF,0xF8,0x03,0xC0,0xF0,0x3C,0x01,0xFF,0xFF,0xE0,0x00,
  0x03,0xFF,0xFF,0xFF,0x01,0xF9,0xF9,0xF8,0x0F,0xFF,0xFF,0xFC,0x00,
  0x07,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xF8,0x7F,0xFF,0xFF,0xFE,0x00,
  0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
  0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,
  0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,
  0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xF0,
  0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xF0,
  0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xF0,
  0xFF,0xFC,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x03,0xFF,0xF0,
  0xFF,0xFC,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0xFF,0xF0,
  0x3F,0xFE,0x00,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xF0,0x07,0xFF,0xC0,
  0x3F,0xFF,0x81,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xF8,0x1F,0xFF,0xC0,
  0x1F,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,
  0x07,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,
  0x03,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,
  0x00,0x7F,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,
  0x00,0x1F,0xFF,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,0xFF,0x80,0x00,
  0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,
  0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
  0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,
  0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
  0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,
  0x00,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,
  0x00,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x00,
  0x00,0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x80,0x00,
  0x00,0x7F,0xC0,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x3F,0xE0,0x00,
  0x00,0x7F,0x80,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x1F,0xE0,0x00,
  0x00,0xFF,0x80,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x1F,0xF0,0x00,
  0x00,0xFE,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x07,0xF0,0x00,
  0x03,0xFE,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x07,0xFC,0x00,
  0x03,0xFC,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x03,0xFC,0x00,
  0x07,0xFC,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x03,0xFE,0x00,
  0x07,0xF0,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0xFE,0x00,
  0x07,0xF0,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0xFE,0x00,
  0x00,0xE0,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x70,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char custom_start_bmp5[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0xC7,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,
  0x0F,0xE7,0x00,0x00,0x00,0x00,0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,
  0x0E,0x27,0x00,0x00,0x00,0x00,0x0E,0x20,0x00,0x00,0x00,0x00,0x00,
  0x0C,0x07,0xF0,0xF8,0xDE,0x0F,0x0C,0x06,0xF0,0xF8,0x3C,0x3C,0x00,
  0x0E,0x07,0xF9,0xFC,0xFF,0x1F,0xCE,0x07,0xF9,0xFC,0x7C,0x7F,0x00,
  0x07,0xC7,0x38,0x0C,0xE7,0x30,0xC7,0xC7,0x38,0x0C,0xE4,0xC3,0x00,
  0x03,0xE7,0x18,0xFC,0xE3,0x3F,0xC3,0xE7,0x18,0xFC,0xC0,0xFF,0x00,
  0x00,0xE7,0x19,0xFC,0xE3,0x3F,0xC0,0xE7,0x19,0xFC,0xC0,0xFF,0x00,
  0x00,0x77,0x19,0x8C,0xE3,0x30,0x00,0x77,0x19,0x8C,0xC0,0xC0,0x00,
  0x08,0x67,0x19,0x9C,0xE3,0x38,0x48,0x67,0x39,0x9C,0xE0,0xE1,0x00,
  0x0F,0xE7,0x19,0xFC,0xE3,0x1F,0xCF,0xE7,0xF9,0xFC,0x7E,0x7F,0x00,
  0x07,0x87,0x18,0xEC,0xE3,0x0F,0x87,0x87,0xF0,0xEC,0x3C,0x3E,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0x07,0x00,0x00,0xCC,0x00,0x03,0xC0,0x3C,0x07,0xE0,0x3C,0x00,
  0x0F,0x0F,0x00,0x00,0xCC,0x00,0x07,0xE0,0x7E,0x07,0xE0,0x7E,0x00,
  0x0F,0x0F,0x00,0x00,0xC0,0x00,0x04,0x60,0x66,0x00,0x60,0x46,0x00,
  0x0D,0x8B,0x1E,0x3E,0xCC,0xDC,0x00,0x60,0x63,0x00,0x60,0x06,0x00,
  0x0D,0x9B,0x3F,0x3E,0xCC,0xFE,0x00,0xE0,0x63,0x00,0xC0,0x0E,0x00,
  0x0D,0xDB,0x03,0x30,0xCC,0xE6,0x00,0xC0,0x63,0x00,0xC0,0x0C,0x00,
  0x0C,0xF3,0x1F,0x30,0xCC,0xC6,0x01,0x80,0x63,0x01,0x80,0x18,0x00,
  0x0C,0xF3,0x33,0x30,0xCC,0xC6,0x07,0x00,0x66,0x01,0x80,0x70,0x00,
  0x0C,0x73,0x3F,0x30,0xCC,0xC6,0x07,0xF6,0x7E,0x63,0x06,0x7F,0x00,
  0x0C,0x63,0x3F,0x30,0xCC,0xC6,0x07,0xF6,0x3C,0x63,0x06,0x7F,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x07,0x8C,0x77,0xE0,0x3C,0x1C,0xC0,0x06,0x00,0x01,0x80,0x3C,0x00,
  0x0F,0xCC,0x67,0xF0,0x3C,0x3C,0xC0,0x06,0x00,0x03,0x80,0x7E,0x00,
  0x0C,0x4C,0xC6,0x30,0x3C,0x3C,0x00,0x00,0x00,0x05,0x80,0x46,0x00,
  0x0E,0x0D,0x86,0x30,0x36,0x2C,0xCD,0xC6,0x0C,0x31,0x80,0x06,0x00,
  0x0F,0x8F,0x87,0xF0,0x36,0x6C,0xCF,0xE6,0x06,0x61,0x80,0x0E,0x00,
  0x03,0xCF,0x87,0xE0,0x37,0x6C,0xCE,0x66,0x06,0x61,0x80,0x0C,0x00,
  0x00,0xED,0xC6,0x60,0x33,0xCC,0xCC,0x66,0x06,0x61,0x80,0x18,0x00,
  0x08,0xEC,0xC6,0x30,0x33,0xCC,0xCC,0x66,0x03,0xC1,0x80,0x70,0x00,
  0x0F,0xCC,0x66,0x30,0x31,0xCC,0xCC,0x66,0x03,0xC7,0xE6,0x7F,0x00,
  0x0F,0x8C,0x36,0x38,0x31,0x8C,0xCC,0x66,0x03,0x87,0xE6,0x7F,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char * const custom_bootscreen_animation[] PROGMEM = {
    custom_start_bmp1, custom_start_bmp2, custom_start_bmp3, custom_start_bmp,
    custom_start_bmp1, custom_start_bmp2, custom_start_bmp3, custom_start_bmp,
    custom_start_bmp5, custom_start_bmp5
  };
