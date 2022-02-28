# pi-spigot
Obliczanie kolejnych cyfr dziesiętnego rozwinięcia liczby Pi algorytmem Spigot [1].

## Implementacje
Algorytm wymaga arytmetyki dowolnej precyzji [2] i został zaimplementowany w wybranych językach programowania:

* [Ada](ada)
* Haskell
* Prolog
* Python

Wersja w języku **Haskell** pochodzi z artykułu [1]:
```haskell
piG3 = g(1,180,60,2) where g(q,r,t,i) =
  let (u,y)=(3*(3*i+1)*(3*i+2),div(q*(27*i-12)+5*r)(5*t))
  in y : g(10*q*i*(2*i-1),10*u*(q*(5*i-2)+r-y*t),t*u,i+1)
```

Wersje w innych językach są implementacjami powyższego algorytmu.

## Źródła
1. Jeremy Gibbons. Unbounded Spigot Algorithms for the Digits of Pi. The American Mathematical Monthly 113(4), 2006. DOI: [10.2307/27641917](http://dx.doi.org/10.2307/27641917) 
2. The GNU Multiple Precision Arithmetic Library. URL: [gmplib.org](https://gmplib.org/) 
