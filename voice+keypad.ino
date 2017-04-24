#include <Keypad.h> 

#define KEY_ROWS 4 // 按鍵模組的列數
#define KEY_COLS 4 // 按鍵模組的行數
 
// 依照行、列排列的按鍵字元（二維陣列）
char keymap[KEY_ROWS][KEY_COLS] = 
{
  {'0', '4', '8', 'C'},
  {'1', '5', '9', 'D'},
  {'2', '6', 'A', 'E'},
  {'3', '7', 'B', 'F'}
};
  
byte colPins[KEY_COLS] = {9,8,7,6};	   // 按鍵模組，行1~4接腳。
byte rowPins[KEY_ROWS] = {5,4,3,2}; // 按鍵模組，列1~4接腳。 

Keypad myKeypad = Keypad(makeKeymap(keymap), rowPins, colPins, KEY_ROWS, KEY_COLS);

#define NOTE_    0
#define	NOTE_C4	262
#define	NOTE_D4	294
#define	NOTE_E4	330
#define	NOTE_F4	349
#define	NOTE_G4	392
#define	NOTE_A4	440
#define	NOTE_B4	494
#define	NOTE_C5	523
#define	NOTE_D5	587
#define	NOTE_E5	659
#define	NOTE_F5	698
#define	NOTE_G5	784
#define	NOTE_A5	880
#define	NOTE_B5	988
#define	NOTE_C6	1047
#define	NOTE_D6	1175





int melody[]={NOTE_C4 , NOTE_D4 , NOTE_E4 , NOTE_F4 , NOTE_G4 , NOTE_A4 , NOTE_B4 , NOTE_C5 , NOTE_D5 , NOTE_E5 , NOTE_F5 , NOTE_G5 , NOTE_A5 , NOTE_B5 , NOTE_C6 , NOTE_D6
};

void setup() 
{
pinMode(10, OUTPUT);
}

void loop() 
{
  char key = myKeypad.getKey();


  if(key=='0' || key=='1' || key=='2' || key=='3' || key=='4' || key=='5' || key=='6' || key=='7' || key=='8' || key=='9')
  {
    key=key-'0';
    tone(10,melody[key]);
  }
 else if(key=='A' || key=='B' || key=='C' || key=='D' || key=='E' || key=='F')
   {
    key-=55;
   tone(10,melody[key]);
   }
 
}



