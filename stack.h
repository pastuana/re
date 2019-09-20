#ifndef __STACK__
#define __STACK__

#include <cstddef>

/*
 * Trida `Stack` implementuje zasobnik integeru, ktery se umi sam zvetsit,
 * pokud je potreba.
 */
class Stack
{
public:
  Stack();
  ~Stack();

  /*
   * Pridani prvku na vrsek.
   */
  void push(int value);
  /*
   * Odebrani prvku z vrchu. Pokud je zasobnik prazdny, nic se nedeje.
   */
  void pop();

  /*
   * Vrati prvek na vrchu. Nekontroluje prazdnost pole.
   */
  int top() const;

  /*
   * Vraci true, prave kdyz je zasobnik prazdny.
   */
  bool empty() const;
private:
  /*
   * `Index` nam rika prvni volnou pozici, tzn. ukazuje za posledni prvek. Vyho-
   * dou je, ze tato hodnota je rovnou pocet udrzovanych prvku.
   */
  size_t Index;
  /*
   * `MaxSize` udava velikost alokovaneho pole `Data`.
   */
  size_t MaxSize;
  /*
   * `Data` obsahuje vlastni data.
   */
  int* Data;
  /*
   * Pri vytvoreni tridy `Stack` bude pole `Data` mit velikost DEFAULT_MAX_SIZE.
   * Static rika, ze tuto promennou sdili vsechny instance tridy `Stack`.
   */
  static const size_t DEFAULT_MAX_SIZE = 16;
  /*
   * Defaultni hodnota pro natazeni pole.
   */
  static const size_t DEFAULT_GROW_SIZE = 2;

  /*
   * `resize` meni velikost pole Data.
   */
  void resize(size_t newSize);
};

#endif /* __STACK__ */

