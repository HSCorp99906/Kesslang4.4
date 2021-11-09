#include "../include/Parser.h"
#include "../include/Util.h"
#include "../include/Lexer.h"
#include "../include/Token.h"


int main(int argc, char* argv[]) {
    char* source = read_ascii_file(argv[1]);
    tokenlist_t tokens;
    init_tokenlist(&tokens, 3);

    lexer_t lexer;
    lexer_init(&lexer, source);

    tokenize(&lexer, &tokens);

    destroy_tokenlist(&tokens);
    free(source);
}
