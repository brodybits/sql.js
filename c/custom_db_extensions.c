#include "sqlite3.h"

/** FUTURE TBD Build this module with any custom extension module(s) included */

#include "sqlite3_eu.c"

int custom_db_extensions(sqlite3 * db)
{
  sqlite3_eu_init(db, "UPPER", "LOWER");

  return SQLITE_OK;
}
