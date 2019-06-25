// include PHP API
#include <php.h>

// header file we'll create below
#include "hello.h"

// define the function(s) we want to add
zend_function_entry hello_functions[] = {
  PHP_FE(sayhello, NULL)
  { NULL, NULL, NULL }
};

// "hello_functions" refers to the struct defined above
// we'll be filling in more of this later: you can use this to specify
// globals, php.ini info, startup and teardown functions, etc.
zend_module_entry hello_module_entry = {
  STANDARD_MODULE_HEADER,
  PHP_HELLO_EXTNAME,
  hello_functions,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  PHP_HELLO_VERSION,
  STANDARD_MODULE_PROPERTIES
};

// install module
ZEND_GET_MODULE(hello)

// actual non-template code!
PHP_FUNCTION(sayhello) {
    // php_printf is PHP's version of printf, it's essentially "echo" from C
    php_printf("In his house hello waits dreaming.\n");
}
