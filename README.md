<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
   
</head>
<body>

<h1>📚 Libft</h1>
<p align="center">
  <img src="https://github.com/mbah24-dev/mbah24-dev/blob/main/42_badges/libfte.png" alt="libft 42 project badge"/>
</p>
<p>Bienvenue dans <strong>libft</strong> ! 🎉 Mon premier projet à l'École 42 🎓, où je recrée une <strong>librairie standard en C</strong>. 🔧</p>

<h2>📝 Description du projet</h2>

<p>La <strong>Libft</strong> est une <strong>librairie personnalisée</strong> développée en <strong>C</strong>, regroupant des fonctions utilitaires que nous pourrons réutiliser dans nos futurs projets à 42.</p>

<h3>Fonctions principales</h3>
<ul>
    <li><strong>Fonctions de gestion des chaînes de caractères</strong> :
        <ul>
            <li><code>ft_strlen</code> : Calcule la longueur d'une chaîne de caractères.</li>
            <li><code>ft_strlcpy</code> : Copie une chaîne de caractères.</li>
            <li><code>ft_strncmp</code> : Compare deux chaînes de caractères.</li>
        </ul>
    </li>
    <li><strong>Fonctions de gestion de la mémoire</strong> :
        <ul>
            <li><code>ft_memset</code> : Remplit une zone mémoire avec une valeur spécifiée.</li>
            <li><code>ft_bzero</code> : Initialise une zone mémoire à zéro.</li>
            <li><code>ft_memcpy</code> : Copie des zones mémoire.</li>
        </ul>
    </li>
    <li><strong>Fonctions d’allocations dynamiques</strong> :
        <ul>
            <li><code>ft_strdup</code> : Alloue de la mémoire et copie une chaîne de caractères.</li>
            <li><code>ft_calloc</code> : Alloue et initialise de la mémoire pour un tableau.</li>
        </ul>
    </li>
    <li><strong>Fonctions de conversion</strong> :
        <ul>
            <li><code>ft_atoi</code> : Convertit une chaîne de caractères en entier.</li>
            <li><code>ft_itoa</code> : Convertit un entier en chaîne de caractères.</li>
        </ul>
    </li>
</ul>

<h2>🛠️ Utilisation</h2>

<p>Pour utiliser cette bibliothèque dans vos projets, compilez les fichiers <code>.c</code> et incluez <code>libft.h</code>.</p>

<h3>Compilation</h3>

<p>Utilisez le <strong>Makefile</strong> pour compiler la bibliothèque. Voici les commandes disponibles :</p>

<pre><code># Compiler la bibliothèque
make

# Nettoyer les fichiers objets
make clean

# Nettoyer les fichiers objets et l'exécutable
make fclean

# Recompiler la bibliothèque
make re
</code></pre>

<p>Une fois la compilation terminée, une bibliothèque statique <code>libft.a</code> sera générée. Vous pourrez l'utiliser en la liant avec vos projets C.</p>

<h3>Exemple d’utilisation</h3>

```c
#include "libft.h"

int main(void)
{
    char *str = "Hello, 42!";
    int len = ft_strlen(str);
    printf("La longueur de la chaîne est : %d\n", len);
    return (0);
}
```
</code></pre>

<h2>🚀 Objectif du projet</h2>

<p>Ce projet m'a permis de :</p>
<ul>
    <li>M'initier à l'utilisation des <strong>Makefiles</strong> pour automatiser la compilation.</li>
    <li>Apprendre à gérer des <strong>pointeurs</strong>, la <strong>mémoire dynamique</strong>, et à manipuler des chaînes de caractères.</li>
    <li>Approfondir ma compréhension du <strong>C</strong>, un langage bas niveau qui est essentiel pour devenir un développeur polyvalent.</li>
</ul>

<h2>🤝 Contribution</h2>

<p>Ce projet est développé dans le cadre de mon cursus à <strong>42</strong> et constitue une partie intégrante de ma formation. Les suggestions sont les bienvenues ! Si vous souhaitez discuter des implémentations ou proposer des améliorations, n’hésitez pas à me contacter. 😊</p>

<h2>🛡️ Licence</h2>

<p>Ce projet est sous la licence de l'École 42. Utilisation et modification libre pour l'apprentissage.</p>

<footer>
    <p>✨ Merci d'avoir visité mon projet ! 🚀</p>
</footer>

</body>
</html>
