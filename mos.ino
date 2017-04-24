

int SW[]={493,523,587,659,698,784,880,988,1046,1175,1318,1397,1568,1760,1976,2092};


int k;  

char *mos[]={
  ".-" ,"-..." , "-.-." , "-.." , "." , "..-." , "--." , "...." , "..",     
  ".---" , "-.-" , ".-.." , "--" , "-." , "---" , ".--." , "--.-" , ".-." ,
  "..." , "-" , "..-" , "...-" , ".--" , "-..-" , "-.--" , "--.."
  };
char *son;

void setup() {
   Serial.begin(9600);
  pinMode(12,OUTPUT);

}
void loop() {
char s;
String ss;
int num,i;
if(Serial.available())
 {
  s = Serial.read();
  if(s >='A' && s <='Z')
    {
      num = s -'A';
      son = mos[num];
      while(*son!='\0')
      {
        if(*son=='.')
         {
            tone(12,440,100)  ;
            delay(100);
          }
       else
       {
            tone(12,440,300);
            delay(300);
        }
        son++;
        delay(100);
      }//while
      delay(300);  //字母間隔
      
      
      }//小IF
  if(s == ' ')
  {
    delay(700);
    }
  

  
  }
   

}
