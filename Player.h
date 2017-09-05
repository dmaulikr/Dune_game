#ifndef _player_H_
#define _player_H_

#include "world.h"
#include "Variables.h"

int animTransition;
int room = 1;   ///////starting room 
int co_ords = 1;

//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
///////////////////////////////Player/////////////////////////////////////////
////////////////////////////Paul Atreades/////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulfront[] = {
0x00,0x00,0x03,0x37,0x73,0x30,0x00,0x00,
0x00,0x00,0x37,0x33,0x33,0x73,0x00,0x00,
0x00,0x03,0x73,0x37,0x73,0x37,0x30,0x00,
0x00,0x73,0x76,0x63,0x36,0x67,0x37,0x00,
0x00,0x37,0x66,0x66,0x66,0x66,0x73,0x00,
0x01,0x63,0x63,0x36,0x63,0x36,0x36,0x10,
0x01,0x66,0x66,0x26,0x62,0x66,0x66,0x10,
0x00,0x11,0x66,0x26,0x62,0x66,0x11,0x00,
0x00,0x11,0x16,0x66,0x66,0x61,0x11,0x00,
0x01,0x66,0x11,0x66,0x66,0x11,0x66,0x10,
0x01,0x66,0x11,0x11,0x11,0x11,0x66,0x10,
0x00,0x11,0x12,0x21,0x12,0x21,0x11,0x00,
0x00,0x01,0x51,0x15,0x51,0x15,0x10,0x00,
0x00,0x01,0x52,0x21,0x12,0x25,0x10,0x00,
0x00,0x00,0x22,0x10,0x01,0x22,0x00,0x00,
0x00,0x00,0x11,0x10,0x01,0x11,0x00,0x00};
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulfrontw[] = {
0x00,0x00,0x03,0x37,0x73,0x30,0x00,0x00,
0x00,0x00,0x37,0x33,0x33,0x73,0x00,0x00,
0x00,0x03,0x73,0x37,0x73,0x37,0x30,0x00,
0x00,0x73,0x76,0x63,0x36,0x67,0x37,0x00,
0x00,0x37,0x66,0x66,0x66,0x66,0x73,0x00,
0x01,0x63,0x63,0x36,0x63,0x36,0x36,0x10,
0x01,0x66,0x66,0x26,0x62,0x66,0x66,0x10,
0x00,0x11,0x66,0x26,0x62,0x66,0x11,0x10,  
0x00,0x11,0x16,0x66,0x66,0x61,0x16,0x10,  
0x00,0x16,0x61,0x66,0x66,0x11,0x11,0x00,  
0x16,0x61,0x11,0x11,0x44,0x11,0x11,0x00,   
0x00,0x01,0x12,0x21,0x21,0x15,0x10,0x00,   
0x00,0x00,0x11,0x10,0x12,0x25,0x10,0x00,   
0x00,0x00,0x11,0x10,0x12,0x25,0x10,0x00,   
0x00,0x00,0x00,0x00,0x01,0x22,0x00,0x00,  
0x00,0x00,0x00,0x00,0x00,0x11,0x00,0x00};  
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulleft[] = {
0x00,0x00,0x03,0x36,0x33,0x63,0x00,0x00,    
0x00,0x07,0x33,0x73,0x37,0x37,0x30,0x00,     
0x00,0x73,0x37,0x33,0x73,0x33,0x73,0x00,     
0x00,0x33,0x33,0x37,0x33,0x37,0x33,0x00,    
0x00,0x01,0x66,0x63,0x33,0x73,0x37,0x00,     
0x00,0x01,0x63,0x66,0x37,0x33,0x73,0x00,     
0x00,0x01,0x62,0x66,0x36,0x67,0x30,0x00,     
0x00,0x01,0x66,0x66,0x66,0x67,0x00,0x00,     
0x00,0x00,0x10,0x66,0x66,0x11,0x00,0x00,    
0x00,0x00,0x00,0x11,0x11,0x11,0x00,0x00,    
0x00,0x00,0x00,0x44,0x66,0x10,0x00,0x00,     
0x00,0x00,0x00,0x11,0x66,0x10,0x00,0x00,     
0x00,0x00,0x01,0x25,0x11,0x10,0x00,0x00,     
0x00,0x00,0x01,0x25,0x55,0x10,0x00,0x00,    
0x00,0x00,0x00,0x12,0x21,0x00,0x00,0x00,    
0x00,0x00,0x00,0x01,0x11,0x00,0x00,0x00};
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulleftw[] = {
0x00,0x00,0x03,0x37,0x33,0x37,0x00,0x00,           
0x00,0x07,0x33,0x73,0x33,0x73,0x30,0x00,           
0x00,0x73,0x37,0x33,0x37,0x33,0x73,0x00,           
0x00,0x33,0x33,0x33,0x73,0x37,0x33,0x00,          
0x00,0x01,0x66,0x63,0x33,0x73,0x37,0x00,           
0x00,0x01,0x63,0x66,0x37,0x33,0x37,0x00,           
0x00,0x01,0x62,0x66,0x36,0x63,0x30,0x00,           
0x00,0x01,0x66,0x66,0x66,0x60,0x00,0x00,           
0x00,0x00,0x16,0x66,0x61,0x10,0x00,0x00,           
0x00,0x00,0x01,0x44,0x11,0x10,0x00,0x00,           
0x00,0x01,0x11,0x11,0x16,0x61,0x10,0x00,           
0x00,0x12,0x21,0x55,0x16,0x61,0x21,0x00,           
0x00,0x12,0x25,0x11,0x11,0x12,0x21,0x00,           
0x00,0x01,0x22,0x10,0x00,0x22,0x21,0x00,           
0x00,0x01,0x22,0x20,0x01,0x22,0x20,0x00,           
0x00,0x00,0x11,0x00,0x00,0x11,0x10,0x00};  
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulrear[] = {
0x00,0x00,0x03,0x73,0x37,0x30,0x00,0x00,
0x00,0x00,0x37,0x33,0x33,0x37,0x00,0x00,
0x00,0x03,0x33,0x73,0x37,0x33,0x30,0x00,
0x00,0x73,0x37,0x37,0x73,0x73,0x33,0x00,
0x00,0x33,0x73,0x33,0x33,0x37,0x33,0x00,
0x01,0x67,0x33,0x73,0x37,0x33,0x76,0x01,
0x01,0x66,0x37,0x33,0x33,0x73,0x66,0x10,
0x00,0x11,0x66,0x37,0x73,0x66,0x11,0x00,
0x00,0x11,0x16,0x66,0x66,0x61,0x11,0x00,
0x01,0x66,0x12,0x21,0x12,0x21,0x66,0x10,
0x01,0x61,0x11,0x12,0x21,0x11,0x16,0x10,
0x00,0x11,0x12,0x21,0x12,0x21,0x11,0x00,
0x00,0x01,0x51,0x12,0x21,0x15,0x10,0x00,
0x00,0x01,0x52,0x21,0x12,0x25,0x10,0x00,
0x00,0x00,0x22,0x10,0x01,0x22,0x00,0x00,
0x00,0x00,0x11,0x10,0x01,0x11,0x00,0x00};
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulrearw[] = {
0x00,0x00,0x03,0x73,0x37,0x30,0x00,0x00,
0x00,0x00,0x37,0x33,0x33,0x37,0x00,0x00,
0x00,0x03,0x33,0x73,0x37,0x33,0x30,0x00,
0x00,0x73,0x37,0x37,0x73,0x73,0x33,0x00,
0x00,0x33,0x73,0x33,0x33,0x37,0x33,0x00,
0x01,0x67,0x33,0x73,0x37,0x33,0x76,0x01,
0x01,0x66,0x37,0x33,0x33,0x73,0x66,0x10,
0x00,0x11,0x66,0x37,0x73,0x66,0x11,0x00,   
0x00,0x11,0x11,0x66,0x66,0x61,0x16,0x10,  
0x01,0x66,0x12,0x21,0x12,0x21,0x66,0x10,   
0x01,0x66,0x11,0x12,0x21,0x11,0x10,0x00,   
0x00,0x11,0x22,0x11,0x11,0x15,0x10,0x00,   
0x00,0x02,0x22,0x10,0x12,0x25,0x10,0x00,   
0x00,0x01,0x11,0x00,0x01,0x11,0x00,0x00,   
0x00,0x00,0x00,0x00,0x02,0x21,0x00,0x00,   
0x00,0x00,0x00,0x00,0x01,0x10,0x00,0x00};  
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulright[] = {
0x00,0x00,0x36,0x33,0x63,0x30,0x00,0x00,
0x00,0x03,0x73,0x73,0x37,0x33,0x70,0x00,
0x00,0x37,0x33,0x37,0x33,0x73,0x37,0x00,
0x00,0x33,0x73,0x33,0x73,0x33,0x33,0x00,
0x00,0x73,0x37,0x33,0x36,0x66,0x10,0x00,
0x00,0x37,0x33,0x73,0x66,0x36,0x10,0x00,
0x00,0x03,0x76,0x63,0x66,0x26,0x10,0x00,
0x00,0x00,0x76,0x66,0x66,0x66,0x10,0x00,
0x00,0x00,0x11,0x66,0x66,0x01,0x00,0x00,
0x00,0x00,0x11,0x11,0x11,0x00,0x00,0x00,
0x00,0x00,0x01,0x66,0x22,0x00,0x00,0x00,
0x00,0x00,0x01,0x66,0x11,0x00,0x00,0x00,
0x00,0x00,0x01,0x11,0x52,0x10,0x00,0x00,
0x00,0x00,0x01,0x55,0x52,0x10,0x00,0x00,
0x00,0x00,0x00,0x12,0x21,0x00,0x00,0x00,
0x00,0x00,0x00,0x11,0x10,0x00,0x00,0x00};
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
const byte paulrightw[] = {
0x00,0x00,0x73,0x33,0x73,0x30,0x00,0x00,
0x00,0x03,0x37,0x33,0x37,0x33,0x70,0x00,
0x00,0x37,0x33,0x73,0x33,0x73,0x37,0x00,
0x00,0x33,0x73,0x37,0x33,0x33,0x33,0x00,
0x00,0x73,0x37,0x33,0x36,0x66,0x10,0x00,
0x00,0x73,0x33,0x73,0x66,0x36,0x10,0x00,
0x00,0x03,0x36,0x63,0x66,0x26,0x10,0x00,
0x00,0x00,0x06,0x66,0x66,0x66,0x10,0x00,
0x00,0x00,0x01,0x16,0x66,0x61,0x00,0x00,
0x00,0x00,0x01,0x11,0x22,0x10,0x00,0x00,
0x00,0x01,0x16,0x61,0x11,0x11,0x10,0x00,
0x00,0x12,0x16,0x61,0x55,0x12,0x21,0x00,
0x00,0x12,0x21,0x11,0x11,0x52,0x21,0x00,
0x00,0x12,0x22,0x00,0x01,0x22,0x10,0x00,
0x00,0x02,0x22,0x10,0x02,0x22,0x10,0x00,
0x00,0x01,0x11,0x00,0x00,0x11,0x00,0x00};
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////Button assignments//////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
//////dpad + select buttons
const int buttonUp = 33; //up button
Bounce ButtonUp = Bounce(buttonUp, 10);  // 10 ms debounce
const int buttonDown = 38; //down_button
Bounce ButtonDown = Bounce(buttonDown, 10);  // 10 ms debounce
const int buttonLeft = 35; //left button
Bounce ButtonLeft = Bounce(buttonLeft, 10);  // 10 ms debounce
const int buttonRight = 17; //right button
Bounce ButtonRight = Bounce(buttonRight, 10);  // 10 ms debounce
const int buttonS = 21; //select button
Bounce ButtonS = Bounce(buttonS, 10);  // 10 ms debounce

//////action + start buttons
const int buttonX = 32; // X button up
Bounce ButtonX = Bounce(buttonX, 10);  // 10 ms debounce
const int buttonY = 26; // Y button left
Bounce ButtonY = Bounce(buttonY, 10);  // 10 ms debounce
const int buttonA = 21; // A button right
Bounce ButtonA = Bounce(buttonA, 10);  // 10 ms debounce
const int buttonB = 28; // B buttun down
Bounce ButtonB = Bounce(buttonB, 10);  // 10 ms debounce
const int buttonT = 4; // Start button
Bounce ButtonT = Bounce(buttonT, 10);  // 10 ms debounce

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// Camera offset
int cameraX = -1014;  /////starting position X 0f camera on tilemap 
int cameraY = -1136;  /////starting position Y of camera on tilemap

// Camera speed in pixels per update
int cameraXSpeed = 3;
int cameraYSpeed = 3;

// Camera offset boundaries
int cameraXMin = -2080;   /////// -320 0f total tilemap pixels x right >>>>
int cameraXMax = 0;
int cameraYMin = -2144;   /////// -256 0f total tilemap pixels y down VVVV
int cameraYMax = 0;

 int player_x = 122;     //player position on screen x
 int player_y = 188;     //player position on screen y
 int player_direction = 2;
// int x=-0,y=0;

// Player offset boundaries allows camera to scroll when player moves to boundary 
int playerXMin = 80;    //////// do not change if resolution of tft is 320x240
int playerXMax = 240;    
int playerYMin = 80;
int playerYMax = 160;
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
extern GrafxT3 tft;

bool checkcolision(void);
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////Loop////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
void drawplayer() {

///////////////////////////////////////////////////////////////////////////////
////////////////////////////////camera controls////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
// Clamp cameraX
if(cameraX < cameraXMin)
{
  cameraX = cameraXMin;
}
else if(cameraX > cameraXMax)
{
   cameraX = cameraXMax;
}

// Clamp cameraY
if(cameraY < cameraYMin)
{
  cameraY = cameraYMin;
}
else if(cameraY > cameraYMax)
{
   cameraY = cameraYMax;  
}

// Check if player is beyond X boundary
if(player_x < playerXMin)
{
  cameraX += cameraXSpeed;
  if(cameraX > cameraXMin && cameraX < cameraXMax)
  {
    player_x = playerXMin;
  }
}
else if(player_x > playerXMax)
{
  cameraX -= cameraXSpeed;
  if(cameraX > cameraXMin && cameraX < cameraXMax)
  {
    player_x = playerXMax;
  }
}

// Check if player is beyond Y boundary
if(player_y < playerYMin)
{
  cameraY += cameraYSpeed;
  if(cameraY > cameraYMin && cameraY < cameraYMax)
  {
    player_y = playerYMin;
  }
}
else if(player_y > playerYMax)
{
  cameraY -= cameraYSpeed;
  if(cameraY > cameraYMin && cameraY < cameraYMax)
  {
    player_y = playerYMax;
  }
}
//////////////////////////////////////////////////////////////////////////////
///////////////////////////////Palette////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 palette[0] = 0;
       palette[1] = BLACK;
             palette[2] = BLUE;
                   palette[3] = BROWN;
                         palette[4] = DARKGREEN;
                              palette[5] = GREY;
                                    palette[6] = PINK;
                                          palette[7] = RED;
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////                                                
                                           palette[8] = BEIGE;
                                     palette[9] = GREEN;
                               palette[a]= DARKGREY;
                         palette[b] = LIGHTGREY;
                   palette[c] = YELLOW; 
             palette[d] = PURPLE; 
       palette[e] = WHITE;
 palette[f] = ORANGE;

///////////////////////////////////////////////////////////////////////////////
///////////////////////////////Tilemap/////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
/////// top center rock formation
      if(room == 1){
  tft.drawTilemap(cameraX, cameraY, dunewtopcenter, spritesheet, palette);}
 else if(room == 2){
  tft.drawTilemap(cameraX, cameraY, dungeon1l1, spritesheet, palette);}
 else if(room == 3){
  tft.drawTilemap(cameraX, cameraY, dungeon1l2, spritesheet, palette);}
 else if(room == 4){
  tft.drawTilemap(cameraX, cameraY, dungeon1l3, spritesheet, palette);}
 else if(room == 5){
  tft.drawTilemap(cameraX, cameraY, dungeon2l1, spritesheet, palette);}
 else if(room == 6){
  tft.drawTilemap(cameraX, cameraY, dungeon2l2, spritesheet, palette);}
 else if(room == 7){
  tft.drawTilemap(cameraX, cameraY, dungeon2l3, spritesheet, palette);}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////seitch village1  
 else if(room == 8){
  tft.drawTilemap(cameraX, cameraY, seitchv1, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitchv1a, spritesheet, palette);}  
 else if(room == 9){
  tft.drawTilemap(cameraX, cameraY, seitch1r1l1, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r1l1a, spritesheet, palette);}
 else if(room == 10){
  tft.drawTilemap(cameraX, cameraY, seitch1r1l2, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r1l2a, spritesheet, palette);}
 else if(room == 11){
  tft.drawTilemap(cameraX, cameraY, seitch1r2, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r2a, spritesheet, palette);}
 else if(room == 12){
  tft.drawTilemap(cameraX, cameraY, seitch1r3, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r3a, spritesheet, palette);}
 else if(room == 13){
  tft.drawTilemap(cameraX, cameraY, seitch1r4shop, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r4shopa, spritesheet, palette);}
 else if(room == 14){
  tft.drawTilemap(cameraX, cameraY, seitch1r5, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r5a, spritesheet, palette);}
 else if(room == 15){
  tft.drawTilemap(cameraX, cameraY, seitch1r6, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r6a, spritesheet, palette);}
 else if(room == 16){
  tft.drawTilemap(cameraX, cameraY, seitch1r7, spritesheet, palette); 
  tft.drawTilemap(cameraX, cameraY, seitch1r7a, spritesheet, palette);} 
 else if(room == 17){
  tft.drawTilemap(cameraX, cameraY, seitch1r8, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r8a, spritesheet, palette);}
 else if(room == 18){
  tft.drawTilemap(cameraX, cameraY, seitch1r91011, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r91011a, spritesheet, palette);}
 else if(room == 19){
  tft.drawTilemap(cameraX, cameraY, seitch1r1213, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r1213a, spritesheet, palette);}
 else if(room == 20){
  tft.drawTilemap(cameraX, cameraY, seitch1r14, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch1r14a, spritesheet, palette);}
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
/////////////seitch village2
 else if(room == 21){
  tft.drawTilemap(cameraX, cameraY, seitchv2, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitchv2a, spritesheet, palette);}
 else if(room == 22){
  tft.drawTilemap(cameraX, cameraY, seitch2r1shop, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r1shopa, spritesheet, palette);}
 else if(room == 23){
  tft.drawTilemap(cameraX, cameraY, seitch2r2, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r2a, spritesheet, palette);}
 else if(room == 24){
  tft.drawTilemap(cameraX, cameraY, seitch2r3, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r3a, spritesheet, palette);}
 else if(room == 25){
  tft.drawTilemap(cameraX, cameraY, seitch2r4, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r4a, spritesheet, palette);}
 else if(room == 26){
  tft.drawTilemap(cameraX, cameraY, seitch2r5, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r5a, spritesheet, palette);}
 else if(room == 27){
  tft.drawTilemap(cameraX, cameraY, seitch2r6, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r6a, spritesheet, palette);}
 else if(room == 28){
  tft.drawTilemap(cameraX, cameraY, seitch2r78, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r78a, spritesheet, palette);}
 else if(room == 29){
  tft.drawTilemap(cameraX, cameraY, seitch2r910, spritesheet, palette);
  tft.drawTilemap(cameraX, cameraY, seitch2r910a, spritesheet, palette);}
  
///////////////////////////////////////////////////////////////////////////////
///////////////////////////Buttons Repeat//////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////  
       if (ButtonUp.update());
               if (ButtonDown.update());
                       if (ButtonLeft.update());
                             if (ButtonRight.update());
                                       if (ButtonA.update());
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
                                       ButtonUp.rebounce(10);
                               ButtonDown.rebounce(10);
                       ButtonLeft.rebounce(10);
            ButtonRight.rebounce(10);
     ButtonA.rebounce(10);
///////////////////////////////////////////////////////////////////////////////
////////////////////////////Up/////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
 if (ButtonUp.fallingEdge()){
     tft.writeRectNBPP(player_x, player_y,16,16,4,paulrearw,palette);
      tft.writeRectNBPP(player_x, player_y,16,16,4,paulrear,palette);
     player_direction = 1;
     player_y -= 4;
     if(checkcolision())
     {
      player_y += 4;} 
     }
     if(player_y <= 16){
        player_y = 16;}
//////////////////////////////////////////////////////////////////////////////
///////////////////////////////Down///////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 if (ButtonDown.fallingEdge()){
   tft.writeRectNBPP(player_x, player_y,16,16,4,paulfrontw,palette);
    tft.writeRectNBPP(player_x, player_y,16,16,4,paulfront,palette);
   player_direction = 2;
   player_y += 4;
    if(checkcolision())
    {
    player_y -=4;}
    }
    if(player_y >= 224){
       player_y = 224;}
//////////////////////////////////////////////////////////////////////////////
//////////////////////////Left////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
 if (ButtonLeft.fallingEdge()){
   tft.writeRectNBPP(player_x, player_y,16,16,4,paulleftw,palette);
    tft.writeRectNBPP(player_x, player_y,16,16,4,paulleft,palette);
   player_direction = 3;
   player_x -= 4;
   if(checkcolision())
   {
      player_x += 4;}  
   }
   if(player_x >= 304){
      player_x = 304;}
/////////////////////////////////////////////////////////////////////////////
////////////////////////////Right////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
if (ButtonRight.fallingEdge()){
  tft.writeRectNBPP(player_x, player_y,16,16,4,paulrightw,palette);
  tft.writeRectNBPP(player_x, player_y,16,16,4,paulright,palette);
  player_direction = 4;
  player_x += 4;
  if(checkcolision())
  {
    player_x -= 4;}
  }
            if(player_x <= 16){
              player_x = 16;}
///////////////////////////////////////////////////////////////////////////////     
//////////////////////////////PLAYER DIRECTION/////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
if (player_direction == 1){
  tft.writeRectNBPP(player_x, player_y,16,16,4,paulrear,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player_direction == 2){
   tft.writeRectNBPP(player_x, player_y,16,16,4,paulfront,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player_direction == 3){
    tft.writeRectNBPP(player_x, player_y,16,16,4,paulleft,palette);
}
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
else if (player_direction == 4){
     tft.writeRectNBPP(player_x, player_y,16,16,4,paulright,palette);
        }
 //       tft.updatePopup();
//        tft.updateScreen(); 
};     
/////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////collision/////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
bool checkcolision(void) // Transformed it into a function 
{
  for(uint16_t i=0; i < tft.numcolision + 1; i++)
  {
    if(tft.collideRectRect(player_x, player_y,16,16,tft.solid[i].x,tft.solid[i].y,16,16))
    {
        if(tft.solid[i].spritecol == bedtop)return true;
   else if(tft.solid[i].spritecol == bedbot)return true;
   else if(tft.solid[i].spritecol == bones11)return true;
   else if(tft.solid[i].spritecol == bones12)return true;
   else if(tft.solid[i].spritecol == bones13)return true;
   else if(tft.solid[i].spritecol == bones21)return true; 
   else if(tft.solid[i].spritecol == bones22)return true;
   else if(tft.solid[i].spritecol == bones23)return true;
   else if(tft.solid[i].spritecol == bookstop )return true;
   else if(tft.solid[i].spritecol == booksbot)return true; 
   else if(tft.solid[i].spritecol == cabtop)return true;
   else if(tft.solid[i].spritecol == cabbot)return true;
   else if(tft.solid[i].spritecol == cactus)return true;
   else if(tft.solid[i].spritecol == chimneytop)return true;
   else if(tft.solid[i].spritecol == chimneybot)return true;
   else if(tft.solid[i].spritecol == couchtop)return true;
   else if(tft.solid[i].spritecol == couchbot)return true;
   else if(tft.solid[i].spritecol == dish11)return true;
   else if(tft.solid[i].spritecol == dish12)return true;
   else if(tft.solid[i].spritecol == dish13)return true;
   else if(tft.solid[i].spritecol == dish21)return true;
   else if(tft.solid[i].spritecol == dish22)return true;
   else if(tft.solid[i].spritecol == dish23)return true;
   else if(tft.solid[i].spritecol == dish31)return true;
   else if(tft.solid[i].spritecol == dish32)return true;
   else if(tft.solid[i].spritecol == dish33)return true;
   else if(tft.solid[i].spritecol == dishv2)return true;
   else if(tft.solid[i].spritecol == machine1t)return true;
   else if(tft.solid[i].spritecol == machine1b)return true; 
   else if(tft.solid[i].spritecol == machine2t)return true;
   else if(tft.solid[i].spritecol == machine2b)return true;
   else if(tft.solid[i].spritecol == machine3t)return true;
   else if(tft.solid[i].spritecol == machine3b)return true;
   else if(tft.solid[i].spritecol == machine4t)return true;
   else if(tft.solid[i].spritecol == machine4b)return true;
   else if(tft.solid[i].spritecol == machine511)return true;
   else if(tft.solid[i].spritecol == machine512)return true;
   else if(tft.solid[i].spritecol == machine513)return true;
   else if(tft.solid[i].spritecol == machine521)return true;
   else if(tft.solid[i].spritecol == machine522)return true; 
   else if(tft.solid[i].spritecol == machine523)return true;
   else if(tft.solid[i].spritecol == machine531)return true;
   else if(tft.solid[i].spritecol == machine532)return true; 
   else if(tft.solid[i].spritecol == machine533)return true;
   else if(tft.solid[i].spritecol == machine611)return true;
   else if(tft.solid[i].spritecol == machine612)return true; 
   else if(tft.solid[i].spritecol == machine613)return true;
   else if(tft.solid[i].spritecol == machine621)return true;
   else if(tft.solid[i].spritecol == machine622)return true;
   else if(tft.solid[i].spritecol == machine623)return true;
   else if(tft.solid[i].spritecol == machine631)return true;
   else if(tft.solid[i].spritecol == machine632)return true;
   else if(tft.solid[i].spritecol == machine633)return true;
   else if(tft.solid[i].spritecol == mart)return true; 
   else if(tft.solid[i].spritecol == palmtl)return true;
   else if(tft.solid[i].spritecol == palmtr)return true;
   else if(tft.solid[i].spritecol == palmbl)return true;
   else if(tft.solid[i].spritecol == palmbr)return true;
   else if(tft.solid[i].spritecol == pot)return true;
   else if(tft.solid[i].spritecol == printerl)return true;
   else if(tft.solid[i].spritecol == printerr)return true;
   else if(tft.solid[i].spritecol == ptreetop)return true;
   else if(tft.solid[i].spritecol == ptreebot)return true;
   else if(tft.solid[i].spritecol == rocktopcap)return true;
   else if(tft.solid[i].spritecol == rockbotcap)return true;
   else if(tft.solid[i].spritecol == rockleftcap)return true;
   else if(tft.solid[i].spritecol == rockrightcap)return true;
   else if(tft.solid[i].spritecol == rockcornertl)return true;
   else if(tft.solid[i].spritecol == rockcornertr)return true;
   else if(tft.solid[i].spritecol == rockcornerbl)return true;
   else if(tft.solid[i].spritecol == rockcornerbr)return true;
   else if(tft.solid[i].spritecol == rockcornersharptl)return true;
   else if(tft.solid[i].spritecol == rockcornersharptr)return true;
   else if(tft.solid[i].spritecol == rockcornersharpbl)return true;
   else if(tft.solid[i].spritecol == rockcornersharpbr)return true;
   else if(tft.solid[i].spritecol == rockendl)return true;
   else if(tft.solid[i].spritecol == rockendr)return true;
   else if(tft.solid[i].spritecol == rockwalllc)return true;
   else if(tft.solid[i].spritecol == rockwallrc)return true;
   else if(tft.solid[i].spritecol == rockwall){tft.popup(F(" ""Rock"" "),3); return true;}
   else if(tft.solid[i].spritecol == stonewall)return true;
   else if(tft.solid[i].spritecol == tablel)return true;
   else if(tft.solid[i].spritecol == tabler)return true;
   else if(tft.solid[i].spritecol == tablesm)return true;
   else if(tft.solid[i].spritecol == tank11 )return true;
   else if(tft.solid[i].spritecol == tank12)return true;
   else if(tft.solid[i].spritecol == tank21)return true;
   else if(tft.solid[i].spritecol == tank22)return true;
   else if(tft.solid[i].spritecol == tank31)return true;
   else if(tft.solid[i].spritecol == tank32)return true;
   else if(tft.solid[i].spritecol == tomb)return true;
   else if(tft.solid[i].spritecol == water)return true;
//////////////////////////////////////////////////////////////////////////////////////////// 
////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Action Tiles/////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////// top center rock formation
 else if(tft.solid[i].spritecol == areaexitw1)return true;
 else if(tft.solid[i].spritecol == areaexits1)return true;
 else if(tft.solid[i].spritecol == areaexite1)return true;
 else if((tft.solid[i].spritecol == cave1) && room == 1){room = 2; player_x = 96; player_y = 188;  cameraX = 0; cameraY = -480; cameraYMin = -480; cameraXMin = -0;}
 else if((tft.solid[i].spritecol == exit1) && room == 2){room = 1; player_x = 160; player_y = 176; cameraX = -928; cameraY = -1728; cameraXMin = -2080; cameraYMin = -2144; cameraXMax = -0; cameraYMax = -0;} 
 else if((tft.solid[i].spritecol == stairsl1) && room == 2){room = 3; player_x = 256;  player_y = 172; cameraX = 0; cameraY = -480; cameraYMin = -480; cameraXMin = -0;}
 else if((tft.solid[i].spritecol == stepsleft1) && room == 3){room = 2; player_x = 256; player_y = 80; cameraX = 0; cameraY = 0; cameraYMin = -480; cameraXMin = -0;}
 else if((tft.solid[i].spritecol == stairsl2) && room == 3){room = 4; player_x = 160; player_y = 256; cameraX = -0; cameraY = -64; cameraYMin = -192; cameraXMin = -80; cameraXMax = -0; cameraYMax = 0;} 
 else if((tft.solid[i].spritecol == stepsleft2) && room == 4){room = 3; player_x = 288; player_y = 96; cameraX = 0; cameraY = 0; cameraYMin = -480; cameraXMin = -0;}
 else if((tft.solid[i].spritecol == exit2) && room == 4){room = 1; player_x = 128; player_y = 204; cameraX = -944; cameraY = -1504; cameraXMin = -2080; cameraYMin = -2144; cameraXMax = 0; cameraYMax = 0;}
 else if((tft.solid[i].spritecol == cave2) && room == 1){room = 4; player_x = 288; player_y = 176; cameraX = -48; cameraY = -192; cameraYMin = -192; cameraXMin = -80; cameraXMax = -0; cameraYMax =0;}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 else if((tft.solid[i].spritecol == cave3) && room == 1){room = 5; player_x = 128; player_y = 188;  cameraX = -16; cameraY = -480; cameraYMin = -480; cameraXMin = -80;}
 else if((tft.solid[i].spritecol == exit3) && room == 5){room = 1;  player_x = 128; player_y = 204; cameraX = -1120; cameraY = -1280; cameraXMin = -2080; cameraYMin = -2144; cameraXMax = 0; cameraYMax = 0;} 
 else if((tft.solid[i].spritecol == stairsl3) && room == 5){room = 6; player_x = 216; player_y = 80; cameraX = -0; cameraY = -0; cameraYMin = -192; cameraXMin = -80; cameraXMax = -0; cameraYMax =0;}
 else if((tft.solid[i].spritecol == stepsleft3) && room == 6){room = 5;  player_x = 256; player_y = 64; cameraX = -80; cameraY = -0; cameraYMin = -192; cameraXMin = -80;}
 else if((tft.solid[i].spritecol == stairsl4) && room == 6){room = 7; player_x = 288; player_y = 185; cameraX = -0; cameraY = -192; cameraYMin = -192; cameraXMin = -80; cameraXMax = -0; cameraYMax = 0;} 
 else if((tft.solid[i].spritecol == stepsleft4) && room == 7){room = 6; player_x = 288; player_y = 176; cameraX = -0; cameraY = -64; cameraYMin = -192; cameraXMin = -80; cameraXMax = -0; cameraYMax = 0;} 
 else if((tft.solid[i].spritecol == stairsl5) && room == 7){room = 1; player_x = 288; player_y = 176; cameraX = -848; cameraY = -1312; cameraXMin = -2080; cameraYMin = -2144; cameraXMax = -0; cameraYMax = -0;} 
 else if((tft.solid[i].spritecol == stepsleft5) && room == 1){room = 7; player_x = 128; player_y = 80; cameraX = -0; cameraY = -0; cameraYMin = -192; cameraXMin = -80; cameraXMax = -0; cameraYMax = 0;} 
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////seitch village 1
 else if((tft.solid[i].spritecol == seitch1) && room == 1){room = 8; player_x = 160; player_y = 188; cameraX = -320; cameraY = -592; cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == exit4) && room == 8){room = 1;  player_x = 128; player_y = 188; cameraX = -864; cameraY = -832;  cameraXMin = -2080; cameraYMin = -2144; cameraXMax = -0; cameraYMax = -0;} 
 else if((tft.solid[i].spritecol == cave4) && room == 8){room = 9; player_x = 160; player_y = 188; cameraX = -0; cameraY = -160; cameraYMin = -161; cameraXMin = -80;}
 else if((tft.solid[i].spritecol == exit5) && room == 9){room = 8;  player_x = 112; player_y = 188; cameraX = -368; cameraY = -480; cameraYMin = -720; cameraXMin = -640;}
 else if((tft.solid[i].spritecol == stepsleft6) && room == 9){room = 10; player_x = 256; player_y = 188; cameraX = -320; cameraY = -0; cameraXMin = -320; cameraYMin = -400;}
 else if((tft.solid[i].spritecol == stairsl6) && room == 10){room = 9; player_x = 272; player_y = 80; cameraX = -80; cameraY = -0;  cameraYMin = -240; cameraXMin = -80;}
 else if((tft.solid[i].spritecol == cave5) && room == 8){room = 11; player_x = 160; player_y = 188; cameraX = -128; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit6) && room == 11){room = 8; player_x = 160; player_y = 140; cameraX = -32; cameraY = -783;  cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave6) && room == 8){room = 12; player_x = 224; player_y = 188; cameraX = -192; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit7) && room == 12){room = 8; player_x = 128; player_y = 124; cameraX = -560; cameraY = -736;  cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave7) && room == 8){room = 13; player_x = 208; player_y = 188; cameraX = -16; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}  ///////fix room cant see back wall for the registers
 else if((tft.solid[i].spritecol == exit8) && room == 13){room = 8; player_x = 161; player_y = 132; cameraX = -624; cameraY = -768;  cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave8) && room == 8){room = 14; player_x = 160; player_y = 188; cameraX = -160; cameraY = -240; cameraYMin = -240; cameraXMin = -160;} 
 else if((tft.solid[i].spritecol == exit9) && room == 14){room = 8; player_x = 112; player_y = 140; cameraX = -0; cameraY = -422;  cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave9) && room == 8){room = 15; player_x = 192; player_y = 188; cameraX = -160; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit10) && room == 15){room = 8; player_x = 192; player_y = 140; cameraX = -0; cameraY = -422;  cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave10)&& room == 8){room = 16; player_x = 208; player_y = 188; cameraX = -16; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit11) && room == 16){room = 8; player_x = 160; player_y = 140; cameraX = -608; cameraY = -416; cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave11)&& room == 8){room = 17; player_x = 208; player_y = 188; cameraX = -160; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit12) && room == 17){room = 8; player_x = 128; player_y = 140; cameraX = -0; cameraY = -112;  cameraYMin = -720; cameraXMin = -640;}
 else if((tft.solid[i].spritecol == cave12)&& room == 8){room = 18; player_x = 192; player_y = 188; cameraX = -112; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit13) && room == 18){room = 8; player_x = 208; player_y = 188; cameraX = -112; cameraY = -176; cameraYMin = -720; cameraXMin = -640;}   
 else if((tft.solid[i].spritecol == stairsl7) && room == 18){room = 19; player_x = 64; player_y = 112; cameraX = -0; cameraY = -0; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == stepsleft7) && room == 19){room = 18; player_x = 255; player_y = 112; cameraX = -160; cameraY = -0; cameraYMin = -240; cameraXMin = -160;} 
 else if((tft.solid[i].spritecol == exit14) && room == 19){room = 8; player_x = 144; player_y = 188; cameraX = -208; cameraY = -32; cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave13) && room == 8){room = 19; player_x = 192; player_y = 188; cameraX = -160; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == cave14) && room == 8){room = 18; player_x = 176; player_y = 188; cameraX = -640; cameraY = -240; cameraYMin = -240; cameraXMin = -640;}
 else if((tft.solid[i].spritecol == exit15) && room == 18){room = 8; player_x = 176; player_y = 124; cameraX = -351; cameraY = -192; cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave15) && room == 8){room = 18; player_x = 192; player_y = 188; cameraX = -1120; cameraY = -240; cameraYMin = -240, cameraXMin = -1120;}
 else if((tft.solid[i].spritecol == exit16) && room == 18){room = 8; player_x = 160; player_y = 124; cameraX = -448; cameraY = -192; cameraYMin = -720; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == stairsl8) && room == 18){room = 19; player_x = 248; player_y = 100; cameraX = -640; cameraY = -0; cameraYMin = -240; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == stepsleft8) && room == 19){room = 18; player_x = 240; player_y = 92; cameraX = -1120; cameraY = -0; cameraYMin = -240, cameraXMin = -1120;}
 else if((tft.solid[i].spritecol == exit17) && room == 19){room = 8; player_x = 240; player_y = 172; cameraX = -336; cameraY = -32; cameraYMin = -720; cameraXMin = -640;}  
 else if((tft.solid[i].spritecol == cave16) && room == 8){room = 19; player_x = 192; player_y = 160; cameraX = -640; cameraY = -240; cameraYMin = -240; cameraXMin = -640;} 
 else if((tft.solid[i].spritecol == cave17)&& room == 8){room = 20; player_x = 192; player_y = 192; cameraX = -160; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit18) && room == 20){room = 8; player_x = 192; player_y = 144; cameraX = -752; cameraY = -112; cameraYMin = -720; cameraXMin = -640;} 
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
//////seitch village2
 else if((tft.solid[i].spritecol == seitch2) && room == 1){room = 21; player_x = 122; player_y = 188; cameraX = -175; cameraY = -314; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == exit19) && room == 21){room = 1; player_x = 122; player_y = 188; cameraX = -1014; cameraY = -1136; cameraXMin = -2080; cameraYMin = -2144;}
 else if((tft.solid[i].spritecol == cave18) && room == 21){room = 22; player_x = 176; player_y = 188; cameraX = -16; cameraY = -240; cameraYMin = -240; cameraXMin = -160;} 
 else if((tft.solid[i].spritecol == exit20) && room == 22){room = 21; player_x = 152; player_y = 168; cameraX = -64; cameraY = -314; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == cave19) && room == 21){room = 23; player_x = 224; player_y = 188; cameraX = -192; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit21) && room == 23){room = 21; player_x = 68; player_y = 192; cameraX = -0; cameraY = -218; cameraXMin = -238; cameraYMin = -314;} 
 else if((tft.solid[i].spritecol == cave20) && room == 21){room = 24; player_x = 208; player_y = 188; cameraX = -16; cameraY = -240; cameraYMin = -240; cameraXMin = -160;} 
 else if((tft.solid[i].spritecol == exit22) && room == 24){room = 21; player_x = 208; player_y = 196; cameraX = -272; cameraY = -254; cameraXMin = -238; cameraYMin = -314;}  
 else if((tft.solid[i].spritecol == cave21) && room == 21){room = 25; player_x = 224; player_y = 188; cameraX = -192; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit23) && room == 25){room = 21; player_x = 66; player_y = 168; cameraX = -0; cameraY = -21; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == cave22) && room == 21){room = 26; player_x = 176; player_y = 188; cameraX = -192; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit24) && room == 26){room = 21; player_x = 128; player_y = 164; cameraX = -128; cameraY = -64; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == cave23) && room == 21){room = 27; player_x = 208; player_y = 188; cameraX = -16; cameraY = -240; cameraYMin = -240; cameraXMin = -160;}
 else if((tft.solid[i].spritecol == exit25) && room == 27){room = 21; player_x = 256; player_y = 164; cameraX = -240; cameraY = -32; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == cave24) && room == 21){room = 28;  player_x = 176; player_y = 188; cameraX = -144; cameraY =-240;  cameraYMin = -240; cameraXMin = -316;}
 else if((tft.solid[i].spritecol == exit26) && room == 28){room = 21; player_x = 176; player_y = 132; cameraX = -0; cameraY = -64; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == stairsl9) && room == 28){room = 29;  player_x = 240; player_y = 148; cameraX = -160; cameraY = -0; cameraXMin = -160; cameraYMin = -240;} 
 else if((tft.solid[i].spritecol == stepsleft9) && room == 29){room = 28;  player_x = 256; player_y = 52; cameraX = -320; cameraY = -64; cameraXMin = -320; cameraYMin = -240;}
 else if((tft.solid[i].spritecol == exit27) && room == 29){room = 21; player_x = 208; player_y = 80; cameraX = -0; cameraY = -0; cameraXMin = -238; cameraYMin = -314;}
 else if((tft.solid[i].spritecol == cave25) && room == 21){room = 29; player_x = 208; player_y = 188; cameraX = -16; cameraY = -239; cameraYMin = -240; cameraXMin = -160;} 
 else if((tft.solid[i].spritecol == cave26) && room == 21){room = 28; player_x = 176; player_y = 188; cameraX = -729; cameraY = -240; cameraXMin = -952; cameraYMin = -240; cameraXMax = -638;}
 else if((tft.solid[i].spritecol == exit28)&& room == 28){room = 21; player_x = 112; player_y = 132; cameraX = -240; cameraY = -64; cameraYMin = -240; cameraXMin = -240; cameraYMax = -0; cameraXMax = -0;} 
 else if((tft.solid[i].spritecol == stairsl10) && room == 28){room = 29;  player_x = 48; player_y = 144; cameraX = -412; cameraY = -0; cameraXMin = -640; cameraYMin = -240; cameraXMax = -476; cameraYMax = -0;}
 else if((tft.solid[i].spritecol == stepsleft10) && room == 29){room = 28;  player_x = 256; player_y = 52; cameraX = -952; cameraY = -64; cameraXMin = -952; cameraYMin = -240; cameraYMax = -0; cameraXMax = -638;} 
 else if((tft.solid[i].spritecol == exit29) && room == 29){room = 21; player_x = 68; player_y = 88; cameraX = -240; cameraY = -0; cameraXMin = -340; cameraYMin = -314; cameraYMax = -0; cameraXMax = -0;}
 else if((tft.solid[i].spritecol == cave27) && room == 21){room = 28; player_x = 176; player_y = 188; cameraX = -728; cameraY = -236; cameraXMin = -952; cameraYMin = -240; cameraXMax = -638;}
 else if(tft.solid[i].spritecol == register1)return true;
 else if(tft.solid[i].spritecol == register2)return true;
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////row1
// else if ( (tft.solid[i].spritecol == fremenblackf1) && (ButtonA.fallingEdge) ) {tft.drawRoundRect(40, 82, 240, 40, 4, WHITE);}
 else if(tft.solid[i].spritecol == fremenblackf2)return true;
 else if(tft.solid[i].spritecol == fremenblackl1)return true;
 else if(tft.solid[i].spritecol == fremenredre1)return true;
 else if(tft.solid[i].spritecol == fremenbrownre1)return true;
 else if(tft.solid[i].spritecol == fremenfbrownre1)return true;
 else if(tft.solid[i].spritecol == fremenfblondere1)return true;
 else if(tft.solid[i].spritecol == fremenfblonder1)return true;
 else if(tft.solid[i].spritecol == fremenbrownre2)return true;
 else if(tft.solid[i].spritecol == fremenfelderbrownf1)return true;
 //////////////////////////////////////////////////////////////////////////////////////row2
  else if(tft.solid[i].spritecol == stilgarr)return true;
  else if(tft.solid[i].spritecol == fremenblondel1)return true;
  else if(tft.solid[i].spritecol == fremenbrownre3)return true;
  else if(tft.solid[i].spritecol == fremenredre1)return true;
  else if(tft.solid[i].spritecol == fremenfblackre1)return true;
  else if(tft.solid[i].spritecol == fremenelderbrownr1)return true;
  else if(tft.solid[i].spritecol == fremenredf1)return true;
  else if(tft.solid[i].spritecol == fremenbrownf1)return true;
  else if(tft.solid[i].spritecol == fremenblackl2)return true;
  else if(tft.solid[i].spritecol == fremenblackre1)return true;
//////////////////////////////////////////////////////////////////////////////////////row3
 else if(tft.solid[i].spritecol == fremenblondel2)return true;
 else if(tft.solid[i].spritecol == fremenfblondel1)return true;
 else if(tft.solid[i].spritecol == fremenblackr1)return true;
 else if(tft.solid[i].spritecol == fremenbrownre4)return true;
 else if(tft.solid[i].spritecol == fremenredl1)return true;
 else if(tft.solid[i].spritecol == fremenfblackf1)return true;
 else if(tft.solid[i].spritecol == fremenfbrownre2)return true;
 else if(tft.solid[i].spritecol == fremenbrownr1)return true;
 else if(tft.solid[i].spritecol == fremenfblackr2)return true;
 ////////////////////////////////////////////////////////////////////////////////////row4
  else if(tft.solid[i].spritecol == fremenfblackf2)return true;
  else if(tft.solid[i].spritecol == fremenfblondef1)return true;
  else if(tft.solid[i].spritecol == fremenbrownr1)return true;
  else if(tft.solid[i].spritecol == fremenfblondef2)return true;
  else if(tft.solid[i].spritecol == fremenfelderblondere1)return true;
  else if(tft.solid[i].spritecol == fremenfblackre3)return true;
  else if(tft.solid[i].spritecol == fremenbrownf2)return true;
  else if(tft.solid[i].spritecol == fremenfblonder2)return true;
  else if(tft.solid[i].spritecol == fremenblackl3)return true;
  else if(tft.solid[i].spritecol == fremenredr1)return true;
 ////////////////////////////////////////////////////////////////////////////////////row5
 else if(tft.solid[i].spritecol == fremenblondef2)return true;
 else if(tft.solid[i].spritecol == fremenblackre2)return true;
 else if(tft.solid[i].spritecol == fremenfblonder3)return true;
 else if(tft.solid[i].spritecol == fremenblackf3)return true;
 else if(tft.solid[i].spritecol == fremenelderblackf1)return true;
 else if(tft.solid[i].spritecol == fremenfblackr1)return true;
 else if(tft.solid[i].spritecol == fremenfelderbrownl1)return true;
 else if(tft.solid[i].spritecol == fremenbrownf3)return true;
 else if(tft.solid[i].spritecol == fremenfredr1)return true;
 else if(tft.solid[i].spritecol == fremenbrownre5)return true;
/////////////////////////////////////////////////////////////////////////////////////row6
 else if(tft.solid[i].spritecol == fremenblackf4)return true;
 else if(tft.solid[i].spritecol == fremenelderblackf2)return true;
 else if(tft.solid[i].spritecol == fremenredr2)return true;
 else if(tft.solid[i].spritecol == fremenfredf1)return true;
 else if(tft.solid[i].spritecol == fremenblackre3)return true;
 else if(tft.solid[i].spritecol == fremenfblackre4)return true;
 else if(tft.solid[i].spritecol == fremenfbrownf1)return true;
 else if(tft.solid[i].spritecol == fremenblackl4)return true;
 else if(tft.solid[i].spritecol == fremenfblondere2)return true;
 else if(tft.solid[i].spritecol == fremenbrownf4)return true;
 ////////////////////////////////////////////////////////////////////////////////////row7
 else if(tft.solid[i].spritecol == fremenfredr2)return true;
 else if(tft.solid[i].spritecol == fremenbrownre6)return true;
 else if(tft.solid[i].spritecol == fremenblondef1)return true;
 else if(tft.solid[i].spritecol == fremenfblackl1)return true;
 else if(tft.solid[i].spritecol == fremenbrownf5)return true;
 else if(tft.solid[i].spritecol == fremenfelderbrownf2)return true;
 else if(tft.solid[i].spritecol == fremenredr3)return true;
 else if(tft.solid[i].spritecol == fremenblackf5)return true;
 else if(tft.solid[i].spritecol == fremenblackre4)return true;
 else if(tft.solid[i].spritecol == fremenfblackr2)return true;
/////////////////////////////////////////////////////////////////////////////////////row8
 else if(tft.solid[i].spritecol == fremenelderblackf3)return true;
 else if(tft.solid[i].spritecol == fremenfblonder4)return true;
 else if(tft.solid[i].spritecol == fremenfelderredf1)return true;
 else if(tft.solid[i].spritecol == fremenblondef2)return true;
 else if(tft.solid[i].spritecol == fremenfblackre5)return true;
 else if(tft.solid[i].spritecol == fremenbrownr2)return true;
 else if(tft.solid[i].spritecol == fremenfblondere4)return true;
       }
   }
   //tft.updatePopup();
   return false; // Return false if don't touch anything
  }

#endif
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////   
