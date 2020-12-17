#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define ABAJO 80
#define ARRIBA 72
#define ENTER 13
//DESCRIPCION DE FUNCIONES//
int menu();

void CargarTabla(int puntajetabla[],int buncotabla[],std::string nombretop[]);

int CargarVectores(int fallo[],int falloant[],int gano[],int contbunco[],int lanzamiento[],int puntajeronda[],int puntajetot[],int puntajefinal[],int descuento[],int tam2);

int CalculadorDescuentos(int descuento[],int puntajefinal[],int fallo[],int tam2);

void TirarDados();

void GraficoDados(int dado[]);

int CargarDados(int dado[],int tam);

void LlenarConsola();

void Estrellitas();

int CalculadorPuntajes(int dado[],int contbunco[],int puntajeronda[],int fallo[],int jugador);

void tablaPuntajes(int puntajefinal[],int puntajetabla[],int buncotabla[],std::string nombretop[],int jugador,std::string nombre[],int contbunco[]);

int AcomodarDados(int dado[]);

//FUNCIONES//
int menu(){
    int x=40, y=13, i;
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(38,3);std::cout<<"######  ### ### ######   # ###   ##### "<<std::endl;
                rlutil::locate(38,4);std::cout<<"####### ### ### ####### ####### #######"<<std::endl;
                rlutil::locate(38,5);std::cout<<"### ### ### ### ### ### ### ### ### ###"<<std::endl;
                rlutil::locate(38,6);std::cout<<"######  ### ### ### ### ###     ### ###"<<std::endl;
                rlutil::locate(38,7);std::cout<<"### ### ### ### ### ### ### ### ### ###"<<std::endl;
                rlutil::locate(38,8);std::cout<<"####### ####### ### ### ####### #######"<<std::endl;
                rlutil::locate(38,9);std::cout<<"######   #####  ### ###  #####   ##### "<<std::endl;
                rlutil::setColor(rlutil::BLACK);





         rlutil::locate(47,12);std::cout<< "Ingrese una opcion:"<<std::endl;
         rlutil::locate(45,13);std::cout<<"1-    Un jugador."<<std::endl;
         rlutil::locate(45,14);std::cout<<"2-   Dos jugadores."<<std::endl;
         rlutil::locate(45,15);std::cout<<"3- Puntuacion mas alta."<<std::endl;
         rlutil::locate(45,16);std::cout<<"4-   Modo simulado."<<std::endl;
         rlutil::locate(45,17);std::cout<<"0-       Salir."<<std::endl;
         rlutil::locate(34,25);std::cout<<"Proyecto integrador hecho por Tadeo Descalzo.";

         //MENU CON TECLAS//
         rlutil::locate(x,y);printf("*");
         bool elegir=false;
         while (!elegir){
            if (_kbhit()){
              rlutil::locate(x,y);printf(" ");
              char tecla=_getch();
              if (tecla==ENTER){elegir=true;return y;}
              if (tecla==ARRIBA && y>13) rlutil::locate(x,y--);
              if (tecla==ABAJO && y<17) rlutil::locate(x,y++);
              rlutil::locate(x,y);printf("*");
        }

    }
}




void CargarTabla(int puntajetabla[],int buncotabla[],std::string nombretop[]){
    int i;

    for (i=0;i<3;i++){
                    puntajetabla[i]=0;
                    buncotabla[i]=0;
                    nombretop[i]="NO SCORE";
                    }


}

int CargarVectores(int fallo[],int falloant[],int gano,int contbunco[],int lanzamiento[],int puntajeronda[],int puntajetot[],int puntajefinal[],int descuento[],int tam2){
        int i=0;

        for (i=0;i<2;i++){
            fallo[i]=0;
            falloant[i]=0;
            gano=0;
            lanzamiento[i]=0;
            puntajeronda[i]=0;
            puntajefinal[i]=0;
            contbunco[i]=0;
            puntajetot[i]=0;
            descuento[i]=0;
        }
}

int CalculadorDescuentos(int descuento[],int puntajefinal[],int fallo[],int gano){
int i;
if (gano==0){
        descuento[gano]=fallo[gano]*2;
        puntajefinal[gano]=puntajefinal[gano]-descuento[gano];
        puntajefinal[1]=-999999;
}
else if(gano==1){
    descuento[gano]=fallo[gano]*2;
    puntajefinal[gano]=puntajefinal[gano]-descuento[gano];
    puntajefinal[0]=-999999;
}
}

void TirarDados(){
std::string dado1,dado2,dado3,dado4,dado5,dado6;
int i;
for (i=1;i<2;i++){
    dado1:    rlutil::locate(40,10);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
              rlutil::locate(40,11);std::cout<<"|       |"<<"     "<<"| o   o |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,12);std::cout<<"|   o   |"<<"     "<<"|       |"<<"     "<<"|   o   |"<<std::endl;
              rlutil::locate(40,13);std::cout<<"|       |"<<"     "<<"| o   o |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,14);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
                Sleep(150);
                system("cls");

    dado2:
              rlutil::locate(40,10);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
              rlutil::locate(40,11);std::cout<<"| o     |"<<"     "<<"| o   o |"<<"     "<<"| o     |"<<std::endl;
              rlutil::locate(40,12);std::cout<<"|       |"<<"     "<<"| o   o |"<<"     "<<"|   o   |"<<std::endl;
              rlutil::locate(40,13);std::cout<<"|     o |"<<"     "<<"| o   o |"<<"     "<<"|     o |"<<std::endl;
              rlutil::locate(40,14);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
                Sleep(150);
        system("cls");

    dado3:
              rlutil::locate(40,10);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
              rlutil::locate(40,11);std::cout<<"| o     |"<<"     "<<"| o   o |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,12);std::cout<<"|   o   |"<<"     "<<"|   o   |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,13);std::cout<<"|     o |"<<"     "<<"| o   o |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,14);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
                Sleep(150);
        system("cls");

    dado4:
              rlutil::locate(40,10);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
              rlutil::locate(40,11);std::cout<<"| o   o |"<<"     "<<"|       |"<<"     "<<"| o     |"<<std::endl;
              rlutil::locate(40,12);std::cout<<"|       |"<<"     "<<"|   o   |"<<"     "<<"|       |"<<std::endl;
              rlutil::locate(40,13);std::cout<<"| o   o |"<<"     "<<"|       |"<<"     "<<"|     o |"<<std::endl;
              rlutil::locate(40,14);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
            Sleep(150);
        system("cls");

    dado5:
              rlutil::locate(40,10);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
              rlutil::locate(40,11);std::cout<<"| o   o |"<<"     "<<"| o     |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,12);std::cout<<"|   o   |"<<"     "<<"|   o   |"<<"     "<<"|       |"<<std::endl;
              rlutil::locate(40,13);std::cout<<"| o   o |"<<"     "<<"|     o |"<<"     "<<"| o   o |"<<std::endl;
              rlutil::locate(40,14);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
            Sleep(150);
        system("cls");

    dado6:
              rlutil::locate(40,10);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;
              rlutil::locate(40,11);std::cout<<"| o   o |"<<"     "<<"| o     |"<<"     "<<"|       |"<<std::endl;
              rlutil::locate(40,12);std::cout<<"| o   o |"<<"     "<<"|       |"<<"     "<<"|   o   |"<<std::endl;
              rlutil::locate(40,13);std::cout<<"| o   o |"<<"     "<<"|     o |"<<"     "<<"|       |"<<std::endl;
              rlutil::locate(40,14);std::cout<<" -------"<<"      "<<" -------"<<"      "<<" -------"<<std::endl;

            Sleep(150);
        system("cls");

}
}
void GraficoDados(int dado[]){
    int i;
for (i=0;i<=2;i++){
switch(dado[i]) {
case 1: std::cout<<"                                                  -------"<<std::endl;
        std::cout<<"                                                 |       |"<<std::endl;
        std::cout<<"                                                 |   o   |"<<std::endl;
        std::cout<<"                                                 |       |"<<std::endl;
        std::cout<<"                                                  -------"<<std::endl;
break;

case 2:
        std::cout<<"                                                  -------"<<std::endl;
        std::cout<<"                                                 | o     |"<<std::endl;
        std::cout<<"                                                 |       |"<<std::endl;
        std::cout<<"                                                 |     o |"<<std::endl;
        std::cout<<"                                                  -------"<<std::endl;
break;

case 3:
        std::cout<<"                                                  -------"<<std::endl;
        std::cout<<"                                                 | o     |"<<std::endl;
        std::cout<<"                                                 |   o   |"<<std::endl;
        std::cout<<"                                                 |     o |"<<std::endl;
        std::cout<<"                                                  -------"<<std::endl;
break;

case 4:
        std::cout<<"                                                  -------"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                 |       |"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                  -------"<<std::endl;
break;

case 5:
        std::cout<<"                                                  -------"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                 |   o   |"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                  -------"<<std::endl;
break;

case 6:
        std::cout<<"                                                  -------"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                 | o   o |"<<std::endl;
        std::cout<<"                                                  -------"<<std::endl;
break;
}
}
}

int CargarDados(int dado[],int tam){

         dado[0]= 1+rand()%6;
         dado[1]= 1+rand()%6;
         dado[2]= 1+rand()%6;

         GraficoDados(dado);
}

void LlenarConsola(){
    int i;
    rlutil::setColor(rlutil::RED);
    for (i=1;i<=15;i++){
     rlutil::locate(1,i);std::cout<<"************************************************************************************************************************"<<std::endl;
    Sleep(30);
    }
    rlutil::setColor(rlutil::LIGHTRED);
    for (i=15;i<=30;i++){
     rlutil::locate(1,i);std::cout<<"************************************************************************************************************************"<<std::endl;
    Sleep(30);
    }
    rlutil::cls();
}

int CalculadorPuntajes(int dado[],int contbunco[],int puntajeronda[],int fallo[],int i,int jugador){
       int sumadados=0;
       AcomodarDados(dado);
        sumadados=dado[0]+dado[1]+dado[2];

            if (dado[0]==dado[1] && dado[1]==dado[2] && dado[0]==i){
            puntajeronda[jugador]=21;
            contbunco[jugador]++;
            }
            else if (dado[0]==dado[1] && dado[1]==dado[2] && dado[0]!=i){
            puntajeronda[jugador]=5;
            }
            else if(sumadados%5==0){
            puntajeronda[jugador]=3;
            }
            else if (dado[0]==dado[1]-1 && dado[1]==dado[2]-1){
            puntajeronda[jugador]=2;
            }
            else if(dado[0]==i||dado[1]==i||dado[2]==i){
            puntajeronda[jugador]=1;
            }
            else{
            puntajeronda[jugador]=0;
            fallo[jugador]++;
            }

}

int AcomodarDados(int dado[]){
int mendado,segdado=0,maydado=0,i=0;

maydado=dado[0];

for (i=1;i<=2;i++){
    if (dado[i]>maydado){
        mendado=segdado;
        segdado=maydado;
        maydado=dado[i];
    }
    else if (dado[i]>segdado){
        mendado=segdado;
        segdado=dado[i];
    }
    else if (dado[i]>mendado){
        mendado=dado[i];
    }
}

dado[0]=mendado;
dado[1]=segdado;
dado[2]=maydado;

}

void tablaPuntajes(int puntajefinal[],int puntajetabla[],int buncotabla[],std::string nombretop[],int jugador,std::string nombre[],int contbunco[]){
if (puntajefinal[jugador]>puntajetabla[0]){
            puntajetabla[2]=puntajetabla[1];
            buncotabla[2]=buncotabla[1];
            nombretop[2]=nombretop[1];

            puntajetabla[1]=puntajetabla[0];
            buncotabla[1]=buncotabla[0];
            nombretop[1]=nombretop[0];

            puntajetabla[0]=puntajefinal[jugador];
            buncotabla[0]=contbunco[jugador];
            nombretop[0]=nombre[jugador];
            }

            else if (puntajefinal[jugador]>puntajetabla[1]){
            puntajetabla[2]=puntajetabla[1];
            buncotabla[2]=buncotabla[1];
            nombretop[2]=nombretop[1];

            puntajetabla[1]=puntajefinal[jugador];
            buncotabla[1]=contbunco[jugador];
            nombretop[1]=nombre[jugador];
            }
            else if(puntajefinal[jugador]>puntajetabla[2]){
            puntajetabla[2]=puntajefinal[jugador];
            buncotabla[2]=contbunco[jugador];
            nombretop[2]=nombre[jugador];
            }
}
#endif // FUNCIONES_H_INCLUDED
