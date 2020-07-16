#include <stdio.h>
#include <string.h>
#define cant 3

int i,v;
char temp[30];

//Creas una estructura para guardar tus datos
struct Contacto{
	char nombre [30], apellido[30];
	
}contacto[cant]; // Indicas que cantidad


int main()
{
	
	//Agregas datos a la estructura
	for(i = 0; i<cant; i++){
		printf("Nombre: ");
		scanf("%s",&contacto[i].nombre);
		
		printf("Apellido: ");
		scanf("%s",&contacto[i].apellido);
		printf("\n");
	}

	//Imprimis los datos ingresados
	printf("--- LISTA DE CONTACTOS ---\n\n");
	
	for(i = 0; i<cant; i++){
		printf("Contacto [%d]\n", i);
		printf("Nombre %s", contacto[i].nombre);
		printf("\nApellido: %s\n", contacto[i].apellido);
		printf("\n");
	}
	
		printf("Buscar: ");
		scanf("%s", temp);
		
		for(i = 0; i<cant; i++){
			if(contacto[i].nombre == temp){
				
			}else{
				printf("NO");
			}
		}
	
		
		
		
		
	return 0;
}



















