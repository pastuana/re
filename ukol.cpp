/ Knihovna se ctecimi a zapisovacimi streamy se nachazi v hlavickovem souboru
// <iostream>, ktere budeme pouzivat misto knihovnich funkci v hlavickovem
// souboru <stdio.h>.
#include <iostream>
// Hlavickovy soubor <iomanip> nam poskytuje prostredky pro ovlivneni podoby
// vstupu/vystupu pri pouziti streamu.
#include <iomanip>

// Namespacy (cesky jmenne prostory) umoznuji pojmenovat funkce, promenne,
// struktury, atd. "stejne". Mnoho prvku ze standardni knihovny se nachazi
// v namespacu `std`. Timto prikazem rikame programu, ktery je od teto radky
// nize (presneji uvidite, az budeme brat moduly), at pouziva namespace `std`,
// pokud je potreba.
using namespace std;

int
main(void)
{
  long x;
  char c[11];
  // Pro vypisovani budeme pouzivat stream cout. Vsimnete si, ze `<<` je pouze
  // operator bitoveho posunu doleva. Vice uvidite na cviceni na pretezovani
  // operatoru.
  //
  // Endl rika "udelej novy radek a flushni".
  cout << "Zadej cislo a slovo:" << endl;
  // Obdobne mame pro nacitani stream `cin`.
  //
  // Manipulator `setw` dela totez, jako %10s ve `scanfu`, velmi zkracene a
  // nepresne omezuje pocet nactenych znaku. Vice se doctete na
  //   https://en.cppreference.com/w/cpp/io/manip/setw.
  //
  // Pro kontrolu spravnosti vstupu se v C pouzivala navratova hodnota funkce
  // `scanf`. To streamy (nejspis) nedokazi, ale muzeme se zeptat na booleovskou
  // hodnotu streamu, cimz zjistime, zda nastala chyba ci nikoliv. Muzete si
  // nastudovat metody `cin.good()`, `cin.bad()`, atd. Vice uvidite na dalsich
  // cvicenich.
  if (!(cin >> x >> setw(sizeof c) >> c)) {
    // `cout` je stream pro standardni vystup (STDOUT), `cerr` je stream pro
    // standardni chybovy vystup (STDERR).
    cerr << "Nespravny vstup." << endl;
    return 1;
  }
  cout << "Zadal jsi " << x << " " << c << "." << endl;
  return 0;
}

// Zkuste zmenit datovy typ promenne `x` treba na long. Pokud byste pouzili
// scanf a printf, museli byste zmenit konverzni retezec ("%d" na "%f"). Je to
// potreba u streamu? (Ne.)

