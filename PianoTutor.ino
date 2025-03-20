// Array de notas
String notas[] = {
  "do", "do", "sol", "sol", "la", "la", "sol",
  "fa", "fa", "mi", "mi", "re", "re", "do",
  "sol", "sol", "fa", "fa", "mi", "mi", "re",
  "sol", "sol", "fa", "fa", "mi", "mi", "re",
  "do", "do", "sol", "sol", "la", "la", "sol",
  "fa", "fa", "mi", "mi", "re", "re", "do"
};

int count = 0;

//definindo botoes
int botao1 = 2;
int botao2 = 3;
int botao3 = 4;
int botao4 = 5;
int botao5 = 6;
int botao6 = 7;
int botao7 = 8;
int botao8 = 9;

// definindo leds
int led1 = 11;
int led2 = 12;
int led3 = 13;
int led4 = A0;
int led5 = A1;
int led6 = A2;
int led7 = A3;
int led8 = A4;

int buzzer = 10;

void setup(){
  // ligando botoes
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
  pinMode(botao4, INPUT);
  pinMode(botao5, INPUT);
  pinMode(botao6, INPUT);
  pinMode(botao7, INPUT);
  pinMode(botao8, INPUT);
  
  // ligando leds
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  
  // apagando os leds
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  
  pinMode(buzzer, OUTPUT);
}

void loop(){
  
  if(count <= sizeof(notas)/sizeof(notas[0])){
    
    if (notas[count] == "do") {
      digitalWrite(led1, HIGH);
    } else if (notas[count] == "re") {
      digitalWrite(led2, HIGH);
    } else if (notas[count] == "mi") {
      digitalWrite(led3, HIGH);
    } else if (notas[count] == "fa") {
      digitalWrite(led4, HIGH);
    } else if (notas[count] == "sol") {
      digitalWrite(led5, HIGH);
    } else if (notas[count] == "la") {
      digitalWrite(led6, HIGH);
    } else if (notas[count] == "si") {
      digitalWrite(led7, HIGH);
    } else if (notas[count] == "do") {
      digitalWrite(led8, HIGH);
    }
    
    int v1 = digitalRead(botao1);
    int v2 = digitalRead(botao2);
    int v3 = digitalRead(botao3);
    int v4 = digitalRead(botao4);
    int v5 = digitalRead(botao5);
    int v6 = digitalRead(botao6);
    int v7 = digitalRead(botao7);
    int v8 = digitalRead(botao8);

    if(v1 == 1 && notas[count] == "do"){
      tone(buzzer, 261, 200);
      digitalWrite(led1, LOW);
      digitalWrite(led8, LOW);
      count++;
    }

    if(v2 == 1 && notas[count] == "re"){
      tone(buzzer, 293, 200);
      digitalWrite(led2, LOW);
      count++;
    }

    if(v3 == 1 && notas[count] == "mi"){
      tone(buzzer, 329, 200);
      digitalWrite(led3, LOW);
      count++;
    }

    if(v4 == 1 && notas[count] == "fa"){
      tone(buzzer, 349, 200);
      digitalWrite(led4, LOW);
      count++;
    }

    if(v5 == 1 && notas[count] == "sol"){
      tone(buzzer, 392, 200);
      digitalWrite(led5, LOW);
      count++;
    }

    if(v6 == 1 && notas[count] == "la"){
      tone(buzzer, 440, 200);
      digitalWrite(led6, LOW);
      count++;
    }

    if(v7 == 1 && notas[count] == "si"){
      tone(buzzer, 495, 200);
      digitalWrite(led7, LOW);
      count++;
    }

    if(v8 == 1 && notas[count] == "do"){
      tone(buzzer, 528, 200);
      digitalWrite(led8, LOW);
      digitalWrite(led1, LOW);
      count++;
    }

    delay(100);
    
  }
}
