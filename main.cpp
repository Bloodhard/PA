//programa para calcular média
//Aluno: Luan Fernando Duarte Guimarães
#include <iostream>
#include <string>
using std::string;
using std::getline;

using namespace std;

int main(void) {
  int n1, n2, n3, n4;
  char nome[200], sobrenome[200];
 
 printf("Digite o nome do aluno: ");
 scanf("%s", nome);
 
 printf("Digite o sobrenome do aluno: ");
 scanf("%s", sobrenome);
 
 printf("Digite a primeira nota: ");
 scanf("%d", &n1);
 
 printf("Digite a segunda nota: ");
 scanf("%d", &n2);
 
 printf("Digite a terceira nota: ");
 scanf("%d", &n3);
 
 printf("Digite a quarta nota: ");
 scanf("%d", &n4);

 int media = (n1 +n2 +n3 +n4) / 4;
 
 printf("\na media do aluno %s %s é: %d",nome,sobrenome, media);
 if (media >= 7){
   printf("\nO aluno %s %s ,foi aprovado",nome,sobrenome);
 }
  else{
    printf("\nO aluno %s %s ,foi reprovado",nome,sobrenome);
  }
  return(0);
}