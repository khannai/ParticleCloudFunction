int redpin = D2;    // RED pin of the LED 
int greenpin = D3;  // GREEN pin of the LED
int bluepin = D4;   // BLUE pin of the LED 

void setup(){
    pinMode(redpin,OUTPUT);
    pinMode(greenpin,OUTPUT);
    pinMode(bluepin,OUTPUT);
    
    digitalWrite(redpin,LOW);
    digitalWrite(greenpin,LOW);
    digitalWrite(bluepin,LOW);
}

int light_system(std::string colour){
    if (colour=="red"){
        digitalWrite(redpin,HIGH);
        digitalWrite(greenpin,HIGH);
        digitalWrite(bluepin,HIGH);
        return 1;
    }
    else if (colour=="green"){
        digitalWrite(redpin,LOW);
        digitalWrite(greenpin,HIGH);
        digitalWrite(bluepin,LOW);
        return 0;
    }
    else if (colour=="blue"){
        digitalWrite(redpin,LOW);
        digitalWrite(greenpin,LOW);
        digitalWrite(bluepin,HIGH);
        return 1;
    }
    else{
        return -1;
    }
}
void loop()
{

}