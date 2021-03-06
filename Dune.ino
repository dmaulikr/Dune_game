/*This is the Main function file for the GameR-Iot Multiple MCU Arduino driven 
 * game system and DIY console. This is a demo game RPG set in the Dune Universe
 * created by Frank Herbert.
 */
#include <GrafxT3.h>
#include <SPIN.h>
#include "SPI.h"
#include <Bounce.h>
#include "Battle.h"
#include "Player.h"
#include "World.h"
#include "Monsters.h"
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#define TFT_DC  9
#define TFT_CS 10
#define TFT_RST 7
#define TFT_SCK 13
#define TFT_MISO 12
#define TFT_MOSI 11
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
uint8_t use_fb = 1;
uint8_t use_clip_rect = 0;
uint8_t use_set_origin = 0;
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
GrafxT3 tft = GrafxT3(TFT_CS, TFT_DC, TFT_RST, TFT_MOSI, TFT_SCK, TFT_MISO, &SPIN);
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////Set-up//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

void setup() {
  while (!Serial && (millis() < 4000)) ;
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(BLACK);
  //tft.setFrameRate(60);
  tft.persistence = false;
   pinMode(buttonUp, INPUT_PULLUP);
   pinMode(buttonDown, INPUT_PULLUP);
   pinMode(buttonLeft, INPUT_PULLUP);
   pinMode(buttonRight, INPUT_PULLUP);
   pinMode(buttonS, INPUT_PULLUP);
   pinMode(buttonX, INPUT_PULLUP);
   pinMode(buttonY, INPUT_PULLUP);
   pinMode(buttonA, INPUT_PULLUP);
   pinMode(buttonB, INPUT_PULLUP);
   pinMode(buttonT, INPUT_PULLUP); 
 
     tft.useFrameBuffer(use_fb);
     uint32_t start_time = millis(); 
 
}

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////Loop////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
void loop(void) {

drawplayer();
///drawbattle(player_x, player_y);
  tft.updateScreen();

}

