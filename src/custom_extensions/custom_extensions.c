#include "sqlite3.h"

/** FUTURE TBD Build this module with any custom extension module(s) included */

#include "sqlite3_eu.c"

#include "cencode.c"

#include "sqlite3_base64.c"

int custom_extensions(sqlite3 * db)
{
  sqlite3_base64_init(db);

  // ref: https://github.com/brodybits/sqlite3-eu
  sqlite3_eu_init(db, "UPPER", "LOWER");

  return SQLITE_OK;
}
