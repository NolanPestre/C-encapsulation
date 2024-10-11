// C++ encapsulation.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "point.h"
#include "Vecteur2.h"
#include "Entity.h"
#include "AMovable.h"
#include "Alive.h"
#include "IAttacker.h"
#include "StaticObject.h"
#include "BreakableObject.h"

int main(int argc[], const char * argv[])
{
    /*std::string str;
    std::vector < std::string > strArray;
    while (1) {
       
        std::cout << '\n' << "votre prenom : " << std::endl;
        std::cin >> str;
        strArray.push_back(str);
        std::cout << "la liste de mot est : " << std::endl;
        for (int i = 0; i < strArray.size(); i++) {
            std::cout << strArray[i] << ' ';
        };
    };*/


    /*point P;
    P.x = 0;
    P.y = 0;
    P.z = 0;
    std::cout << '\n' << P.ToString() << std::endl;*/

    Vecteur2 v(8.f, 5.f);

    /*std::cout << '\n' << "x : " << v.GetX() << " y : " << v.GetY() << std::endl; */

    Entity E;

    IAttacker D;

    E.SetPosXY(5.f, 9.f);

    /*std::cout << '\n' << "x : " << E.GetPosX() << " y : " << E.GetPosY() << std::endl;*/

    AMovable AM(v,7.f);

    Alive vie(10.f);

    D.attaque(&vie, 5.f);


    /*std::cout << '\n' << "vie max : " << vie.GetLifeM() << " vie actuel : " << vie.GetLifeN() << std::endl;*/

    BreakableObject ob(5.f, 15.f, 20.f);

    ob.TakeDammage(15.f);

    std::cout << '\n' << "vie max : " << ob.GetLifeM() << " vie actuel : " << ob.GetLifeN() << std::endl;


}