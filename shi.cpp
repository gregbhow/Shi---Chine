#include <iostream>
#include <string>
#include "shi.hpp"

/****
 * Programme Quiz Est-vous plus Taoime ou Confuciuanisme : Quiz de 1 a 5 permettant de savoir si vous avez une pensee taoiste ou confusianiste puis vous explique la pensee taoiste et confusianiste
 * Name : SHI.cpp : Ficher d'implementations methodes et constructeurs
 * Date : 09/12/2022
 * Created by : Gregory Bhowany, Imane El Aiboud, Mohammed Jad Azour, Dahirou Abba
 */

// declaration de l'espace travaile
using namespace std;

// implementation des methodes
// affecter une valeur a une variable privee
void Shi::setCompteurNote(int compteurNote)
{
    _compteurNote = compteurNote;
}
// recuperer une variable privee
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
        cout << "Erreur..veuillez saisir un nombre valide (de 0 a 5) svp" << endl;
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
            cout << "Erreur Veuillez reesayer en saisissant un nombre valide (de 0 a 5) svp" << endl;
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
    cout << "\nNi Hao cher utilisateur ! Aujourd'hui nous allons faire un quiz de 5 questions afin de determiner si vous avez une pensee taoiste ou confusianiste (ou les deux hein) !" << endl;
    cout << "Chaque questions/affirmations sera notees de 1 (pas d'accord du tout), 2 (plutot pas d'accord) , 3 (ni d'accord ni pas d'accord),4 (plutot d'accord) et 5 (totalement d'accord) ! \nSoyez le plus honnete possible ! Qu-attendons-nous, c'est parti ! :) " << endl;
    // premiere question
    do
    {
        cout << "Numero yi (1) : Vous vous donnez tellement a fond dans une matiere que pour vous, c'est une seconde nature : ";
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
        cout << "Numero san (3) : 'Rien ne se perd, rien ne se cree, tout se transforme' -Antoine Lavoisier. Etre vous-daccord? :";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);
    // quatrieme question
    // reinitialisation de la variable reponse
    reponse = true;
    do
    {
        cout << "Numero si (4) :Vous vous trouvez dans une salle 'vide'. Pour vous, presente-elle une infinite de possibilites (ex : un vaisseau spacial, le titanic ou soyons une game de LOL)? :";
        getline(cin, responseString);
        reponse = verifcationNombre(responseString);
    } while (reponse);
    // cinquieme question
    // reinitialisation de la variable reponse
    reponse = true;
    do
    {
        cout << "Numero wu (5) : Vous etes quelqu'un qui porte peu d'importance aux regles, les respecter c'est pas votre fort :";
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
    else if (moyenneCompteur() > 3)
    {
        taoisme();
    }
    else if (moyenneCompteur() == 3)
    {
        confusianismeEtTaoiste();
    }
}
// methode tao
void Shi::taoisme()
{
    cout << "taoiste ! " << endl;
    cout << "\nLe taoisme est un courant philosophique porte par Lao tseu en Chine, Le but du tao est l'ordre et le respect des regles et de la nature." << endl;
    cout << "Au lieu d'essayer de changer son prochain ou un objet, il faut se mettre a sa place et l'accompagner pour mieux le comprendre." << endl;
    cout << "Ex : Au lieu de construire des systemes complexes pour l'evacuation de l'eau lors d'une innondation, il suffirait juste de l'accompagner et creuser ou l'eau souhaite y aller." << endl;
    cout << "Comme dit le diction, tout les chemins menent a Rome, non? :)" << endl;
    cout << "\n Ce quiz montre que vous avez une pensee taoiste, pour vous la comprehension du prochain est primordiale dans la societe." << endl;
}
// methode confusianiste
void Shi::confusianisme()
{
    cout << "confusianiste !" << endl;
    cout << "\nLe confusianisme est un courant philosophique porte par Confusius en Chine, Le but du confusianisme est l'ordre et le respect des regles et de la nature par la force." <<endl;
    cout << "La pensee d'un groupe est plus puissante et imposante qu'un seul individu et s'il ne peut pas accepter ce principe, il faut le faire taire a tout pris." <<endl;
    cout << "Ce quiz montre que vous avez une pensee confusianiste, pour vous l'ordre et la discipline sont primordiale pour le bon fonctionnement de la societe." <<endl;
}
// methode confusianisme Et Taoiste
void Shi::confusianismeEtTaoiste()
{
    cout << "confusianiste et egalement taoiste ! Impressionant" << endl;
    cout << "\nLe taoisme est un courant philosophique porte par Lao tseu en Chine, Le but du tao est l'ordre et le respect des regles et de la nature." << endl;
    cout << "Au lieu d'essayer de changer son prochain ou un objet, il faut se mettre a sa place et l'accompagner pour mieux le comprendre." << endl;
    cout << "Ex : Au lieu de construire des systemes complexes pour l'evacuation de l'eau lors d'une innondation, il suffirait juste de l'accompagner et creuser ou l'eau souhaite y aller." << endl;
    cout << "Comme dit le diction, tout les chemins menent a Rome, non? :)" << endl;
    cout << "\nLe confusianisme est un courant philosophique porte par Confusius en Chine, Le but du confusianisme est l'ordre et le respect des regles et de la nature par la force." <<endl;
    cout << "La pensee d'un groupe est plus puissante et imposante qu'un seul individu et s'il ne peut pas accepter ce principe, il faut le faire taire a tout pris." <<endl;
    cout << "\nCe quiz montre que vous avez une pensee confusianiste et taoisme, pour vous l'ordre et la discipline sont parfois primordiale pour le bon fonctionnement de la societe." << endl;
    cout << "Mais vous essayez aussi de comprendre votre prochain afin de trouver une solution pacifique." <<endl;
}
// methode moyenne reponse
int Shi::moyenneCompteur()
{
    return getCompteurNote() / 5; // a changer a 10
}

// integration du construteur par defaut
Shi::Shi(int compteurNote) : _compteurNote(compteurNote) {}