# pi-spigot
Obliczanie kolejnych cyfr dziesiętnego rozwinięcia liczby &pi; algorytmem Spigot [1].

## Implementacje
Algorytm wymaga arytmetyki dowolnej precyzji [3] i został zaimplementowany w wybranych językach programowania:

* [Ada](ada)
* [Haskell](haskell)
* [Prolog](prolog)
* [Python](python)

Wersja w języku **Haskell** pochodzi z artykułu [1] i korzysta z szeregu Gospera [2]:
```haskell
piG3 = g(1,180,60,2) where
  g(q,r,t,i) = let (u,y)=(3*(3*i+1)*(3*i+2),div(q*(27*i-12)+5*r)(5*t))
               in y : g(10*q*i*(2*i-1),10*u*(q*(5*i-2)+r-y*t),t*u,i+1)
```

Wersje w innych językach są implementacjami powyższego algorytmu.

### Ada
W języku Ada, z braku obliczeń leniwych, wykorzystano współbieżność. Zadanie **Pi** wykonuje obliczenia w nieskończonej pętli **loop ... end loop**. Po wyznaczeniu kolejnej cyfry zadanie zostaje wstrzymane i czeka na spotkanie w wejściu **Get** aby oddać wyliczoną cyfrę. Gdyby była potrzeba przerwania zadania **Pi**, można to zrobić instrukcją **abort**.

Oto przykład jak wydrukować pierwszych 10000 cyfr liczby &pi;:
```ada
for I in 1 .. 10_000 loop
   Spigot.Pi.Get (Digit => X);
   Ada.Integer_Text_IO.Put (Item => X, Width => 1);
end loop;
abort Spigot.Pi;
```

### Haskell
Funkcja rekurencyjna **g** nie kończy swoich obliczeń i generuje nieskończenie długą listę kolejnych cyfr rozwinięcia liczby &pi;. Dzięki leniwemu obliczaniu kolejna cyfra jest wyliczana dopiero wtedy gdy będzie potrzebna jej wartość. Do tego czasu obliczanie funkcji jest wstrzymane. 

Aby wyliczyć tylko pierwszych 10000 cyfr liczby &pi; można skorzystać z funkcji **take**:
```haskell
take 10000 pi_spigot
```

### Prolog
W programie zastosowano korutynę. Predykat **pi/5** wylicza kolejne cyfry liczby &pi; umieszczając je w strumieniu danych zrealizowanym otwartą listą przekazaną piątym argumentem. Kolejna cyfra pojawia się na otwartej liście **OUT** dopiero wtedy, gdy przestanie być ona nieukonkretnioną zmienną i będzie pasować do wzorca **[Digit | OUT_]**. Do tego czasu obliczenia wstrzymane są predykatem **freeze/2**. 

Aby wyliczyć tylko pierwszych 10000 cyfr liczby &pi; można ograniczyć listę do 10000 elementów:
```prolog
?- pi(X), length(X, 10000), forall(member(Y, X), write(Y)).
```

### Python
W programie zastosowano korutynę. W tym celu kolejne wartości zwracane są z funkcji **g** za pomocą instrukcji **yield**. Funkcja **g** oblicza kolejne cyfry liczby &pi; w nieskończonej pętli **while(True)**. Po zwróceniu wyliczonej cyfry funkcja wstrzymuje swoje działanie do chwili gdy potrzebna będzie wartość kolejnej cyfry. Dzięki temu można wywołanie funkcji **g** użyć jako generator w instrukcji **for ... in ...**. 

Aby wydrukować pierwszych 10000 cyfr liczby &pi; można zastosować funkcję **next**:
```python
gen = g(1, 180, 60, 2)
for i in range(0, 10000):
	print(next(gen), end='')
```

## Źródła
1. Jeremy Gibbons. Unbounded Spigot Algorithms for the Digits of Pi. The American Mathematical Monthly 113(4), 2006. DOI: [10.2307/27641917](http://dx.doi.org/10.2307/27641917) 
2. Ralph W. Gosper. Acceleration of series, Technical Report AIM-304, AI Laboratory, MIT, (March 1974). 
3. The GNU Multiple Precision Arithmetic Library. URL: [gmplib.org](https://gmplib.org/) 
