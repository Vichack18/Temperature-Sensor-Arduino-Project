#include <OneWire.h>  // aca tomamos datos de una cierta forma //
#include <DallasTemperature.h> // y aca convertimos esos datos en temperatura, es decir, //
// sirve para como es que se evaluan y como se leen esos datos //

 OneWire sensor (A2);
 DallasTemperature s (&sensor); // ponemos s en vez de sensor para que no entren en conflicto los lugares de //
 // memoria del arduino, es decir, para que no se pisen //
 // Ahi lo que hacemos es guardar todo lo que tome la v. sensor, sea leido por la libreria D.T y lo guarde en s //
 // Esto tmb es una union entre las dos librerias //

void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);
 s.being (); // Aca habilitamos una comunicacion entre el arduino y el microprocesador del termometro //

}

void loop() {
  // put your main code here, to run repeatedly:
 s.requestTemperatures (); // Habilitamos una parte exclusiva de las librerias, lo que hace es //
 // empezar a leer lo que dan los sensores y lo empiece a tomar como temp //
 // Ahora queremos que el arduino muestre la temperatura //
// ponemos s. en un principio para que la funcion le pida al sensor s que muestre la temp que esta leyendo //
// y luego nos la muestra a traves del monitor serial ( funcion: Serial.println...)

 Serial.println (s.getTempCByIndex (0)); // ponemos (0) pq es nuestro sensor numero cero, el unico que //
 // estamnos evaluando // 

}
