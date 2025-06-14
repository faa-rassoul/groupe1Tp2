void affiche_tab(int tab[], int taille) {
    int i;
    for(i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Exemple d'utilisation
int main() {
    int tab[5] = {1, 2, 3, 4, 5};
    affiche_tab(tab, 5);
    return 0;
}