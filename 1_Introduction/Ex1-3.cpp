#include <iostream>

using namespace std;

struct Planete{
    string type;
    string nom;
    string FirstGaz;
    string SecondGaz;
};

int main() {

    Planete Systeme_solaire[8] = {{
                                          .type = "telluriques",
                                          .nom = "Mercure",
                                          .FirstGaz = "-- ",
                                          .SecondGaz = "-- "},
                                  {
                                          .type = "telluriques",
                                          .nom = "Venus  ",
                                          .FirstGaz = "CO2",
                                          .SecondGaz = "N2"},
                                  {
                                          .type = "telluriques",
                                          .nom = "Terre  ",
                                          .FirstGaz = "N2 ",
                                          .SecondGaz = "O2"},
                                  {
                                          .type = "telluriques",
                                          .nom = "Mars   ",
                                          .FirstGaz = "CO2",
                                          .SecondGaz = "N2"},
                                  {
                                          .type = "gazeuses   ",
                                          .nom = "Jupiter",
                                          .FirstGaz = "H2 ",
                                          .SecondGaz = "He"},
                                  {
                                          .type = "gazeuses   ",
                                          .nom = "Saturne",
                                          .FirstGaz = "H2 ",
                                          .SecondGaz = "He"},
                                  {
                                          .type = "gazeuses   ",
                                          .nom = "Uranus ",
                                          .FirstGaz = "H2 ",
                                          .SecondGaz = "He"},
                                  {
                                          .type = "gazeuses   ",
                                          .nom = "Neptune",
                                          .FirstGaz = "H2 ",
                                          .SecondGaz = "He"},
                                          }; //remplissage du tableau de structures avec toutes les planetes

    cout << "| Type de la planete | Nom de la planete | Gaz principal | Gaz secondaire |" << endl;
    for(int i = 0; i < 8; i++)
    {

        cout << "  " << Systeme_solaire[i].type
             << "              " << Systeme_solaire[i].nom
             << "              " << Systeme_solaire[i].FirstGaz
             << "              " << Systeme_solaire[i].SecondGaz << endl;
    }


    return 0;
}

