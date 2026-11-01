# german-c
Joke project about turning C german

## Example
```c
#include "german.h"

typdefinition struktur {
    zeichen name[64];
    ganzzahl alter;
    gleitkomma monatliches_einkommen;
} Person;

ganzzahl haupt(nichts) {
    GERMANIFY;
    Person personen[5] = {
        {
            "Max Mustermann",
            25,
            2499.87
        }, {
            "Erika Mustermann",
            30,
            1993.61
        }, {
            "John Doe",
            20,
            1701.59
        }, {
            "Jane Doe",
            21,
            3019.20
        }, {
            "Pablo de Santos",
            32,
            1049.19
        }
    };

    für (ganzzahl i = 0; i < 5; ++i) {
        Person p = personen[i];
        druckef("%s ist %d Jahre alt und verdient %.2f€ im Monat.\n", p.name, p.alter, p.monatliches_einkommen);
    }

    gib 0 zurück;
}
```
