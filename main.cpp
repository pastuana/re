#include "stack.h"

#include <iostream>
#include <cassert>

const int MOD = 1e9 + 7;

/*
 * Velmi nahodna funkce :).
 */
int
random(int val)
{
  return (17 * val + 20) % MOD;
}

int
main(void)
{
  Stack s;
  const int upTo = 997;
  assert(s.empty());
  for (int i = 0; i < upTo; ++i) {
    s.push(random(i));
  }
  assert(!s.empty());
  for (int i = upTo - 1; i >= 0; --i) {
    assert(random(i) == s.top());
    s.pop();
  }
  assert(s.empty());
  std::cerr << "Tests successful." << std::endl;
  return 0;
}

