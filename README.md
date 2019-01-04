# Rubik-s-Cube

Descprition du contenu des fichiers :

algo.c : contient 3 fonctions pour effectuer respectivement les rotations de ligne, colonne et carré d'un cran à chaque fois.

algo_rev.c : contient 3 fonctions qui sont les fonctions inversent de celles contenues dans le fichier algo.c (les rotations s'effectuent dans l'autre sens).

is_in.c : contient 2 fonctions de 3 paramètres, la table étudiée, la colonne (ou ligne) étudiée et un nombre. La fonction renvoie un boolean égale à true si le nombre en paramètre est présent dans la colonne (ou ligne) indiquée en paramètre.

looking_space.c : contient une fonction prenant 4 paramètres : la table étudiée, 2 tableaux de taille 4 et un nombre. La fonction renvoie un tableau de 2 nombres correspondant aux coordonnées d'un point dont la valeur est différente du nombre en paramètre, et qui est une case considérée comme disponible pour servir de destination à une autre case. Les 2 tableaux en paramètre prennent les valeurs "BLOCKED" ou "EMPTY" : si une valeur est "empty", alors la ligne est ouverte à la recherche d'un espace.
Exemple : si on a 
lines[0] = BLOCKED ;
lines[1] = BLOCKED ;
lines[2] = EMPTY ;
lines[3] = BLOCKED ;
columns[0] = EMPTY ;
columns[1] = EMPTY ;
columns[2] = BLOCKED ;
columns[3] = BLOCKED ;
cela signifie que les seules cases où l'on peut rechercher une case disponible sont les cases [2,0] et [2,1]. Cela permet de bloquer certaines cases pour éviter de "casser" des carrés précédemment constitués.
−−−−−−−−−−−−−−−−−
| 2 | 1 | 3 | 0 |
−−−−−−−−−−−−−−−−−
| 0 | 0 | 1 | 1 |
−−−−−−−−−−−−−−−−−
| 2 | 2 | 3 | 0 |
−−−−−−−−−−−−−−−−−
| 2 | 3 | 1 | 3 |
−−−−−−−−−−−−−−−−−
En reprenant les lignes et le carré précédents, "look_for_space(table, lines, colunms, 1)" renverra comme résultat [2,0].

looking_value.c : fonctionne de la même manière que la fonction précédente, mais pour trouver la première occurence avec la valeur cherchée (4ème arguement). En reprenant l'exemple précédent, "look_for_value(table, lines, columns, 2)" renverra comme résultat [2,0].

rotate.c : contient 2 fonctions pour effectuer les rotations sur les colonnes (ou les lignes suivant la fonction). Ces fonctions prennent 3 paramètres : la table, la ligne (ou colonne) et le nombre de cran dont doit être effectué la rotation. Ces 2 fonctions réutilisent les fonctions des fichiers algo.c et algo_rev.c.

build_first.c : contient 2 fonctions. La première constitue une ligne avec les mêmes chiffres, la deuxième convertit cette ligne en carré. Ces deux fonctions réutilisent toutes les fonctions précédentes.

ruler.c : contient la fonction qui permet d'afficher le cube (sous la forme d'un carré, celui-ci contient 4 faces et chacune des faces a 4 cases). Les cases sont délimitées par des "-" et des "|". 

rubiks.h : contient les inclusions des fichiers précédents, et les définitions des constantes.

main.c : contient le déroulement du programme.
build_first_square est la fonction pour lancer la création du premier carré.
Dans la fonction main, les variables sont d'abord déclarées avec la mémoire associée et le rubik's cube est initialisé. Puis l'appel à la fonction build_first_square est effectué.

Le projet était individuel et s'est déroulé sur 2 jours, et a constitué à faire un rubik's cube à 4 faces et 4 couleurs (représentées par des nombres allant de 0 à 3). Le cube est présenté sous la forme d'un carré de 4 x 4 cases (4 sous-carrés de 4 cases). Il a été complété jusqu'à la constitution du premier carré (4 cases en haut à droite).


Exemple d'output du fichier exécutable dans un terminal :
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−

build first line

−−−−−−−−−−−−−−−−−
| 0 | 2 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 1 | 1 | 3 | 0 |
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−

−−−−−−−−−−−−−−−−−
| 0 | 0 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 3 | 1 | 1 | 1 |
−−−−−−−−−−−−−−−−−
| 0 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 0 | 2 | 2 | 3 |
−−−−−−−−−−−−−−−−−

−−−−−−−−−−−−−−−−−
| 0 | 0 | 0 | 3 |
−−−−−−−−−−−−−−−−−
| 3 | 1 | 2 | 1 |
−−−−−−−−−−−−−−−−−
| 2 | 3 | 2 | 1 |
−−−−−−−−−−−−−−−−−
| 0 | 2 | 1 | 3 |
−−−−−−−−−−−−−−−−−

−−−−−−−−−−−−−−−−−
| 0 | 0 | 0 | 1 |
−−−−−−−−−−−−−−−−−
| 3 | 1 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 2 | 3 | 2 | 1 |
−−−−−−−−−−−−−−−−−
| 3 | 0 | 2 | 1 |
−−−−−−−−−−−−−−−−−

−−−−−−−−−−−−−−−−−
| 0 | 0 | 0 | 0 |
−−−−−−−−−−−−−−−−−
| 3 | 1 | 2 | 1 |
−−−−−−−−−−−−−−−−−
| 2 | 3 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 2 | 1 | 3 | 1 |
−−−−−−−−−−−−−−−−−

build line to square
−−−−−−−−−−−−−−−−−
| 0 | 0 | 1 | 3 |
−−−−−−−−−−−−−−−−−
| 0 | 0 | 2 | 1 |
−−−−−−−−−−−−−−−−−
| 2 | 3 | 2 | 3 |
−−−−−−−−−−−−−−−−−
| 2 | 1 | 3 | 1 |
−−−−−−−−−−−−−−−−−
