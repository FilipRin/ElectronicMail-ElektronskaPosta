# ElectronicMail-ElektronskaPosta
----------------------------------------------------------------------------------------------
• Lista - sadrži proizvoljan broj podataka nekog tipa. Može da se doda jedan element u listu,
kao i da se dohvati broj elemenata liste. Može da se postavi na prvi element liste, da se
prelazi na sledeći element u odnosu na tekući, da se ispita da li postoji tekući element i da
se dohvati podatak u tekućem elementu na način da je moguća promena tog podatka preko
vraćenog rezultata dohvatanja. Greška je ako ne postoji tekući element u momentu pokušaja
dohvatanja.

• Korisnik - ima ime i adresu elektronske pošte koji se zadaju pri stvaranju i mogu da se
dohvate. Nije moguće kopirati korisnika ni na koji način. Moguće je ispisati korisnika u
izlazni tok (it<<korisnik) u obliku (ime)adresa_elektronske_pošte.

• Vremenska oznaka - sadrži godinu, mesec, dan, sate i minute. Prilikom stvaranja se zadaju svi
podaci. Može da se ispiše u izlazni tok (it<<oznaka) u obliku dan.mesec.godinasati:minuti.

• Elektronska poruka - ima pošiljaoca, primaoca, stanje (U_PRIPREMI, POSLATA, PRIMLJENA)
i naslov. Pošiljalac i primalac su korisnici. Svi podaci mogu da se dohvate. Prilikom
stvaranja se zadaju pošiljalac, primalac i naslov, a stanje se postavlja na vrednost
U_PRIPREMI. Moguće je poslati poruku. Moguće je napraviti kopiju poruke. Moguće je
ispisati poruku u izlazni tok (it<<poruka) tako što se u zasebnim redovima ispisuju
naslov, pošiljalac i primalac.

• Elektronska poruka sa tekstom - je elektronska poruka koja sadrži tekst. Tekst poruke se
naknadno postavlja nakon stvaranja. Prilikom slanja poruke stanje poruke se postavlja na
vrednost POSLATA. Greška je ukoliko se nakon što je poruka poslata pokuša postaviti
(menjati) tekst poruke. U izlazni tok se ispisuje tako što se prvo ispiše elektronska poruka
pa se u zasebnom redu ispiše tekst poruke.

----------------------------------------------------------------------------------------------
Napisati glavnu funkciju koja napravi dva korisnika i jednu poruku čiji je pošiljalac jedan od
korisnika, a drugi je primalac i ispiše poruku na standardnom izlazu.
