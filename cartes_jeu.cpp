#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

using namespace std;

//creons une enumeration de couleur des cartes
enum Couleur{
    Coeur, Carreau, Trefle, Pique
};

//creons une enumeration de valeur de la carte
enum Valeur{
    As, Deux, Trois, Quatre, Cinq, Six, Sept, Huit, Neuf, Dix, Valet, Dame, Roi
};

//creons la structure carte aui comporte la couleur et la valeur
struct Carte{
    Valeur valeur;
    Couleur couleur;
};

/*fonction de distribution des  cartes par joueurs
std::vector<Carte> distribuermain(Carte jeu[], int nbre_cartes, int i){
    std::vector<Carte> main;

    for(int j=0; j<nbre_cartes; j++){
        if(i<52){
            for(i=0;i<=4;i++){
                jeu[i].couleur = static_cast<Couleur>(std::rand()%4);
                jeu[i].valeur = static_cast<Valeur>(std::rand()%13);
            
            main.push_back(jeu[i]);
            i++;
            }
            
        
        }else{
            std::cout<<"Attention: plus assez de cartes dans le jeu. \n";
        }
    }
    return main;
}*/

/*
enum MyEnum {
    Value0,
    Value1,
    Value2
};

std::string ToString(MyEnum value){
    if (value == MyEnum::Value0) return "Value0";
    if (value == MyEnum::Value1) return "Value1";
    return "Value2";
}*/


//fonction pour afficher la valeur de la carte
    Valeur affiche_valeur(Valeur v){

        if(v==Valeur::As){
            std::cout<<" As ";
        }
        if(v==Valeur::Deux){
            std::cout<<" 2 ";
        }
        if(v==Valeur::Trois){
            std::cout<<" 3 ";
        }
        if(v==Valeur::Quatre){
            std::cout<<" 4 ";
        }
        if(v==Valeur::Cinq){
            std::cout<<" 5 ";
        }
        if(v==Valeur::Six){
            std::cout<<" 6 ";
        }
        if(v==Valeur::Sept){
            std::cout<<" 7 ";
        }
        if(v==Valeur::Huit){
            std::cout<<" 8 ";
        }
        if(v==Valeur::Neuf){
            std::cout<<" 9 ";
        }
        if(v==Valeur::Dix){
            std::cout<<" 10 ";
        }
        if(v==Valeur::Valet){
            std::cout<<" Valet ";
        }
        if(v==Valeur::Dame){
            std::cout<<" Dame ";
        }
        if(v==Valeur::Roi){
            std::cout<<" Roi ";
        } 
        return v;
    }
    

int main(){

   // std::cout << "value enum = " << ToString(MyEnum::Value0) << std::endl;

    //remplissons le jeu de cartes

    Carte jeu[52];
    int i = 0;

    for(int c= Coeur; c<= Pique; c++){

        for(int v= As; v<= Roi; v++){

            jeu[i].couleur=static_cast<Couleur>(c);
            jeu[i].valeur=static_cast<Valeur>(v);
            i++;            
        }
    }

                //afficher le tableau

                for(int c=0;c<=3;c++){
                    for(int v=0;v<=12;v++){
                       switch(c){
                        case 0:{
                            cout<<"coeur_";
                            break;
                        }
                        case 1:{
                            cout<<"carreau_";
                            break;
                        }
                        case 2:{
                            cout<<"trefle_";
                            break;
                        }
                        case 3:{
                            cout<<"pique_";
                            break;
                        }
                       }
                       switch(v){
                        case 0: cout<<"As";
                            break;
                        case 1: cout<<"2" ;
                            break;
                        case 2: cout<<"3";
                            break;
                        case 3: cout<<"4";
                            break;
                        case 4: cout<<"5";
                            break;
                        case 5: cout<<"6";
                            break;
                        case 6: cout<<"7";
                            break;
                        case 7: cout<<"8";
                            break;
                        case 8: cout<<"9";
                            break;
                        case 9:cout<<"10";
                            break;
                        case 10:cout<<"Valet";
                            break;
                        case 11: cout<<"Dame";
                            break;
                        case 12: cout<<"Roi";
                            break;
                            
                    }
                    cout<<endl;
                       
                    }
                    cout<<endl;
                }
            

    //initialisation du generateur de nombres aleatoires

    std::srand( std::time(0));

    //melange des cartes du jeu

    std::random_shuffle(std::begin(jeu), std::end(jeu));

    //affichage

    for(int c=0;c<=3;c++){
        for(int v=0;v<=12;v++){
           switch(c){
            case 0:{
                cout<<"coeur_";
                break;
            }
            case 1:{
                cout<<"carreau_";
                break;
            }
            case 2:{
                cout<<"trefle_";
                break;
            }
            case 3:{
                cout<<"pique_";
                break;
            }
           }
           switch(v){
            case 0: cout<<"As";
                break;
            case 1: cout<<"2" ;
                break;
            case 2: cout<<"3";
                break;
            case 3: cout<<"4";
                break;
            case 4: cout<<"5";
                break;
            case 5: cout<<"6";
                break;
            case 6: cout<<"7";
                break;
            case 7: cout<<"8";
                break;
            case 8: cout<<"9";
                break;
            case 9:cout<<"10";
                break;
            case 10:cout<<"Valet";
                break;
            case 11: cout<<"Dame";
                break;
            case 12: cout<<"Roi";
                break;
                
        }
        cout<<endl;
           
        }
        cout<<endl;
    }

    
    //distibuer une main de 5 cartes
    
    std::vector<Carte> main;
    for(i=0;i<=5;i++){
        jeu[i].couleur = static_cast<Couleur>(std::rand()%4);
        jeu[i].valeur = static_cast<Valeur>(std::rand()%13);
    
    main.push_back(jeu[i]);
    i++;
    }


    //affichage de la main du joueur

    std::cout<<"\n Main du joueur : \n";

    for(const auto& Carte:main){
        switch (Carte.valeur){
            case As: affiche_valeur(As);
                break;
            case Deux: affiche_valeur(Deux) ;
                break;
            case Trois: std::cout<<"3";
                break;
            case Quatre: std::cout<<"4";
                break;
            case Cinq: std::cout<<"5";
                break;
            case Six: std::cout<<"6";
                break;
            case Sept: std::cout<<"7";
                break;
            case Huit: std::cout<<"8";
                break;
            case Neuf: std::cout<<"9";
                break;
            case Dix: std::cout<<"10";
                break;
            case Valet: std::cout<<"Valet";
                break;
            case Dame: std::cout<<"Dame";
                break;
            case Roi: std::cout<<"Roi";
                break;
        }

        std::cout<<"de";

        switch(Carte.couleur){
            case Coeur: std::cout<<"Coeur";
                break;
            case Carreau: std::cout<<"Carreau";
                break;
            case Trefle: std::cout<<"Trefle";
                break;
            case Pique: std::cout<<"Pique";
                break;
        }
        std::cout<<"\n";
    } 
    


}