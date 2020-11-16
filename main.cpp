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
    rlutil::setBackgroundColor(rlutil::LIGHTBLUE);
    rlutil::setColor(rlutil::BLACK);

srand(time(0));

 int opc, j=0,i,puntajeronda, puntajetot=0,contbunco=0, sumadados,contfail=0, puntajefinal=0, descuento=0;
    const int tam=3;

            int puntajetabla[3],buncotabla[3], dado[3];
                string nombretop1, nombretop2, nombretop3;

                    for (i=0;i<3;i++){
                    puntajetabla[i]=0;
                    buncotabla[i]=0;
                    }
                    nombretop1="NO SCORE";
                    nombretop2="NO SCORE";
                    nombretop3="NO SCORE";



 while (true){

        menu();
         rlutil::locate(56,19);cin>>opc;
            system("cls");



switch(opc){

 case 1: {string nombre1;
         rlutil::locate(53,11);cout <<"Nuevo juego"<<endl;
         rlutil::locate(53,12);cout <<"!Un Jugador!"<<endl;
         rlutil::locate(45,13);cout <<"Ingrese el nombre del jugador: "<<endl;
         rlutil::locate(56,14);cin>>nombre1;
         system("cls");

for (i=1;i<=1;i++){
         do{
         j++;
            TirarDados();
         rlutil::locate(30,1);cout<<"TURNO DE "<< nombre1<<" .";  cout<<" | "; cout<<"RONDA N°"<<i; cout<<" | "; cout<< "PUNTAJE ACUMULADO: " << puntajetot<< endl;
         rlutil::locate(20,2);cout<<"--------------------------------------------------------------------"<<endl;
         rlutil::locate(42,3);cout<<"VECES QUE OBTUVO BUNCO: "<< contbunco<<endl;
         rlutil::locate(25,4);cout<<"----------------------------------------------------------"<<endl;
         rlutil::locate(47,5);cout<<"LANZAMIENTO N°"<<j<<endl;
         rlutil::locate(30,6);cout<<"------------------------------------------------"<<endl;

         CargarDados(dado,tam);



            sumadados=dado[0]+dado[1]+dado[2];

            if (dado[0]==dado[1] && dado[1]==dado[2] && dado[0]==i){
            puntajeronda=21;
            contbunco++;
            }
            else if (dado[0]==dado[1] && dado[1]==dado[2] && dado[0]!=i){
            puntajeronda=5;
            }
            else if(sumadados%5==0){
            puntajeronda=3;
            }
            else if (dado[0]==dado[1]-1 && dado[1]==dado[2]-1){
            puntajeronda=2;
            }
            else if(dado[0]==i||dado[1]==i||dado[2]==i){
            puntajeronda=1;
            }
            else{
            puntajeronda=0;
            contfail++;
            }

         puntajetot=puntajetot+puntajeronda;

         rlutil::locate(41,22);cout<<" *************************"<<endl;
         rlutil::locate(41,23);cout<<"| "<<"PUNTAJE DE LA RONDA: "<<puntajeronda<<" |"<<endl;
         rlutil::locate(41,24);cout<<" *************************"<<endl;

         rlutil::locate(43,30);system("pause");
         system("cls");
         }
         while(puntajetot<21);



         rlutil::locate(38,10);cout<<"--------------------------------------"<<endl;
         rlutil::locate(39,11);cout<<"    PUNTAJE DE "<<nombre1<<": "<<puntajetot<<" PUNTOS."<<endl;
         rlutil::locate(41,12);cout<<"    CANTIDAD DE BUNCOS: "<<contbunco<<"."<<endl;
         rlutil::locate(37,13);cout<<"    CANTIDAD DE TIROS FALLIDOS: "<<contfail<<"."<<endl;
         rlutil::locate(38,14);cout<<"    CANTIDAD DE LANZAMIENTOS: "<<j<<"."<<endl;
         rlutil::locate(38,15);cout<<"--------------------------------------"<<endl;
         rlutil::locate(43,30);system("pause");
         system("cls");

            puntajefinal=puntajefinal+puntajetot;

            puntajetot=0;
            j=0;



}
            descuento=contfail*2;
            puntajefinal=puntajefinal-descuento;

        rlutil::locate(38,10);cout<<"--------------------------------------"<<endl;
        rlutil::locate(41,11);cout<<"En total tuvo: "<<contfail<<" tiros fallidos."<<endl;
        rlutil::locate(38,12);cout<<"Se le descontaron un total de: "<<descuento<<" puntos."<<endl;
        rlutil::locate(40,13);cout<<"El puntaje final de "<<nombre1<<" fue de: "<<puntajefinal<<"."<<endl;
        rlutil::locate(42,14);cout<<"Obtuviste un total de: "<<contbunco<<" buncos."<<endl;
        rlutil::locate(38,15);cout<<"--------------------------------------"<<endl;

            //Comparador de puntajes para opcion 3//
            if (puntajefinal>puntajetabla[0]){
            puntajetabla[2]=puntajetabla[1];
            buncotabla[2]=buncotabla[1];
            nombretop3=nombretop2;

            puntajetabla[1]=puntajetabla[0];
            buncotabla[1]=buncotabla[0];
            nombretop2=nombretop1;

            puntajetabla[0]=puntajefinal;
            buncotabla[0]=contbunco;
            nombretop1=nombre1;
            }

            else if (puntajefinal>puntajetabla[1]){
            puntajetabla[2]=puntajetabla[1];
            buncotabla[2]=buncotabla[1];
            nombretop3=nombretop2;

            puntajetabla[1]=puntajefinal;
            buncotabla[1]=contbunco;
            nombretop2=nombre1;
            }
            else if(puntajefinal>puntajetabla[2]){
            puntajetabla[2]=puntajefinal;
            buncotabla[2]=contbunco;
            nombretop3=nombre1;
            }
contfail=0,puntajefinal=0;


}

 rlutil::locate(43,30);break;





 case 2: {string nombre[3];
         cout <<"Nuevo juego"<<endl;
         cout <<"Dos Jugadores!"<<endl;
         cout <<"Ingrese el nombre del jugador 1: "<<endl;
         cin>>nombre[0];
         system("cls");
         cout <<"Ingrese el nombre del jugador 2: "<<endl;
         cin>>nombre[1];
         system("cls");

         int fallo[2],falloant[2],gano[2],contbunco[2],lanzamiento[2],puntajeronda[2],puntajetot[2],puntajefinal[2],descuento[2],j=0,ronda=0,jugador=0,i;
         const int tam2=2;

        CargarVectores(fallo,falloant,gano,contbunco,lanzamiento,puntajefinal,puntajeronda,puntajetot,descuento,tam2);

        for (i=1;i<=1;i++){

            ronda++;

                while (puntajetot[0]<21 && puntajetot[1]<21){


        while (fallo[jugador]==falloant[jugador]&& puntajetot[0]<21 && puntajetot[1]<21){
        j++;

         rlutil::locate(30,1);cout<<"TURNO DE "<< nombre[jugador]<<" .";  cout<<" | "; cout<<"RONDA N°"<<ronda; cout<<" | "; cout<< "PUNTAJE ACUMULADO: " << puntajetot[jugador]<< endl;
         rlutil::locate(20,2);cout<<"--------------------------------------------------------------------"<<endl;
         rlutil::locate(42,3);cout<<"VECES QUE OBTUVO BUNCO: "<< contbunco[jugador-1]<<endl;
         rlutil::locate(25,4);cout<<"----------------------------------------------------------"<<endl;
         rlutil::locate(47,5);cout<<"LANZAMIENTO N°"<<j<<endl;
         rlutil::locate(30,6);cout<<"------------------------------------------------"<<endl;

         CargarDados(dado,tam);



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


         puntajetot[jugador]=puntajetot[jugador]+puntajeronda[jugador];

         rlutil::locate(41,22);cout<<" *************************"<<endl;
         rlutil::locate(41,23);cout<<"| "<<"PUNTAJE DE LA RONDA: "<<puntajeronda[jugador]<<" |"<<endl;
         rlutil::locate(41,24);cout<<" *************************"<<endl;


         system("pause");
         system("cls");


        }



        j=0;
        //aca va el cartel entre lanzamientos//
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

        //aca va el cartel entre rondas//
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
        puntajetot[0]=0,puntajetot[1]=0;
    }

    CalculadorDescuentos(descuento,puntajefinal,fallo,tam2);
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





case 3:

         rlutil::locate(50,9);cout<<"TABLA DE PUNTUACIONES"<<endl;
         rlutil::locate(27,13);cout<<"PUNTAJE";rlutil::locate(58,13);cout<<"NOMBRE";rlutil::locate(83,13);cout<<"CANT BUNCOS"<<endl;
         rlutil::setColor(rlutil::LIGHTGREEN);
         rlutil::locate(1,15);cout<<"1-";rlutil::locate(30,15);cout<<puntajetabla[0];rlutil::locate(57,15);cout<<nombretop1;rlutil::locate(87,15);cout<<buncotabla[0]<<endl;
         rlutil::setColor(rlutil::GREEN);
         rlutil::locate(1,17);cout<<"2-";rlutil::locate(30,17);cout<<puntajetabla[1];rlutil::locate(57,17);cout<<nombretop2;rlutil::locate(87,17);cout<<buncotabla[1]<<endl;
         rlutil::locate(1,19);cout<<"3-";rlutil::locate(30,19);cout<<puntajetabla[2];rlutil::locate(57,19);cout<<nombretop3;rlutil::locate(87,19);cout<<buncotabla[2]<<endl;
         rlutil::setColor(rlutil::BLACK);
  rlutil::locate(43,30);break;





 case 4:{ int buncosim=0, nsim;

          rlutil::locate(50,9);cout <<"Modo simulacion:"<<endl;
          rlutil::locate(27,13);cout <<"En este modo podra decidir el valor de los dados para simular jugadas."<<endl;
          rlutil::locate(38,15);cout <<"Ingrese cantidad de lanzamientos a simular: "<<endl;
          rlutil::locate(57,16);cin>> nsim;
        system("cls");
          for (i=1;i<=nsim;i++){
            rlutil::locate(42,15);cout<<"Ingrese valor del primer dado: "<<endl;
            rlutil::locate(57,16);cin>>dado[0];
        system("cls");
            rlutil::locate(42,15);cout<<"Ingrese valor del segundo dado: "<<endl;
            rlutil::locate(57,16);cin>>dado[1];
        system("cls");
            rlutil::locate(42,15);cout<<"Ingrese valor del tercer dado: "<<endl   ;
            rlutil::locate(57,16);cin>>dado[2];
        system("cls");



         sumadados=dado[0]+dado[1]+dado[2];

            if (dado[0]==dado[1] && dado[1]==dado[2] && dado[0]==i){
            puntajeronda=21;
            buncosim++;
            }
            else if (dado[0]==dado[1] && dado[1]==dado[2] && dado[0]!=i){
            puntajeronda=5;
            }
            else if(sumadados%5==0){
            puntajeronda=3;
            }
            else if (dado[0]==dado[1]-1 && dado[1]==dado[2]-1){
            puntajeronda=2;
            }
            else if(dado[0]==i||dado[1]==i||dado[2]==i){
            puntajeronda=1;
            }
            else{
            puntajeronda=0;
            contfail++;
            }



            puntajetot=puntajetot+puntajeronda;

         rlutil::locate(47,2);cout<<" MODO SIMULADO"<<endl;
         GraficoDados(dado);
         rlutil::locate(41,22);cout<<" *************************"<<endl;
         rlutil::locate(43,23);cout<<"PUNTAJE DE LA RONDA: "<<puntajeronda<<"."<<endl;
         rlutil::locate(41,24);cout<<"OBTUVO UN TOTAL DE: "<<buncosim<<" BUNCOS."<<endl;
         rlutil::locate(41,25);cout<<" *************************"<<endl;
         rlutil::locate(41,29);system("pause");
         system("cls");
          }

    contfail=0;
 }
 break;





 case 0:
     rlutil::setColor(rlutil::RED);
     rlutil::locate(49,15);cout <<"Se cerrara el programa."<<endl;

rlutil::setColor(rlutil::BLACK);
 rlutil::locate(41,29);return 0;
 break;


 }
 system("pause");
 system("cls");

 }

    return 0;
}
