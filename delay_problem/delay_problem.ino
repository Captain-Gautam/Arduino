//Multitasking in Arduino using millis() function:

int previousmillis1 = 0;
int previousmillis2 = 0;
long interval1 = 10000; //for 10sec
long interval2 = 5000; //for 5sec

void fun1()
{
  int currentmillis1 = millis();
  
  if (currentmillis1 - previousmillis1 >= interval1)
    {
      Serial.println("Hello World 1!");
      previousmillis1=currentmillis1;
      //Serial.print(previousmillis1);
    }
}

void fun2()
{
  int currentmillis2 = millis();
  
  if (currentmillis2 - previousmillis2 >= interval2)
    {
      Serial.println("Hello World 2!");
      previousmillis2=currentmillis2;
    }
}


void setup()
{
  Serial.begin(9600); 
}

void loop()
{
  fun1();
  fun2();
}
