# PRE30-C. Do not create a universal character name through concatenation

## The C Standard supports universal character names that may be used in identifiers, character constants, and string literals to designate characters that are not in the basic character set. The universal character name \Unnnnnnnn designates the character whose 8-digit short identifier (as specified by ISO/IEC 10646) is nnnnnnnn. Similarly, the universal character name \unnnn designates the character whose 4-digit short identifier is nnnn (and whose 8-digit short identifier is 0000nnnn).

| Rule | Severity | Likelihood | Remediation Cost | Priority | Level |
| ---- | -------- | ---------- | ---------------- | -------- | ----- |
| PRE30-C | Low | Unlikely | Medium | P2 | L3 |
| PRE31-C | Low | Unlikely | Low | P3 | L3 |
| PRE32-C | Low | Unlikely | Medium | P2 | L3 |

## Link to rule: https://wiki.sei.cmu.edu/confluence/display/c/PRE30-C.+Do+not+create+a+universal+character+name+through+concatenation
