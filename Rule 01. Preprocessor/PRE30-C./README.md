# PRE30-C. Do not create a universal character name through concatenation


## The C Standard supports universal character names that may be used in identifiers, character constants, and string literals to designate characters that are not in the basic character set. The universal character name \Unnnnnnnn designates the character whose 8-digit short identifier (as specified by ISO/IEC 10646) is nnnnnnnn. Similarly, the universal character name \unnnn designates the character whose 4-digit short identifier is nnnn (and whose 8-digit short identifier is 0000nnnn).


## Link to rule: https://wiki.sei.cmu.edu/confluence/display/c/PRE30-C.+Do+not+create+a+universal+character+name+through+concatenation