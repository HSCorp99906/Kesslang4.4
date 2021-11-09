#ifndef KESS_PARSER_H_
#define KESS_PARSER_H_

#include "Token.h"
#include <stdio.h>


typedef struct __Parser {
    token_t currentToken;
    unsigned int pos;
    tokenlist_t tokenTray;
} parser_t;


void init_parser(parser_t* parser, tokenlist_t tokens);
void advance(parser_t* parser);
void parse(parser_t* parser);

#endif
