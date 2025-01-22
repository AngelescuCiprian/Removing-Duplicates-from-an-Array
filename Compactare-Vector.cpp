#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void compactare(int v[], int* n) {
    int i, j, k;

    // Parcurgem vectorul
    for (i = 0; i < *n - 1; i++) {
        for (j = i + 1; j < *n; ) {
            if (v[i] == v[j]) {
                // Dacă există un duplicat, eliminăm elementul
                for (k = j; k < *n - 1; k++) {
                    v[k] = v[k + 1];
                }
                (*n)--; // Reducem dimensiunea vectorului
            }
            else {
                j++; // Doar trecem la următorul element dacă nu eliminăm
            }
        }
    }
}
int main()
{
    int a[125], m;
    printf("Introduceti elementele vectorului: ");
    scanf("%d",&m);
    for (int i = 0;i < m;i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    compactare(a, &m);
    printf("Vector compactat:\n");
    for (int i = 0;i < m;i++)
        printf("%d ", a[i]);
    
}

