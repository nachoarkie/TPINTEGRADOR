#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


//DESCRIPCION DE FUNCIONES//
void menu();

int CargarVectores(int fallo[],int falloant[],int gano[],int contbunco[],int lanzamiento[],int puntajeronda[],int puntajetot[],int puntajefinal[],int descuento[],int tam2);

int CalculadorDescuentos(int descuento[],int puntajefinal[],int fallo[],int tam2);

void TirarDados();

void GraficoDados(int dado[]);

int CargarDados(int dado[],int tam);


//FUNCIONES//
void menu(){
                rlutil::setColor(rlutil::WHITE);
                rlutil::locate(38,1);std::cout<<"######  ### ### ######   # ###   ##### "<<std::endl;
                rlutil::locate(38,2);std::cout<<"####### ### ### ####### ####### #######"<<std::endl;
                rlutil::locate(38,3);std::cout<<"### ### ### ### ### ### ### ### ### ###"<<std::endl;
                rlutil::locate(38,4);std::cout<<"######  ### ### ### ### ###     ### ###"<<std::endl;
                rlutil::locate(38,5);std::cout<<"### ### ### ### ### ### ### ### ### ###"<<std::endl;
                rlutil::locate(38,6);std::cout<<"####### ####### ### ### ####### #######"<<std::endl;
                rlutil::locate(38,7);std::cout<<"######   #####  ### ###  #####   ##### "<<std::endl;
                rlutil::setColor(rlutil::BLACK);



         rlutil::locate(47,12);std::cout<< "Ingrese una opcion:"<<std::endl;
         rlutil::locate(45,13);std::cout<<"1-    Un jugador."<<std::endl;
         rlutil::locate(45,14);std::cout<<"2-   Dos jugadores."<<std::endl;
         rlutil::locate(45,15);std::cout<<"3- Puntuacion mas alta."<<std::endl;
         rlutil::locate(45,16);std::cout<<"4-   Modo simulado."<<std::endl;
         rlutil::locate(45,17);std::cout<<"0-       Salir."<<std::endl;

}



int CargarVectores(int fallo[],int falloant[],int gano[],int contbunco[],int lanzamiento[],int puntajeronda[],int puntajetot[],int puntajefinal[],int descuento[],int tam2){
        int i=0;

        for (i=0;i<2;i++){
            fallo[i]=0;
            falloant[i]=0;
            gano[i]=0;
            lanzamiento[i]=0;
            puntajeronda[i]=0;
            puntajefinal[i]=0;
            contbunco[i]=0;
            puntajetot[i]=0;
            descuento[i]=0;
        }
}

int CalculadorDescuentos(int descuento[],int puntajefinal[],int fallo[],int tam2){
int i;
for (i=0;i<=1;i++){
        descuento[i]=fallo[i]*2;
        puntajefinal[i]=puntajefinal[i]-descuento[i];
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




#endif
