# pi-spigot
Obliczanie kolejnych cyfr dziesiętnego rozwinięcia liczby $\pi$ algorytmem Spigot [1].

## Implementacje
Algorytm wymaga arytmetyki dowolnej precyzji [2] i został zaimplementowany w wybranych językach programowania:

* [Ada](ada)
* [Haskell](haskell)
* [Prolog](prolog)
* [Python](python)

Wersja w języku **Haskell** pochodzi z artykułu [1]:
```haskell
piG3 = g(1,180,60,2) where
  g(q,r,t,i) = let (u,y)=(3*(3*i+1)*(3*i+2),div(q*(27*i-12)+5*r)(5*t))
               in y : g(10*q*i*(2*i-1),10*u*(q*(5*i-2)+r-y*t),t*u,i+1)
```

Wersje w innych językach są implementacjami powyższego algorytmu.

### Ada
W języku Ada, z braku obliczeń leniwych, wykorzystano współbieżność. Zadanie **Pi** wykonuje obliczenia w nieskończonej pętli **loop ... end loop**. Po wyznaczeniu kolejnej cyfry zadanie zostaje wstrzymane i czeka na spotkanie w punkcie **Get** aby oddać wyliczoną cyfrę.

Gdyby była potrzeba przerwania zadania **Pi**, można to zrobić instrukcją **abort Pi**.

### Haskell
Funkcja rekurencyjna **g** nie kończy swoich obliczeń i generuje nieskończenie długą listę kolejnych cyfr rozwinięcia liczby $\pi$. Dzięki leniwemu obliczaniu kolejna cyfra jest wyliczana dopiero wtedy gdy będzie potrzebna jej wartość. Do tego czasu obliczanie funkcji jest wstrzymane. 

### Prolog
Predykat **pi/5** wylicza kolejne cyfry liczby $\pi$ umieszczając je w strumieniu danych zrealizowanym otwartą listą przekazaną piątym argumentem. Kolejna cyfra pojawia się na otwartej liście **OUT** dopiero wtedy, gdy przestanie być ona nieukonkretnioną zmienną i będzie pasować do wzorca **[Digit | OUT_]**. Do tego czasu obliczenia wstrzymane są predykatem **freeze/2**. 

### Python
W programie zastosowano korutynę. W tym celu kolejne wartości zwracane są z funkcji **g** za pomocą instrukcji **yield**. Funkcja **g** oblicza kolejne cyfry liczby $\pi$ w nieskończonej pętli **while(True)**. Po zwróceniu wyliczonej cyfry funkcja wstrzymuje swoje działanie do chwili gdy potrzebna będzie wartość kolejnej cyfry. Dzięki temu można wywołanie funkcji **g** użyć jako generator w instrukcji **for ... in ...**. 

## Źródła
1. Jeremy Gibbons. Unbounded Spigot Algorithms for the Digits of Pi. The American Mathematical Monthly 113(4), 2006. DOI: [10.2307/27641917](http://dx.doi.org/10.2307/27641917) 
2. The GNU Multiple Precision Arithmetic Library. URL: [gmplib.org](https://gmplib.org/) 
