////////////////////////////PROGRAMA QUE MUESTRA UNA SUMATORIA DE DOS NUMEROS//////////////////////////////////////

#include <iostream>; 
//include Directiva del preprocesador. Permite incluir archivos de cabecera con funciones predefinidas con tareas especificas.
// <iostream> funciones de recibir y mostrar datos input/output

using namespace std;
//se da acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la libreria estandar.
//es una libreria de C++. Por lo que reconoce a cout y cin.

int main()
//Declaracion de variables tipo de valor int de integer(entero) que va a retornar y la funcion es main() importante en C++
//Para definir la funcion se abren y se cierran parentesis vacios

{ //aqui dentro de las llaves va el codigo de la aplicacion


    int a, b;
    //primera declaracion de variables.
    //a y b se definieron como variables de tipo entero.
    //identificadores que no son palabras reservadas de lenguaje. El nombre de la variable.
    //No iniciar por valores numericos
    //unico signo de puntuacion: _ guion bajo
    
    //el ; punto y coma es obligatorio al cierre de cada linea de codigo.
    
    
    cout << "Ingresa el primer numero"<<endl;
    //aplicacion del objeto cout 
    //permite mostrar la aplicacion del objeto cout y permite mostrar en pantalla un mensaje
    //o algun tipo de informacion.
    //debe ir entre signos dobles de menor << <<
    //requiere mostrar una frase por lo que se escriben "" comillas dobles.
    //etiqueta endl o salto de linea permite pasar el cursou al siguiente renglon.
    
    cin>> a;
    //Uso del objeto cin
    // este permite recibir lo que digite el usuario en la consola.
    //va seguido de >> y la variable que se ha dispuesto para guardar el valor (a)
    cout << "Ingresa el segundo numero"<<endl;
    cin >> b;
    //En la linea 40 y 41 se repiten las instrucciones para recibir el segundo numero por tparte del usuario. 

    cout <<"La suma de los numeros es: "<<a + b <<endl;
    //Se usa el objeto cout para mostrar el resultado 
    //hay una combinacion de datos de salida, como lo son, la frase entre comillas y la suma de las variables.
    //para concatenarlas debe ir unidas por signos dobles de menor <<.
    system("pause");
    //Esta sentencia obligaa mantener la consola abierta hasta que se presione una tecla
    //Su uso es permitir ver claramente el resultado al no cerrarse rapidamente la consola.
    
return 0;
//con el return 0 confirma que finalizo correctamente el codigo escrito

    
    
}
//Esta es la llave del cierre de la funcion main()




