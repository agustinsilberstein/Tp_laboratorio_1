#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int menuOpciones(char texto[],char auxOpcion[]);
int numeroA (int);
int numeroB (int);
float suma (float a,float b);
float resta (float a,float b);
float multiplicacion (float a,float b);
float division(float a, float b);
int factorial (int a);
int validar_division(float, float);
float function_Validacion (float,char);
char getChar(char mensaje[]);
int getStringNumeros(char mensaje[],char input[]);
void getString(char mensaje[],char input[]);
int esNumerico(char str[]);
int getStringNumerosFlotantes(char mensaje[],char input[]);
int esNumericoFlotante(char str[]);
void mostrarNumeros(float a, float b, char resultado[]);



#endif // FUNCIONES_H_INCLUDED
