/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2013 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_WEBP_H
#define PHP_WEBP_H

extern zend_module_entry webp_module_entry;
#define phpext_webp_ptr &webp_module_entry

#ifdef PHP_WIN32
#	define PHP_WEBP_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_WEBP_API __attribute__ ((visibility("default")))
#else
#	define PHP_WEBP_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(webp);
PHP_MSHUTDOWN_FUNCTION(webp);
PHP_RINIT_FUNCTION(webp);
PHP_RSHUTDOWN_FUNCTION(webp);
PHP_MINFO_FUNCTION(webp);

PHP_FUNCTION(confirm_webp_compiled);	/* For testing, remove later. */
PHP_FUNCTION(image2webp);	/* For testing, remove later. */

/* 
  	Declare any global variables you may need between the BEGIN
	and END macros here:     

ZEND_BEGIN_MODULE_GLOBALS(webp)
	long  global_value;
	char *global_string;
ZEND_END_MODULE_GLOBALS(webp)
*/

/* In every utility function you add that needs to use variables 
   in php_webp_globals, call TSRMLS_FETCH(); after declaring other 
   variables used by that function, or better yet, pass in TSRMLS_CC
   after the last function argument and declare your utility function
   with TSRMLS_DC after the last declared argument.  Always refer to
   the globals in your function as WEBP_G(variable).  You are 
   encouraged to rename these macros something shorter, see
   examples in any other php module directory.
*/

#ifdef ZTS
#define WEBP_G(v) TSRMG(webp_globals_id, zend_webp_globals *, v)
#else
#define WEBP_G(v) (webp_globals.v)
#endif

#endif	/* PHP_WEBP_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
