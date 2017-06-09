#include<stdio.h>
#include<string.h>

int cont=0,b;
char Num[20],extenso[200];

void vetsize();
void reverse();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();


int main() {
  vetsize();
  int a;
  for(b=cont;b>=0;b--){
    switch (b){

      case 0:one();break;
      case 1:two();break;
      case 2:three();break;
      case 3:four();break;
      case 4:five();break;
      case 5:six();break;
      case 6:seven();break;
      case 7:eight();break;
      case 8:nine();break;
    }
  }
  printf("\n\n%s\n\n", extenso);
}
void vetsize(){
    printf("Digite valor:");
    scanf("%s", &Num);
    cont=strlen(Num);
    reverse(Num);
    if(Num[0]=='0'&&cont<=1){
                 strcat(extenso,"Zero");
                 }
}
void reverse(char data[20]){
  char gusta;
  int ac,bc,calc;
  calc=strlen(data);
  bc=calc;
  for (ac=0;ac<calc/2;ac++){
        bc--;
      gusta=Num[ac];
      Num[ac]=Num[bc];
      Num[bc]=gusta;
 }
}
void one(){
  switch (Num[b]){
    case '1':if(cont>=2)strcat(extenso,"e");strcat(extenso," um ");break;
    case '2':if(cont>=2)strcat(extenso,"e");strcat(extenso," dois ");break;
    case '3':if(cont>=2)strcat(extenso,"e");strcat(extenso," tres ");break;
    case '4':if(cont>=2)strcat(extenso,"e");strcat(extenso," quatro ");break;
    case '5':if(cont>=2)strcat(extenso,"e");strcat(extenso," cinco ");break;
    case '6':if(cont>=2)strcat(extenso,"e");strcat(extenso," seis ");break;
    case '7':if(cont>=2)strcat(extenso,"e");strcat(extenso," sete ");break;
    case '8':if(cont>=2)strcat(extenso,"e");strcat(extenso," oito ");break;
    case '9':if(cont>=2)strcat(extenso,"e");strcat(extenso," nove ");break;
  }
}
void two(){
     if(Num[b]=='1'){
                switch(Num[b-1]){
                          case '0':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," dez ");break;
                          case '1':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," onze ");break;
                          case '2':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," doze ");break;
                          case '3':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," treze ");break;
                          case '4':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," quatorze ");break;
                          case '5':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," quinze ");break;
                          case '6':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," dezesseis ");break;
                          case '7':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," dezessete ");break;
                          case '8':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," dezoito ");break;
                          case '9':b--;if(cont>=3)strcat(extenso,"e");strcat(extenso," dezenove ");break;
                }
     }
     else{
         switch(Num[b]){
                          case '2':if(cont>=3)strcat(extenso,"e");strcat(extenso," vinte ");break;
                          case '3':if(cont>=3)strcat(extenso,"e");strcat(extenso," trinta ");break;
                          case '4':if(cont>=3)strcat(extenso,"e");strcat(extenso," quarenta ");break;
                          case '5':if(cont>=3)strcat(extenso,"e");strcat(extenso," cinquenta ");break;
                          case '6':if(cont>=3)strcat(extenso,"e");strcat(extenso," sessenta ");break;
                          case '7':if(cont>=3)strcat(extenso,"e");strcat(extenso," setenta ");break;
                          case '8':if(cont>=3)strcat(extenso,"e");strcat(extenso," oitenta ");break;
                          case '9':if(cont>=3)strcat(extenso,"e");strcat(extenso," noventa ");break;
                }
         }
}
void three(){
         switch(Num[b]){
                          case '1':if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso," cem "); else strcat(extenso," cento ");break;
                          case '2':strcat(extenso," duzentos ");break;
                          case '3':strcat(extenso," trezentos ");break;
                          case '4':strcat(extenso," quatrocentos ");break;
                          case '5':strcat(extenso," quinhentos ");break;
                          case '6':strcat(extenso," seiscentos ");break;
                          case '7':strcat(extenso," setecentos ");break;
                          case '8':strcat(extenso," oitocentos ");break;
                          case '9':strcat(extenso," novecentos ");break;
                }
}
void four(){
  switch (Num[b]){
    case '1':if(cont>=5)strcat(extenso,"e");strcat(extenso," um mil ");break;
    case '2':if(cont>=5)strcat(extenso,"e");strcat(extenso," dois mil ");break;
    case '3':if(cont>=5)strcat(extenso,"e");strcat(extenso," tres mil ");break;
    case '4':if(cont>=5)strcat(extenso,"e");strcat(extenso," quatro mil ");break;
    case '5':if(cont>=5)strcat(extenso,"e");strcat(extenso," cinco mil ");break;
    case '6':if(cont>=5)strcat(extenso,"e");strcat(extenso," seis mil ");break;
    case '7':if(cont>=5)strcat(extenso,"e");strcat(extenso," sete mil ");break;
    case '8':if(cont>=5)strcat(extenso,"e");strcat(extenso," oito mil ");break;
    case '9':if(cont>=5)strcat(extenso,"e");strcat(extenso," nove mil ");break;
  }
}
void five(){
     if(Num[b-1]=='0'&&Num[b]=='1'){
         switch(Num[b]){
                          case '1':strcat(extenso," dez mil ");break;
            }
      }
      else if(Num[b]=='1'){
                 switch(Num[b-1]){
                           case '0':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," dez mil ");break;
                           case '1':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," onze mil ");break;
                           case '2':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," doze mil ");break;
                           case '3':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," treze mil ");break;
                           case '4':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," quatorze mil ");break;
                           case '5':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," quinze mil ");break;
                           case '6':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," dezesseis mil ");break;
                           case '7':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," dezessete mil ");break;
                           case '8':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," dezoito mil ");break;
                           case '9':b--;if(cont>=6)strcat(extenso,"e");strcat(extenso," dezenove mil ");break;
                 }
      }
      else{
          switch(Num[b]){
                           case '2':if(cont>=7)strcat(extenso,"e");strcat(extenso," vinte mil ");break;
                           case '3':if(cont>=7)strcat(extenso,"e");strcat(extenso," trinta mil ");break;
                           case '4':if(cont>=7)strcat(extenso,"e");strcat(extenso," quarenta mil ");break;
                           case '5':if(cont>=7)strcat(extenso,"e");strcat(extenso," cinquenta mil ");break;
                           case '6':if(cont>=7)strcat(extenso,"e");strcat(extenso," sessenta mil ");break;
                           case '7':if(cont>=7)strcat(extenso,"e");strcat(extenso," setenta mil ");break;
                           case '8':if(cont>=7)strcat(extenso,"e");strcat(extenso," oitenta mil ");break;
                           case '9':if(cont>=7)strcat(extenso,"e");strcat(extenso," noventa mil ");break;
                 }
          }
}
void six(){
         switch(Num[b]){
                          case '1':if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso," cem mil "); else strcat(extenso," cento ");break;
                          case '2':strcat(extenso," duzentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '3':strcat(extenso," trezentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '4':strcat(extenso," quatrocentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '5':strcat(extenso," quinhentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '6':strcat(extenso," seiscentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '7':strcat(extenso," setecentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '8':strcat(extenso," oitocentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                          case '9':strcat(extenso," novecentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"mil ");break;
                }
}
void seven(){
  switch (Num[b]){
    case '1':if(cont>=8)strcat(extenso,"e");strcat(extenso," um milhoes");break;
    case '2':if(cont>=8)strcat(extenso,"e");strcat(extenso," dois milhoes");break;
    case '3':if(cont>=8)strcat(extenso,"e");strcat(extenso," tres milhoes");break;
    case '4':if(cont>=8)strcat(extenso,"e");strcat(extenso," quatro milhoes");break;
    case '5':if(cont>=8)strcat(extenso,"e");strcat(extenso," cinco milhoes");break;
    case '6':if(cont>=8)strcat(extenso,"e");strcat(extenso," seis milhoes");break;
    case '7':if(cont>=8)strcat(extenso,"e");strcat(extenso," sete milhoes");break;
    case '8':if(cont>=8)strcat(extenso,"e");strcat(extenso," oito milhoes");break;
    case '9':if(cont>=8)strcat(extenso,"e");strcat(extenso," nove milhoes");break;
  }
}
void eight(){
     if(Num[b-1]=='0'&&Num[b]=='1'){
         switch(Num[b]){
                          case '1':strcat(extenso," dez mil ");break;
            }
      }
      else if(Num[b]=='1'){
                 switch(Num[b-1]){
                           case '0':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," dez milhoes ");break;
                           case '1':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," onze milhoes ");break;
                           case '2':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," doze milhoes ");break;
                           case '3':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," treze milhoes ");break;
                           case '4':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," quatorze milhoes ");break;
                           case '5':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," quinze milhoes ");break;
                           case '6':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," dezesseis milhoes ");break;
                           case '7':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," dezessete milhoes ");break;
                           case '8':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," dezoito milhoes ");break;
                           case '9':b--;if(cont>=9)strcat(extenso,"e");strcat(extenso," dezenove milhoes ");break;
                 }
      }
      else{
          switch(Num[b]){
                           case '2':if(cont>8)strcat(extenso,"e");strcat(extenso," vinte milhoes ");break;
                           case '3':if(cont>8)strcat(extenso,"e");strcat(extenso," trinta milhoes ");break;
                           case '4':if(cont>8)strcat(extenso,"e");strcat(extenso," quarenta milhoes ");break;
                           case '5':if(cont>8)strcat(extenso,"e");strcat(extenso," cinquenta milhoes ");break;
                           case '6':if(cont>8)strcat(extenso,"e");strcat(extenso," sessenta milhoes ");break;
                           case '7':if(cont>8)strcat(extenso,"e");strcat(extenso," setenta milhoes ");break;
                           case '8':if(cont>8)strcat(extenso,"e");strcat(extenso," oitenta milhoes ");break;
                           case '9':if(cont>8)strcat(extenso,"e");strcat(extenso," noventa milhoes ");break;
                 }
          }
}
void nine(){
         switch(Num[b]){
                          case '1':if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso," cem milhoes "); else strcat(extenso," cento ");break;
                          case '2':strcat(extenso," duzentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '3':strcat(extenso," trezentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '4':strcat(extenso," quatrocentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '5':strcat(extenso," quinhentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '6':strcat(extenso," seiscentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '7':strcat(extenso," setecentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '8':strcat(extenso," oitocentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                          case '9':strcat(extenso," novecentos ");break;if(Num[b-1]=='0'&&Num[b-2]=='0')strcat(extenso,"milhoes ");break;
                }
}
