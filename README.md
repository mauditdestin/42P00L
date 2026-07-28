<h1 align="center">
  🏊 42P00L — Piscine C École 42
</h1>

<p align="center">
  <b>Un mois d'immersion intensive dans le langage C, la gestion mémoire de bas niveau et l'algorithmique.</b>
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="Language C" />
  <img src="https://img.shields.io/badge/School-42-000000?style=for-the-badge&logo=42&logoColor=white" alt="École 42" />
  <img src="https://img.shields.io/badge/Norme-42_Norminette-success?style=for-the-badge" alt="Norminette" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge" alt="Status" />
</p>

---

## 📌 Sommaire

- [À propos du projet](#-à-propos-du-projet)
- [Aperçu de la structure](#-aperçu-de-la-structure)
- [Tableau de bord des Modules (C00 à C13)](#-tableau-de-bord-des-modules-c00-à-c13)
- [Projets d'Équipe (Rushes)](#-projets-déquipe-rushes)
- [Projet Final : BSQ](#-projet-final--bsq)
- [Concepts Clés Travaillés](#-concepts-clés-travaillés)
- [Règles de Compilations & Norme](#-règles-de-compilations--norme)
- [Comment tester le dépôt](#-comment-tester-le-dépôt)

---

## 📝 À propos du projet

Ce dépôt **42P00L** rassemble l'intégralité du code produit durant les 4 semaines de la **Piscine C** de l'École 42.

La Piscine est un marathon d'apprentissage basé sur le **peer-learning**, le travail autonome et la rigueur. L'objectif est d'assimiler les fondamentaux de la programmation impérative en C sans l'aide de bibliothèques tierces, en réécrivant une grande partie de la bibliothèque standard (`libc`).

> ⚠️ **Note sur l'évaluation :** Chaque module est testé automatiquement par la Moulinette (tests d'intégration, fuites mémoires, crashs, respect strict des consignes) et validé par des soutenances entre pairs (*peer-evaluations*).

---

## 📂 Aperçu de la structure

```text
42P00L/
├── C00/            # Basics C, boucle & affichage via write
├── C01/            # Pointeurs, adresses & pointeurs sur pointeurs
├── C02/            # Manipulation de chaînes & drapeaux ASCII
├── C03/            # Comparaison & concaténation de chaînes
├── C04/            # Conversion de types & bases numériques (atoi, itoa)
├── C05/            # Mathématiques, récursivité & backtracking
├── C06/            # Arguments de la ligne de commande (argc, argv)
├── C07/            # Allocation dynamique de mémoire (malloc, free)
├── C08/            # Headers (.h), structures & macros préprocesseur
├── C09/            # Compilation séparée, Makefiles & création de libft.a
├── C10/            # File I/O (open, read, write, close) & gestion des erreurs
├── C11/            # Pointeurs sur fonctions, abstractions & tri générique
├── C12/            # Listes chaînées simples (t_list)
├── C13/            # Arbres binaires de recherche (t_btree)
├── Rush00/         # Generation de motifs dynamiques (42 patterns)
├── Rush01/         # Solver du casse-tête Skyscraper 4x4
├── Rush02/         # Convertisseur nombre -> texte à dictionnaire variable
└── BSQ/            # Biggest Square : Algorithme d'optimisation sur grille
