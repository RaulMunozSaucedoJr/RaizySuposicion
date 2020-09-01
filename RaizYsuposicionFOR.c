

//Bibliotecas
#include<stdio.h>
#include <math.h>
#include <windows.h>

//Inicia el programa.
main()
{ //Abre le main.
	
	//Se declaran las variable tipo float.
	  float Resultado;
      float datoRandom,datoSuposicion,variableRandom; 
      
      printf(" \n"); //Salto de Linea
      puts("Ingresar el numero a evaluar en la raiz cuadrada"); //Se le pide al usuario ingresar el valor que desea evaluar en la raiz cuadrada
      printf(" \n"); //Salto de Linea
	  scanf("%f",&datoRandom); //Aqui se guarda el valor de la variable dataRandom.
      printf(" \n"); //Salto de Linea
	  puts("Ingrese su suposicion del resultado"); ////Se le pide al usuario ingresar el aproximado de la raiz cuadrada
      printf(" \n"); //Salto de Linea
	  scanf("%f",&datoSuposicion); //Aqui se guarda el numero a aproximar en la variable datoSuposicion/
      for(;Resultado >= 0.00001;) //Iniciamos el FOR
      { //Inicia el for.
	  variableRandom = (datoRandom / datoSuposicion+datoSuposicion)/2 ;   //Formula para calcular el resultado de la raiz cuadrada a partir de la suposici�n 
      Resultado= variableRandom-datoSuposicion; //Hacemos la resta, para comparaparla con la condicion en FOR
      Resultado= fabs(Resultado);    //El resultado lo ponemos en valor apsoluto
      datoSuposicion=variableRandom;   //Asignamos el valor a otra variabla para poder seguir con el siclo sin problemas
      } //Termina el for.
      printf ("El resultado correcto es: %.3f \n"  , variableRandom);  // Imprimimos en pantalla el resultado correcto de la raiz cuadrada
      
            system("pause"); //Damos una pausa al programa para poder ver los datos en pantalla
            
      } //Termina el programa.
