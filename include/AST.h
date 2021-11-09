#ifndef KESS_AST_H_
#define KESS_AST_H_

#include <stdlib.h>
#include "Token.h"


typedef enum ExpressionTypes {
    CALL_EXPRESSION,
} ast_e_types_t;


typedef enum Property {
    IDENTIFIER,
} property_t;

typedef enum ArgumentTypes {
    LITERAL,
    NAME
} argument_tt;


typedef struct Argument {
    argument_tt type;
    char* value;
} argument_t;


typedef struct AST_NODE {
    ast_e_types_t type;
    identifier_t identiferType;
    argument_t* arguments;

} ast_node_t;


typedef struct KESS_AST {
    ast_node_t* children;
    char* type;

} ast_t;


#endif
