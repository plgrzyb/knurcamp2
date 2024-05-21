#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int a[], int array_size){
    int i, j, temp;
    for (i = 0; i < (array_size - 1); ++i)
    {
        for (j = 0; j < array_size - 1 - i; ++j )
        {
            if (a[j] > a[j+1])
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
//    Zadanie 1:
//
//    Napisz używając C program hello world który wypisze w konsoli jakiś tam string jaki chcesz.
//    Ale ważne żebyś dał nową linie na końcu.
//    char* spuha = "spuha";
//    printf("mam mniej niz %s 13\n", spuha);


//    Zadanie 2:
//    Przyjmij 3 parametry (może to być albo argument programu albo możesz odczytać 3 zmienne z inputu użytkownika).
//    1 parametr to liczba całkowita
//    2 parametr to jeden z tych znaków: * / + -
//    3 parametr to liczba całkowita
//    Wykonaj operację matematyczną która powstanie z tych zmiennych i wypisz jej rezultat na ekranie.
//    int num;
//    printf("Podaj 1 liczbe: ");
//    scanf("%d", &num);
//    char znak[2];
//    printf("Podaj znak: ");
//    scanf("%s", &znak[0]);
//    int num2;
//    printf("Podaj 2 liczbe: ");
//    scanf("%d", &num2);
//    int wynik;
//
//    if(znak[0] == '*'){
//        wynik = num * num2;
//    } else if(znak[0] == '/'){
//        wynik = num / num2;
//    } else if(znak[0] == '+'){
//        wynik = num + num2;
//    } else if(znak[0] == '-'){
//        wynik = num - num2;
//    } else{
//        printf("spuha");
//    }
//    printf("%d", wynik);


//    Zadanie 3:
//    Poproś użytkownika o podanie 1 liczby całkowitej N.
//    Wypisz ciąg fibonacziego do liczby N.
//    int num;
//    printf("Podaj liczbę: ");
//    scanf("%d", &num);
//    int num2 = 0;
//    int num3 = 1;
//    int x;
//    for(int i = 1; i <= num; i++){
//        printf("%d\n", x);
//        x = num2 + num3;
//        num2 = num3;
//        num3 = x;
//    }


//    Zadanie 4:
//    Poproś użytkownika o podanie 2 stringów.
//    Połącz te 2 stringi ze sobą i zapisz je do pliku dupa.txt.
//    char s1[21];
//    char s2[37];
//    printf("%s", "Podaj string \n");
//    scanf("%s", s1);
//    printf("%s", "Podaj string \n");
//    scanf("%s", s2);
//
//    char* result = malloc(strlen(s1) + strlen(s2) + 1);
//
//    sprintf(result, "%s%s", s1, s2);
//
//    FILE* ptr;
//    ptr = fopen("dupa.txt", "w");
//    if(ptr == NULL){
//        printf("%s", "XD");
//        exit(1);
//    }
//    fprintf(ptr, "%s", result);
//    free(result);
//    fclose(ptr);

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    Zadanie 5:
//    Stwórz strukturę czlowiek która będzie zawierała poniższe pola:
//      imie
//      wiek
//      zawod
//    Stwórz funkcję zapisującą do pliku strukturę człowiek (nazwa pliku podana jako argument programu numer 2).
//    Pod 1 argumentem podaj rodzaj operacji.
//            Np: ODCZYT i ZAPIS
//    A 2 argument tego programu to nazwa pliku na którym mamy wykonać tą operację.
//    Stwórz funkcję odczytującą strukturę z pliku i zwracającą te dane jako strukturę.
//    Stwórz funkcję wypisującą zawartość struktury w konsoli.
//     Wywołaj ją po odczytaniu pliku.
//    struct czlowiek {
//        char* imie;
//        int wiek;
//        char* zawod;
//    };

//    Zadanie 6:
//    Zapytaj użytkownika o 1 liczbę N.
//    Po otrzymaniu tej liczby stwórz tablicę o rozmiarze tej liczby.
//    Poproś użytkownika o wypełnienie tej tablicy (pytaj go po kolei o każdą zmienną).
//    Użytkownik poda Ci N liczb całkowitych.
//    Posortuj te liczby od największej do najmniejszej i je wypisz w tej kolejności.
    int N;
    printf("%s", "Podaj 1 liczbe N: ");
    scanf("%d", &N);
    int array[N];
    for(int i = 0; i < N; i++){
        printf("%s", "Podaj liczbe: ");
        scanf("%d", &array[i]);
    }

    printf("\n%s\n", "przed posortowaniem");
    for(int i = 0; i < N; i++) {
        printf("%d,", array[i]);
    }

    printf("\n%s\n", "po posortowaniu");
    sort(array, N);
    for(int i = 0; i < N; i++) {
        printf("%d,", array[i]);
    }
    return 0;
}