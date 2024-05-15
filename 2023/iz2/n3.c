#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct _Vozlisce Vozlisce;

struct _Vozlisce {
    int vsebina; // »vsebina« vozlišča
    Vozlisce* desno; // kazalec na desnega soseda ( NULL v zadnjem stolpcu)
    Vozlisce* dol; // kazalec na spodnjega soseda ( NULL v zadnji vrstici)
};

Vozlisce* kreiraj(int vsebina, Vozlisce* desno, Vozlisce* dol) {
    Vozlisce* novo = malloc(sizeof(Vozlisce));

    novo->vsebina = vsebina;
    novo->desno = desno;
    novo->dol = dol;

    return novo;
}

Vozlisce* diagonala(Vozlisce* start, int* vsota) {
    Vozlisce* sega = start;
    int c = 0;

    while (sega->desno != NULL) {
        c++;
        sega = sega->desno;
    }

    Vozlisce* prvo = kreiraj(sega->vsebina, NULL, NULL);
    Vozlisce* pred = prvo;

    *vsota += prvo->vsebina;
    c--;

    while (sega->dol != NULL && c != -1) {
        start = start->dol;
        sega = start;

        for (int i = 0; i < c; i++) {
            sega = sega->desno;    
        }

        Vozlisce* novo = kreiraj(sega->vsebina, NULL, NULL);
        *vsota += novo->vsebina;

        pred->desno = novo;
        pred = novo;

        c--;
    }

    return prvo;
}

#define _VISINA 5
#define _SIRINA 4

Vozlisce* _MATRIKA[_VISINA][_SIRINA];

const int _VSEBINA[_VISINA][_SIRINA] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20},
};

void _napolni() {
    for (int i = 0; i < _VISINA; i++) {
        for (int j = 0; j < _SIRINA; j++) {
            _MATRIKA[i][j] = calloc(1, sizeof(Vozlisce));
            _MATRIKA[i][j]->vsebina = _VSEBINA[i][j];
        }
    }
    for (int i = 0; i < _VISINA; i++) {
        for (int j = 0; j < _SIRINA; j++) {
            if (j < _SIRINA - 1) {
                _MATRIKA[i][j]->desno = _MATRIKA[i][j + 1];
            }
            if (i < _VISINA - 1) {
                _MATRIKA[i][j]->dol = _MATRIKA[i + 1][j];
            }
        }
    }
}

void _izpisiDiagonalo(Vozlisce* v) {
    printf("Diagonala:\n");
    printf("[");
    Vozlisce* w = v;
    while (w != NULL) {
        if (w != v) {
            printf(", ");
        }
        printf("%d", w->vsebina);
        w = w->desno;
    }
    printf("]\n\n");
}

void _izpisiOriginal(Vozlisce* v0) {
    printf("Originalna matrika -- po vrsticah:\n");
    Vozlisce* v = v0;
    int i = 0;
    while (v != NULL) {
        printf("%d: [", i);
        Vozlisce* w = v;
        while (w != NULL) {
            if (w != v) {
                printf(", ");
            }
            printf("%d", w->vsebina);
            w = w->desno;
        }
        printf("]\n");
        v = v->dol;
        i++;
    }

    printf("\n");
    printf("Originalna matrika -- po stolpcih:\n");
    v = v0;
    i = 0;
    while (v != NULL) {
        printf("%d: [", i);
        Vozlisce* w = v;
        while (w != NULL) {
            if (w != v) {
                printf(", ");
            }
            printf("%d", w->vsebina);
            w = w->dol;
        }
        printf("]\n");
        v = v->desno;
        i++;
    }
}

void _pocistiDiagonalo(Vozlisce* v) {
    while (v != NULL) {
        Vozlisce* temp = v->desno;
        free(v);
        v = temp;
    }
}

void _pocistiOriginal(Vozlisce* v0) {
    Vozlisce* v = v0;
    while (v != NULL) {
        Vozlisce* w = v;
        while (w != NULL) {
            Vozlisce* temp = w->desno;
            free(w);
            w = temp;
        }
        v = v->dol;
    }
}

int main() {
    _napolni();
    int vsota = 0;
    diagonala(_MATRIKA[0][0], &vsota);

    printf("vsota = %d\n", vsota);

    _pocistiOriginal(_MATRIKA[0][0]);

    return 0;
}