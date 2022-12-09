#include <iostream>
#include <string>
#include "shi.hpp"

/****
 * Programme Quiz Est-vous plus Taoime ou Confuciuanisme : Quiz de 1 a 5 permettant de savoir si vous avez une pensée taoiste ou confusianiste puis vous explique la pensée taoiste et confusianiste
 * Name : main.cpp : Ficher d'appel des méthodes
 * Date : 09/12/2022
 * Created by : Gregory Bhowany, Imane El Aiboud, Mohammed Jad Azour, Dahirou Abba
 */

// declaration de l'espace travailé
using namespace std;

int main(void)
{
    Shi shi(0);
    shi.questionnaire();
};