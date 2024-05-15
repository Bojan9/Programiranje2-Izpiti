
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int* SLIKA[] = {
    (int[]) {24, 44, 73, 3, 0, 20, 0, 60, 86, 0, 0, 80, 33, 0, 0, 0, 0, 98, 0, 53, 0, 0, 0, 15, 0, 0, 0, 34, 25, 0, 0, 0, 85, 4, 0, 0, 67, 69, 69, 0, 77, 33, 0, 15, 0, 0, 68, 0, 75, 23, 0, 0, 0, 0, 86, 57, 68, 49, 90, 42, 106, 0, 0, 1, 0, 0, 0, 18, 72, 138, 99, 114, 132, 129, 86, 271, 146, 327, 265, 385, 381, 384, 485, 499, 521, 653, 704, 719, 894, 1014, 1038, 1045, 1053, 1139, 1366, 1457, 1462, 1576, 1640, 1690, 1805, 1718, 1911, 1863, 1945, 1863, 1978, 1920, 1917, 2023, 2023, 1942, 2000, 1932, 1959, 1944, 1854, 1835, 1628, 1612, 1641, 1574, 1547, 1388, 1209, 1133, 1172, 1035, 1067, 880, 926, 756, 640, 629, 662, 531, 476, 456, 365, 377, 404, 363, 215, 194, 283, 200, 42, 97, 65, 79, 40, 79, 57, 127, 28, 131, 103, 56, 100, 0, 68, 0, 104, 0, 0, 0, 0, 20, 0, 0, 60, 0},
    (int[]) {0, 55, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 80, 4, 68, 0, 0, 90, 0, 0, 65, 48, 0, 0, 88, 63, 52, 0, 0, 0, 15, 0, 0, 26, 3, 97, 0, 62, 83, 0, 0, 0, 0, 63, 52, 0, 0, 5, 7, 0, 0, 69, 90, 24, 65, 0, 71, 0, 114, 0, 0, 0, 122, 110, 44, 11, 6, 88, 84, 41, 122, 100, 213, 243, 217, 353, 384, 311, 353, 472, 426, 479, 578, 713, 817, 771, 941, 994, 932, 1082, 1113, 1296, 1289, 1354, 1548, 1525, 1530, 1570, 1720, 1816, 1762, 1917, 1971, 1921, 2023, 2013, 2023, 2008, 2015, 1936, 2013, 2023, 1964, 1855, 1874, 1710, 1756, 1649, 1694, 1468, 1527, 1326, 1246, 1260, 1222, 1113, 1093, 868, 847, 857, 724, 675, 585, 577, 401, 383, 409, 411, 296, 236, 253, 116, 95, 123, 51, 120, 86, 134, 83, 21, 0, 80, 20, 0, 70, 69, 41, 54, 0, 107, 18, 0, 101, 34, 37, 26, 44, 0, 72, 78},
    (int[]) {99, 85, 33, 0, 0, 47, 0, 20, 39, 17, 0, 0, 0, 17, 0, 0, 0, 52, 0, 0, 93, 25, 0, 0, 58, 0, 0, 57, 9, 81, 0, 18, 21, 0, 0, 0, 70, 22, 0, 0, 39, 35, 43, 0, 93, 77, 0, 0, 0, 87, 1, 0, 40, 31, 14, 12, 0, 28, 98, 10, 0, 19, 0, 0, 70, 75, 54, 123, 70, 0, 55, 88, 234, 173, 221, 240, 250, 322, 231, 305, 309, 463, 587, 592, 665, 733, 788, 813, 826, 845, 931, 997, 1243, 1189, 1359, 1470, 1429, 1553, 1570, 1716, 1626, 1725, 1891, 1870, 1883, 1871, 1936, 1962, 1989, 2023, 1991, 2004, 1922, 1998, 1898, 1904, 1766, 1805, 1644, 1652, 1511, 1616, 1470, 1428, 1364, 1167, 1116, 1171, 1067, 977, 804, 887, 795, 638, 526, 597, 471, 520, 339, 431, 393, 286, 340, 142, 103, 247, 75, 137, 5, 130, 42, 98, 0, 100, 26, 119, 0, 42, 13, 49, 15, 23, 93, 52, 92, 36, 81, 92, 8, 0, 0, 33},
};

int N = 3;
int M = 172;
int D = 1;

int main() {
    int** nova = zmehcaj(SLIKA, N, M, D);
    int noviN = N - 2 * D;
    int noviM = M - 2 * D;

    for (int i = 0; i < noviN; i++) {
        for (int j = 0; j < noviM; j++) {
            printf("%5d", nova[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < noviN; i++) {
        free(nova[i]);
    }
    free(nova);

    return 0;
}