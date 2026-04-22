#include <Arduino.h>

char primeiroNomeExplicito[8] = {'G', 'a', 'b', 'r', 'i', 'e', 'l'};
char primeiroNomeImplicito[8] = {'G', 'a', 'b', 'r', 'i', 'e', 'l', '\0'};

String nomeCompleto = "Gabriel";
//String sobrenome = " Bocchino";

void setup() 
{
  //quando é uma operação a concatenação irá funcionar no setup, no loop ou em outras funções.
  nomeCompleto = nomeCompleto + " Bocchino";

  Serial.begin(9600);
  Serial.println();

  // Serial.println(primeiroNomeExplicito);
  // Serial.println(primeiroNomeImplicito);
  // Serial.println(nomeCompleto);

  int tamanhoDaPalavra = nomeCompleto.length();

  //Serial.println(tamanhoDaPalavra);

  //charAt retorna o valor da respectiva posição escolhida
  //char primeiraLetra = nomeCompleto.charAt(0);

  //Serial.println(primeiraLetra);

  //acessa atravéz do colchete a respectiva posição da minha String
  //Serial.println(nomeCompleto[0]);

  String nomeCurso = "Desenvolvimento de Sistemas";

  //Serial.println(nomeCurso.indexOf("Sistemas"));

  //nomeCurso.replace("Sistemas", "Games");
  //Serial.println(nomeCurso);

  //nomeCurso.toUpperCase(); //transforma tudo em maiusculo
  //Serial.println(nomeCurso);

  //nomeCurso.toLowerCase();
  //Serial.println(nomeCurso);

  //String numeroEmString = "2026";
  //int numeroConvertido = numeroEmString.toInt();
  //Serial.println(numeroConvertido);

  String textoDigitado = "";

  //if(textoDigitado.length() == 0)
  //{
    //Serial.println("Texto vazio");
  //}
  //else
  //{
    //Serial.println("Ha texto");
  //}

  // * -> indica ponteiro, ou seja, guarda o endereço de memoria de um valor fixo ou de uma variavel
  const char* conversaoStringEmC = nomeCompleto.c_str();
  //Serial.println(conversaoStringEmC[2]);

  const char* cidade = "Sao Paulo";
  //Serial.println(cidade);

  int tamanhoCidade = strlen(cidade);

  Serial.println(tamanhoCidade);
}

void loop() 
{

}