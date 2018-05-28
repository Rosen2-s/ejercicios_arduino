const int PinLedVerde = 10;
const int PinLedRojo = 9;
const int PinLedAzul = 11;

const int PinEntradaLDR_Rojo= A0;
const int PinEntradaLDR_Verde= A1;
const int PinEntradaLDR_Azul = A2;
  
int ValorSensorRojo = 0;
int ValorSensorVerde = 0;
int ValorSensorAzul = 0;

int ValorRojo = 0;
int ValorVerde = 0;
int ValorAzul = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(PinLedVerde, OUTPUT);
  pinMode(PinLedRojo, OUTPUT);
  pinMode(PinLedAzul, OUTPUT);
}

void loop()
{
  ValorSensorRojo = analogRead(PinEntradaLDR_Rojo);
  delay(5);
  ValorSensorVerde = analogRead(PinEntradaLDR_Verde);
  delay(5);
  ValorSensorAzul = analogRead(PinEntradaLDR_Azul);
  
  Serial.print("Mapa de valores sensores \t Rojo: ");
  Serial.print(ValorSensorRojo);
  Serial.print("\n \t Verde: ");
  Serial.print(ValorSensorVerde);
  Serial.print("n \t Azul: \n");
  Serial.print(ValorSensorAzul);
  delay(250);
  
  ValorRojo = ValorSensorRojo/4;
  ValorVerde = ValorSensorVerde/4;
  ValorRojo = ValorSensorAzul/4;
    
  Serial.print("Mapa de valores de los sensores \t Rojo: ");
  Serial.print(ValorRojo);
  Serial.print("n \t Verde: ");
  Serial.print(ValorVerde);
  Serial.print("n \t Azul: ");
  Serial.print(ValorAzul);
  delay(250);
  
  analogWrite(PinLedRojo, ValorRojo);
  analogWrite(PinLedVerde, ValorVerde);
  analogWrite(PinLedAzul, ValorAzul);
  
}