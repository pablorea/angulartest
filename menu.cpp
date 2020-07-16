#include <stdio.h>
const int cant = 4;
int op=0, i;

struct Contactos{
	char nombre[20], apellido[12], mail[20];
	int telefono[12];
	
}contacto[cant];

char nombre[20], apellido[20], telefono[20], mail[20];



main()
{
	
	printf("--- MENU ---\n");
	printf("1. Guardar contacto\n");
	printf("2. Buscar contacto\n");
	printf("3. Mostrar todos los contactos registrados\n");
	printf("4. Cantidad de contactos disponibles para agendar\n");
	printf("5. Opcion: ");
	scanf("%d", &op);
	
//	do{
		switch(op){
			//Opcion 1
			case 1:
				short opc;
				
				printf("Guardar contacto...\n");
					
					do{
								
						for(i = 0; i<cant; i++){
							printf("[%d]\n", i); 
							
							printf("Nombre: "); 
							scanf("%s", &contacto[i].nombre);
							
							printf("Apellido: "); 
							scanf("%s", &contacto[i].apellido);
							
							printf("Telefono: "); 
							scanf("%s", &contacto[i].telefono);
							
							printf("Mail: "); 
							scanf("%s", &contacto[i].mail);	
							
							printf("Desea agregar un contacto?\n");
							printf("1. Si\n");
							printf("2. No, volver a menu principal\n");	
							printf("Opcion: ");
							scanf("%d", &opc);
					}
						
					}while(opc!=1);

				break;
			
			
			
			//Opcion 2
			case 2: 
				printf("Buscar contacto...\n");
				
				for(i = 0; i<cant; i++){
				
				printf("Buscar por Nombre o Apellido: ");
				scanf("%s", &contacto[i].nombre);
				
					if(contacto[i].nombre){
						printf("El nombre o apellido buscado existe\n\n");
						
						printf("--- Buscar otro contacto? ---\n");
						printf("1. Si\n");
						printf("2. No\n");
						printf("Opcion: ");
						scanf("%d", &op);
						
						if(op!=1)
							return main();
					}
					else{
						printf("El contacto buscando NO existe en la agenda...\n");
					}
				}							
				break;
			
			
			//Opcion 3
			case 3:
				printf("Contactos registrados...\n");
				
				for(i = 0; i<cant; i++){
					printf("--- Contacto [%d]\n", i);
					
					printf("Nombre: %s \n",contacto[i].nombre);
					printf("Apellido: %s \n",contacto[i].apellido);
					printf("Telefono: %s \n", contacto[i].telefono);
					printf("Mail: %s \n\n", contacto[i].mail);
				}
				
				break;
			
			
			
			//Opcion 4
			case 4:
				printf("Cantidad de contactos disponibles: ");
				break;
				
				
				
			default:
				break;
		}
		
//	}while(op);	
		
	
	return 0;
}
