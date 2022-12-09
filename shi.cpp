#include <iostream>
#include <string>
#include "shi.hpp"

/****
 * Programme Quiz Est-vous plus Taoime ou Confuciuanisme : Quiz de 1 a 5 permettant de savoir si vous avez une pensée taoiste ou confusianiste puis vous explique la pensée taoiste et confusianiste
 * Name : SHI.cpp : Ficher d'implementations methodes et constructeurs
 * Date : 09/12/2022
 * Created by : Gregory Bhowany, Imane El Aiboud, Mohammed Jad Azour, Dahirou Abba
 */

// declaration de l'espace travailé
using namespace std;

// implementation des methodes
// affecter une valeur a une variable privée
void Shi::setCompteurNote(int compteurNote)
{
    _compteurNote = compteurNote;
}
// recuperer une variable privée
int Shi::getCompteurNote()
{
    return _compteurNote;
}
// methode verification si on met un nombre ou pas
bool Shi::verifcationNombre(string str)
{
    bool response;
    int note = 0;
    bool test = false;
    int stringLength = str.length();
    // verification si le string est convertible en int
    if (isdigit(str[0]) == false || stringLength != 1)
    {
        test = false;
        response = true;
        cout << "Erreur..veuillez saisir un nombre valide (entre 0 et 5) svp";
    }
    else
    {
        test = true;
    }

    // verification si le string est compris en 1 et
    if (test)
    {
        note = stoi(str);
        if (note < 1 || note > 5)
        {
            response = true;
            cout << "Erreur..veuillez saisir un nombre valide (de 0 a 5) svp";
        }
        else
        {
            setCompteurNote(getCompteurNote() + note);
            response = false;
        }
    }
    return response;
}

// methode qui s'occupera des questions et comptage des points
void Shi::questionnaire()
{
    bool reponse = true;
    string responseString = "";
    cout << "\nProjet SHI : La Chine par Gregory Bhowany, Imane El Aiboud, Mohammed Jad Azour, Dahirou Abba" << endl;
    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "\nNi Hao cher utilisateur ! Aujourd'hui nous allons faire un quiz de 10 questions afin de determiner si vous avez une pensee taoiste ou confusianiste !" << endl;
    cout << "Chaque questions/affirmations sera notees entre 1 (pas d'accord) et 5 (totalement d'accord) ! Soyez le plus honnete possible ! Qu-attendons-nous, c'est parti ! :) " << endl;
    // premiere question
    do
    {
        cout << "\nNumero yi (1) : Vous vous donnez tellement a fond dans une matiere que pour vous, c'est une seconde nature : ";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);

    // deuxieme question
    // reinitialisation de la variable reponse
    reponse = true;
    do
    {
        cout << "Numero er (2) : Vous donnez votre avis meme si tout le groupe dans lequel vous etes pense autrement : ";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);
    // trosieme question
    // reinitialisation de la variable reponse
    reponse = true;
    do
    {
        cout << "Numero san (3) : Vous vous donnez tellement a fond dans une matiere que pour vous, c'est une seconde nature : ";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);
    // quatrieme question
    // reinitialisation de la variable reponse
    reponse = true;
    do
    {
        cout << "Numero si (4) : Vous vous donnez tellement a fond dans une matiere que pour vous, c'est une seconde nature : ";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);
    // cinquieme question
    // reinitialisation de la variable reponse
    reponse = true;
    do
    {
        cout << "Numero wu (5) : Vous vous donnez tellement a fond dans une matiere que pour vous, c'est une seconde nature : ";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);

    // affichage de la moyenne de l'utilisateur
    cout << "\nVotre moyenne est de " << moyenneCompteur() << "/5 \nVous avez une pensee assez ";
    // condition si taoiste ou confusianiste
    if (moyenneCompteur() < 3)
    {
        confusianisme();
    }
    else if (moyenneCompteur() >= 3)
    {
        taoisme();
    }
}
// methode tao
void Shi::taoisme()
{
    cout << "taoiste ! \n"
         << endl;
}
// methode confusianiste
void Shi::confusianisme()
{
    cout << "confusianiste ! \n"
         << endl;
}
// methode moyenne reponse
int Shi::moyenneCompteur()
{
    return getCompteurNote() / 5; //a changer a 10
}

// integration du construteur par defaut
Shi::Shi(int compteurNote) : _compteurNote(compteurNote) {}