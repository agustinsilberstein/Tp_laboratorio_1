typedef struct{
    char nombre[51];
    int dni;
    char apellido[51];
    int edad;
    int status;/**< activo (1), inactivo(0), baja (-1) */
    int id;

}persona;

void setid(persona personaArray[], int arrayLenght);
void setStatus(persona personaArray[],int arrayLenght,int value);
void mostrarPorId (persona personaArray[], int freePlaceIndex);

void setPersona(persona personaArray[], int freePlaceIndex,char nombreAux[],char apellidoAux[],int dniAux,int edadAux);
int menuOpciones(char texto[],char auxOpcion[]);
int findclienteById(persona personaArray[],int arrayLenght,int id);
char getChar(char mensaje[]);
int getStringNumeros(char mensaje[],char input[]);
void getString(char mensaje[],char input[]);
int esNumerico(char str[]);
int findEmptyPlace(persona personaArray[],int arrayLenght);
int getValidInt(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);
void getValidString(char requestMessage[],char errorMessage[], char input[]);
void cleanStdin(void);
int getStringLetras(char mensaje[],char input[]);
int esSoloLetras(char str[]);



