//Definindo as variáveis
#define Sem1Verm 13
#define Sem1Amar 12
#define Sem1Verde 11
#define Sem2Verm 10
#define Sem2Amar 9
#define Sem2Verde 8

void setup() {
//Declarando as saídas
pinMode(Sem1Verm, OUTPUT);
pinMode(Sem1Amar, OUTPUT);
pinMode(Sem1Verde, OUTPUT);
pinMode(Sem2Verm, OUTPUT);
pinMode(Sem2Amar, OUTPUT);
pinMode(Sem2Verde, OUTPUT);
}

void loop() {
//Iniciando sistema de sincronização
digitalWrite(Sem1Verm,HIGH);
digitalWrite(Sem2Verde,HIGH);
delay(1000);

//Teste inicial
if (digitalRead(Sem1Verm) == HIGH)
{
  digitalWrite(Sem2Verde,LOW);
  digitalWrite(Sem2Amar, HIGH);
  delay(1000);
}
if(digitalRead(Sem2Amar) == HIGH)
{
  digitalWrite(Sem1Verm, LOW);
  digitalWrite(Sem1Verde, HIGH);
  digitalWrite(Sem2Amar, LOW);
  digitalWrite(Sem2Verm, HIGH);
  delay(1000);
  }
  if(digitalRead(Sem2Verm) == HIGH);
{
  digitalWrite(Sem1Verde, LOW);
  digitalWrite(Sem1Amar, HIGH);
  delay(1000);
  digitalWrite(Sem1Amar, LOW);
  digitalWrite(Sem2Verm, LOW);
}
}
