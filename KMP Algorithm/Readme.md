# KMP Algorithm

Knuth–Morris–Pratt algorithm is a searching algorithm. It is used to search for a pattern in given text.

**Few terms to know before going deep**

*Prefix of a pattern*- Subset of pattern taken from left

*Suffix of a pattern*- Subset of pattern taken from right

The KMP matching algorithm uses degenerating property (pattern having same sub-patterns appearing more than once in the pattern) of the pattern and improves the worst case complexity to O(n). The basic idea behind KMP’s algorithm is: whenever we detect a mismatch (after some matches), we already know some of the characters in the text of the next window. We take advantage of this information to avoid matching the characters that we know will anyway match.
