/* \brief Inclusion des bibliothèques qui peuvent être utiles dans le code */
#include <iostream>
#include <cstdint>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


/* \brief Addition de deux nombres de 32bits

La fonction d'addition fait la somme de deux nombres fournis.

\param n1 est ici un entier de 32bits
\param n2 est ici un entier de 32bits
\return La somme des deux entiers
\sa addi(int64_t n1, int64_t n2)
\sa addi(double n1, double n2)
\sa addi(float n1, float n2)
*/
int32_t addi(int32_t n1, int32_t n2)
{
return n1 + n2;
}

/* \brief Addition de deux nombres de 64bits

La fonction d'addition fait la somme de deux nombres fournis.

\param n1 est ici un entier de 64bits
\param n2 est ici un entier de 64bits
\return La somme des deux entiers
\sa addi(int32_t n1, int32_t n2)
\sa addi(double n1, double n2)
\sa addi(float n1, float n2)
*/
int64_t addi(int64_t n1, int64_t n2)
{
return n1 + n2;
}

/* \brief Addition de deux nombres de type float

La fonction d'addition fait la somme de deux nombres fournis.

\param n1 est ici un entier de type float
\param n2 est ici un entier de type float
\return La somme des deux entiers
\sa addi(int64_t n1, int64_t n2)
\sa addi(double n1, double n2)
\sa addi(int32_t n1, int32_t n2)
*/
float addi (float n1, float n2)
{
return n1 + n2;
}

/* \brief Addition de deux nombres de type double

La fonction d'addition fait la somme de deux nombres fournis.

\param n1 est ici un entier de type double
\param n2 est ici un entier de type double
\return La somme des deux entiers
\sa addi(int64_t n1, int64_t n2)
\sa addi(float n1, float n2)
\sa addi(int32_t n1, int32_t n2)
*/
double addi (double n1, double n2)
{
return n1 + n2;
}

/* \brief Soustraction de deux nombres de 32bits

La fonction de soustraction fait la diminution de n1 par n2.

\param n1 est ici un entier de 32bits
\param n2 est ici un entier de 32bits
\return La soustraction des deux entiers
\sa sous(int64_t n1, int64_t n2)
\sa sous(double n1, double n2)
\sa sous(float n1, float n2)
*/
int32_t sous(int32_t n1, int32_t n2)
{
return n1 - n2;
}

/* \brief Soustraction de deux nombres de 64bits

La fonction de soustraction fait la diminution de n1 par n2.

\param n1 est ici un entier de 64bits
\param n2 est ici un entier de 64bits
\return La soustraction des deux entiers
\sa sous(int32_t n1, int32_t n2)
\sa sous(double n1, double n2)
\sa sous(float n1, float n2)
*/
int64_t sous(int64_t n1, int64_t n2)
{
return n1 - n2;
}

/* \brief Soustraction de deux nombres de type float

La fonction de soustraction fait la diminution de n1 par n2.

\param n1 est ici un entier de 32bits
\param n2 est ici un entier de 32bits
\return La soustraction des deux entiers
\sa sous(int64_t n1, int64_t n2)
\sa sous(double n1, double n2)
\sa sous(int32_t n1, int32_t n2)
*/
float sous (float n1, float n2)
{
return n1 - n2;
}

/* \brief Soustraction de deux nombres de type double

La fonction de soustraction fait la diminution de n1 par n2.

\param n1 est ici un entier de type double
\param n2 est ici un entier de type double
\return La soustraction des deux entiers
\sa sous(int64_t n1, int64_t n2)
\sa sous(int32_t n1, int32_t n2)
\sa sous(float n1, float n2)
*/
double sous (double n1, double n2)
{
return n1 - n2;
}


/* \brief Multiplication de deux nombres de 32bits

La fonction de multiplication fait l'opération n1*n2

\param n1 est ici un entier de 32bits
\param n2 est ici un entier de 32bits
\return La multiplication des deux entiers
\sa mult(int64_t n1, int64_t n2)
\sa mult(double n1, double n2)
\sa mult(float n1, float n2)
*/
int32_t mult(int32_t n1, int32_t n2)
{
return n1 * n2;
}

/* \brief Multiplication de deux nombres de 64bits

La fonction de multiplication fait l'opération n1*n2

\param n1 est ici un entier de 64bits
\param n2 est ici un entier de 64bits
\return La multiplication des deux entiers
\sa mult(int32_t n1, int32_t n2)
\sa mult(double n1, double n2)
\sa mult(float n1, float n2)
*/
int64_t mult(int64_t n1, int64_t n2)
{
return n1 * n2;
}

/* \brief Multiplication de deux nombres de type float

La fonction de multiplication fait l'opération n1*n2

\param n1 est ici un entier de type float
\param n2 est ici un entier de type float
\return La multiplication des deux entiers
\sa mult(int64_t n1, int64_t n2)
\sa mult(double n1, double n2)
\sa mult(int32_t n1, int32_t n2)
*/
float mult (float n1, float n2)
{
return n1 * n2;
}

/* \brief Multiplication de deux nombres de type double

La fonction de multiplication fait l'opération n1*n2

\param n1 est ici un entier de type double
\param n2 est ici un entier de type double
\return La multiplication des deux entiers
\sa mult(int64_t n1, int64_t n2)
\sa mult(int32_t n1, int32_t n2)
\sa mult(float n1, float n2)
*/
double mult (double n1, double n2)
{
return n1 * n2;
}


/* \brief division de deux nombres de 32bits

La fonction de multiplication fait l'opération n1/n2

\param n1 est ici un entier de 32bits
\param n2 est ici un entier de 32bits
\return La multiplication des deux entiers
\sa divi(int64_t n1, int64_t n2)
\sa divi(double n1, double n2)
\sa divi(float n1, float n2)
*/
int32_t divi(int32_t n1, int32_t n2)
{
return n1 / n2;
}

/* \brief division de deux nombres de 64bits

La fonction de multiplication fait l'opération n1/n2

\param n1 est ici un entier de 64bits
\param n2 est ici un entier de 64bits
\return La multiplication des deux entiers
\sa divi(int32_t n1, int32_t n2)
\sa divi(double n1, double n2)
\sa divi(float n1, float n2)
*/
int64_t divi(int64_t n1, int64_t n2)
{
return n1 / n2;
}

/* \brief division de deux nombres de type float

La fonction de multiplication fait l'opération n1/n2

\param n1 est ici un entier de type float
\param n2 est ici un entier de type float
\return La multiplication des deux entiers
\sa divi(int64_t n1, int64_t n2)
\sa divi(double n1, double n2)
\sa divi(int32_t n1, int32_t n2)
*/
float divi (float n1, float n2)
{
return n1 / n2;
}

/* \brief division de deux nombres de type double

La fonction de multiplication fait l'opération n1/n2

\param n1 est ici un entier de type double
\param n2 est ici un entier de type double
\return La multiplication des deux entiers
\sa divi(int64_t n1, int64_t n2)
\sa divi(int32_t n1, int32_t n2)
\sa divi(float n1, float n2)
*/
double divi (double n1, double n2)
{
return n1 / n2;
}


/* \brief modulo de deux nombres de 32bits

La fonction de modulo donne le reste de la division euclydienne d'un nombre n1 par n2

\param n1 est ici un entier de 32bits
\param n2 est ici un entier de 32bits
\return Lereste de la division des deux entiers
\sa modu(int64_t n1, int64_t n2)
*/
int32_t modu (int32_t n1, int32_t n2)
{
return n1 % n2;
}

/* \brief modulo de deux nombres de 64bits

La fonction de modulo donne le reste de la division euclydienne d'un nombre n1 par n2

\param n1 est ici un entier de 64bits
\param n2 est ici un entier de 64bits
\return Lereste de la division des deux entiers
\sa modu(int32_t n1, int32_t n2)
*/
int64_t modu (int64_t n1, int64_t n2)
{
return n1 % n2;
}

/* Le main() est le programme principal, qui va contenir tous les paramètres */
int main()

{

/* 
\brief déclaration de deux variables, le choix du type de nombre que l'utilisateur va enter
\param choix est ici une variable de type int
\param choixtype est ici une variable de type int
*/
int choix, choixtype;

/*
\brief Affichage des différents choix à l'utilisateur, la demande de saisie et redirection de la valeur saisie dans la variable choixtype
*/
printf("\n\t\tType à disposition :\n");
printf("1 pour int32.\n2 pour int64.\n3 pour double.\n4 pour float.\n");
printf("Votre choix ? ");
scanf("%i", &choixtype);

/*
\brief Demande du type de calcul que l'utilisateur veut effectuer
*/
printf("\n\t\tQuel type de calcul voulez vous faire :\n");

/*
\brief Si l'utilisateur choisit un type int, il peut effectuer tous les types de calcul
*/
if(choixtype==1 || choixtype==2)
{
printf("1 pour addition.\n2 pour soustraction.\n3 pour division.\n4 pour multiplication.\n5 pour modulo\n");
}

/*
\brief Si l'utilisateur choisit un type double ou float, le modulo ne sera pas accessible
*/
if(choixtype==3 || choixtype==4)
{
printf("1 pour addition.\n2 pour soustraction.\n3 pour division.\n4 pour multiplication.");
}

/*
\brief Demande et redirection de la valeur saisie dans la variable choix
*/
printf("\nVotre choix ? ");
scanf("%i", &choix);

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/
if(choixtype==1 && choix==1)
{
int32_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=addi(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==1 && choix==2)
{
int32_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=sous(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==1 && choix==3)
{
int32_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=divi(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==1 && choix==4)
{
int32_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=mult(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==1 && choix==5)
{
int32_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=modu(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==2 && choix==1)
{
int64_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=addi(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/
if(choixtype==2 && choix==2)
{
int64_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=sous(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==2 && choix==3)
{
int64_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=divi(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==2 && choix==4)
{
int64_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=mult(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==2 && choix==5)
{
int64_t n1, n2, r;
printf("\nNombre 1 ?");
scanf("%i", &n1);
printf("\nNombre 2 ?");
scanf("%i", &n2);
r=modu(n1, n2);

printf("\n\n\t\tLe résultat est : %i.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==3 && choix==1)
{
double n1, n2, r;
printf("\nNombre 1 ?");
scanf("%lf", &n1);
printf("\nNombre 2 ?");
scanf("%lf", &n2);
r=addi(n1, n2);

printf("\n\n\t\tLe résultat est : %lf.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==3 && choix==2)
{
double n1, n2, r;
printf("\nNombre 1 ?");
scanf("%lf", &n1);
printf("\nNombre 2 ?");
scanf("%lf", &n2);
r=sous(n1,n2);

printf("\n\n\t\tLe résultat est : %lf.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==3 && choix==3)
{
double n1, n2, r;
printf("\nNombre 1 ?");
scanf("%lf", &n1);
printf("\nNombre 2 ?");
scanf("%lf", &n2);
r=divi(n1,n2);

printf("\n\n\t\tLe résultat est : %lf.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==3 && choix==4)
{
double n1, n2, r;
printf("\nNombre 1 ?");
scanf("%lf", &n1);
printf("\nNombre 2 ?");
scanf("%lf", &n2);
r=mult(n1,n2);

printf("\n\n\t\tLe résultat est : %lf.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==4 && choix==1)
{
float n1, n2, r;
printf("\nNombre 1 ?");
scanf("%f", &n1);
printf("\nNombre 2 ?");
scanf("%f", &n2);
r=addi(n1,n2);

printf("\n\n\t\tLe résultat est : %f.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==4 && choix==2)
{
float n1, n2, r;
printf("\nNombre 1 ?");
scanf("%f", &n1);
printf("\nNombre 2 ?");
scanf("%f", &n2);
r=sous(n1,n2);

printf("\n\n\t\tLe résultat est : %f.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==1)
\sa if(choixtype==4 && choix==4)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==4 && choix==3)
{
float n1, n2, r;
printf("\nNombre 1 ?");
scanf("%f", &n1);
printf("\nNombre 2 ?");
scanf("%f", &n2);
r=divi(n1,n2);

printf("\n\n\t\tLe résultat est : %f.\n\n\t\t", r);
}

/*
\brief Si le type est un int32_t et qu'on veut une addition
\param r est ici le résultat de l'opération qui va etre effectué
\sa if(choixtype==1 && choix==2)
\sa if(choixtype==1 && choix==3)
\sa if(choixtype==1 && choix==4)
\sa if(choixtype==1 && choix==5)
\sa if(choixtype==1 && choix==1)
\sa if(choixtype==2 && choix==2)
\sa if(choixtype==2 && choix==3)
\sa if(choixtype==2 && choix==4)
\sa if(choixtype==2 && choix==5)
\sa if(choixtype==2 && choix==1)
\sa if(choixtype==3 && choix==2)
\sa if(choixtype==3 && choix==3)
\sa if(choixtype==3 && choix==4)
\sa if(choixtype==3 && choix==1)
\sa if(choixtype==4 && choix==2)
\sa if(choixtype==4 && choix==3)
\sa if(choixtype==4 && choix==1)

Affiche dans un printf le résultat de l'opération : %i pour un type int, %lf pour un double, %f pour un float.

\return r=Le résultat de l'opération du même type que n1 et n2
*/

if(choixtype==4 && choix==4)
{
float n1, n2, r;
printf("\nNombre 1 ?");
scanf("%f", &n1);
printf("\nNombre 2 ?");
scanf("%f", &n2);
r=mult(n1,n2);

printf("\n\n\t\tLe résultat est : %f.\n\n\t\t", r);
}

return 0;
}
