#ifndef _Monsters_H_
#define _Monsters_H_
/*This is the Monsters file for the GameR-Iot Multiple MCU Arduino driven 
 * game system and DIY console. This is a demo game RPG set in the Dune Universe
 * created by Frank Herbert.
 */

/* All colors used in this game for 4bpp bitmaps 
use this palette order.....
blank      0 palette[0];/////////////////////no color
black      1 palette[1];      lightbrown 8 palette[8];
blue       2 palette[2];      lightgreen 9 palette[9];
brown      3 palette[3];      darkgrey   a palette[a];
green      4 palette[4];      lightgrey  b palette[b];
grey       5 palette[5];      yellow     c palette[c];
pink       6 palette[6];      purple     d palette[d];
red        7 palette[7];      white      e palette[e];
 */

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////Monsters///////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
////////////////////cave spider   34 x 24
const byte cavespider[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x10,0x00,0x12,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x2e,0x21,0x01,0x2e,0x21,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x10,0x00,0x12,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x51,0x01,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x51,0x01,0x51,0x11,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x5c,0x55,0x55,0x15,0x55,0x5c,0x51,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x11,0x01,0xce,0x2c,0x5e,0x25,0x55,0xe2,0x5c,0x2e,0x10,0x11,0x00,0x00,0x00,
0x00,0x01,0x1e,0x11,0xc2,0x2c,0x22,0x22,0xc2,0x22,0x2c,0x22,0xc1,0x14,0x11,0x00,0x00,
0x00,0x11,0x4c,0x1c,0xc5,0xcc,0x22,0x22,0xc2,0x22,0x2c,0xc5,0xcc,0x1c,0x41,0x00,0x00,
0x00,0x14,0xcc,0x1c,0xc5,0x55,0xc2,0x2c,0x22,0x22,0xc5,0x55,0xcc,0x1c,0xc4,0x10,0x00,
0x01,0x4c,0xcc,0x44,0xc5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xc4,0x4c,0xcc,0x41,0x00,
0x01,0x4c,0xcc,0xcc,0x11,0x55,0x44,0x55,0x55,0x54,0x45,0x51,0x1c,0xcc,0xcc,0x41,0x00,
0x01,0x4c,0x10,0x41,0x45,0x54,0xee,0x45,0x55,0x4e,0xe4,0x55,0x41,0x40,0x1c,0x41,0x00,
0x01,0x4c,0x10,0x41,0x45,0x54,0xee,0x45,0x55,0x4e,0xe4,0x55,0x41,0x40,0x1c,0x41,0x00,
0x01,0x4c,0x10,0x01,0x51,0x51,0xee,0xe1,0xc1,0xee,0xe1,0x51,0x51,0x00,0x15,0x41,0x00,
0x11,0x4c,0x10,0x01,0x51,0x01,0xee,0xe1,0x41,0xee,0xe1,0x41,0x51,0x00,0x15,0x41,0x10,
0x1c,0x4c,0x41,0x01,0x51,0x00,0x1e,0xe1,0x41,0xee,0x10,0x01,0x51,0x00,0x4c,0x45,0x10,
0x10,0x45,0xc1,0x01,0x51,0x00,0x01,0xe1,0x01,0xe1,0x00,0x01,0x51,0x01,0xc5,0x00,0x10,
0x00,0x01,0xc1,0x01,0x41,0x00,0x01,0xee,0x0e,0xe1,0x00,0x01,0x41,0x01,0xc1,0x00,0x00,
0x00,0x00,0x11,0x00,0x11,0x00,0x0e,0xee,0x0e,0xee,0x00,0x01,0x10,0x01,0x10,0x00,0x00,
0x00,0x00,0x10,0x00,0x11,0x00,0x00,0x10,0x00,0x10,0x00,0x01,0x10,0x00,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00};
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////
//////////Desert bat 48 x 40
/*black      1
blue       2
brown      3
green      4
grey       5
pink       6
red        7
lightbrown 8
lightgreen 9
darkgrey   a
lightgrey  b
yellow     c
purple     d
white      e
*/
const byte desertbat[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x00,0x01,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x21,0x00,0x12,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x1e,0x21,0x01,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x21,0x13,0x11,0x12,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xe3,0x88,0x88,0x31,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x1e,0xee,0x88,0x88,0x11,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xe1,0x8e,0xe8,0xe8,0x88,0x83,0x12,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x18,0x88,0x88,0x88,0x88,0x88,0x31,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x11,0x11,0x11,0x10,0x18,0x38,0x13,0x38,0x88,0x88,0x33,0x31,0x11,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x13,0x88,0x88,0x82,0x31,0x11,0x81,0x71,0x88,0x88,0x88,0x81,0x1e,0xe8,0x88,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x13,0x33,0x11,0x11,0x88,0x83,0x31,0x31,0x13,0x88,0x88,0x83,0x83,0x88,0x83,0x88,0x88,0x81,0x11,0x00,0x00,0x00,0x00,0x00,
0x01,0x11,0x22,0x22,0x11,0x13,0x12,0xe2,0x21,0x38,0x38,0x83,0x13,0x11,0x11,0x31,0x11,0x88,0x88,0x11,0x10,0x00,0x00,0x00,
0x00,0x00,0x11,0x21,0x31,0x11,0x11,0x22,0x22,0x13,0x38,0x88,0x31,0x11,0x81,0x13,0x83,0x11,0x18,0x88,0x11,0x00,0x00,0x00,
0x00,0x00,0x00,0x11,0x31,0x22,0x21,0x22,0x21,0x33,0x88,0x88,0x33,0x31,0x13,0x11,0x18,0x31,0x21,0x13,0x83,0x11,0x00,0x00,
0x00,0x00,0x00,0x01,0x31,0x11,0x12,0x11,0x11,0x18,0x88,0x81,0x13,0x31,0x21,0x31,0x21,0x33,0x12,0x21,0x31,0x13,0x10,0x00,
0x00,0x00,0x00,0x00,0x10,0x00,0x01,0x31,0x13,0x18,0x88,0x18,0x81,0x31,0x11,0x31,0x11,0x13,0x12,0x22,0x11,0x13,0x10,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x18,0x38,0x88,0x18,0x81,0x33,0x31,0x01,0x00,0x11,0x31,0x11,0x00,0x01,0x11,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x31,0x18,0x13,0x33,0x13,0x38,0x88,0x10,0x10,0x00,0x13,0x10,0x00,0x00,0x00,0x00,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x13,0x13,0x11,0x81,0x13,0x33,0x10,0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x83,0x11,0x81,0x81,0x81,0x33,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x31,0x01,0x81,0x11,0x81,0x33,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x11,0x33,0x18,0x83,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x18,0x83,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x88,0x88,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x88,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x88,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x38,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
////////////// desert hare 34 x 22

const byte deserthare[] = {
0x00,0x11,0x11,0xf0,0x00,0x00,0x01,0x11,0x11,0x11,0x00,0x00,0x00,0xf1,0x11,0x10,0x00,
0x01,0xee,0xef,0x11,0xf0,0x00,0x15,0xf5,0xf5,0xf5,0x10,0x00,0xf1,0x1f,0xee,0xe1,0x00,
0x01,0xee,0xee,0xe5,0x11,0x01,0x5f,0x5f,0x5f,0x5f,0x51,0x01,0x15,0xee,0xee,0xe1,0x00, 
0x00,0x1e,0xee,0xee,0x55,0x15,0xf5,0xf5,0x55,0xf5,0xf5,0x15,0x5e,0xee,0xee,0x10,0x00,
0x00,0x01,0xee,0xee,0xf1,0x51,0x5f,0x5f,0x5f,0x5f,0x51,0x51,0xfe,0xee,0xe1,0x00,0x00,
0x00,0x00,0x1e,0xee,0xef,0x15,0x11,0xf5,0x55,0xf1,0x15,0x1f,0xee,0xee,0x10,0x00,0x00,
0x00,0x00,0x01,0xee,0x5f,0xf1,0x51,0x5f,0xff,0x51,0x51,0xff,0x5e,0xe1,0x00,0x00,0x00,
0x00,0x00,0x01,0xfe,0xee,0x51,0x51,0xf5,0x55,0xf1,0x51,0x5e,0xee,0xf1,0x00,0x00,0x00,
0x00,0x00,0x00,0x1f,0xef,0xf5,0x15,0x1f,0xff,0x15,0x15,0xff,0xef,0x10,0x00,0x00,0x00,
0x00,0x00,0x01,0x51,0x51,0x51,0x55,0x51,0x11,0x55,0x51,0x51,0x51,0x51,0x00,0x00,0x00,
0x00,0x00,0x01,0xf1,0x55,0xf1,0xf1,0x55,0xf5,0x51,0xf1,0xf5,0x51,0xf1,0x00,0x00,0x00,
0x00,0x00,0x15,0x1f,0x5f,0x15,0x12,0x15,0x55,0x12,0x15,0x1f,0x5f,0x15,0x10,0x00,0x00,
0x00,0x00,0x1f,0x15,0xf5,0x1f,0x12,0x1f,0xef,0x12,0x1f,0x15,0xf5,0x1f,0x10,0x00,0x00,
0x00,0x00,0x15,0x1f,0x55,0x15,0xf1,0x1e,0xee,0x11,0xf5,0x15,0x5f,0x15,0x10,0x00,0x00,
0x00,0x00,0x01,0x51,0x5f,0x55,0x15,0xee,0x1e,0xe5,0x15,0x5f,0x51,0x51,0x00,0x00,0x00,
0x00,0x00,0x00,0x11,0xf5,0xf5,0xe1,0xfe,0x1e,0xf1,0xe5,0xf5,0xf1,0x10,0x00,0x00,0x00,
0x00,0x00,0x11,0x55,0x1f,0x5e,0x1e,0x11,0x11,0x1e,0x1e,0x5f,0x15,0x51,0x10,0x00,0x00,
0x00,0x01,0xee,0xee,0x51,0xfe,0x1f,0xee,0xee,0xef,0x1e,0xf1,0x5e,0xee,0xe1,0x00,0x00,
0x00,0x15,0xe5,0xe1,0x11,0x5e,0xf1,0x11,0x11,0x11,0xfe,0x51,0x11,0xe5,0xe5,0x10,0x00,
0x00,0x01,0x11,0x10,0x01,0xee,0xe1,0x00,0x00,0x01,0xee,0xe1,0xee,0x11,0x11,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x11,0x00,0x00,0x00,0x01,0x11,0x00,0x00,0x00,0x00,0x00,0x00};

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
////////Desert Scorpion 44 x 34
const byte desertscorp[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x18,0x88,0x81,0x01,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x18,0x83,0x33,0x38,0x18,0x33,0x81,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x33,0x33,0x88,0x33,0x13,0x33,0x38,0x18,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x83,0x38,0x33,0x18,0x38,0x33,0x13,0x81,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x83,0x33,0x33,0x81,0x83,0x38,0x13,0x38,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x88,0x81,0x10,0x18,0x31,0x83,0x83,0x81,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x10,0x00,0x01,0x10,0x18,0x33,0x11,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,0x81,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x33,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x83,0x38,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x18,0x33,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x33,0x31,0x83,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x81,0x00,0x00,0x00,0x11,0x11,0x18,0x18,0x33,0x33,0x11,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x33,0x10,0x00,0x01,0x33,0x31,0x33,0x11,0x83,0x33,0x81,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x13,0x10,0x11,0x13,0x13,0x13,0x81,0x33,0x18,0x88,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x33,0x81,0x31,0x88,0x33,0x81,0x38,0x13,0x13,0x21,0x11,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x33,0x13,0x31,0x33,0x33,0x33,0x38,0x31,0x33,0x13,0x11,0x81,0x31,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x13,0x33,0x31,0x13,0x38,0x31,0x38,0x33,0x18,0x13,0x31,0x83,0x18,0x18,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x13,0x11,0x33,0x18,0x33,0x13,0x33,0x33,0x38,0x13,0x13,0x18,0x31,0x31,0x31,0x00,0x00,
0x00,0x00,0x00,0x00,0x13,0x81,0x33,0x11,0x31,0x13,0x13,0x31,0x33,0x33,0x11,0x83,0x11,0x81,0x31,0x83,0x11,0x00,
0x00,0x00,0x01,0x11,0x33,0x38,0x13,0x33,0x18,0x21,0x82,0x18,0x13,0x11,0x31,0x11,0x31,0x83,0x18,0x11,0x00,0x00,
0x00,0x01,0x18,0x88,0x18,0x33,0x81,0x31,0x88,0x22,0x82,0x28,0x81,0x33,0x13,0x31,0x83,0x13,0x13,0x81,0x00,0x00,
0x00,0x18,0x33,0x33,0x11,0x33,0x11,0x11,0x18,0x88,0x88,0x88,0x13,0x31,0x83,0x33,0x13,0x13,0x81,0x10,0x00,0x00,
0x00,0x18,0x33,0x33,0x38,0x11,0x00,0x00,0x01,0x11,0x11,0x11,0x11,0x11,0x18,0x33,0x18,0x31,0x10,0x00,0x00,0x00,
0x01,0x83,0x81,0x18,0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x11,0x83,0x88,0x81,0x81,0x01,0x81,0x10,0x00,0x00,0x00,
0x01,0x88,0x10,0x01,0x38,0x10,0x00,0x00,0x00,0x00,0x01,0x83,0x33,0x33,0x38,0x10,0x00,0x11,0x00,0x00,0x00,0x00,
0x01,0x31,0x00,0x18,0x31,0x00,0x00,0x00,0x00,0x00,0x18,0x38,0x18,0x33,0x33,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x81,0x01,0x13,0x81,0x00,0x00,0x00,0x00,0x01,0x83,0x11,0x11,0x18,0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x10,0x18,0x81,0x10,0x00,0x00,0x00,0x00,0x00,0x11,0x00,0x01,0x81,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x18,0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x38,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////desert slig 28 x 36

const byte desertslig[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x00,0x00,0x00,
0x00,0x00,0x00,0x31,0x80,0x00,0x00,0x00,0x00,0x08,0x13,0x00,0x00,0x00,
0x00,0x00,0x00,0x31,0x81,0x81,0x00,0x00,0x18,0x18,0x13,0x00,0x00,0x00,
0x00,0x00,0x03,0x31,0x88,0x88,0x10,0x01,0x88,0x88,0x31,0x30,0x00,0x00,
0x00,0x00,0x03,0x18,0x18,0x88,0x81,0x18,0x88,0x81,0x81,0x30,0x00,0x00,
0x00,0x00,0x01,0x38,0x81,0x18,0x88,0x88,0x81,0x18,0x83,0x10,0x00,0x00,
0x00,0x00,0x00,0x88,0x82,0x28,0x88,0x88,0x82,0x28,0x88,0x00,0x00,0x00,
0x00,0x00,0x00,0x38,0x88,0x21,0x88,0x88,0x12,0x88,0x83,0x00,0x00,0x00,
0x00,0x00,0x03,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x30,0x00,0x00,
0x00,0x00,0x03,0x38,0x88,0x88,0x88,0x88,0x88,0x88,0x83,0x30,0x00,0x00,
0x00,0x00,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x00,0x00,
0x00,0x01,0x88,0x88,0x88,0x33,0x88,0x88,0x33,0x88,0x88,0x88,0x10,0x00,
0x00,0x01,0x88,0x88,0x33,0x66,0x38,0x83,0x66,0x33,0x88,0x88,0x10,0x00,
0x00,0x08,0x88,0x83,0x36,0x66,0x33,0x33,0x66,0x63,0x38,0x88,0x80,0x00,
0x00,0x08,0x88,0x33,0x66,0x66,0x63,0x36,0x66,0x66,0x33,0x88,0x80,0x00,
0x00,0x08,0x83,0x36,0x61,0x61,0x66,0x66,0x16,0x16,0x63,0x38,0x80,0x00,
0x00,0x08,0x83,0x36,0x66,0x66,0x66,0x66,0x66,0x66,0x63,0x38,0x80,0x00,
0x00,0x18,0x88,0x33,0x66,0x63,0x33,0x33,0x36,0x66,0x33,0x88,0x81,0x00,
0x00,0x10,0x88,0x83,0x36,0x33,0x66,0x66,0x33,0x63,0x38,0x88,0x10,0x00,
0x00,0x00,0x88,0x88,0x33,0x36,0x68,0x86,0x63,0x33,0x88,0x88,0x00,0x00,
0x00,0x01,0x88,0x88,0x33,0x66,0x88,0x88,0x66,0x33,0x88,0x88,0x10,0x00,
0x00,0x00,0x88,0x88,0x36,0x66,0x88,0x88,0x66,0x63,0x88,0x88,0x00,0x00,
0x00,0x00,0x08,0x83,0x36,0x68,0x88,0x88,0x86,0x63,0x38,0x80,0x00,0x00,
0x00,0x00,0x33,0x33,0x66,0x68,0x88,0x88,0x86,0x66,0x33,0x33,0x00,0x00,
0x00,0x00,0x33,0x66,0x66,0x88,0x33,0x33,0x88,0x66,0x66,0x33,0x00,0x00,
0x00,0x03,0x33,0x66,0x66,0x83,0x33,0x33,0x38,0x66,0x66,0x33,0x30,0x00,
0x00,0x03,0x36,0x66,0x88,0x33,0x33,0x33,0x33,0x88,0x66,0x63,0x30,0x00,
0x00,0x03,0x36,0x66,0xe3,0x1e,0x1e,0xe1,0xe1,0x3e,0x66,0x63,0x30,0x00,
0x00,0x00,0x66,0x66,0xee,0x1e,0x11,0x11,0xe1,0xee,0x66,0x66,0x00,0x00,
0x00,0x00,0x66,0x63,0x1e,0x11,0x11,0x11,0x11,0xe1,0x36,0x66,0x00,0x00,
0x00,0x00,0x06,0x61,0x3e,0xe3,0x1e,0xe1,0x3e,0xe3,0x16,0x60,0x00,0x00,
0x00,0x06,0x61,0x16,0x63,0x33,0x33,0x33,0x33,0x36,0x61,0x16,0x60,0x00,
0x06,0x66,0x66,0x66,0x66,0x6e,0xee,0xee,0xe6,0x66,0x66,0x66,0x66,0x66,
0x06,0x66,0x66,0x66,0x6e,0xee,0xee,0xee,0xee,0xe6,0x66,0x66,0x66,0x66};
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
////////////Face dancer 34 x 40
const byte facedancer[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x11,0x11,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x12,0xaa,0xaa,0xaa,0x21,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0xaa,0xaa,0xaa,0xaa,0xaa,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x1a,0xaa,0xaa,0xaa,0xaa,0xaa,0xa1,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0xaa,0xa2,0x2a,0xaa,0xa2,0x2a,0xaa,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0xa2,0xaa,0xa2,0xaa,0x2a,0xaa,0x2a,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1a,0x2a,0xaa,0xaa,0xaa,0xaa,0xaa,0xa2,0xa1,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xaa,0xaa,0xaa,0x11,0x11,0x11,0xaa,0xaa,0xaa,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xaa,0xaa,0xa1,0xa5,0x55,0x5a,0x1a,0xaa,0xaa,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1a,0xaa,0x12,0x5a,0xaa,0xa5,0x21,0xaa,0xa1,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x1a,0xa1,0xa2,0x25,0x55,0x52,0x2a,0x1a,0xa1,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xa2,0x1a,0x55,0x55,0x55,0x55,0x55,0xa1,0x2a,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xa2,0x15,0x55,0x55,0x11,0x55,0x55,0x51,0x2a,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xa1,0x15,0x55,0xa5,0x55,0x5a,0x55,0x51,0x1a,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x21,0x1a,0x55,0x51,0x11,0x15,0x55,0xa1,0x12,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x14,0x11,0xa5,0x55,0xaa,0x55,0x5a,0x11,0x41,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x14,0x11,0x11,0x15,0x55,0x51,0x11,0x11,0x41,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x12,0x11,0x41,0xaa,0x11,0x11,0x11,0xaa,0x14,0x11,0x21,0x00,0x00,0x00,
0x00,0x00,0x00,0x12,0x11,0x41,0xaa,0x15,0x55,0x51,0xaa,0x14,0x11,0x21,0x00,0x00,0x00,
0x00,0x00,0x01,0x22,0xa1,0x41,0xaa,0x15,0x55,0x51,0xaa,0x14,0x1a,0x22,0x10,0x00,0x00,
0x00,0x00,0x11,0xaa,0xa1,0x41,0xa2,0x21,0xaa,0x12,0x2a,0x14,0x1a,0xaa,0x11,0x00,0x00, 
0x00,0x01,0x88,0x1a,0xa1,0x41,0x22,0x21,0x11,0x12,0x22,0x14,0x1a,0xa1,0x88,0x10,0x00,
0x00,0x01,0x88,0x1a,0x21,0x12,0x2a,0x21,0xcc,0x12,0xa2,0x21,0x12,0xa1,0x88,0x10,0x00,
0x00,0x18,0x33,0x1a,0x21,0x22,0xaa,0x21,0xcc,0x12,0xaa,0x22,0x12,0x51,0x33,0x00,0x00,
0x00,0x13,0x33,0x1a,0x21,0xaa,0xaa,0xa2,0x11,0x2a,0xaa,0xaa,0x12,0xa1,0x33,0x31,0x00,
0x00,0x13,0x38,0x1a,0x1a,0xaa,0xaa,0xa1,0x55,0x1a,0xaa,0xaa,0xa1,0xa1,0x83,0x31,0x00,
0x00,0x01,0x11,0xaa,0x1a,0xaa,0xaa,0xa1,0x11,0x1a,0xaa,0xaa,0xa1,0xaa,0x11,0x10,0x00,
0x00,0x00,0x1a,0xa1,0x2a,0xaa,0xaa,0x15,0xaa,0x51,0xaa,0xaa,0xa2,0x1a,0xa1,0x00,0x00,
0x00,0x00,0x01,0x21,0xaa,0xaa,0xa2,0x15,0x55,0x51,0x2a,0xaa,0xaa,0x12,0x10,0x00,0x00,
0x00,0x00,0x00,0x12,0x22,0x22,0x15,0x55,0x55,0x55,0x51,0x22,0x22,0x21,0x00,0x00,0x00,
0x00,0x00,0x00,0x1a,0xaa,0xa2,0x15,0x55,0x11,0x55,0x51,0x2a,0xaa,0xa1,0x00,0x00,0x00,
0x00,0x00,0x00,0x1a,0xaa,0x21,0x11,0x51,0x00,0x15,0x11,0x12,0xaa,0xa1,0x00,0x00,0x00,
0x00,0x00,0x00,0x1a,0xaa,0x11,0x33,0x11,0x00,0x11,0x33,0x11,0xaa,0xa1,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x21,0x01,0x88,0x10,0x00,0x01,0x88,0x10,0x12,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x10,0x01,0x83,0x10,0x00,0x01,0x38,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x38,0x10,0x00,0x01,0x83,0x10,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////Jacarutu Outcast  34 x 32
const byte outcast[] = { 
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x13,0x81,0x10,0x00,0x00,0xe0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x38,0x53,0x31,0x00,0x00,0xee,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x83,0x11,0x11,0x28,0x10,0x00,0xee,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x51,0x11,0x11,0x15,0x81,0x00,0xee,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x35,0x11,0x11,0x11,0x11,0x53,0x10,0xee,0x10,0x00,
0x00,0x00,0x00,0x00,0x00,0x18,0x11,0x38,0x11,0x11,0x11,0x11,0x83,0x10,0xee,0x10,0x00,
0x00,0x00,0x00,0x10,0x01,0x35,0x81,0x35,0x11,0x11,0x11,0x11,0x53,0x15,0xee,0x31,0x00,
0x00,0x00,0x01,0x81,0x11,0x38,0x51,0x38,0x51,0x11,0x11,0x15,0x83,0x18,0xee,0x31,0x00,
0x01,0x01,0x01,0x31,0x81,0x15,0x83,0x15,0x83,0x11,0x11,0x38,0x51,0x31,0xee,0x18,0x10,
0x01,0x1e,0xee,0x18,0x13,0x18,0x53,0x31,0x33,0x31,0x13,0x33,0x13,0x15,0xee,0x81,0x00,
0x01,0xee,0xee,0x15,0x13,0x15,0x83,0x38,0x11,0x33,0x33,0x11,0x81,0x31,0x11,0x11,0x10,
0x01,0x1e,0xee,0x38,0x53,0x31,0x53,0x35,0x13,0x35,0x83,0x31,0x51,0x8e,0x1e,0xee,0x10,
0x01,0xee,0x11,0x35,0x81,0x31,0x83,0x38,0x81,0x38,0x53,0x15,0x13,0x3e,0xe1,0xe1,0x10,
0x00,0x00,0x00,0x18,0x53,0x31,0x53,0x35,0x81,0x35,0x83,0x18,0x13,0x1e,0x1e,0xee,0x10,
0x00,0x00,0x00,0x01,0x83,0x31,0x83,0x38,0x53,0x38,0x53,0x31,0x53,0x11,0xee,0x11,0x10,
0x00,0x00,0x00,0x01,0x53,0x31,0x53,0x35,0x83,0x35,0x83,0x31,0x81,0x31,0xee,0xee,0x10,
0x00,0x00,0x00,0x01,0x83,0x35,0x13,0x38,0x53,0x31,0x85,0x31,0x51,0x35,0x11,0x15,0x10,
0x00,0x00,0x00,0x01,0x53,0x38,0x13,0x35,0x83,0x35,0x83,0x35,0x81,0x38,0x11,0x38,0x10,
0x00,0x00,0x00,0x01,0x83,0x15,0x81,0x38,0x53,0x38,0x53,0x38,0x51,0x35,0x11,0x31,0x00,
0x00,0x00,0x00,0x01,0x51,0x38,0x53,0x11,0x83,0x35,0x83,0x35,0x13,0x38,0x11,0x31,0x00,
0x00,0x00,0x00,0x01,0x13,0x35,0x83,0x38,0x13,0x38,0x53,0x38,0x13,0x35,0x13,0x31,0x00,
0x00,0x00,0x00,0x00,0x13,0x38,0x53,0x35,0x83,0x35,0x83,0x31,0x83,0x38,0x53,0x31,0x00,
0x00,0x00,0x00,0x00,0x13,0x35,0x83,0x38,0x53,0x38,0x53,0x31,0x53,0x35,0x83,0x31,0x00,
0x00,0x00,0x00,0x00,0x01,0x38,0x53,0x35,0x83,0x35,0x83,0x31,0x83,0x38,0x53,0x31,0x00,
0x00,0x00,0x00,0x00,0x01,0x15,0x83,0x38,0x53,0x38,0x53,0x18,0x53,0x35,0x83,0x31,0x00,
0x00,0x00,0x00,0x00,0x15,0x81,0x11,0x35,0x83,0x35,0x83,0x35,0x11,0x38,0x53,0x10,0x00,
0x00,0x00,0x00,0x01,0x38,0x53,0x33,0x11,0x53,0x38,0x53,0x38,0x53,0x11,0x11,0x10,0x00,
0x00,0x00,0x00,0x01,0x35,0x83,0x33,0x35,0x13,0x35,0x83,0x35,0x83,0x33,0x38,0x51,0x00,
0x00,0x00,0x00,0x00,0x18,0x53,0x11,0x18,0x53,0x38,0x51,0x11,0x13,0x33,0x35,0x83,0x10,
0x00,0x00,0x00,0x00,0x01,0x11,0x00,0x01,0x11,0x11,0x10,0x00,0x01,0x11,0x11,0x11,0x00};
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
/////////Kangaroo mouse 38 x 36
const byte kangaroomouse[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x05,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x51,0x00,0x00,0x15,0x55,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x1e,0x51,0x00,0x01,0x55,0xee,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x05,0x5e,0x51,0x00,0x15,0xee,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0xee,0x51,0x01,0x5e,0xee,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0xee,0x51,0x01,0xee,0xee,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0xe5,0x51,0x15,0xe5,0xee,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0xe5,0x51,0x1e,0x5e,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x51,0x51,0x51,0xee,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x15,0x11,0x1e,0x51,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x15,0x11,0x55,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x51,0x51,0x01,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x11,0x15,0x5c,0x11,0x15,0x55,0x51,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0x51,0x55,0x15,0x52,0xc5,0x55,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x12,0x15,0x12,0x15,0x51,0x55,0x1c,0x55,0x55,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x12,0x1c,0x12,0x15,0x55,0x15,0x5c,0x55,0x55,0xc1,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0xcc,0x51,0x15,0xc5,0x51,0xc5,0x55,0x55,0x55,0x10,0x00,0x51,0x11,0x50,0x00,
0x00,0x00,0x00,0x01,0xc5,0x55,0x15,0x5c,0x1c,0xc5,0x55,0x55,0x5c,0x10,0x01,0x51,0x11,0x51,0x00,
0x00,0x00,0x01,0x15,0x55,0xce,0x5c,0xc1,0xcc,0xc5,0x55,0x55,0x55,0x10,0x15,0x4c,0xcc,0xcc,0x10,
0x00,0x11,0x15,0x55,0xc1,0xe1,0x51,0x1c,0xcc,0xcc,0xc5,0xc5,0x55,0x11,0x55,0xcc,0x11,0x11,0x10,
0x00,0x15,0x5c,0x51,0x1e,0x15,0xe5,0x51,0x11,0x11,0xc5,0xcc,0x55,0xc1,0x5c,0x51,0x00,0x00,0x00,
0x00,0x15,0x51,0x10,0x01,0xe1,0x55,0x16,0x66,0x66,0x1c,0x51,0xc5,0xc1,0xcc,0x10,0x00,0x00,0x00,
0x00,0x01,0x10,0x00,0x15,0x15,0x51,0x66,0x66,0x66,0x61,0x55,0x15,0xc1,0xc5,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0xc5,0x51,0x66,0x66,0x66,0x61,0xc5,0x1c,0xc1,0x51,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x15,0x15,0x1e,0x16,0x66,0x66,0x6e,0x15,0xcc,0x11,0x11,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x15,0x15,0x1c,0xe1,0x66,0x66,0x66,0x61,0xcc,0x1c,0xc1,0xc1,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x15,0x1c,0x51,0x1e,0x16,0x66,0x66,0xce,0xc1,0xcc,0x15,0xcc,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x15,0x51,0xc5,0x11,0x66,0x66,0x66,0x11,0x15,0xcc,0x15,0xcc,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x5c,0x1c,0x51,0x66,0x66,0x66,0x51,0x5c,0xc1,0x55,0xcc,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x55,0x1c,0x51,0x16,0x66,0x66,0x11,0x15,0xcc,0x15,0xcc,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0xc1,0xc5,0x16,0x66,0x66,0x51,0x5c,0xc1,0x55,0xcc,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x11,0x15,0x11,0x66,0x66,0x62,0x1c,0xc1,0x1e,0xe5,0x51,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x1e,0xee,0x55,0x11,0x11,0x11,0x11,0x11,0x15,0x55,0x11,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0xee,0xe1,0x11,0x00,0x00,0x00,0x00,0x01,0x11,0x5e,0xee,0xe1,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x11,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x00,0x00,0x00,0x00};
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////  Laza tiger  44 x 32

const byte lazatiger[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x11,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0xe5,0x10,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x11,0x51,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x15,0xe1,0x00,0xe5,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1e,0x5e,0x10,0x00,0x13,0x10,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xe5,0x11,0x00,0x00,0x01,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x51,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x10,0x00,0x01,0xe1,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x55,0x51,0x10,0x01,0x51,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x11,0x15,0x35,0x53,0x11,0x11,0xe1,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x15,0x13,0x11,0x13,0x55,0x53,0x55,0x35,0x15,0x11,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x55,0x15,0x35,0x55,0x35,0x11,0x15,0x53,0x55,0x11,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x10,0x00,0x00,0x13,0x15,0x15,0x53,0x15,0x53,0x15,0x51,0x55,0x15,0x51,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0xc1,0x00,0x01,0x55,0x51,0xc1,0x55,0x35,0x51,0x35,0x11,0x31,0x55,0x31,0x10,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0xc1,0x11,0x15,0x31,0x11,0xc1,0x55,0x11,0x55,0x13,0x55,0x51,0x51,0x51,0x01,0x00,0x00,0x00,0x00,
0x00,0x01,0x11,0x11,0x17,0x16,0x17,0x11,0x11,0x11,0x51,0x35,0x51,0x15,0x51,0x35,0x51,0x11,0x00,0x00,0x00,0x00,
0x00,0x01,0x55,0x11,0x71,0x11,0x11,0x71,0x1e,0xe1,0x55,0x51,0x51,0x53,0x11,0x15,0x51,0xee,0x10,0x00,0x00,0x00,
0x00,0x00,0x15,0x17,0x11,0x17,0x11,0x17,0x15,0x15,0x15,0x11,0x31,0x51,0xe1,0x51,0x35,0x5e,0x10,0x00,0x00,0x00,
0x00,0x00,0x11,0x17,0x1e,0x17,0x1e,0x17,0x51,0x11,0x55,0x15,0x55,0x11,0x1e,0x13,0x51,0x5e,0x10,0x00,0x00,0x00,
0x00,0x01,0x51,0x51,0x51,0x1e,0x11,0x51,0x51,0xe1,0x15,0x51,0x55,0x35,0x51,0x01,0x11,0x5e,0x10,0x00,0x00,0x00,
0x00,0x01,0x5c,0x15,0x22,0x11,0x12,0x25,0x1c,0x11,0x11,0x55,0x51,0x55,0x31,0x00,0x01,0xee,0x10,0x00,0x00,0x00,
0x00,0x15,0x1c,0x15,0x22,0x51,0x52,0x25,0x1c,0x1e,0x15,0x51,0x35,0x13,0x51,0x01,0x11,0xe1,0x10,0x00,0x00,0x00,
0x00,0x15,0xcc,0xc1,0x55,0x15,0x15,0x51,0xcc,0xce,0x11,0x35,0x51,0x3e,0x10,0x15,0x15,0x1e,0xe1,0x00,0x00,0x00,
0x00,0x11,0x55,0x1e,0x11,0xec,0xe1,0x1e,0x15,0xe1,0x55,0x11,0x13,0x1e,0x10,0x11,0x11,0x1e,0x11,0x00,0x00,0x00,
0x00,0x11,0x51,0xce,0xe1,0x11,0x11,0xee,0xc1,0xe1,0x51,0x00,0x15,0x5e,0x10,0x00,0x11,0x11,0x10,0x00,0x00,0x00,
0x00,0x13,0x11,0xee,0x15,0x1c,0x15,0x1e,0xe1,0x11,0x00,0x01,0x5e,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x35,0x11,0xe1,0x1e,0x11,0x1e,0x11,0xe1,0x00,0x00,0x01,0x5e,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x13,0x51,0x51,0xe1,0x11,0xee,0xe1,0x11,0xe1,0x00,0x00,0x11,0xee,0xe1,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x55,0x13,0x1e,0x1e,0x11,0x1e,0x1e,0x10,0x00,0x11,0xee,0x1e,0x1e,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x15,0x35,0x10,0x1e,0xee,0xee,0x10,0x00,0x01,0xe1,0x31,0x1e,0x1e,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x53,0x51,0x10,0x01,0xee,0xe1,0x00,0x00,0x01,0x11,0x61,0x5e,0x1e,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x31,0x55,0x10,0x00,0x1e,0x10,0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0xe5,0xe1,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0xee,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x11,0xee,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x11,0xee,0xee,0xe1,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0xee,0x11,0xe1,0x1e,0xe1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x11,0xee,0x1e,0xe1,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x51,0x1e,0x1e,0x11,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x11,0x5e,0x1e,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x11,0x01,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////Sandworm 24 x 24
const byte sandworm[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x27,0x72,0x11,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x27,0x77,0x77,0x77,0x50,0x00,
0x00,0x00,0x00,0x00,0x01,0x12,0x27,0x11,0xe1,0x17,0x70,0x00,
0x00,0x00,0x00,0x00,0x00,0x22,0x7e,0x11,0xe1,0x11,0x17,0x00,
0x00,0x00,0x00,0x00,0x01,0x22,0x71,0xe1,0x11,0xee,0x75,0x00,
0x00,0x00,0x00,0x00,0x11,0x27,0x11,0x11,0x11,0x11,0x17,0x20,
0x00,0x00,0x00,0x00,0x02,0x22,0x71,0x1e,0x11,0x11,0x75,0x00,
0x00,0x00,0x00,0x00,0x01,0x21,0x77,0x1e,0xe1,0xe1,0x72,0x00,
0x00,0x00,0x00,0x00,0x02,0x22,0x57,0x77,0x77,0xe7,0x20,0x00,
0x00,0x00,0x00,0x00,0x01,0x25,0x11,0x57,0x22,0x21,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x22,0x55,0x51,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x15,0x11,0x11,0x10,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x12,0x55,0x55,0x50,0x00,0x00,0x00,
0x00,0x00,0x00,0x50,0x00,0x01,0x51,0x11,0x11,0x00,0x00,0x00,
0x00,0x00,0x11,0x51,0x11,0x02,0x25,0x55,0x50,0x00,0x00,0x00,
0x00,0x01,0x55,0x55,0x12,0x12,0x25,0x11,0x11,0x00,0x00,0x00,
0x00,0x55,0x52,0x22,0x21,0x22,0x25,0x55,0x55,0x00,0x00,0x00,
0x01,0x12,0x22,0x11,0x12,0x22,0x25,0x11,0x11,0x00,0x00,0x00,
0x00,0x12,0x22,0x22,0x22,0x12,0x25,0x55,0x55,0x10,0x00,0x00,
0x00,0x55,0x21,0x22,0x22,0x22,0x51,0x11,0x12,0x21,0x15,0x10,
0x00,0x15,0x55,0x52,0x22,0x25,0x55,0x55,0x22,0x25,0x55,0x10,
0x08,0x88,0x88,0x55,0x58,0x82,0x28,0x82,0x22,0x25,0x88,0x00,
0x00,0x08,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x00,0x00};
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////



#endif
