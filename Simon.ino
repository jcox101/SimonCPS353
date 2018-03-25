
int LED[] = {2,3,4,5};
int i;
int j;
int randNum[10];
int userinput;
String userstring;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 for(i=0; i<4;i++){
    pinMode(LED[i], OUTPUT);
    digitalWrite(i,LOW);
 }
 randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:
//    for(j=0; j<10; j++)
      randNum[0]=(random(4));

      digitalWrite(LED[randNum[0]],HIGH);

      Serial.println("Enter current color code");
      while(!Serial.available()){}
      userstring=  Serial.readString();

      if(userstring == "Green")
      userinput=0;
      else if(userstring == "Yellow")
      userinput=1;
      else if(userstring =="Blue")
      userinput=2;
      else if(userstring== "Red")
      userinput=3;

     
      if(userinput == randNum[0])
        Serial.println("Correct");
      else
       Serial.println("Incorrect");
      userinput = Serial.read();  //clear input stream
      for(i=0; i<4;i++)
      digitalWrite(LED[i],LOW);
       delay(1000);
     

    
//    digitalWrite(LED[randNum],HIGH);
//    for(i=0; i<4; i++){
//    if(i!=randNum)
//      digitalWrite(LED[i],LOW);
//    }
//    delay(500);
//    for(i=0;i<4;i++)
//    digitalWrite(LED[i],LOW);
//    delay(250);
  
  
}
