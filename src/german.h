#pragma once

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define ergebe return
#define gib return
#define zurück /* For alternative grammar */
#define zurueck
#define für for
#define fuer for
#define solange while
#define wenn if
#define sonst else
#define ganzzahl int
#define gleitkomma float
#define doppelt double
#define tue do
#define druckef printf
#define liesf readf
#define zeichen char
#define lang long
#define haupt main
#define nichts void
#define klasse class
#define öffentlich public
#define privat private
#define abbruch break
#define fall case
#define konstant const
#define aufzählbar enum
#define aufzaehlbar enum
#define gehzu goto
#define kurz short
#define vorzeichenbehaftet signed
#define vorzeichenlos unsigned
#define größevon sizeof
#define groessevon sizeof
#define statisch static
#define typdefinition typedef
#define flüchtig volatile
#define fluechtig volatile
#define struktur struct
#define vereinigung union
#define weiter continue
#define schalter switch
#define standard default
#define wahr true
#define falsch false
#define wahrheitswert bool
#define reserviere malloc
#define befreie free
#define zeichenkettenlänge strlen
#define zeichenkettenlaenge strlen

#define NICHTS NULL
#define GERMANIFY setlocale(LC_NUMERIC, "de_DE.UTF-8")
