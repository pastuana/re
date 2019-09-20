Cílem je naprogramovat abstraktní datovou strukturu zásobník.
Programy můžete na příkazové řádce zkompilovat příkazem make.

Doma
Zkuste zásobník modifikovat na pole.
Co všechno je potřeba udělat?

Pro základní pole stačí přidat metodu pro indexaci, např. vrať 3. prvek.

Pro lepší pole:

zkuste přidat metodu insert(pos, elem), která vloží prvek na pozici pos, všechny prvky od indexu pos dál posune
Obdobně delete(pos)

Nebo taky můžete udělat metodu sort (ta bude jednoduchá)
Dále můžete udělat metodu lower_bound(elem), která v seřazeném poli najde index výskytu daného prvku. Pokud tam prvek není, pak vrátí index pozice, kde by měl být (pak do takovéhoto pole můžete pomocí insert ten prvek vložit a zůstane setřízené)

Chcete-li nějakou malou odměnu a feedback, pak pošlete co máte na tomas.pecka@fit.cvut.cz
