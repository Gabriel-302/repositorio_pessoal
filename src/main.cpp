#include <Arduino.h>

char primeiroNomeExplicito[8] = {'G', 'a', 'b', 'r', 'i', 'e', 'l'};
char primeiroNomeImplicito[8] = {'G', 'a', 'b', 'r', 'i', 'e', 'l', '\0'};

char palavra[10] = "OLA MUNDO";
char palavra2[10] = {'O', 'L', 'A', ' ', 'M', 'U', 'N', 'D', 'O'};

String nomeCompleto = "Gabriel";
//String sobrenome = " Bocchino";

void setup() 
{
  //quando é uma operação a concatenação irá funcionar no setup, no loop ou em outras funções.
  //nomeCompleto = nomeCompleto + " Bocchino";

  Serial.begin(9600);
  Serial.println();

  Serial.println(palavra);
  Serial.println(palavra2);

  strcpy(palavra, "SENAI"); //copia byte a byte a palavra

  Serial.println(palavra);

  //a função strcmp analisa a ordem lexica das palavras
  if(strcmp(palavra, "SENAI") == 0)
  {
    Serial.println("São Iguais");
  }

  else if(strcmp(palavra, "SENAI") > 0)
  {
    Serial.println("A Segunda palavra vem antes da primeira palavra em ordem lexica");
  }
  
  else // < 0
  {
    Serial.println("A Primeira palavra vem antes da segunda palavra em ordem lexica");
  }

  if(strncmp(palavra2, "OLA", 3) == 0)
  {
    Serial.println("As primeiras letras da palavra são iguais");
  }

  if(strstr(palavra2, "MUNDO"))
  {
    Serial.println("Palavra MUNDO detectada");
  }

  Serial.print("A string tem ");
  Serial.print(strlen(palavra2));
  Serial.println(" letras");

  strchr(palavra2, 'M'); //retorna a posicao que se encontra a primeira ocorrencia do caracter

  Serial.println(strchr(palavra2, 'M'));

  strcpy(palavra, "45");

  //palavra[0] - 48 * 10 + palavra[1] - 48
  int numeroRecebido = atoi(palavra); //ASCII TO INT
  Serial.println(numeroRecebido * 2); //90

  char fraseComposta[30];
  strcpy(fraseComposta, palavra2);
  strcat(fraseComposta, palavra);
  Serial.println(fraseComposta); //OLA MUNDO45

  //!----------------------String------------------------- 

  String palavra3 = "HOJE EH QUINTA!";

  Serial.println(palavra3.length());
  Serial.println(palavra3.charAt(8)); //HOJE EH (Q)UINTA!

  Serial.println(palavra3.indexOf('Q')); //8
  Serial.println(palavra3.substring(8, 14)); //QUINTA

  Serial.println(palavra3.lastIndexOf('E')); //5
  Serial.println(palavra3.indexOf('E')); //3

  if(palavra3.equals("HOJE EH SEXTA"))
  {
    Serial.println("Hoje é sexta!!!");
  }
  else
  {
    Serial.println("Hoje não é sexta ಥ_ಥ");
  }

  if(palavra3.equalsIgnoreCase("hoje eh quinta!"))
  {
    Serial.println("Sim, hoje ainda é quinta feira");
  }

  if(palavra3.startsWith("HOJE"))
  {
    Serial.println("a string começa com a palavra HOJE");
  }

  if(palavra3.endsWith("INTA!"))
  {
    Serial.println("a string termina com INTA!");
  }

  String valor = "123";

  int valorNumerico = valor.toInt();
  Serial.println(valorNumerico * 10);

  //*exemplo: tranforme o numero do texto em valor numerico e multiplique por 2

String mensagem = "valor = 32.45";

int tamanhoString = mensagem.length();
if(mensagem.startsWith("valor = "))
{
  String extracao = mensagem.substring(8, tamanhoString);
  Serial.println(extracao);

  float numeroConvertido = extracao.toFloat();
  Serial.println(numeroConvertido * 2);
}

  //! Continuando

  palavra3.toLowerCase();
  Serial.println(palavra3);

  palavra3.toUpperCase();
  Serial.println(palavra3);

  String textoLed = "Led = ON";
  textoLed.replace("ON", "OFF");

  Serial.println(textoLed);

  String novaFrase = "texto          ";
  Serial.println(novaFrase);

  if(novaFrase.equals("texto"))
  {
    Serial.println("Sao iguais");
  }

  else
  {
    Serial.println("nao sao iguais");
  }

  novaFrase.trim(); //Remove espaços e \n \r \t do fim do texto

  if(novaFrase.equals("texto"))
  {
    Serial.println("Sao iguais");
  }

  else
  {
    Serial.println("nao sao iguais");
  }

  novaFrase.concat(" final");
  Serial.println(novaFrase);

  novaFrase = novaFrase + " do final";
  Serial.println(novaFrase);

  const char * vetorCaracteres = novaFrase.c_str();
  Serial.println(vetorCaracteres);

  // Serial.println(primeiroNomeExplicito);
  // Serial.println(primeiroNomeImplicito);
  // Serial.println(nomeCompleto);

  //int tamanhoDaPalavra = nomeCompleto.length();

  //Serial.println(tamanhoDaPalavra);

  //charAt retorna o valor da respectiva posição escolhida
  //char primeiraLetra = nomeCompleto.charAt(0);

  //Serial.println(primeiraLetra);

  //acessa atravéz do colchete a respectiva posição da minha String
  //Serial.println(nomeCompleto[0]);

  //String nomeCurso = "Desenvolvimento de Sistemas";

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

  //String textoDigitado = "";

  //if(textoDigitado.length() == 0)
  //{
    //Serial.println("Texto vazio");
  //}
  //else
  //{
    //Serial.println("Ha texto");
  //}

  // * -> indica ponteiro, ou seja, guarda o endereço de memoria de um valor fixo ou de uma variavel
  //const char* conversaoStringEmC = nomeCompleto.c_str();
  //Serial.println(conversaoStringEmC[2]);

  //const char* cidade = "Sao Paulo";
  //Serial.println(cidade);

  //int tamanhoCidade = strlen(cidade);

  //Serial.println(tamanhoCidade);
}

void loop() 
{

}