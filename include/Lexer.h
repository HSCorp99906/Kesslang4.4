#ifndef KESS_LEXER_H_
#define KESS_LEXER_H_

#include "Token.h"
#include <stdio.h>
#include <string.h>

typedef struct Lexer {
    char* source;
    unsigned int lineNum;
    char currentChar;
    unsigned int pos;
} lexer_t;


void tokenize(lexer_t* lexer, tokenlist_t* tl);
void lexer_init(lexer_t* lexer, char* source);

#endif
