# pi-spigot
Obliczanie kolejnych cyfr dziesiętnego rozwinięcia liczby &pi; algorytmem Spigot [1].

## Rozwinięcie liczby &pi;
Liczba &pi; jest liczbą niewymierną, zatem ma nieskończenie wiele cyfr w swoim dziesiętnym rozwinięciu i jest ono nieokresowe. 

Od końca lat 40-tych do wyznaczania jej cyfr używa się komputerów. W poniższej tabeli zebrano wybrane kolejne rekordy:

|Rok|Kto|Liczba cyfr| Czas obliczeń|
|---|---|-------:|--------------:|
|2009|Fabrice Bellard|2 700 000 000 000|131 dni|
|2011|Alexander J. Yee, Shigeru Kondo|10 000 000 000 000|371 dni|
|2014|houkouonchi|13 300 000 000 000|208 dni|
|2016|Peter Treub|22 500 000 000 000|105 dni|
|2020|Timothy Mullican|50 000 000 000 000|303 dni|

Zamieszczone w repozytorium programy nie starają się w żaden sposób pobić ani nawet zbliżyć się do tych rekordów. Należy traktować je jako ciekawostkę i porównanie wybranych języków programowania.

Pierwszych 10000 cyfr liczby &pi; wyliczonych zamieszczonymi w repozytorium programami (program w języku **Ada** wyznaczył je na procesorze i5 3GHz w czasie 0.42 sekundy):
```
31415926535897932384626433832795028841971693993751058209749445923078164062862089
98628034825342117067982148086513282306647093844609550582231725359408128481117450
28410270193852110555964462294895493038196442881097566593344612847564823378678316
52712019091456485669234603486104543266482133936072602491412737245870066063155881
74881520920962829254091715364367892590360011330530548820466521384146951941511609
43305727036575959195309218611738193261179310511854807446237996274956735188575272
48912279381830119491298336733624406566430860213949463952247371907021798609437027
70539217176293176752384674818467669405132000568127145263560827785771342757789609
17363717872146844090122495343014654958537105079227968925892354201995611212902196
08640344181598136297747713099605187072113499999983729780499510597317328160963185
95024459455346908302642522308253344685035261931188171010003137838752886587533208
38142061717766914730359825349042875546873115956286388235378759375195778185778053
21712268066130019278766111959092164201989380952572010654858632788659361533818279
68230301952035301852968995773622599413891249721775283479131515574857242454150695
95082953311686172785588907509838175463746493931925506040092770167113900984882401
28583616035637076601047101819429555961989467678374494482553797747268471040475346
46208046684259069491293313677028989152104752162056966024058038150193511253382430
03558764024749647326391419927260426992279678235478163600934172164121992458631503
02861829745557067498385054945885869269956909272107975093029553211653449872027559
60236480665499119881834797753566369807426542527862551818417574672890977772793800
08164706001614524919217321721477235014144197356854816136115735255213347574184946
84385233239073941433345477624168625189835694855620992192221842725502542568876717
90494601653466804988627232791786085784383827967976681454100953883786360950680064
22512520511739298489608412848862694560424196528502221066118630674427862203919494
50471237137869609563643719172874677646575739624138908658326459958133904780275900
99465764078951269468398352595709825822620522489407726719478268482601476990902640
13639443745530506820349625245174939965143142980919065925093722169646151570985838
74105978859597729754989301617539284681382686838689427741559918559252459539594310
49972524680845987273644695848653836736222626099124608051243884390451244136549762
78079771569143599770012961608944169486855584840635342207222582848864815845602850
60168427394522674676788952521385225499546667278239864565961163548862305774564980
35593634568174324112515076069479451096596094025228879710893145669136867228748940
56010150330861792868092087476091782493858900971490967598526136554978189312978482
16829989487226588048575640142704775551323796414515237462343645428584447952658678
21051141354735739523113427166102135969536231442952484937187110145765403590279934
40374200731057853906219838744780847848968332144571386875194350643021845319104848
10053706146806749192781911979399520614196634287544406437451237181921799983910159
19561814675142691239748940907186494231961567945208095146550225231603881930142093
76213785595663893778708303906979207734672218256259966150142150306803844773454920
26054146659252014974428507325186660021324340881907104863317346496514539057962685
61005508106658796998163574736384052571459102897064140110971206280439039759515677
15770042033786993600723055876317635942187312514712053292819182618612586732157919
84148488291644706095752706957220917567116722910981690915280173506712748583222871
83520935396572512108357915136988209144421006751033467110314126711136990865851639
83150197016515116851714376576183515565088490998985998238734552833163550764791853
58932261854896321329330898570642046752590709154814165498594616371802709819943099
24488957571282890592323326097299712084433573265489382391193259746366730583604142
81388303203824903758985243744170291327656180937734440307074692112019130203303801
97621101100449293215160842444859637669838952286847831235526582131449576857262433
44189303968642624341077322697802807318915441101044682325271620105265227211166039
66655730925471105578537634668206531098965269186205647693125705863566201855810072
93606598764861179104533488503461136576867532494416680396265797877185560845529654
12665408530614344431858676975145661406800700237877659134401712749470420562230538
99456131407112700040785473326993908145466464588079727082668306343285878569830523
58089330657574067954571637752542021149557615814002501262285941302164715509792592
30990796547376125517656751357517829666454779174501129961489030463994713296210734
04375189573596145890193897131117904297828564750320319869151402870808599048010941
21472213179476477726224142548545403321571853061422881375850430633217518297986622
37172159160771669254748738986654949450114654062843366393790039769265672146385306
73609657120918076383271664162748888007869256029022847210403172118608204190004229
66171196377921337575114959501566049631862947265473642523081770367515906735023507
28354056704038674351362222477158915049530984448933309634087807693259939780541934
14473774418426312986080998886874132604721569516239658645730216315981931951673538
12974167729478672422924654366800980676928238280689964004824354037014163149658979
40924323789690706977942236250822168895738379862300159377647165122893578601588161
75578297352334460428151262720373431465319777741603199066554187639792933441952154
13418994854447345673831624993419131814809277771038638773431772075456545322077709
21201905166096280490926360197598828161332316663652861932668633606273567630354477
62803504507772355471058595487027908143562401451718062464362679456127531813407833
03362542327839449753824372058353114771199260638133467768796959703098339130771098
70408591337464144282277263465947047458784778720192771528073176790770715721344473
06057007334924369311383504931631284042512192565179806941135280131470130478164378
85185290928545201165839341965621349143415956258658655705526904965209858033850722
42648293972858478316305777756068887644624824685792603953527734803048029005876075
82510474709164396136267604492562742042083208566119062545433721315359584506877246
02901618766795240616342522577195429162991930645537799140373404328752628889639958
79475729174642635745525407909145135711136941091193932519107602082520261879853188
77058429725916778131496990090192116971737278476847268608490033770242429165130050
05168323364350389517029893922334517220138128069650117844087451960121228599371623
13017114448464090389064495444006198690754851602632750529834918740786680881833851
02283345085048608250393021332197155184306354550076682829493041377655279397517546
13953984683393638304746119966538581538420568533862186725233402830871123282789212
50771262946322956398989893582116745627010218356462201349671518819097303811980049
73407239610368540664319395097901906996395524530054505806855019567302292191393391
85680344903982059551002263535361920419947455385938102343955449597783779023742161
72711172364343543947822181852862408514006660443325888569867054315470696574745855
03323233421073015459405165537906866273337995851156257843229882737231989875714159
57811196358330059408730681216028764962867446047746491599505497374256269010490377
81986835938146574126804925648798556145372347867330390468838343634655379498641927
05638729317487233208376011230299113679386270894387993620162951541337142489283072
20126901475466847653576164773794675200490757155527819653621323926406160136358155
90742202020318727760527721900556148425551879253034351398442532234157623361064250
63904975008656271095359194658975141310348227693062474353632569160781547818115284
36679570611086153315044521274739245449454236828860613408414863776700961207151249
14043027253860764823634143346235189757664521641376796903149501910857598442391986
29164219399490723623464684411739403265918404437805133389452574239950829659122850
85558215725031071257012668302402929525220118726767562204154205161841634847565169
99811614101002996078386909291603028840026910414079288621507842451670908700069928
21206604183718065355672525325675328612910424877618258297651579598470356222629348
60034158722980534989650226291748788202734209222245339856264766914905562842503912
75771028402799806636582548892648802545661017296702664076559042909945681506526530
53718294127033693137851786090407086671149655834343476933857817113864558736781230
14587687126603489139095620099393610310291616152881384379099042317473363948045759
31493140529763475748119356709110137751721008031559024853090669203767192203322909
43346768514221447737939375170344366199104033751117354719185504644902636551281622
88244625759163330391072253837421821408835086573917715096828874782656995995744906
61758344137522397096834080053559849175417381883999446974867626551658276584835884
53142775687900290951702835297163445621296404352311760066510124120065975585127617
85838292041974844236080071930457618932349229279650198751872127267507981255470958
90455635792122103334669749923563025494780249011419521238281530911407907386025152
27429958180724716259166854513331239480494707911915326734302824418604142636395480
00448002670496248201792896476697583183271314251702969234889627668440323260927524
96035799646925650493681836090032380929345958897069536534940603402166544375589004
56328822505452556405644824651518754711962184439658253375438856909411303150952617
93780029741207665147939425902989695946995565761218656196733786236256125216320862
86922210327488921865436480229678070576561514463204692790682120738837781423356282
36089632080682224680122482611771858963814091839036736722208883215137556003727983
94004152970028783076670944474560134556417254370906979396122571429894671543578468
78861444581231459357198492252847160504922124247014121478057345510500801908699603
30276347870810817545011930714122339086639383395294257869050764310063835198343893
41596131854347546495569781038293097164651438407007073604112373599843452251610507
02705623526601276484830840761183013052793205427462865403603674532865105706587488
22569815793678976697422057505968344086973502014102067235850200724522563265134105
59240190274216248439140359989535394590944070469120914093870012645600162374288021
09276457931065792295524988727584610126483699989225695968815920560010165525637567

```

Kliknij na poniższym obrazku aby posłuchać piosenki Kate Bush o liczbie &pi; i wyliczaniu jej kolejnych cyfr:

[![Kate Bush, Pi](https://img.youtube.com/vi/W8RE2NyAiJg/hqdefault.jpg)](https://www.youtube.com/watch?v=W8RE2NyAiJg)

## Algorytm
![woda kapiąca z kranu](pic/Water_drop_animation_enhanced_small.gif)
autor: [Chris 73](https://en.wikipedia.org/wiki/User:Chris_73)

W obliczeniach zastosowano algorytm **Spigot** (kurek). Jego nazwa oddaje to, że kolejno wyznaczane cyfry "wyciekają" z niego i nie są używane do wyliczenia następnych cyfr.  

Więcej o algorytmie można przeczytać w artykule [1]. 

## Implementacje
Algorytm wymaga arytmetyki dowolnej precyzji [3] i został zaimplementowany w wybranych językach programowania:

* [Ada](ada)
* [C](c)
* [Haskell](haskell)
* [Oz](oz)
* [Prolog](prolog)
* [Python](python)

Wersja w języku **Haskell** pochodzi z artykułu [1] i korzysta z szeregu Gospera [2]:
```haskell
piG3 = g(1,180,60,2) where
  g(q,r,t,i) = let (u,y)=(3*(3*i+1)*(3*i+2),div(q*(27*i-12)+5*r)(5*t))
               in y : g(10*q*i*(2*i-1),10*u*(q*(5*i-2)+r-y*t),t*u,i+1)
```

Wersje w innych językach są implementacjami powyższej funkcji.

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

### C
Funkcja **digit()** za każdym wywołaniem wylicza kolejną cyfrę rozwinięcia liczby &pi;. Stan obliczeń między jej kolejnymi wywołaniami przechowywany jest w globalnych zmiennych **q**, **r**, **t**, **i**.

Aby wydrukować tylko pierwszych 10000 cyfr liczby &pi; można wykonać następującą pętlę **for**:
```c
for(int j=0; j<10000; j++)
   printf("%lu", digit());
``` 

### Haskell
Funkcja rekurencyjna **g** nie kończy swoich obliczeń i generuje nieskończenie długą listę kolejnych cyfr rozwinięcia liczby &pi;. Dzięki leniwemu obliczaniu kolejna cyfra jest wyliczana dopiero wtedy gdy będzie potrzebna jej wartość. Do tego czasu obliczanie funkcji jest wstrzymane. 

Aby wyliczyć tylko pierwszych 10000 cyfr liczby &pi; można skorzystać z funkcji **take**:
```haskell
take 10000 pi_spigot
```

### Oz
Leniwa funkcja **Pi** wylicza nieskończoną listę kolejnych cyfr liczy &pi;. Przy użyciu funkcji **List.take** można pobrać dowolnie długi początkowy fragment tej listy.

#### Uwaga
Program w języku **Oz** dla większej liczby drukowanych cyfr (np. 30000) przerywa swoje działanie nie sygnalizując powodu.

### Prolog
W programie zastosowano korutynę. Predykat **pi/5** wylicza kolejne cyfry liczby &pi; umieszczając je w strumieniu danych zrealizowanym otwartą listą przekazaną piątym argumentem. Kolejna cyfra pojawia się na otwartej liście **OUT** dopiero wtedy, gdy przestanie być ona nieukonkretnioną zmienną i będzie pasować do wzorca **[Digit | OUT_]**. Do tego czasu obliczenia wstrzymane są predykatem **freeze/2**. 

Aby wyliczyć tylko pierwszych 10000 cyfr liczby &pi; można ograniczyć listę do 10000 elementów:
```prolog
:- pi(X), length(X, 10000), forall(member(Y, X), write(Y)).
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
