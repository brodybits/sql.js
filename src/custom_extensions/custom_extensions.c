#include "sqlite3.h"

/** FUTURE TBD Build this module with any custom extension module(s) included */

#include "cencode.c"

#include "sqlite3_base64.c"

int custom_extensions(sqlite3 * db)
{
  sqlite3_base64_init(db);

  return SQLITE_OK;
}
