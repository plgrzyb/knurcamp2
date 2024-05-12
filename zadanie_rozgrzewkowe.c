/* NIE DOTYKAJ */
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void weryfikacja1(void* ss, int sz)
{
    char* st = (char*)ss;
    int wiek = *st;
    if(wiek != 105)
    {
        printf("Błędne rozwiązanie\n");
        return;
    }
    st += sz / 3;
    uint64_t imiePtr = (*(uint64_t*)st);
    char* imie = (char*)imiePtr;
    st += sz / 3;

    if(strcmp(imie, "Jan") != 0)
    {
        printf("Błędne rozwiązanie\n");
        return;
    }
    float wzrost = *(float*)st;
    if(wzrost < 2.138 && wzrost > 2.136)
    {
        printf("Brawo poprawne rozwiązanie\n");
    }
    else
    {
        printf("Ups, błędne rozwiązanie\n");
    }
}
/* KONIEC SEKCJI NIE DOTYKAJ */

/*
 Treść zadania:

 Stwórz strukturę o nazwie `czlowiek`.
 Zrób żeby zawierała następujące pola:
 - `wiek` <- liczba całkowita (rozmiar standardowy)
 - `imie` <- no jego imie a co xD (ptr do stringa)
 - `wzrost` <- liczba zmiennoprzecinkowa w metrach amerykańskich np 1.234

 Stwórz człowieka o imieniu `Jan`, wieku 105 lat, wzroście 2 m 137 cm (w metrach amerykańskich - 1 metr = 1000 cm - 2m 137cm = 2.137)
 Pola wiek, imie, i wzrost muszą mieć taką samą koleność.

 Uruchom funckje `weryfikacja1` ze swojej funkcji main podając wskaźnik do człowieka oraz rozmiar struktury człowiek jako drugi parametr.

 ***** Zadanie na 6 albo gwiazdke jak zwał tak zwał *****
 Opisz co robi po kolei funckja `void weryfikacja1(void* ss, int sz)`
*/

int main(void)
{
    struct czlowiek {
            int wiek;
            char* imie;
            float wzrost;
    };

    struct czlowiek* Jan;
    Jan -> imie = "Jan";
    Jan -> wiek = 105;
    Jan -> wzrost = 2.137;
    weryfikacja1(Jan, sizeof(*Jan));
    //linijka 8: do st przypisuje lokacje pamięci ss
    //linijka 9: do wiek przypisuje lokacje pamięci st
    //linijka 10: if sprawdza czy wartość jest nierówna 105 i jesli to prawda to zwraca printf i returnem zakańcza działanie funkcji
    //linijka 15: do st przypisuje wartość st + sz / 3
    //linijka 16: nie wiem unsigned long long imiePtr równa się unsigned long long st?
    //linijka 17: imie równa się imiePtr
    //linijka 18: st równa się st + sz / 3
    //linijka 20: if sprawdza za pomocą funkcji strcmp(compare s1 to s2) czy równa się 0 i zwraca print i returnem zakańcza działanie funkcji
    //linijka 25: do wzrost przypisuje st wartosci float
    //linijka 26: if wzrost < 2.138 &&(operator logiczny and) wzrost > 2.136 jesli tak to zwraca poprawne i else jesli nie poprawne

    
    //pytania:
    // 1.mozna sie odnosic za pomoca typów zmiennej?
    // 2.jak sie odniesc do nazwy zmiennej w printf by pokazywalo w konsoli?
}
