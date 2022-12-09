#ifndef SHI
#define SHI 1
/****
 * Programme Quiz Est-vous plus Taoime ou Confuciuanisme : Quiz de 1 a 5 permettant de savoir si vous avez une pensée taoiste ou confusianiste puis vous explique la pensée taoiste et confusianiste
 * Name : SHI.hpp : Ficher de declarations des variables, methodes et constructeurs
 * Date : 09/12/2022
 * Created by : Gregory Bhowany, Imane El Aiboud, Mohammed Jad Azour, Dahirou Abba
 */
#include <string>
// declaration de la classe
namespace std
{
    class Shi
    {
        // declaration des variables
    private:
        int _compteurNote;

    public:
        // declarations des methodes
        void setCompteurNote(int compteurNote);
        int getCompteurNote();
        void questionnaire();
        void taoisme();
        void confusianisme();
        int moyenneCompteur();
        bool verifcationNombre(string str);
        // declarations des constructeurs
        Shi() = default;
        Shi(int compteurNote);
        Shi(const Shi &s) = default;
        Shi &operator=(const Shi &s) = default;
        ~Shi() = default;
    };
}
#endif