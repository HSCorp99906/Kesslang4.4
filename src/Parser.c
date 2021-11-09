#include "../include/Parser.h"
#include "../include/AST.h"


void init_parser(parser_t* parser, tokenlist_t tokens) {
    parser -> pos = 0;
    parser -> tokenTray = tokens;
    parser -> currentToken = *tokens.tokens;
}


void advance(parser_t* parser) {
    ++parser -> pos;
    if (parser -> pos < parser -> tokenTray.size) {
        parser -> currentToken = parser -> tokenTray.tokens[++parser -> pos];
    }
}


void parse(parser_t* parser) {
    typedef unsigned short int bool_t;
    bool_t started = 1;
    // ast_t ast;
    //ast.children = (ast_node_t*)malloc(sizeof(struct KESS_AST));
    // ast.children -> arguments = (argument_t*)malloc(sizeof(struct Argument));

    switch (parser -> currentToken.type) {
        case T_CHAR:
            printf("AHH\n");
    }
}
