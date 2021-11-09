#include "../include/Lexer.h"


void lexer_init(lexer_t* lexer, char* source) {
    lexer -> source = source;
    lexer -> lineNum = 1;
    lexer -> currentChar = source[0];
    lexer -> pos = 0;
}


void lexer_advance(lexer_t* lexer) {
    lexer -> currentChar = lexer -> source[++lexer -> pos];
}


void tokenize(lexer_t* lexer, tokenlist_t* tl) {
    unsigned int i = 0;
    unsigned int lexi = 0;
    char lexicalBuffer[256];

    while (1) {
        while (lexer -> source[i] != ' ' && lexer -> source[i] != '\n') {
            strncat(lexicalBuffer, &lexer -> source[i], 1);
            ++i;
        }

        char* match = strstr(lexicalBuffer, "out");

        if (match) {
            tokenlist_add(create_token(T_IDENTIFER, T_OUT, match, '\0', lexer -> lineNum, 1));
        }


        lexi = 0;
        ++i;

        if (lexer -> source[i] == '\0') {
            break;
        }
    }
}
