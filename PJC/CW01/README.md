*Zadanie 1.* Napisz program, który wyświetli ciąg znaków „Hello world”.
 
*Zadanie 2.* Napisz program, w którym użytkownik będzie musiał wprowadzić dwie liczbę całkowite, a następnie zostanie wyświetlona ich suma.
 
*Zadanie 3.* Napisz program, w którym użytkownik będzie musiał wprowadzić trzy liczby całkowite bez znaku (to nie oznacza dodatnie, wykorzystaj typ – unsigned int) a program wyświetli maksymalną z nich.
 
*Zadanie 4.* Napisz program, w którym użytkownik będzie musiał wprowadzić trzy liczby całkowite (wykorzystaj typ – int) a program wyświetli środkową z nich.
 
*Zadanie 5.* Napisz program, w którym użytkownik będzie musiał wprowadzić jedną liczbę rzeczywistą, a następnie oddzielnie zostanie wyświetla jej część całkowita i ułamkowa np.:
```
Wprowadź liczbę: 654.39
Cześć całkowita = 654
Cześć ułamkowa  = 0.39
```
*Zadanie 6.* Napisz aplikację wykonującą zamianę wartości dwóch zmiennych całkowitych w dwóch wersjach:
1)   z użyciem zmiennej pomocniczych;
2)   bez użycia zmiennej pomocniczej (to jest zadanie dodatkowe, proszę je zrobić w domu, ale proszę nie szukać odpowiedzi w Internecie).
 
*Zadanie 7.* Napisz funkcję get_fibonacci wyznaczającą N-tą liczbę Fibonacciego, gdzie: N jest wartością całkowitoliczbową bez znaku (typ unsigned int) podaną przez użytkownika.
 
*Zadanie 8.* Napisz funkcję wczytującą liczby całkowite, aż do pojawienia się zera i zwracającą trzecią co do wielkości z wczytanych, niezerowych liczb (zakładając, że było ich nie mniej niż trzy). Funkcja powinna być zadeklarowana w pliku nagłówkowym, a definicja powinna być w pliku źródłowym cpp, ale w innym niż funkcja main.
 
*Zadanie 9.* Napisz program, w którym użytkownik będzie wprowadzać 10 liczb całkowitych, a program będzie zliczać (i wyświetlać) ile jest  takich sąsiednich par, że wartość poprzednika była mniejsza od następnika i jeżeli tak jest to dana para będzie wyświetlona.

*Zadanie 10.* Gra w liczby. Użytkownik wymyśla jakąś liczbę całkowitą z przedziału od 0 do 500. Następnie komputer próbuje „zgadnąć” wymyśloną liczbę w następujący sposób: komputer pyta użytkownika czy jakaś (wygenerowana przez niego) liczba jest tą pomyślaną. Jeżeli tak to użytkownik wpisuje zero i aplikacja kończy się, jak pomyślana liczba jest mniejsza to użytkownik wprowadza 1, a jak większa to 2 i komputer pyta ponownie, aż do ustalenia pomyślanej liczby.
Napisz aplikację, która znajdzie wymyśloną liczbę przy najmniejszej liczbie zapytań.
 
*Zadanie 21.* Co będzie wynikiem działania poniższego programu - operacje poprzednikowe i następnikowe. Uwaga: przy operacji paste&copy zamień cudzysłowy z drukarskich na zwykłych, bo program może się nie skompilować.
```cpp
#include <iostream> 

using namespace std; 

int main(void) 
{ 
    int f1 = 10, f2 = 20; 
    cout << "Linia 1 " << f1++ + f2++ << endl; 
    cout << "Linia 2 " << f1 << "," << f2++ << endl; 
    f1 = 10; 
    f2 = 20; 
    cout << "Linia 3 " << ++f1 + ++f2 << endl; 
    cout << "Linia 4 " << f1 << "," << f2++ << endl; 
    f1 = 10;
    f2 = 20;
    cout << "Linia 5 " << (f1++<f2++?++f1:++f2) << endl; 
    cout << "Linia 6 " << f1 << "," << f2++ << endl; 
    
    return 0; 
}
```
 
*Zadanie 22.* Kompilacja warunkowa – uruchom ten program bez modyfikacji, zobacz co zostanie wyświetlone, a następnie usuń drugą linię kodu i również uruchom. Czy się różni się instrukcja #ifdef Polish  od instrukcji  if(Polish)?

```cpp
#include <iostream>
#define Polish 1

using namespace std;
 
int main(void) {
    int one, two;
    cin >> one >> two;
 
    #ifdef Polish
       cout << "Suma jest równa ";
    #else
       cout << "Sum is equal ";
    #endif
 
    cout << (one + two) << endl;
 
    return 0;
}
```
 
*Zadanie 23.* Na podstawie wiedzy z literatury, napisz dwa makra:  Wieksza(a,b) i Mniejsza(a,b) wyznaczające wartość mniejszą z dwóch liczb a i b. Wykorzystaj operator warunkowy.

Przykład napisania makra:
```cpp
#define  Wieksza(a, b) (a<b?b:a)
```

Wywołanie
```cpp
int a = 10, b = 34;
cout << Wieksza(a, b);

float c=10f, d = 20f;
cout << Wieksza(c, d);
```
 
*Zadanie 24.* Korzystając z makr z zadania 23 napisz makra WiekszaZTrzech(a,b,c) i MniejszaZTrzech(a,b,c)  obliczające odpowiednio najmniejszą i najmniejszą z trzech podanych liczb. Jakie jest niebezpieczeństwo używania makr?

*Zadanie 25.* Korzystając z przykładu 1 (poniżej), napisz makro SQRT, który wyznaczy pierwiastek kwadratowy z liczby wprowadzonej z klawiatury (UWAGA: zwróć uwagę na obsługę błędów i pamiętaj o liczbach ujemnych).
 
*Zadanie 26.* Napisz funkcję print_sinus, która wypisze wartości funkcji sinus z zakresu od 0 do 360 stopni ze skokiem co 30 stopni. Pamiętaj o  #include <math>. Czy wyświetlone zostały poprawne wyniki? Co Ci się nie podoba? Radiany <-> Stopnie?


*Przykład 1.* Wyznaczanie pierwiastka. Zwróć uwagę na linię #include <math.h>. 

```cpp
#include <math.h> 
#include <iostream> 

int main(void) 
{ 
    int val = 16; 
    double res; 
    res = sqrt(val); 
    cout << res << endl; 
    return 0; 
}
```
