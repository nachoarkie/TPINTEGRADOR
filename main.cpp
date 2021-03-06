#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "rlutil.h"
#include "funciones.h"

using namespace std;



int main()
{
    rlutil::setBackgroundColor(rlutil::MAGENTA);
    rlutil::setColor(rlutil::BLACK);
    srand(time(0));
//DECLARACION DE VARIABLES//
 int opc, j=0,i,puntajeronda[2], puntajetot[2],contbunco=0, sumadados,contfail=0, puntajefinal=0, descuento=0;

    const int tam=3;
            int puntajetabla[3],buncotabla[3], dado[3];
                string nombretop[3];
                    bool elegir;
                        char tecla;

                    CargarTabla(puntajetabla,buncotabla,nombretop);



 while (true){
//MENU DE INICIO//
        opc=menu();

            system("cls");



switch(opc){
//MODO 1 JUGADOR//
 case 13: {string nombre[1];
 int fallo[2],falloant[2],contbunco[2],lanzamiento[2],puntajeronda[2],puntajetot[2],puntajefinal[2],descuento[2],j=0,ronda=0,jugador=0,gano,i;
         const int tam2=2;
            CargarVectores(fallo,falloant,gano,contbunco,lanzamiento,puntajefinal,puntajeronda,puntajetot,descuento,tam2);
         rlutil::locate(53,11);cout <<"Nuevo juego"<<endl;
         rlutil::locate(53,12);cout <<"!Un Jugador!"<<endl;
         rlutil::locate(45,13);cout <<"Ingrese el nombre del jugador: "<<endl;
         rlutil::locate(56,14);cin>>nombre[jugador];
         system("cls");

for (i=1;i<=1;i++){
         do{
         j++;
            TirarDados();
            //TABLA DE RONDA//
         rlutil::locate(30,1);cout<<"TURNO DE "<< nombre[jugador]<<" .";  cout<<" | "; cout<<"RONDA N°"<<i; cout<<" | "; cout<< "PUNTAJE ACUMULADO: " << puntajetot[jugador]<< endl;
         rlutil::locate(20,2);cout<<"--------------------------------------------------------------------"<<endl;
         rlutil::locate(42,3);cout<<"VECES QUE OBTUVO BUNCO: "<< contbunco[jugador]<<endl;
         rlutil::locate(25,4);cout<<"----------------------------------------------------------"<<endl;
         rlutil::locate(47,5);cout<<"LANZAMIENTO N°"<<j<<endl;
         rlutil::locate(30,6);cout<<"------------------------------------------------"<<endl;

         CargarDados(dado,tam);

            //CARGA DE PUNTAJE//
            CalculadorPuntajes(dado,contbunco,puntajeronda,fallo,i,jugador);
            puntajetot[jugador]=puntajetot[jugador]+puntajeronda[jugador];



         puntajetot[jugador]=puntajetot[jugador]+puntajeronda[jugador];

         rlutil::locate(41,22);cout<<" *************************"<<endl;
         rlutil::locate(41,23);cout<<"| "<<"PUNTAJE DE LA RONDA: "<<puntajeronda[jugador]<<" |"<<endl;
         rlutil::locate(41,24);cout<<" *************************"<<endl;
        //FIN TABLA DE RONDA//
         rlutil::locate(43,30);system("pause");
         system("cls");
         }
         while(puntajetot[jugador]<21);

        //TABLA ENTRE RONDAS//

         rlutil::locate(38,10);cout<<"--------------------------------------"<<endl;
         rlutil::locate(39,11);cout<<"    PUNTAJE DE "<<nombre[jugador]<<": "<<puntajetot[jugador]<<" PUNTOS."<<endl;
         rlutil::locate(41,12);cout<<"    CANTIDAD DE BUNCOS: "<<contbunco[jugador]<<"."<<endl;
         rlutil::locate(37,13);cout<<"    CANTIDAD DE TIROS FALLIDOS: "<<fallo[jugador]<<"."<<endl;
         rlutil::locate(38,14);cout<<"    CANTIDAD DE LANZAMIENTOS: "<<j<<"."<<endl;
         rlutil::locate(38,15);cout<<"--------------------------------------"<<endl;
         rlutil::locate(43,30);system("pause");
         system("cls");

            puntajefinal[jugador]=puntajefinal[jugador]+puntajetot[jugador];

            puntajetot[jugador]=0;
            j=0;



}
            descuento[jugador]=fallo[jugador]*2;
            puntajefinal[jugador]=puntajefinal[jugador]-descuento[jugador];
        //TABLA FINAL DE JUEGO//
        rlutil::locate(38,10);cout<<"--------------------------------------"<<endl;
        rlutil::locate(41,11);cout<<"En total tuvo: "<<fallo[jugador]<<" tiros fallidos."<<endl;
        rlutil::locate(38,12);cout<<"Se le descontaron un total de: "<<descuento[jugador]<<" puntos."<<endl;
        rlutil::locate(40,13);cout<<"El puntaje final de "<<nombre[jugador]<<" fue de: "<<puntajefinal[jugador]<<"."<<endl;
        rlutil::locate(42,14);cout<<"Obtuviste un total de: "<<contbunco[jugador]<<" buncos."<<endl;
        rlutil::locate(38,15);cout<<"--------------------------------------"<<endl;

            //Comparador de puntajes para opcion 3//
            tablaPuntajes(puntajefinal,puntajetabla,buncotabla,nombretop,jugador,nombre,contbunco);
fallo[jugador]=0,puntajefinal[jugador]=0;


}

 rlutil::locate(43,30);break;




//MODO 2 JUGADORES//
 case 14: {string nombre[2];
         rlutil::locate(50,12);cout <<"Nuevo juego"<<endl;
         rlutil::locate(50,13);cout <<"Dos Jugadores!"<<endl;
         rlutil::locate(41,14);cout <<"Ingrese el nombre del jugador 1: "<<endl;
         rlutil::locate(56,15);cin>>nombre[0];
         system("cls");
         rlutil::locate(41,12);cout <<"Ingrese el nombre del jugador 2: "<<endl;
         rlutil::locate(56,13);cin>>nombre[1];
         system("cls");
        //DECLARACION DE VARIABLES DEL CASO//
         int fallo[2],falloant[2],contbunco[2],lanzamiento[2],puntajeronda[2],puntajetot[2],puntajefinal[2],descuento[2],j=0,ronda=0,jugador=0,gano,i;
         const int tam2=2;

        CargarVectores(fallo,falloant,gano,contbunco,lanzamiento,puntajefinal,puntajeronda,puntajetot,descuento,tam2);

        for (i=1;i<=6;i++){

            ronda++;

                while (puntajetot[0]<21 && puntajetot[1]<21){


        while (fallo[jugador]==falloant[jugador]&& puntajetot[0]<21 && puntajetot[1]<21){
        j++;
        TirarDados();
        //TABLA DE LANZAMIENTO//
         rlutil::locate(30,1);cout<<"TURNO DE "<< nombre[jugador]<<" .";  cout<<" | "; cout<<"RONDA N°"<<ronda; cout<<" | "; cout<< "PUNTAJE ACUMULADO: " << puntajetot[jugador]<< endl;
         rlutil::locate(20,2);cout<<"--------------------------------------------------------------------"<<endl;
         rlutil::locate(42,3);cout<<"VECES QUE OBTUVO BUNCO: "<< contbunco[jugador-1]<<endl;
         rlutil::locate(25,4);cout<<"----------------------------------------------------------"<<endl;
         rlutil::locate(47,5);cout<<"LANZAMIENTO N°"<<j<<endl;
         rlutil::locate(30,6);cout<<"------------------------------------------------"<<endl;

         CargarDados(dado,tam);

        //CARGA DE PUNTAJE//

            CalculadorPuntajes(dado,contbunco,puntajeronda,fallo,i,jugador);


         puntajetot[jugador]=puntajetot[jugador]+puntajeronda[jugador];

         rlutil::locate(41,22);cout<<" *************************"<<endl;
         rlutil::locate(41,23);cout<<"| "<<"PUNTAJE DE LA RONDA: "<<puntajeronda[jugador]<<" |"<<endl;
         rlutil::locate(41,24);cout<<" *************************"<<endl;
        //FIN TABLA DE LANZAMIENTO//

         system("pause");
         system("cls");


        }



        j=0;
        //CARTEL ENTRE LANZAMIENTOS//
        rlutil::locate(23,12);cout<<" **************************************************************"<<endl;
        rlutil::locate(44,13);cout<<" FIN DE TURNO DE "<<nombre[jugador]<<endl;
        rlutil::locate(43,14);cout<<" PUNTAJE DEL TURNO: "<<puntajetot[jugador]<<endl;
        rlutil::locate(39,15);cout<<" TOTAL DE BUNCOS HASTA AHORA: "<<contbunco[jugador]<<endl;

        falloant[jugador]=fallo[jugador];
        if (jugador==0){
            jugador=1;
        }
        else {
            jugador=0;
        }

        rlutil::locate(23,16);cout<<" **************************************************************"<<endl;
        rlutil::locate(44,17);cout<<" PROXIMO TURNO DE "<<nombre[jugador]<<endl;
        rlutil::locate(38,18);cout<<" PUNTAJE DE "<<nombre[jugador]<< " HASTA EL MOMENTO: "<<puntajetot[jugador]<<endl;
        rlutil::locate(35,19);cout<<" CANTIDAD DE BUNCOS DE "<<nombre[jugador]<< " HASTA EL MOMENTO: "<<contbunco[jugador]<<endl;
        rlutil::locate(23,20);cout<<" **************************************************************"<<endl;
        system("pause");
        system("cls");
        }
        puntajefinal[jugador]=puntajefinal[jugador]+puntajetot[jugador];

        //CARTEL ENTRE RONDAS//
        rlutil::locate(49,12);cout<<" RONDA N° "<<ronda<<endl;
        rlutil::locate(23,13);cout<<" ***************************************************************"<<endl;
        rlutil::locate(45,14);cout<<" PUNTAJE DE "<<nombre[0]<<": "<<puntajetot[0]<<endl;
        rlutil::locate(44,15);cout<<" CANTIDAD DE BUNCOS "<<contbunco[1]<<endl;
        rlutil::locate(23,16);cout<<" ***************************************************************"<<endl;
        rlutil::locate(45,17);cout<<" PUNTAJE DE "<<nombre[1]<<": "<<puntajetot[1]<<endl;
        rlutil::locate(44,18);cout<<" CANTIDAD DE BUNCOS "<<contbunco[2]<<endl;
        rlutil::locate(23,19);cout<<" ***************************************************************"<<endl;
        system("pause");
        system("cls");

    }
    if (puntajetot[0]>puntajetot[1]){
        gano=0;
    }
    else if(puntajetot[1]>puntajetot[0]){
        gano=1;
    }
     //CARTEL FIN DE JUEGO//
    CalculadorDescuentos(descuento,puntajefinal,fallo,gano);
    if (puntajefinal[0]>puntajefinal[1]){
        rlutil::locate(29,12);cout<<" ***************************************************************"<<endl;
        rlutil::locate(50,13);cout<<" EL GANADOR FUE "<<nombre[0]<<endl;
        rlutil::locate(43,14);cout<<" CON UN TOTAL DE "<<puntajefinal[0]<<" PUNTOS Y "<<contbunco[0]<<" BUNCOS."<<endl;
        rlutil::locate(29,15);cout<<" ***************************************************************"<<endl;
    }
    else if (puntajefinal[1]>puntajefinal[0]){
        rlutil::locate(29,12);cout<<" ***************************************************************"<<endl;
        rlutil::locate(50,13);cout<<" EL GANADOR FUE "<<nombre[1]<<endl;
        rlutil::locate(43,14);cout<<" CON UN TOTAL DE "<<puntajefinal[1]<<" PUNTOS Y "<<contbunco[1]<<" BUNCOS."<<endl;
        rlutil::locate(29,15);cout<<" ***************************************************************"<<endl;
    }
    else if (contbunco[0]>contbunco[1]){
        rlutil::locate(29,12);cout<<" ***************************************************************"<<endl;
        rlutil::locate(50,13);cout<<" EL GANADOR FUE "<<nombre[0]<<endl;
        rlutil::locate(43,14);cout<<" CON UN TOTAL DE "<<puntajefinal[0]<<" PUNTOS Y "<<contbunco[0]<<" BUNCOS."<<endl;
        rlutil::locate(44,15);cout<<nombre[0]<<" GANO POR CANTIDAD DE BUNCOS, POR QUE EMPATARON EN PUNTOS"<<endl;
        rlutil::locate(29,16);cout<<" ***************************************************************"<<endl;
    }
    else if (contbunco[1]>contbunco[0]){
        rlutil::locate(29,12);cout<<" ***************************************************************"<<endl;
        rlutil::locate(50,13);cout<<" EL GANADOR FUE "<<nombre[1]<<endl;
        rlutil::locate(43,14);cout<<" CON UN TOTAL DE "<<puntajefinal[1]<<" PUNTOS Y "<<contbunco[1]<<" BUNCOS."<<endl;
        rlutil::locate(44,15);cout<<nombre[1]<<" GANO POR CANTIDAD DE BUNCOS, POR QUE EMPATARON EN PUNTOS"<<endl;
        rlutil::locate(29,16);cout<<" ***************************************************************"<<endl;
    }
    else{
        rlutil::locate(29,12);cout<<" ***************************************************************"<<endl;
        rlutil::locate(33,13);cout<<" LA PARTIDA TERMINO EN EMPATE, AMBOS JUGADORES TERMINARON CON LA MISMA CANTIDAD DE PUNTOS Y BUNCOS"<<endl;
        rlutil::locate(29,14);cout<<" ***************************************************************"<<endl;
    }

    system("pause");
    system("cls");
 }
 rlutil::locate(43,30);break;




//TABLA DE PUNTAJE MAXIMO//
case 15:

         rlutil::locate(50,9);cout<<"TABLA DE PUNTUACIONES"<<endl;
         rlutil::locate(27,13);cout<<"PUNTAJE";rlutil::locate(58,13);cout<<"NOMBRE";rlutil::locate(83,13);cout<<"CANT BUNCOS"<<endl;
         rlutil::setColor(rlutil::LIGHTGREEN);
         rlutil::locate(1,15);cout<<"1-";rlutil::locate(30,15);cout<<puntajetabla[0];rlutil::locate(57,15);cout<<nombretop[0];rlutil::locate(87,15);cout<<buncotabla[0]<<endl;
         rlutil::setColor(rlutil::GREEN);
         rlutil::locate(1,17);cout<<"2-";rlutil::locate(30,17);cout<<puntajetabla[1];rlutil::locate(57,17);cout<<nombretop[1];rlutil::locate(87,17);cout<<buncotabla[1]<<endl;
         rlutil::locate(1,19);cout<<"3-";rlutil::locate(30,19);cout<<puntajetabla[2];rlutil::locate(57,19);cout<<nombretop[2];rlutil::locate(87,19);cout<<buncotabla[2]<<endl;
         rlutil::setColor(rlutil::BLACK);
  rlutil::locate(43,30);break;




//MODO SIMULACION//
 case 16:{
     //DECLARACION VARIABLES DEL CASO//
     int buncosim[1], fallo[1], nsim, jugador=0;
    buncosim[0]=0;
    fallo[0]=0;
    puntajetot[0]=0;
          rlutil::locate(50,9);cout <<"Modo simulacion:"<<endl;
          rlutil::locate(27,13);cout <<"En este modo podra decidir el valor de los dados para simular jugadas."<<endl;
          rlutil::locate(38,15);cout <<"Ingrese cantidad de lanzamientos a simular: "<<endl;
          rlutil::locate(57,16);cin>> nsim;
        system("cls");
    //CARGA DE PUNTAJE//
          for (i=1;i<=nsim;i++){
            rlutil::locate(42,15);cout<<"Ingrese valor del primer dado: "<<endl;
            rlutil::locate(57,16);cin>>dado[0];
        system("cls");
            rlutil::locate(42,15);cout<<"Ingrese valor del segundo dado: "<<endl;
            rlutil::locate(57,16);cin>>dado[1];
        system("cls");
            rlutil::locate(42,15);cout<<"Ingrese valor del tercer dado: "<<endl;
            rlutil::locate(57,16);cin>>dado[2];
        system("cls");


     //PUNTAJE DE RONDA//
         sumadados=dado[0]+dado[1]+dado[2];

            CalculadorPuntajes(dado,buncosim,puntajeronda,fallo,i,jugador);

        puntajetot[0]=puntajetot[0]+puntajeronda[0];


    //TABLA FIN DE RONDA//
         rlutil::locate(47,2);cout<<" MODO SIMULADO"<<endl;
         GraficoDados(dado);
         rlutil::locate(41,22);cout<<" *************************"<<endl;
         rlutil::locate(43,23);cout<<"PUNTAJE DE LA RONDA: "<<puntajeronda[0]<<"."<<endl;
         rlutil::locate(41,24);cout<<"OBTUVO UN TOTAL DE: "<<buncosim[jugador]<<" BUNCOS."<<endl;
         rlutil::locate(41,25);cout<<" *************************"<<endl;
         rlutil::locate(41,29);system("pause");
         system("cls");
          }
    //TABLA FIN DE JUEGO//
          rlutil::locate(27,10);cout<<" ***************************************************************"<<endl;
         rlutil::locate(39,11);cout<<"    PUNTAJE SIMULADO TOTAL: "<<puntajetot[0]<<" PUNTOS."<<endl;
         rlutil::locate(41,12);cout<<"    CANTIDAD DE BUNCOS: "<<buncosim[jugador]<<"."<<endl;
         rlutil::locate(39,13);cout<<"    CANTIDAD DE TIROS FALLIDOS: "<<fallo[jugador]<<"."<<endl;
         rlutil::locate(37,14);cout<<"    CANTIDAD DE LANZAMIENTOS SIMULADOS: "<<nsim<<"."<<endl;
         rlutil::locate(27,15);cout<<" ***************************************************************"<<endl;
        rlutil::locate(43,30);system("pause");
         system("cls");

puntajetot[0]=0;
 }
    rlutil::locate(43,30);break;




//CERRAR JUEGO//
 case 17:
     LlenarConsola();
     rlutil::setColor(rlutil::RED);
     rlutil::locate(49,15);cout <<"Se cerrara el programa."<<endl;
     rlutil::setColor(rlutil::LIGHTRED);
     rlutil::locate(52,20);cout <<"GRACIAS POR JUGAR"<<endl;
rlutil::setColor(rlutil::BLACK);
 rlutil::locate(41,27);return 0;
 rlutil::locate(41,38);break;


 }
 system("pause");
 system("cls");

 }

    return 0;
}
