
 
int phosensor = A5; 




void setup() {


    pinMode(phosensor, INPUT);

    
}

void loop() {

 int lightlevel = analogRead(phosensor); 
    
    
   
     
    
    
        if (lightlevel > 1) Particle.publish("LightIs", "turnedOn", PRIVATE);
        
        
        if (lightlevel < 1) Particle.publish("LightIs", "turnedOff", PRIVATE);
    
    
    delay(1000);


}