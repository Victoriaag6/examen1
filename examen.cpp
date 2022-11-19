#include<stdio.h>

void Menu(), ingresar(), consultar(), salir(); 

int opc, i, k=1;
struct banda{
  char nombre[20];
  char cancion;
  struct albumes{
  char nombrealbum[10];
  int fecha;
  float valoracion;
}albumes[2];
}banda[2];


main(){
  Menu();
  return 0;
}

void Menu(){
  do{ 

 printf(" 1. Ingresar datos.\n 2. Consultar Datos.\n 3. Salir.\n Que opcion desea usar: ");
  scanf("%d", &opc);
  if(opc>3 || opc<1){
    printf("\nOpcion invalida\n");
    printf("_________\n \n");
  }else{
  
  switch(opc){
    case 1: 
    ingresar();
  break;
      case 2:
        consultar();
  break;
  case 3:
    salir();
    break;
}
}
}while(k);
}

void ingresar(){
  for(i=0;i<3;i++){
    fflush(stdin);
    printf("Ingresa el Nombre de la banda de musica numero %d: ", i+1);
        gets(banda[i].nombre);
        fflush(stdin);
        printf("Ingresa el nombre del album de la banda de musica numero %d: ", i+1);
        gets(banda[i].albumes[i].nombrealbum);
        printf("Ingresa el nombre de alguna cancion de la banda de musica numero %d: ", i+1);
        scanf("%d", &banda[i].cancion);
        fflush(stdin);
        fflush(stdin);
        printf("Ingresa la fecha de lanzamiento del album de la banda de musica numero %d: ", i+1);
        scanf("%d", &banda[i].albumes[i].fecha);
        fflush(stdin);
        printf("Ingresa la valoracion del album de la banda de musica numero %d: ", i+1);
        scanf("%f", &banda[i].albumes[i].valoracion);
        fflush(stdin);
}
}
void consultar(){
  for(i=0;i<3;i++){
  fflush(stdin);
    printf("El nombre de la banda de musica numero %d es %s ", i+1, banda[i].nombre);
    fflush(stdin);
    printf("\nel nombre de una cancion de la banda de musica %s es %s", banda[i].nombre, banda[i].cancion);
    fflush(stdin);
    printf("\nEl nombre del album digitado de %s es %s", banda[i].nombre, banda[i].albumes[i].nombrealbum);
    fflush(stdin);
    printf("\nLa fecha de lanzamiento del album de la bandad de musica %s de %s es %d", banda[i].albumes[i].nombrealbum, banda[i].nombre, i+1, banda[i].albumes[i].fecha);
    fflush(stdin);
    printf("\nLa valoracion de %s de la banda de musica %s es %f \n", banda[i].albumes[i].nombrealbum, banda[i].nombre, banda[i].albumes[i].valoracion);
    fflush(stdin);
    	
}
}
void salir(){
  k--;
}

