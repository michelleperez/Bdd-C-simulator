#include <stdio.h>
#include <string.h>
int main()
{
	//Definir matrices.
	int sistemas[100][8],contabilidad[100][8],marketing[100][8],mecanica[100][8];
	int opc,num_trab,aux=0,horas_tot,hora_ext,salario_extra,sal_ex,sal_normal,SalarioTotal;
	string nombresis[],nombrecont[],nombremark[],nombremec[],nom;
	//Menu
	do
	{
		printf("-------Menu-------\n");
		printf("1.Ingrese datos de datos\n");
		printf("2.Consultar\n");
		printf("Salir\n");
		printf("Ingrese una opción:\n");
		scanf("%d",&opc);
	}while((opc<3)&&(opc>1))
	switch(opc){
		case 1:
		{
			printf("---------Ingreso de datos---------\n");
			do
			{
						printf("Departamento---codigo\n");
						printf("Sistemas----------1\n");
						printf("Contabilidad-------2\n");	
						printf("Mecanica----------3\n");
						printf("Marketing---------4\n");
						printf("Ingrese el departamento al que pertenece:\n");
						scanf("%d",&opc);
						if ((opc>4)&&(opc<1))
						{
							printf("Error departamento no existe\n");
							printf("Ingrese el departamento al que pertenece:\n");
							scanf("%d",&opc[i]);
						}

			}while((opc>4)&&(opc<1));
			switch(opc)
			{
				case 1:
					{	do
						{
							printf("Ingrese el numero de trabajadores;\n");
						 	scanf("%d",&num_trab);
						 	for (int i = 0; i < num_trab; ++i)
						 	{		
						 		printf("Ingrese el nombre del trabajador\n");
						 		scanf("%s",&nom);
						 		nombresis[i]=nom;
						 		sistemas[i][0]=i;
						 		printf("Ingrese horas de semana 1\n");
								scanf("%d",&sistemas[i][1]);
								printf("Ingrese horas de semana 2\n");
								scanf("%d",&sistemas[i][2]);
								printf("Ingrese horas de semana 3\n");
								scanf("%d",&sistemas[i][3]);
								printf("Ingrese horas de semana 4\n");
								scanf("%d",&sistemas[i][4]);
								horas_tot=sistemas[i][3]+sistemas[i][2]+sistemas[i][1]+sistemas[i][0];
								sistemas[i][5]=horas_tot;
								hora_ext=horas_tot-160;
								sistemas[i][6]=hora_ext
								sal_normal=(160*12);
								if (horas_tot>160)
								{
									sal_ex=(5*12)/100;
									salario_extra=sal_ex*hora_ext;
									sistemas[i][7]=salario_extra;
 									SalarioTotal=salario_extra+sal_normal
 									sistemas[i][8]=SalarioTotal;
								}	
							}
							aux=aux+num_trab;
							printf("Desea ingresar mas trabajadores  1.SI/2.NO\n");
							scanf("%d",opción);
								
						}while(opción==1);
					}break;

					case 2:
					{
						do
						{
							printf("Ingrese el numero de trabajadores;\n");
						 	scanf("%d",&num_trab);
						 	for (int i = 0; i < num_trab; ++i)
						 	{		
						 		printf("Ingrese el nombre del trabajador\n");
						 		scanf("%s",&nom);
						 		nombrecont[i]=nom;
						 		contabilidad[i][0]=i;
						 		printf("Ingrese horas de semana 1\n");
								scanf("%d",&contabilidad[i][1]);
								printf("Ingrese horas de semana 2\n");
								scanf("%d",&contabilidad[i][2]);
								printf("Ingrese horas de semana 3\n");
								scanf("%d",&contabilidad[i][3]);
								printf("Ingrese horas de semana 4\n");
								scanf("%d",&contabilidad[i][4]);
								horas_tot=contabilidad[i][3]+contabilidad[i][2]+contabilidad[i][1]+contabilidad[i][0];
								contabilidad[i][5]=horas_tot;
								hora_ext=horas_tot-160;
								contabilidad[i][6]=hora_ext
								sal_normal=(160*10);
								if (horas_tot>160)
								{
									sal_ex=(10*10)/100;
									salario_extra=sal_ex*hora_ext;
									contabilidad[i][7]=salario_extra;
 									SalarioTotal=salario_extra+sal_normal
 									contabilidad[i][8]=SalarioTotal;
								}		
							}
							aux=aux+num_trab;
							printf("Desea ingresar mas trabajadores  1.SI/2.NO\n");
							scanf("%d",opción);
						}while(opción==1);
					}break;
					case 3:
					{
						do
						{
							printf("Ingrese el numero de trabajadores;\n");
							scanf("%d",&num_trab);
						 	for (int i = 0; i < num_trab; ++i)
						 	{		
						 		printf("Ingrese el nombre del trabajador\n");
						 		scanf("%s",&nom);
						 		nombremark[i]=nom;
						 		marketing[i][0]=i;
						 		printf("Ingrese horas de semana 1\n");
								scanf("%d",&marketing[i][1]);
								printf("Ingrese horas de semana 2\n");
								scanf("%d",&marketing[i][2]);
								printf("Ingrese horas de semana 3\n");
								scanf("%d",&marketing[i][3]);
								printf("Ingrese horas de semana 4\n");
								scanf("%d",&marketing[i][4]);
								horas_tot=marketing[i][3]+marketing[i][2]+marketing[i][1]+marketing[i][0];
								marketing[i][5]=horas_tot;
								hora_ext=horas_tot-160;
								marketing[i][6]=hora_ext
								sal_normal=(160*8);
								if (horas_tot>160)
								{
									sal_ex=(15*8)/100;
									salario_extra=sal_ex*hora_ext;
									marketing[i][7]=salario_extra;
 									SalarioTotal=salario_extra+sal_normal
 									marketing[i][8]=SalarioTotal;
								}		
							}
						 	aux=aux+num_trab;
							printf("Desea ingresar mas trabajadores  1.SI/2.NO\n");
							scanf("%d",opción);
						}while(opción==1);
							
					}break;
					case 4:
					{
						do
						{
							printf("Ingrese el numero de trabajadores;\n");
							scanf("%d",&num_trab);
						 	for (int i = 0; i < num_trab; ++i)
						 	{		
						 		printf("Ingrese el nombre del trabajador\n");
						 		scanf("%s",&nom);
						 		nombremec[i]=nom;
						 		mecanica[i][0]=i;
						 		printf("Ingrese horas de semana 1\n");
								scanf("%d",&mecanica[i][1]);
								printf("Ingrese horas de semana 2\n");
								scanf("%d",&mecanica[i][2]);
								printf("Ingrese horas de semana 3\n");
								scanf("%d",&mecanica[i][3]);
								printf("Ingrese horas de semana 4\n");
								scanf("%d",&mecanica[i][4]);
								horas_tot=mecanica[i][3]+mecanica[i][2]+mecanica[i][1]+mecanica[i][0];
								mecanica[i][5]=horas_tot;
								hora_ext=horas_tot-160;
								mecanica[i][6]=hora_ext
								sal_normal=(160*11);
								if (horas_tot>160)
								{
									sal_ex=(11*15)/100;
									salario_extra=sal_ex*hora_ext;
									mecanica[i][7]=salario_extra;
 									SalarioTotal=salario_extra+sal_normal
 									mecanica[i][8]=SalarioTotal;
								}		
							}
							aux=aux+num_trab;
							printf("Desea ingresar mas trabajadores  1.SI/2.NO\n");
							scanf("%d",opción);
						}while(opción==1);
					}break;
			}
		}break;
		case 2:
		{
			
		}break;
		case 3:
		{

		}break;

	}
}