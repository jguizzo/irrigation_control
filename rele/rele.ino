 // Modulo Relee
 // Conectamos el modulo de la siguiente forma:
 // GND -> GND
 // VDD -> 5V
 // IN -> D2
 // Por ejemplo conectamos a la entrada Digital 2
 // http://arubia45.blogspot.com.es/
 const int myRelee = 26 ; // Declaramos la salida del relee
 // LOW encendido HIGH apagado
 
 void setup(){
 pinMode(myRelee, OUTPUT);
 Serial.begin(9600);
 } 
 
 void loop(){
 digitalWrite(myRelee, HIGH);
 Serial.println("Relee apagado");
 delay (2000);
 digitalWrite(myRelee, LOW);
 Serial.println("Relee encendido");
 delay (2000);
 } 
