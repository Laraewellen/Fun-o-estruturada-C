#include <stdio.h>
#include <locale.h>

char nome[30],email[30],tel[9],end[30];

  void cadastrar(){
    printf("Digite seu nome: ");
    fgets(nome,30,stdin);
    
    printf("Digite seu e-mail: ");
    fgets(email,30,stdin);

    printf("Telefone: ");
    fgets(tel,9,stdin);

    printf("Digite seu endereço: ");
    fgets(end,30,stdin);
  }   

  void imprimir(){
    printf("Nome: %s\n E-mail: %s\n Telefone %s\n Endereço: %s\n", nome,email,tel,end);
  }

int main(){
    setlocale(LC_ALL, "");

    cadastrar();

    system("cls");

    imprimir();

    return 0;
}
