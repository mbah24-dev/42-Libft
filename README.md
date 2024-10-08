# 📚 42-Libft

Bienvenue dans **42-Libft**, mon premier projet à l'École 42 ! 🎓 Ce projet a pour objectif de recréer une **librairie standard en C** afin de mieux comprendre les concepts fondamentaux de ce langage et d'améliorer ma maîtrise des fonctions de base. 🔧

## 📝 Description du projet

La **Libft** est une **librairie personnalisée** développée en **C**, regroupant des fonctions utilitaires que nous pourrons réutiliser dans nos futurs projets à 42. Ce projet constitue une première étape importante dans l'apprentissage du langage C en recréant des fonctions standard telles que celles présentes dans <string.h>, <stdlib.h>, et autres.

### Fonctions principales
Voici quelques-unes des fonctions que j'ai implémentées :

- **Fonctions de gestion des chaînes de caractères** :
  - ft_strlen : Calcule la longueur d'une chaîne de caractères.
  - ft_strcpy : Copie une chaîne de caractères.
  - ft_strcmp : Compare deux chaînes de caractères.

- **Fonctions de gestion de la mémoire** :
  - ft_memset : Remplit une zone mémoire avec une valeur spécifiée.
  - ft_bzero : Initialise une zone mémoire à zéro.
  - ft_memcpy : Copie des zones mémoire.

- **Fonctions d’allocations dynamiques** :
  - ft_strdup : Alloue de la mémoire et copie une chaîne de caractères.
  - ft_calloc : Alloue et initialise de la mémoire pour un tableau.

- **Fonctions de conversion** :
  - ft_atoi : Convertit une chaîne de caractères en entier.
  - ft_itoa : Convertit un entier en chaîne de caractères.

- Et bien d'autres...

---
## 🛠️ Utilisation

Pour utiliser cette bibliothèque dans vos propres projets, vous pouvez l'intégrer directement en compilant les fichiers .c et en incluant le fichier libft.h dans vos headers.

### Compilation

Utilisez le **Makefile** fourni pour compiler la bibliothèque. Voici les principales commandes disponibles :

bash
# Compiler la bibliothèque
make

# Nettoyer les fichiers objets
make clean

# Nettoyer les fichiers objets et l'exécutable
make fclean

# Recompiler la bibliothèque
make re
Une fois la compilation terminée, une bibliothèque statique libft.a sera générée. Vous pourrez l'utiliser en la liant avec vos projets C.

Exemple d’utilisation
c
Copier le code
#include "libft.h"

---
int main(void)
{
    char *str = "Hello, 42!";
    int len = ft_strlen(str);
    printf("La longueur de la chaîne est : %d\n", len);
    return (0);
}
🚀 Objectif du projet

Ce projet m'a permis de :

M'initier à l'utilisation des Makefiles pour automatiser la compilation.
Apprendre à gérer des pointeurs, la mémoire dynamique, et à manipuler des chaînes de caractères.
Approfondir ma compréhension du C, un langage bas niveau qui est essentiel pour devenir un développeur polyvalent.
🤝 Contribution

Ce projet est développé dans le cadre de mon cursus à 42 et constitue une partie intégrante de ma formation. Les suggestions sont les bienvenues ! Si vous souhaitez discuter des implémentations ou proposer des améliorations, n’hésitez pas à me contacter. 😊

🛡️ Licence

Ce projet est sous la licence de l'École 42. Utilisation et modification libre pour l'apprentissage.
