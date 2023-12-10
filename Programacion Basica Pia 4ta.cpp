#include <iostream>
#include<windows.h>
#define PI1 99
#define PI2 140
#include <vector>
using namespace std;

char res;
int main(){
int venta;
vector<string>nomven(10);
float matriz[9][10];
int opcion, ticket,propina,tcan,tmod, desc = 0;
float iva = 0;
char nomvend;
char fecha;
float total;
int precio1, precio2 =0;
int i , j, k,l, m = 0;
int res = 0;

do {
system("cls");
cout<<"\n";
cout<<"\n      Menu de Punto de Venta";
cout<<"\n";
cout<<"\n         1. Alta de Ordenes";
cout<<"\n         2. Modificar Orden";
cout<<"\n         3. Eliminar o Cancelar Orden";
cout<<"\n         4. Lista de Ordenes";
cout<<"\n         5. Limpiar Pantalla";
cout<<"\n         6. Salir";
cout<<"\n";
cout<<"\n  Opcion: ";
cin>>opcion;



switch(opcion){
case 1:
system ("cls")	;
do
{ 
cout<<"\n Numero de Ticket:";
cin>>matriz[i][1];
	
cout<<"\n Nombre del vendedor:";
cin>>nomven[i];
cout<<"\n Fecha:";
cin>>matriz[i][2];
cout<<"\n Cuantas Pizzas Monkey:";
cin>>matriz[i][3];
cout<<"\n Cuantas Pizzas Montivirdi:";
cin>>matriz[i][4];
cout<<"\n Propina (10%, 15%, 20%):";
cin>>propina;
venta = (matriz[i][3]*99)+(matriz[i][4]*140);
matriz[i][5]=(venta*propina)/100;
cout<<"\n Descuento o Promocion:";
cin>>desc;
matriz[i][6]= (venta * desc)/100;
matriz[i][7]= venta*0.16;
matriz[i][8]= venta + matriz[i][5]- matriz[i][6]+ matriz[i][7];
cout<<"\n total: ";
cout<<matriz[i][8];
i=i+1;
cout<<"\n Desea Salir si[1]  no[2]";
cin>>res;
}while(res>>1);

break;

case 2:
	cout<<"\n Modificar Orden";
cout<<"Dame el No. de ticket que quieres Modificar";
cin>>tmod; 
for(l=1;l<=10;l++){
if (tmod==matriz[l][1])
{	
cout<<"\n Nombre del vendedor:";
cin>>nomven[l];
cout<<"\n Fecha:";
cin>>matriz[l][2];
cout<<"\n Cuantas Pizzas Monkey:";
cin>>matriz[l][3];
cout<<"\n Cuantas Pizzas Montivirdi:";
cin>>matriz[l][4];
cout<<"\n Propina (10%, 15%, 20%):";
cin>>propina;
venta = (matriz[l][3]*99)+(matriz[l][4]*140);
matriz[l][5]=(venta*propina)/100;
cout<<"\n Descuento o Promocion:";
cin>>desc;
matriz[l][6]= (venta * desc)/100;
matriz[l][7]= venta*0.16;
matriz[l][8]= venta + matriz[l][5]- matriz[l][6]+ matriz[l][7];	
}
}
break;
case 3:
	cout<<"\n Eliminar o Cancelar Orden";
 cout<<"\n Dame el No. ticket a Cancelar:";
 cin>>tcan;
 for(m=1;m<=10;m++){
if (tcan==matriz[m][1])
{	matriz[m][9]=1;
}
}
break;
case 4:
	cout<<"\n Lista de  Ordenes";
	for(j=1;j<=10;j++){
cout<<"\n vendedor:";
cout<<nomven[j];
cout<<"\n ticket:";
cout<<matriz[j][1];
cout<<"\n fecha:";
cout<<matriz[j][2];
cout<<"\n No. de Pizzas Monkey:";
cout<<matriz[j][3];
cout<<"\n No. de pizzas Montivirdi:";
cout<<matriz[j][4];
cout<<"\n Propina";
cout<<matriz[j][5];
cout<<"\n descuento";
cout<<matriz[j][6];
cout<<"\n Impuesto";
cout<<matriz[j][7];
cout<<"\n Total";
cout<<matriz[j][8];
getchar();
}
break;

case 5:
       cout<<"\n Limpiar pantalla";


system ("cls");
	
break;


case 6:
	exit(1);
	
break;
}
}
while (res=6);
return 0;
}

void Archivos()
{
    ofstream Archivo; 
    string nombrearchivo;
    nombrearchivo = "Pizza_Monkeys";
    archivo.open(nombrearchivo.c_str(), ios::binary);
    if (archivo.fail())
    {
        cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
        exit(1);
    }
    archivo <<"vendedor"<< "\t";
    archivo << "ticket" << "\t";
    archivo << "fecha" << "\t";
    archivo << "No. de Pizzas Monkey" << "\t";
    archivo << "No. de pizzas Montivirdi" << "\t";
    archivo << "Propina" << "\t";
    archivo << "descuento" << "\t";
    archivo << "Impuesto" << "\n";
    archivo << "total ventas" << "\n";
 
    for (int i = 0; i < alta; i++)
    {
        archivo << i + 1 << "\t";
        archivo << Pizza_Monkeys[i].vendedor << "\t";
        archivo << Pizza_Monkeys[i].ticket << "\t";
        archivo << Pizza_Monkeys[i].fecha << "\t";
        archivo << Pizza_Monkeys[i].No. de Pizzas Monkey << "\t";
        archivo << Pizza_Monkeys[i].No. de pizzas Montivirdi << "\t";
        archivo << Pizza_Monkeys[i].Propina << "\t";
        archivo << Pizza_Monkeys[i].descuento << "\n";
   
    for (int j = 0; j < ordenessub[i].size(-1); j++)
        {
            archivo << ordenes[i].articulos[j].nombre << " (" << ordenes[i].articulos[j].precio << ")";
            if (j < ordenes[i].articulos.size() - 1)
            {
                archivo << ", ";
            }
        }
        archivo << "]" << "\t";
        archivo << ordenes[i].subtotal << "\t";
        archivo << ordenes[i].descuento << "\t";
        archivo << ordenes[i].propina << "\t";
        archivo << ordenes[i].impuesto << "\t";
        archivo << ordenes[i].total << "\t";
        archivo << ordenes[i].cancelada << "\n";
    }

    archivo.close();
}
        endl;
    }
