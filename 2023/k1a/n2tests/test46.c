
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "gFRL",
    "ufsRFAdZJ9",
    "rPDqs6",
    "fDQfHl",
    "bMb",
    "HH1fF74m_",
    "4c6u0dc0Pk",
    "AOwq0f7bd",
    "OI0eo",
    "pbQT",
    "XO9N",
    "uzkPz",
    "FdmMiuQlPd",
    "JGy",
    "kNEldMh",
    "svJLNAdr4",
    "dGJx",
    "L1V9Jf_fFA",
    "5paDO0",
    "7TwwLE",
    "2YEzCDQzZ",
    "EKCS",
    "ge4sXokLQL",
    "ErufS",
    "elNifilZJn",
    "dmR8z",
    "ywS",
    "RLC1",
    "63iOM3F_",
    "dMX0KF4",
    "jdbjxvX",
    "78y",
    "iuFw8Mj",
    "tq4veOcxz",
    "mcf",
    "eGoEXNxvP",
    "ZAfUO2kynx",
    "RygVgg",
    "MUcyAZZ",
    "Q5h",
    "X04IQKeDh",
    "DcC_p1L",
    "etrE8lIGr",
    "B",
    "ft",
    "3CH7Zq72G",
    "5p9Wps",
    "p2lbjhs1",
    "5Fw",
    "b9ahFI",
    "iQ",
    "Xv",
    "ytGhG",
    "PeiuukQ",
    "jl",
    "IVq",
    "iw9EWKGKHX",
    "rU",
    "vDyKtR",
    "l",
    "JG",
    "0Uc0cNdPoS",
    "EMQ2W_iq2F",
    "IWu7V",
    "ByoS8ThkYQ",
    "xLnyJUQ6",
    "oi",
    "ALNWQQqdo",
    "IEJV2_rmjw",
    "C14gqY",
    "0",
    "V",
    "d",
    "VnmARR",
    "K",
    "5",
    "1oOVT",
    "v7ylM5CB",
    "l",
    "FL6derQAf",
    "5u",
    "3JVM",
    "Mr",
    "T",
    "6U",
    "JD3h",
    "XWfDkD",
    "0D1g3mYKa0",
    "IqdTSx",
    "S81ituGO",
    "2wBUMSdK",
    "WMndEAQq",
    "gp",
    "aiFmE",
    "1Z",
    "bqq",
    "H7vuU",
    "XgM",
    "kC3z1fb",
};

int main() {
    int stIzhodnih = 0;
    char** izhodni = poStolpcih(NIZI, sizeof(NIZI) / sizeof(NIZI[0]), &stIzhodnih);
    printf("%d\n", stIzhodnih);

    for (int i = 0; i < stIzhodnih; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    free(izhodni);
    return 0;
}