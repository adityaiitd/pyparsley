#include <stdio.h>
#include "kstring.h"
#include "y.tab.h"

int main() {
	start_debugging();
  yyparse();
  return 0; 
}