#include <iostream>

using namespace std;

int main() {
    int numar = 42; // O variabilã normalã care ?ine valoarea 42

    // 1. Declararea unui pointer cãtre un int
    // Folosim '*' pentru a spune cã 'p' este un pointer.
    // Folosim '&' (operatorul de adresã) pentru a lua adresa variabilei 'numar'.
    int* p = &numar;

    cout << "Valoarea variabilei 'numar': " << numar << endl;
    cout << "Adresa de memorie a lui 'numar': " << &numar << endl;
    cout << "Valoarea stocata in pointerul 'p' (adresa): " << p << endl;

    // 2. Dereferen?ierea (accesarea valorii de la adresa respectivã)
    // Folosind '*' în fa?a pointerului, accesãm valoarea din cutia spre care aratã.
    cout << "Valoarea de la adresa din 'p' (*p): " << *p << endl;

    // 3. Modificarea valorii prin intermediul pointerului
    *p = 100; // Schimbam valoarea de la adresa respectivã în 100

    cout << "\nDupã modificarea prin pointer (*p = 100):" << endl;
    cout << "Noua valoare a lui 'numar' este: " << numar << endl;

    return 0;
}