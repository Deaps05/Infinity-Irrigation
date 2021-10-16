//
//     Infinity Irrigation 2.0
//   Autor:David Emerson
//   Junho de 2021
// 
//

#include "DHT11/dht.h"
#include "RTC/DS1307.h"
#include "Tela/LiquidCrystal.h"
#include "Servo.h"

#define SERVO 6  //Porta digital PWM 6
#define DHT11 A0 //Porta analogica 0
#define Botao 7 //Porta digital 7  
DS1307 rtc(A4, A5); //Portas analogicas 4 e 5 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Porta digital 12, 11, 5, 4, 3, 2
#define pino_sinal_analogico A2 //Porta Analogica 2

Servo s; //Servo = s
int pos; //Declrando variavel pos (posição)

dht sensor; //dht = sensor
float humidity, temperature; //declarando variaveis humidity (Umidade), temperature (Temperatura)
const float TemperaturaPadrao = 27.00; // Declarando variavel constante da temperatura padrao
const float UmidadePadrao = 40.00; //  Declarando variavel constante da Umidade padrao
const float UmidadeTerraPadrao = 800; //Declarando variavel constante da Umidade da terra padrao

int EstadoBotao; //Declarando variavel estado do botão HIGH, LOW (ON, OFF)

int UmidadeTerra; //Declarando variavel Humidade da terra




void setup(){
  s.attach(SERVO); // Atribui a pin SERVO = 6
  Serial.begin(9600); //Quantidades de BITS
  s.write(0); //Mostra a posição inicial servo 

  lcd.begin(16, 2); //Indentifica tamanho da tela 16 colunas e 2 linhas

  rtc.halt(false);  //*****
  rtc.setDOW(THURSDAY); //Selecione o dia 
  rtc.setTime(21, 5, 20); //Selecione hora (hora, minutos, segundos)
  rtc.setDate(24, 6, 2021); //Selecione data (dia, mes, ano)
  rtc.setSQWRate(SQW_RATE_1); //Quantidade Hz rate
  rtc.enableSQW(true);  //Saida ativada

  pinMode(Botao, INPUT); //Seleciona o pin Botao = 7 como INPUT

  pinMode(pino_sinal_analogico, INPUT); //Seleciona o pin pino_sinal_analogico A2 como INPUT
}

void loop(){
  lcd.clear(); //Limpa a tela
  lcd.setCursor(0, 0); //Mostra a localização da tela 
  lcd.print(rtc.getTimeStr()); //Imprime o relogio na tela
  lcd.setCursor(11, 0); //Mostra a localização da tela 
  lcd.print(temperature); //Imprime a temperatura na tela
  lcd.setCursor(15, 0); //Mostra a localização 
  lcd.print("C"); //ImprIme °c
  lcd.setCursor(11, 1); //Mostra a localização da tela
  lcd.print(humidity); //Imprime a Humidade na tela 
  lcd.setCursor(15, 1); // Mostra a localização
  lcd.print("%"); //Imprime %
  delay(1000); //Aguarda 1000 milisegundos = 1 segundo

  EstadoBotao = digitalRead(Botao); //Faz uma leitura digital do estado do Botao
  sensor.read11(DHT11); //lê a variavel DHT11
  temperature = sensor.temperature; //Lê a temperatura do sensor
  humidity = sensor.humidity; //Lê a temperatura do sensor
  UmidadeTerra = analogRead(pino_sinal_analogico); //Faz uma leitura leitura analógica
 
  if(EstadoBotao == HIGH){ 
  if(UmidadeTerra > UmidadeTerraPadrao{ //Se Umidade da terra for menor que padrão (verdadeiro)
      for(pos = 0; pos < 90; pos++){ //Acionar o Servo Motor
        s.write(pos); //Write mostra a posição e posição = 0
        delay(13000); //Aguardar 13000 milisegundos = 13 segundos 
      }
      
      for(pos = 90; pos > 0; pos--){ //Desativar motor 
        s.write(pos); //Write mostra a posição e posição = 90
        delay(2000); //Aguardar 2000 milissegundos = 2 segundos
      }
  }
      if(UmidadeTerra > UmidadeTerraPadrao){ //Se Umidade da terra for menor que padrão (verdadeiro)
      if(temperature > TemperaturaPadrao && humidity < UmidadePadrao){ //Se temperatura for maior que temperatura padrao e humidade for maior que humidade padrao
          for(pos=0; pos < 90; pos++){  //Acionar o Servo Motor
            s.write(pos); //Write mostra a posição e posição = 0
            delay(13000); //Aguardar 13000 milisegundos = 13 segundos 
          }
          for(pos=90; pos > 0; pos--){ //Desativar motor 
             s.write(pos); //Write mostra a posição e posição = 90
             delay(2000); //Aguardar 2000 milissegundos = 2 segundos
          }
        }
      }
    }
  }
      
    
  if(EstadoBotao == LOW){
    if(UmidadeTerra > UmidadeTerraPadrao){ //Se Umidade da terra for menor que padrão (verdadeiro) 
      for(pos=0; pos < 90; pos++){ //Acionar o Servo Motor
        s.write(pos); //Write mostra a posição e posição = 0
        delay(13000); //Aguardar 13000 milisegundos = 13 segundos 
      }
      for(pos=90; pos < 0; pos--){ //Desativar motor  
        s.write(pos); //Write mostra a posição e posição = 90
        delay(2000); //Aguardar 2000 milissegundos = 2 segundos
      }
    }
  }
}