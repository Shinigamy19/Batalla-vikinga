#include <iostream>
#include <string>
#include <chrono>

using namespace std;

int main() {
  // strings
  string name;
  string code;

  // int
  int vidas = 3;
  int auxiliar = 1;
  int i = 0;

  // float
  float metros = 0;
  float yardas = 0;

  // enums
  enum {
    startMenu,
    extras,
    playername,
    inicio,
    asesino,
    eliminarGuardias,
    celdas,
    badEnding,
    agarrasteHacha,
    sadEnding,
    endGood,
    fin,
    seguir,
    finalPacifico,
  } estadoJuego;

  // chars
  char playMenu = '0';
  char opcion = '0';

  // bools
  bool volverAJugar = true;
  bool hacha = false;

  estadoJuego = startMenu;

  while (volverAJugar) {

    switch (estadoJuego) {
    case startMenu:

      cout << R"(
 ____        _        _ _            
 |  _ \      | |      | | |           
 | |_) | __ _| |_ __ _| | | __ _      
 |  _ < / _` | __/ _` | | |/ _` |     
 | |_) | (_| | || (_| | | | (_| |     
 |____/ \__,_|\__\__,_|_|_|\__,_|     
 __      ___ _    _                   
 \ \    / (_) |  (_)                  
  \ \  / / _| | ___ _ __   __ _  __ _ 
   \ \/ / | | |/ / | '_ \ / _` |/ _` |
    \  /  | |   <| | | | | (_| | (_| |
     \/   |_|_|\_\_|_| |_|\__, |\__,_|
                           __/ |      
                          |___/      
 

                )";
      cout << endl;
      
      cout << "(J)ugar" << endl;
      cout << "(E)xtras" << endl;
      cout << "(S)alir" << endl; // F
      cin >> playMenu;
      if (playMenu == 'j' || (playMenu == 'J')) {
        cout << "¿Cómo jugar?:" << endl;
        cout << "Una vez que llegues a una toma de decisiones debes elegir un "
                "número o letra según lo requiera y presionar enter."
             << endl;
        cout << "Si no hay ninguna opción debes presionar cualquier tecla para "
                "continuar."
             << endl;
        cout << "Por ejemplo:\n";
        estadoJuego = playername;
      } else if (playMenu == 'E' || (playMenu == 'e')) {
        estadoJuego = extras;
      } else if (playMenu == 'M' || (playMenu == 'm')) {
        cout << "Presiona M para volver atras.";
        estadoJuego = startMenu;
      }

      else if (playMenu == 's' || (playMenu == 'S')) {
        return (0);
      } else {
        cout << "Letra incorrecta. Presione una tecla para volver al menú "
                "principal."
             << endl;
        estadoJuego = startMenu;
      }
      break;

    case extras:
      // system("clear");
      cout << "                         Desarrollado por:" << endl;
      cout << "\nShinigamy19" << endl;
      cout << "\n\nPresiona M para regresar al menu" << endl;
      cin >> opcion;

      if (opcion == 'm' || opcion == 'M')

      {
        estadoJuego = startMenu;
      }
      break;

    case playername:

      cout << "Elige el nombre de tu Vikingo/a: ";
      cin >> name;

      { estadoJuego = inicio; }
      break;

    case inicio:
      cout << R"(
'...'''',''....''''.......'''''.........'...'''''''''''''...
,,,;;;,,'.......';;,'...................',,....''''.''',,,,'
''................,,'....................''.......''''''''''
...............''',;,'''''...............''..........',;;::;
..........',,,''.................''''....................';c
........',,'......................,;,'.....................;
...''..','.........................,;;'.....................
'',,,,;,........''''''''''''........'',,,'.''......'',''....
,,,,;;'...''''''''''''''.''''''''........'',,,'.......','...
',,;;'.'''''''',;:;;;;;:cllc;'''......'....',,,'''',''..',''
';;'...'''',:ok0XXXK0KKXNWWN0l;,''''''......';,,,'''''....''
,,...'''',:xXWMMMMMMMMMMMMMMWKkd:,'''''......',,,,'.''......
....'''';oKWMMMMMMMMMMMMMMMMMMMWOl,,','''......',,'','......
..'',,:oONMMMMMMMMMMMMMMMMMMMMMMWKl;,'''''.......''',.......
..',;o0WMMMMMMMMMMMMMMMMMMMMMMMMMWKdc;'',''.......'''.......
.'',:OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkdc;,''.......''.......
.',;oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNOl,'.......''.......
',,cOWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKc'........'.. ....
,,;kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWx;........''......
..;kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNd,........'....  .
..':dk0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNk;''.......''......
...'';dXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKd:;;,'.....','.....
.....':o0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKOxlcclll:;,,''...
'......,oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXK0Oxc;''''...
....''.;kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOl;'''''.......
.....'.':oxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXxl;'''..........
........'';xWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0l,'';,'''..... .
..'''';cldkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0ko:,'''.... ..
k0KK0KXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0kxxxl:'...
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOc'.)";
      cout << endl;
      cout << "\nEstás refugiado en una cueva, sintiendo el frío de la noche que se cuela por las grietas de las rocas. No recuerdas hace cuanto tiempo estás ahí, pero sabes que no puedes quedarte mucho más tiempo." << endl;
     cout << "De repente, escuchas unos gritos en la distancia. Son gritos de guerra, de hombres que luchan. Empezo la caida de los tuyos y parecen haberse rendido.\nTu único recuerdo claro es quien sos, tu nombre: "
          << name << "." << endl;
      cout << "Ves la luz proveniente de las antorchas que llevan tus enemigos, te sientes nervioso"
           << endl;
      cout << "\n¿De donde vienen esos ruidos?... Dice una voz a lo lejos." << endl;
      cout << "Del pasillo. Responde otra." << endl;
      cout << "\nTu cuerpo entero se paraliza ante el miedo y vez como la luces se mueven." << endl;
      cout << "\nTu cuerpo responde y piensas en salir corriendo. No sabes si deberías acercarte o alejarte, pero decides seguir los sonidos para ver qué está sucediendo." << endl;
      cout << "\nTe mueves con gran velocidad y te escondes detras de unas piedras." << endl;
      cout << "Entre las sombras ves cómo se llevan a tu hermano." << endl;
      cout << "Tus ojos se llenan de lágrimas al no poder hacer nada." << endl;
      cout << "Sigues observando y cada vez se encuentran más cerca tuyo." << endl;
      cout << "\nTe alejas sigilosamente." << endl;
      cout << "Te escondes." << endl;
      cout << "Pero te sientés acorralado y no hay escapatoria." << endl;
      cout << "\nTodos los guardias se van." << endl;
      cout << "\nRespiras." << endl;
      cout << "Te mueves sigilosamente para ver si estas solo" << endl;
      cout << "\nAl comprobar que realmente se fueron te sientes tranquilo."<< endl;

      cout << "\nDe repente...."<< endl;
      cout << "\nHEYYYYYYY!!" << endl;
      cout << "Un soldado te encontró, notaste que está solo. \n¿Que vas a hacer?"
           << endl;
      cout << "\n1. Te enfrentas a él.\n\n2. Salir corriendo." << endl;

      cin >> opcion;

      if (opcion == '1') {
        vidas++;
        estadoJuego = asesino;
      } else {
        cout << "Sales corriendo hasta el final de la cueva.\nNervioso miras a todos lados y buscas un sitio donde ocultarte."
             << endl;
        cout << "\nAl salir, la luz del sol nubla la mirada, oyes el ruido de los pájaros y varios gritos.\n\n Sientes cómo perforan tu cuerpo."
             << endl;
        cout << "Sientes la brisa en la cara, antes de caer inerte en el suelo.\nLo último que tu hermano querría era verte así."
             << endl;
        cout << "..."<< endl;
        cout << "\nEscuchas la voz de tu hermano."<< endl;
        cout << "La cobardia no es digno de un buen guerrero, la muerte es la mejor fortuna para un Vikingo cobarde."<< endl;
        vidas--;
        estadoJuego = badEnding;
      }
      break;

    case asesino:

      cout << "Te armas de valor y lo atacas, el soldado cae al piso, vez una roca, la tomas y lo golpeas hasta dejarlo sin vida."
           << endl;
      cout << "Hiciste mucho ruido con la batalla." << endl;
      cout << "Enseguida te aseguras de que estas solo, con mucho cuidado avanzas."
           << endl;
      cout << "Tan sigiloso como los osos a los que solíhas cazar.\n" << endl;

      cout << "De a poco ves como la luz cada vez es más clara " << endl;
      cout << "Con mucho cuidado te acercas más al exterior." << endl;
      cout << "\nYa casi estás en la salida de la cueva." << endl;
      cout << "Observas cuidadosamente." << endl;
      cout << "\nAprecias el exterior y ves a tu gente siendo escoltada por soldados Ingleses."
           << endl;
      cout << "\nLos hombres están peleando contra el grupo de invasores extranjeros. Los vikingos son feroces en la batalla, pero están siendo superados en número."
           << endl;
      cout << "De repente, un vikingo herido cae al suelo a pocos metros de ti. Lo miras a los ojos y sabes que necesita ayuda." << endl;
      cout << "El odio te invade e intentas salir para ayudarlo." << endl;
      cout << "Pero alguien te detiene." << endl;
      cout << "\n Detente hijo de Odín." << endl;
      cout << "¿como te llamas?." << endl;
      cout << "- ... " << name << "- respondes en voz baja." << endl;
      cout
          << "Tranquilo, " << name
          << " la paciencia es virtud de sabios. No dejes que el odio te ciegue"
          << endl;
      cout << "Mi nombre es Axe." << endl;
      cout << "\nJoven" << name << " yo tambien busco venganza" << endl;
      cout << " Yo no busco venganza, solo quiero a mi hermano y ayudar a mi gente. Le respondes enojado." << endl;
      cout << "Mientras charlan, los soldados se retiran con sus prisioneros y ven la aldea debastada"
           << endl;
      cout << " Lentamente " << name
           << " y Axe se van acostumbrando al exterior y con gran dolor. En completo silencio ambos se encuentran siguiendo a los soldados."
           << endl;
      cout << "Nadie conoce mejor el bosque que los vikingos" << endl;
      cout << "Ellos solían cazar y tener feroces batallas en esas tierras."
           << endl;
      cout << "\nTras un rato de caminata" << endl;
      cout << name << " y Axe llegan al refugio de los soldados" << endl;
      cout << "\nAmbos analizan dónde están los prisioneros, a lo lejos y notan la presencia de 2 guardias ."
           << endl;
      cout << "Una vez localizados tienen 2 cosas por hacer. ¿ Que deberían hacer primero?"
           << endl;
      cout << "\n1. Liberar a los prisioneros.\n\n2. Eliminar a los guardias."
           << endl;
      cin >> opcion;

      if (opcion == '1') {
        estadoJuego = eliminarGuardias;
        vidas++;
      } else {
        cout << "Ambos se acercan a las celdas" << endl;
        cout << "Observan lentamente." << endl;
        cout << "Pero se dan cuenta que allí no hay personas." << endl;
        cout << "Se dan cuenta que es una trampa." << endl;
        cout << "Al querer huir oyes a Axe gritar de dolor." << endl;
        cout
            << "Al darte cuenta una espada intercepta tu cuerpo de lado a lado."
            << endl;

        cout << "\nMientras caes ves a tu hermano llorando tras las rejas."
             << endl;
        cout << "\nEscuchas la voz de Axe..."
             << endl;
        cout << "\nEsto no es lo que un verdadero vikingo hace, odín nos enseño que primero hay que pelear y luego hay que pensar."
             << endl;
        estadoJuego = badEnding;
        vidas--;
      }

      break;

    case eliminarGuardias:
      cout << R"(
		________6_____________6________
_______66_____________66_______
_____6666_____________6666_____
____66666_____________66666____
___666666_____666_____666666___
__6666666_____666_____6666666__
__666666666666666666666666666__
__666666666666666666666666666__
__6666666_____666_____6666666__
___666666_____666_____666666___
____66666_____666_____66666____
_____6666_____666_____6666_____
_______66_____666_____66_______
________6_____666_____6________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
______________666______________
 )";
      cout << endl;

      cout << "Al acercarse te das cuenta de que están aislados del resto de los soldados."
           << endl;
      cout << name
           << " y Axe los toman por detrás y los estrangulan hasta perder la respiración"
           << endl;
      cout << "Inspeccionan a los cuerpos y ven alrededor" << endl;
      cout << "Ven 2 hachas, las armas favoritas de los vikingos." << endl;
      cout << "Deseas agarrar las hachas?" << endl;
      cout << "\n1. Si.\n\n2. No." << endl;
      cin >> opcion;
      if (opcion == '1') {
        hacha = true;
        estadoJuego = agarrasteHacha;
      } else {
        hacha = false;
        estadoJuego = finalPacifico;
      }
      break;
      cout << name << " elije el camino pacifico...." << endl;
      cout << "Y con Axe deciden que es mejor hablar con los guardias para arreglar las cosas"
           << endl;
      cout << "\nSe acercan con las manos en alto hacia los guardias y exigen hablar con un superior."
           << endl;
cout << "Al llegar y ver que no habian matado a los guardias, acceden a dejarlos hablar con el rey." << endl;
      cout << "Y tras muchos intento de negociar el Rey accede." << endl;
      cout << "El rey da a elegir con cuanto de su tierra pagarian el rescate por sus compañeros."
           << endl;
      cout << "¿Cuanto metros de tierras quieren dar?." << endl;
      yardas = metros * 1.1960;
      cout << "Ingrese un numero del 1 al 100. " << endl;
      cin >> metros;
      cout << "Eso es como " << yardas << " yardas." << endl;
      if (metros <= 50) {
        cout << "Eso es muy poco, Matenlos…. " << endl;
        cout << "Intentan defenderse pero ya es muy tarde." << endl;
        cout << "Ves como matan a Axe que intenta protegerte y sientes como una espada te perfora la garganta." << endl;
        cout << "Al estar cayendo ves como tu hermano es brutalmente asesinado." << endl;
        cout << "Y solo escuchas su voz diciendo que los guerreros de verdad nunca sederian ni una yarda de su tierra sin pelear antes." << endl;
      } else {
        cout << "Eso es muchisimo, pero quiero mas, Matenlos." << endl;
        cout << "Sientes una espada te atraviesa por la espalda mientras vez la como arrancan la cabeza Axe." << endl;
       cout << "Mientras caes miras a la derecha, vez a tu hermano y todos los prisioneros en la horca." << endl;
        cout << "....." << endl;
        cout << "De repente estas en el centro de una ronda." << endl;
        cout << "Axe y tu hermano te miran con desprecio." << endl;
        cout << "Todos te dicen que un verdadero vikingo jamas negociaria sus tierras y pelearia hasta morir." << endl;
      }
      estadoJuego = badEnding;
      vidas--;
      break;
    case agarrasteHacha:
      cout << "\nToman las hachas, Ahora que están equipados" << endl;
      cout << "\n1. Tienes un arma, decides ir por los demás soldados.\n\n2. Volver a las celdas."
           << endl;
      cin >> opcion;
      if (opcion == '1') {

        cout << "Armados de valor los vikingos se acercan a los soldados"
             << endl;
        cout << "Tras librar una batalla pequeña...." << endl;
        cout << name << " y Axe se ven muy superados en numero" << endl;
        cout << "\nLuchan con todas sus fuerzas pero el enemigo es "
                "muchísimo mayor en número."
             << endl;
        cout << "Ambos caen en batalla mientras los prisioneros ven como se acaban todas sus esperanzas."
             << endl;
        cout << "Tu hermano mira como caes mal herido."<< endl;
        cout << "..."<< endl;
        cout << "Sientes pasos en la nieve..."<< endl;
        cout << "Estas lleno de sangre y con mucho dolor."<< endl;
        cout << "Miras a tu alredor y vez a Axe muerto."<< endl;
        cout << "Al ver mas alla, notas a tu hermano y los demas sobrevivientes muertos en las celdas."<< endl;
        cout << "Eres el unico sobreviviente..."<< endl;
        cout << "Con lagrimas en los ojos, caminas a la celda y vez un hacha."<< endl;
        cout << "La agarrás y caminas hacia donde esta tu hermano."<< endl;
        cout << "Tomás fuerte la mano de tu hermano y sin dudar te cortas el cuello."<< endl;
        cout << "Cuando de repente escuchas a Axe..."<< endl;
        cout << "Una muerte noble para un guerrero con mucha valentia..."<< endl;
        cout << " Ser un guerrero valiente es importante, pero no lo es todo. Los vikingos valoraban también la lealtad, la fortaleza emocional, la sabiduría y la astucia. Si hubieras buscado ayuda todavia estarias vivo."<< endl;
        
        estadoJuego = badEnding;
        vidas--;
      } else
        vidas++;
      estadoJuego = celdas;

      break;

    case celdas:
      cout << "Te acercas junto a Axe " << endl;
      cout << "Ambos se adentran a las celdas " << endl;
      cout << "¿Quieres observar dentro de las celdas? " << endl;

      for (i = 0; auxiliar; i++) {
        cout << "\n1. Si.\n\n2. No." << endl;
        cin >> opcion;
        if (opcion == '1') {

          cout << "Se dan cuenta que los prisioneros no están ahí." << endl;
          cout << "¿Deseas volver a mirar?." << endl;
          cout << "\n1. Si.\n\n2. No." << endl;
          if (opcion == '1') {
            auxiliar++;
          } else {
            cout << "\n- Tras investigar lograron dar con los prisioneros."
                 << endl;
          }
          estadoJuego = seguir;
        }
      case seguir:

        cout << "\nPara liberar a los prisioneros primero necesitas encontrar la llave"
             << endl;
        cout << " ALTO AHI!!!!." << endl;
        cout << "Unos guardias se enteran de tu presencia. Que deberíamos hacer?."
             << endl;

        cout << "1. - Pelear y luego buscar las llaves. \n2. - Huir y luego buscar la llave"
             << endl;
        cin >> opcion;

        if (opcion == '1') {
          cout << "En medio de la batalla logras conseguir las llaves" << endl;
          cout << "Tras liberar a los prisioneros observas a Axe" << endl;
          cout << "Y ves como muere atravesado por una espada" << endl;
          cout << "\nAbrazas a tu hermano y ves como una niña grita el nombre de Axe."
               << endl;
          cout << "Un rato más tarde descubres que esa niña es la hija de Axe."
               << endl;
          cout << "Lleno de lagrimas tomas a la niña en brazos y te vas junto a tu hermano"
               << endl;
          cout << "3 meses despues..." << endl;
          cout << name
               << " se ha convertido en el lider de la tribu y la paz reina denuevo"
               << endl;
          cout << name
               << " a menudo suele recordar a su gran amigo Axe el cual ahora es nombre de tu nuevo hijo….."
               << endl;
          estadoJuego = sadEnding;

        } else {
          cout << name
               << " y Axe sale corriendo al bosque en donde pierden a los enemigos con facilidad"<< endl;
          

          estadoJuego = endGood;
        }

      case fin:
        cout << "LLEGASTE AL FINAL. \nOjala hayas disfrutado.¿Quieres "
                "volver a jugar?\n1. Si.\n2. No."
             << endl;
        cout << R"(
███████╗██╗███╗░░██╗
██╔════╝██║████╗░██║
█████╗░░██║██╔██╗██║
██╔══╝░░██║██║╚████║
██║░░░░░██║██║░╚███║
╚═╝░░░░░╚═╝╚═╝░░╚══╝
)";
        cout << endl;

        cin >> opcion;
        if (opcion == '1') {
          estadoJuego = inicio;
        }

        else {
          cout << "Espero que te hayas divertido" << endl;
          volverAJugar = false;
        }
        return 0;
        break;

      } // fin del switch

    } // fin del while
  }
  return 0;
}
