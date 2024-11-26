from sys import argv
from random import randint

ltrs = list("TRWAGMYFPDXBNJZSQVHLCKE")

if len(argv) >= 2:
    ltr = argv[1].upper()
    if ltr not in ltrs:
        exit(1)
    else:
        NIF = randint(0, pow(10, 8))
        while not ltr == ltrs[NIF % len(ltrs)]:
            NIF = randint(0, pow(10, 8))
else:
    NIF = randint(0, pow(10, 8))

print(f"DNI: {NIF}{ltrs[int(NIF) % len(ltrs)]}")
