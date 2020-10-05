//programa para calcular média
//Aluno: Luan Fernando Duarte Guimarães
#include <iostream>
#include <string>
using std::string;
using std::getline;

using namespace std;

int main(void) {
  int n1, n2, n3, n4;
  
  printf("Digite o nome do aluno: ");
  string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;
 

 printf("Digite a primeira nota: ");
 scanf("%d", &n1);
 
 printf("Digite a segunda nota: ");
 scanf("%d", &n2);
 
 printf("Digite a terceira nota: ");
 scanf("%d", &n3);
 
 printf("Digite a quarta nota: ");
 scanf("%d", &n4);

 int media = (n1 +n2 +n3 +n4) / 4;

 if (media >= 7){
   printf("O aluno %string foi aprovado", fullName);
 }
  else{
    printf("O aluno %c foi reprovado", fullName);
  }
  printf("a media do aluno é: %d", media);
  return(0);
}
