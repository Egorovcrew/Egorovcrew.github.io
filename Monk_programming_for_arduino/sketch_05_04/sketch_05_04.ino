// sketch 5-04
char* message[] = {"Hello","Andrew","you","are","an idiot"};
int i=0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 
  Serial.println(message[i]);
  delay(1000);
  i++;
  if (i>4)
  i=0; 
}


