
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 477;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "YbpmBqIMmM3mq81MuuLx0K_7gxcGmRYjpRtTaGxg1ZIhiuKapEcRfiikFvUkkNr9ae");
    izdelaj(nizi, 1, "oN8vyjeSUnQjx3UGjyA0Y4pYoEwnXLkBQTjl_i_WkovqSu");
    izdelaj(nizi, 2, "hhphbd6rxaXDmzLASFIaefChT8Avp3qqigEZLlUINutGFSAF61vVf1ezrUfGCfVtDlhwYlMcgp4EYCaA");
    nizi[3] = nizi[0];
    izdelaj(nizi, 4, "5pKvxy95xXI16mTaMJmIX7v79ZNzZCgQEL8spdni2b9DZ3aAaEgN06tAhBCWJJnqo5cgdpBThfKIx4oJ7db");
    izdelaj(nizi, 5, "uhg1EV0_2FBoqUug28bvAMErEZaLLfjVdQcUPiHnpL9mUaMZB2_o8z8kpiZMK3YaEqMg");
    izdelaj(nizi, 6, "E8yuOSAI_0PdoLX9eG5Q6jV_SBrC3PxC");
    nizi[7] = nizi[5];
    izdelaj(nizi, 8, "QfYOMbmsZhMcASGXf6qmR8dF7W2UF1_KB2EKtrqaiWNPKCnvvSihXlcay_oT3H5dkiFy5FTkUu2mNvFfSqYsAn_Wq6qPV");
    nizi[9] = nizi[4];
    nizi[10] = nizi[6];
    izdelaj(nizi, 11, "C7SUGAhoPejTJFBcnQYjqrjtyJ9Jiv56503sUTMo7YC61PxdqcL8FitEAdMmU43xCGs0i9YVD1wr_iUBRxAILwW_y2pwI4km2o");
    izdelaj(nizi, 12, "mtVIsFb076M21zaoEYXWcppy3izPu1sCm1gAf3_iPgNqDqLwZRlo3kHFyYhQwup3adNERDmCJ1n");
    nizi[13] = nizi[10];
    izdelaj(nizi, 14, "eteF0XbsbUro7R3quvAiDmoRcs2wBrFY4RZ46lHlDdEIoHRi0KrsS7_be_CUMTj4IVDJQHQx93c5sTF5c");
    izdelaj(nizi, 15, "wE2fpt3ZYAPx4kuV0Ya8WmgHRAnVZcE9RC47QO5yHDLz9DOXcZoZNzrXvUA0PNQsVQv09GDITFW8Ye0tE3EK0KQBtFPb");
    izdelaj(nizi, 16, "y84cnoVDoWjUqujMTdlEu2sfRPAp9NPq");
    nizi[17] = nizi[1];
    izdelaj(nizi, 18, "lZ_7evicWbgr4n8J0pa2");
    nizi[19] = nizi[11];
    nizi[20] = nizi[13];
    izdelaj(nizi, 21, "lna30R");
    izdelaj(nizi, 22, "2r32AfvMz7k");
    izdelaj(nizi, 23, "QZKbjk8lHQhE0SCxv9kBIfNSyWz");
    nizi[24] = nizi[17];
    izdelaj(nizi, 25, "_OvbsvvrM");
    izdelaj(nizi, 26, "TyzkRNNeQZrQWfHQIpCSKXlo_8MNntCJzLOrLZiXczD6e9S");
    izdelaj(nizi, 27, "r2uRxz0CTLcMOnk7Jlk32uIBiZlPlOl9ybDy8z_SNRgHIWleApa2_lIFkiQlDy8KAUem3ZlGGQKS5pyI73GNQ_");
    nizi[28] = nizi[3];
    nizi[29] = nizi[27];
    nizi[30] = nizi[12];
    nizi[31] = nizi[10];
    izdelaj(nizi, 32, "FbCNYpctFKzi0P81Ssl_EW2_8l0jSZpiz1Ep4UlAIYKwGsrAM5PAvrT2iOd");
    izdelaj(nizi, 33, "n8U_7JaT0sdGm8TYVOk0qIGMzGDrDlD4sjcVyhM9rAaoh");
    nizi[34] = nizi[22];
    izdelaj(nizi, 35, "HvG1IN63x3vbU3");
    nizi[36] = nizi[3];
    izdelaj(nizi, 37, "2OAFpmDysxID7yFg9zafVIjWXhepJvaNAQ81IXXfwm07P5XVI4OTPB6IsVPRZRJXss_sNGvEjpMWBY57OPADCCcH0M3RamuBicf");
    izdelaj(nizi, 38, "GyfVkqzjLOTcqOoUufsntuLusj8vEEyW");
    nizi[39] = nizi[33];
    izdelaj(nizi, 40, "Lqpb8rqBY4w653mQAeFopXqvzIeyeHjo0KP4yClzcTIlVl6Vgfuld9Kivqoe_4cj");
    nizi[41] = nizi[7];
    izdelaj(nizi, 42, "m_cM0TIyk");
    izdelaj(nizi, 43, "Ah3gwTfT5syDw_jYCPgLncXNHzfMS2WybbaZ_PJi");
    nizi[44] = nizi[24];
    nizi[45] = nizi[19];
    izdelaj(nizi, 46, "XMXi5_s0WqmpGXeh4MhKGe");
    nizi[47] = nizi[26];
    nizi[48] = nizi[5];
    izdelaj(nizi, 49, "_4aR9MRxnNTM_8Ldekr1Isbahvt23EdaBeyR7CKhWw91KGGCF");
    nizi[50] = nizi[24];
    izdelaj(nizi, 51, "p_hE9xoEdOaPERtGmgYuRCux2rCfMc3peOUZnDtXDhkgNiCghisRbY2Tq_W");
    nizi[52] = nizi[11];
    izdelaj(nizi, 53, "6wC0j6");
    izdelaj(nizi, 54, "qYNv4yiE0WE");
    izdelaj(nizi, 55, "kJvNsXxJOv3TkqFuP539GLz14XRmfyA865");
    izdelaj(nizi, 56, "O_Myt4iAR_BlIjqW40_m3adik42y93tVPEbs4zgdmJ48whOee3xx");
    izdelaj(nizi, 57, "1dxJDqy8IoKdXHcnvO2nFpwMm3bcQ71Uli2yxSIl7Mm7AYSgR8EFeOiFmob65oeU3lbXqN");
    nizi[58] = nizi[16];
    izdelaj(nizi, 59, "WK9qScHfH0BW9LBvVP0N5HqO3NwutHQ38qkFdhexsp66c92MdyPQreryO_BiMm3g6rHbfep7SxVMvE2");
    izdelaj(nizi, 60, "4UtmjXInDxjWOc");
    izdelaj(nizi, 61, "Uv");
    nizi[62] = nizi[21];
    izdelaj(nizi, 63, "SImEWerE89L9o5N9Dj2MioJF2");
    nizi[64] = nizi[42];
    nizi[65] = nizi[40];
    nizi[66] = nizi[27];
    izdelaj(nizi, 67, "2_awUY2cyo6iHo1kB0Z8cH0oJ4ohpZEsWuuPOziABWK8QFyt6AnZuyj5NjKk");
    izdelaj(nizi, 68, "Xq5i62wPhCepbsheHTWVVlBgNzCwuCNQJSAksm");
    nizi[69] = nizi[65];
    izdelaj(nizi, 70, "BOnJ68EdpAZnOvzRvTTG6SuCEXEdfT3n7_3LTuuFoooH5C");
    izdelaj(nizi, 71, "og89GdktriONLrJuVini4cYTf9T2TEboGK9gQee__V4PUCLjDh8b_WNlrD8oG9qn");
    izdelaj(nizi, 72, "G3xkccR");
    nizi[73] = nizi[47];
    izdelaj(nizi, 74, "bU4qSE39eyaxbgV8zPZ20IZRXU9nbNPxwS");
    izdelaj(nizi, 75, "BRX3hRLo0bWnxotLNdr0e7_6aDAM8pA4EHdnKfYxXDRbtIUUZb0ui3kO2Db2a8wCTLz3LLmOeGjC2LnE5FQTQsvHviMadYKo");
    nizi[76] = nizi[58];
    izdelaj(nizi, 77, "dmg7uKh0mNWtfchRGpnXr9b0gqnAw9N3brMHqsnrPd_F5rQtK");
    izdelaj(nizi, 78, "dsQ_");
    izdelaj(nizi, 79, "2DOZgEnOz8dw9eHsgVMA6LgHowGgMJR9s8N6KTq");
    nizi[80] = nizi[15];
    nizi[81] = nizi[55];
    nizi[82] = nizi[39];
    nizi[83] = nizi[52];
    nizi[84] = nizi[80];
    izdelaj(nizi, 85, "fBRV54GGUehbmeb0Sih52GolAYuFMFWvLGziN1YrnDGBrDMKutok0ZBqHs6Qp00KN9");
    nizi[86] = nizi[46];
    nizi[87] = nizi[83];
    nizi[88] = nizi[55];
    izdelaj(nizi, 89, "SHM6dQhOEu4vywpOlGTRtePl8ebuUYA3L1");
    izdelaj(nizi, 90, "9Zv8NV5gYBlka0UD0NVYynthyLutecR8phg48Z");
    nizi[91] = nizi[79];
    nizi[92] = nizi[65];
    nizi[93] = nizi[33];
    nizi[94] = nizi[36];
    nizi[95] = nizi[85];
    nizi[96] = nizi[76];
    izdelaj(nizi, 97, "jQVtKnwXk8clkJUFWKtZ4uDkLXVRdyk9JnsnbUuJ");
    izdelaj(nizi, 98, "9LMsY8dBlmEbPuTA75zVmHp_");
    nizi[99] = nizi[24];
    nizi[100] = nizi[99];
    nizi[101] = nizi[60];
    nizi[102] = nizi[35];
    izdelaj(nizi, 103, "cWY");
    izdelaj(nizi, 104, "0MQcVIBBj5fT2TLrSe2jQYI8nI");
    nizi[105] = nizi[13];
    izdelaj(nizi, 106, "2wjGz6K8iqadd7tP6PI9AosSu1rt_auxdT_Sjl9Bavq7wzpl32");
    nizi[107] = nizi[24];
    izdelaj(nizi, 108, "V4_60jeJiLKBlrGkPB0IeecgtUSNq_AoJsitO9vRxMiOyGi1G53gKy1BGZAUl2Fxm0LlWIlMBbZrl2wy3jbyngntntc");
    izdelaj(nizi, 109, "tQzsHi5Mp7aRAOcyKjoOLYawA6c3qiqbLnfFACmtm5SFM9XRcmniI1pYXQVDq5eXxLWwrx8rXSZGSX88");
    izdelaj(nizi, 110, "y_JQN4hmPts5dtd7XqXzfc5p99wQ0oZ");
    nizi[111] = nizi[104];
    izdelaj(nizi, 112, "lZsl_fa3MXvMXgIxYkFWsIIMWls4EppgZ7aG7p22THfzGQsRMzgt9H6");
    izdelaj(nizi, 113, "YfW1qWV0kp7oZa2BC6JZFRHNfz6vlFo1SqWjdNxGiR8DSIx9VvDAz");
    nizi[114] = nizi[14];
    izdelaj(nizi, 115, "Yqp3lT8lXlBAF9nIEeuSbhUR0KNygKOcTvSzz7aVBuMA36piM");
    izdelaj(nizi, 116, "hyjdT7saF3xxqndgreppYlgiJnsQP4FphrpcBNtBOy1eeoUA5f9l0Es5wOnPixE9BEgEcCmkA1i5wkAHl26PYAEb15_r");
    izdelaj(nizi, 117, "l_JesAqAFDY8i4ewic2VZ_OtiEugcZsu_PS9sBPTVpBvyGwS55LalmdhZDBsEg10voimccj5ZPypAmskihaxNtdZW6");
    izdelaj(nizi, 118, "CCJsD9fhMn1a1o1mTy8QmJOZ880GZcqPuwrHhP");
    nizi[119] = nizi[19];
    izdelaj(nizi, 120, "X3h__FhN98sB3pKGhv1BPT6W8jJk808UlD18YMqixp5shbbAYaL6KV0KZUVErhZ3wcZbY6fRq9ZlJLvNsELw2Ptaf8blbn");
    nizi[121] = nizi[37];
    nizi[122] = nizi[54];
    nizi[123] = nizi[89];
    nizi[124] = nizi[25];
    izdelaj(nizi, 125, "mxzt6C0azLuGP");
    nizi[126] = nizi[37];
    izdelaj(nizi, 127, "jvbzontZfifLKBJLHYY7RQ4VvP8bTvFwhlDDp3BbixlvMJ0FhCmo9vYRzTuu4vxInLkUngltuFvF_bkJyjO85v");
    nizi[128] = nizi[72];
    izdelaj(nizi, 129, "94uObAb5A9wOxfLnYxDn7KSA0HWIDv");
    izdelaj(nizi, 130, "KFeXVASV2ILlUdb63");
    nizi[131] = nizi[108];
    nizi[132] = nizi[90];
    izdelaj(nizi, 133, "gZyfSOYWgDws9OgFKanvIVoVZL0DhOJINAzB");
    izdelaj(nizi, 134, "pTcDN3");
    izdelaj(nizi, 135, "6bh8sbtRuLjhT0rc6s86DjHTTOKsohbyexfXsYbYAOaZA0aavY");
    izdelaj(nizi, 136, "WexEl57DLY0");
    nizi[137] = nizi[98];
    izdelaj(nizi, 138, "Ei2uXeIii3RacvigQ5Se7h9jAfcKwp1lxoBs");
    nizi[139] = nizi[17];
    nizi[140] = nizi[128];
    nizi[141] = nizi[13];
    nizi[142] = nizi[40];
    nizi[143] = nizi[84];
    izdelaj(nizi, 144, "3AaaZr4wGsaY8EfOFHrGcAmMiL42cLM9");
    izdelaj(nizi, 145, "6iCkvkM0TTmRFviv3QTpjWAkjtXoSjgV2BkkqhWlaZbNks_ee");
    izdelaj(nizi, 146, "OYQ183WYtQg64fXNOdltza2ZosBH47zjEFljMESSLfUSwduQh1AeRs9IRZYl1WVEAIKlyEf");
    izdelaj(nizi, 147, "1NeMsCRTMb94Tj2SQhy1nPVueu15qL0ATDPpQx8OSYlrDEXegqdpmfBitZI");
    izdelaj(nizi, 148, "RydUBzmLa6LZc7lbgFWo4iAzh6ZJafp4PS1AecE2Mi6A4es96XnxpCJjaW8Srb0clKW8FkeAzGnePIS5sxJhG_De3pJpWX");
    nizi[149] = nizi[12];
    izdelaj(nizi, 150, "l2b0F0CIQdkWyb4gkZ");
    nizi[151] = nizi[99];
    izdelaj(nizi, 152, "TdGacTy5ecLVqXMC2c6AmxDjhz");
    izdelaj(nizi, 153, "M");
    izdelaj(nizi, 154, "zgcNoAoFZTtfdp3ZGq3BUNcwUIs8BJCmOHR8zmJbXxVEK732QvndYRbZEsg07V");
    nizi[155] = nizi[151];
    izdelaj(nizi, 156, "LjTyzkzTJS579GrVUEqaNU97pPSG4YgvhE76yfyiUu8ZovmvvlDV5VWdBwgA8nw0Csur4WubWN1ymmrghQA");
    izdelaj(nizi, 157, "fVOuN1IU0ku0RvEQ71tsrnLfeX7ECJXD2AAZ4TVa0_OhlesvzefVRTbjXwiiad4VDbzvpyHBbezCJfWOBRsoJWUXD_S2MqJ5cW");
    izdelaj(nizi, 158, "iM9UxMih_imWIVO9Qo0tXfshgB_HxSxBScgpgHyP_pR_GZj4gyU6DCNrCuBJMy5ZOVMlL6J");
    izdelaj(nizi, 159, "3fIlZUvVEMPIlACIp3h92kg4");
    izdelaj(nizi, 160, "04HAFLj70Apc25KF3roANLvr48sGzU");
    izdelaj(nizi, 161, "_j8a7RGQMSEtU9JZBowiXkqF2BrUYa3A2Ay0lR1qHAm2G3bhKWHPuw");
    nizi[162] = nizi[86];
    izdelaj(nizi, 163, "SUHMybW0ZxEISjs_RkFDJrBOIWn0CMPom0qRVMIAp");
    izdelaj(nizi, 164, "9xCG0zg45d0uBgSfLyQXHcgbUPptS0z");
    nizi[165] = nizi[60];
    nizi[166] = nizi[154];
    izdelaj(nizi, 167, "4uPvhyef0PcPH_qzypG2sNmdfzBeuCr1zrZH4FQJR3ItuOZttUoO");
    nizi[168] = nizi[113];
    izdelaj(nizi, 169, "x1_oXldmlVBp");
    izdelaj(nizi, 170, "vNKQKb3N_vBl00_XqOPxjzaOjW8sTZyFFAvnbuLLqmvgvZvUj6StMcnWanmvL252HudaNjBWM6h");
    izdelaj(nizi, 171, "8k");
    nizi[172] = nizi[119];
    nizi[173] = nizi[108];
    nizi[174] = nizi[4];
    nizi[175] = nizi[30];
    nizi[176] = nizi[9];
    nizi[177] = nizi[74];
    nizi[178] = nizi[30];
    nizi[179] = nizi[164];
    nizi[180] = nizi[146];
    izdelaj(nizi, 181, "z5Uw0U4LMLydUnvpLWktpzRcfPro59kI6wJiH4FuRdRj0W_9bMeKmw8viXj03Fxapzwf");
    izdelaj(nizi, 182, "KauxDuGz0nGVzqZfOQjJzBCNfAchnQR92bOxGtN5_yA0pZOJW8S6voUxeFbfPtYODYI7qTG3suVjyR0BBtPleBaDSFBki70xpqkQ");
    izdelaj(nizi, 183, "es2WaF2aiHr5WNQrIM8obutp_YTQp2Ucyjt6kmfZUfCAdIfcUp0jxNafzrSums3tkJnoQEniMBI4yvg8S");
    nizi[184] = nizi[111];
    nizi[185] = nizi[14];
    izdelaj(nizi, 186, "gWsPLIwpvkPFWYRqqk0js7rS6uzHROWaL8hQlygPg90sccE4aNkdBoO2p8cXwLtmrI06CVsTENyMYFEjnGS_cGGDcaDWxk2m");
    izdelaj(nizi, 187, "IQ1xwSDyU9FNKBGtgke1y3yM");
    izdelaj(nizi, 188, "VXb4GljXvjPVSHEv6tNktJi24rGvS");
    nizi[189] = nizi[15];
    nizi[190] = nizi[139];
    nizi[191] = nizi[15];
    nizi[192] = nizi[136];
    nizi[193] = nizi[4];
    izdelaj(nizi, 194, "nCRoMezjo53R03OkYg");
    izdelaj(nizi, 195, "5g7lpzLWAl4HjtfyVrF9KizMb9fVkDYhJwkdym");
    nizi[196] = nizi[30];
    nizi[197] = nizi[60];
    izdelaj(nizi, 198, "q1pzG8769Q6DRkr0hfEFSH6DKOWlwaxWsIwN0IGdWDj1e5iJwhPEH_Ra_IFPdIN_zko2L0wXexg4d426l");
    izdelaj(nizi, 199, "l7b4Kaegz87ohK3cogFMrAEK3q1pPsYgYoEby");
    nizi[200] = nizi[163];
    nizi[201] = nizi[162];
    nizi[202] = nizi[85];
    izdelaj(nizi, 203, "bZnHjux69mFJu3WZ02g9SQGTG");
    nizi[204] = nizi[32];
    nizi[205] = nizi[107];
    izdelaj(nizi, 206, "1wDqMjnas6AnUVmz3bFtn");
    izdelaj(nizi, 207, "ymLEofujwND6IVCWoZN23F6yJ4sbhB4EjLJ4Cc5ItF_gKQY2IVAD5VnlPx84TXU0");
    nizi[208] = nizi[90];
    izdelaj(nizi, 209, "csUCIYuLmYn");
    nizi[210] = nizi[203];
    izdelaj(nizi, 211, "2yNKxFYQhwTNksyE_y9Fip91AWELvkwoa0PIqmEBjA_EnQQ01R");
    nizi[212] = nizi[19];
    izdelaj(nizi, 213, "2OzgQl0aUuOnhxSJWrKrk43sriQctygWg5yURozE33OjnJIsYF");
    izdelaj(nizi, 214, "IKlgXKQz1S6gSlBOFdIFIgF1iG_GyrOsJrvMzA56yZuWsLpqg2vdVEqfBhFSvIt");
    nizi[215] = nizi[52];
    izdelaj(nizi, 216, "WIsncpSsLAPlcRZqhal8GQnJUjJ2eNelFYRP2HX0TMfFDPDK8S8r8zJWreUtEB56lKaGJ5S3rkxzx4YYQ_TtQQ0");
    nizi[217] = nizi[192];
    nizi[218] = nizi[76];
    nizi[219] = nizi[85];
    izdelaj(nizi, 220, "rWxHjet4ra5sY6u54beuwzqJ17FiFszWfxQlaXylRout1xmVaZID1jiF6XjmMnb");
    izdelaj(nizi, 221, "imy79riYTgav3Yef6nCmEHMaKwxXkfEDYzEUllt0HhEO");
    nizi[222] = nizi[103];
    nizi[223] = nizi[147];
    nizi[224] = nizi[5];
    izdelaj(nizi, 225, "BPNWLrY_");
    nizi[226] = nizi[197];
    izdelaj(nizi, 227, "0vIlAH4");
    nizi[228] = nizi[153];
    nizi[229] = nizi[46];
    nizi[230] = nizi[164];
    nizi[231] = nizi[38];
    izdelaj(nizi, 232, "LMGxdKZtTAIqA3kLLomSoX3jWBgtzt1zuisAbdPlX0bj3Sgj4Ne5F4jYtyCOIbRc08");
    nizi[233] = nizi[23];
    izdelaj(nizi, 234, "kXEFED6rhc8nzZ3jARgUtZqtlLuQkBKoIwO70sCFTTupXjm5gULn7vcPHswr1D2H_Q");
    nizi[235] = nizi[27];
    izdelaj(nizi, 236, "Cg5Cci3jLNh3FxSO3Hb0sCJtmmw1NgeLNU68c7Vh");
    nizi[237] = nizi[6];
    izdelaj(nizi, 238, "eqc4pIjxq626g7KRktltyIscAYVla7USGlr");
    izdelaj(nizi, 239, "Fbp7xmpuVWfKkkafcV5uhu8WYptBT5sWrNtKgL2YILiUvi_5homL_AQ5DRCxZn");
    izdelaj(nizi, 240, "UF3zFxpUq5lW1m");
    izdelaj(nizi, 241, "bqW0pondyILYWeknSRpH4YNi9Y");
    nizi[242] = nizi[162];
    izdelaj(nizi, 243, "3NzajEsKySSZzZ4OB3UMGqcP2HkOwyhDN1bEtpasIBmeM");
    izdelaj(nizi, 244, "SyKogn1bgNnDqi1H");
    izdelaj(nizi, 245, "KoW8UCc3M7QqM7__su25jBgYzewZSePD2k4yhcKBUhCsN9GThvkjViE7rs52P6gXvSGOga8FowMjaSdXs6iR1JZAHfsC");
    izdelaj(nizi, 246, "M1Odvyy__7pHxPbecNXDFh5u93ckiFtfoY1iSmjPWz9SaAXFcxI");
    nizi[247] = nizi[114];
    izdelaj(nizi, 248, "c6KWPd_egTbyVKon0Gzv8sAP2_OrqIu9y7wDQ");
    nizi[249] = nizi[14];
    izdelaj(nizi, 250, "nh35HIFMuD_1UWMG4IYnjiCl");
    izdelaj(nizi, 251, "I8YlvVQZy0ZtJ2ve2mb4ZDAZzY8BEHK65rZEImdV42SVXqgTLkgi6hxwSuuAhoqSai_cjtzjf9SKbmXDD1dBSkE");
    izdelaj(nizi, 252, "fGeNML4sCy5pZwC");
    izdelaj(nizi, 253, "3Vktad7xT4GyKCt5");
    izdelaj(nizi, 254, "MG_o0LPC_nQLiYMv2smXwPX7qw5B3x0liho2jNut6r_pEgDKYs_5hDke1JjTYjtrlDNlpZFEvR7a8sYpZMkJjxM0WZLaYFwpZbOK");
    izdelaj(nizi, 255, "rmXqfZj7mRvMtIg2cToVqk5Anw3OHlScqxAEcz_wZZCF9OIjVoo9NQrqw7FlmMeicTTUpgzChdi5Bro7JYoUKZnrkFR");
    nizi[256] = nizi[62];
    izdelaj(nizi, 257, "oQdxoSV_hmJGOJlKGTicCMekQhyIsmPjaNWGQfuAIWl_DbIM2ypRJd5o2yOYB5Kzr3L5pZaITZlFxEC_a41tlLRO3r");
    izdelaj(nizi, 258, "jrTfgs9XzdPeksJOaTCaYyr7gZ5");
    izdelaj(nizi, 259, "Bo");
    izdelaj(nizi, 260, "CYDPz9cs4r2yo144JHULf9c8wnJwVa5jVOWjhem0OldlYV3fbFpHtDgFXkGfoV2kLnPeErS");
    nizi[261] = nizi[5];
    nizi[262] = nizi[52];
    izdelaj(nizi, 263, "CVH82psrjUsr8MEJnuynQ2CY5xfqKALKjB54FyCk4A_DntF2HQu934XR8EhTJxRNbLsBmpbSFwvJ7wVvl");
    nizi[264] = nizi[161];
    izdelaj(nizi, 265, "SDa3CoCRHMA5Kmt");
    nizi[266] = nizi[67];
    izdelaj(nizi, 267, "acPPoRKYQ6FFfQXnoaa2oYrXf7");
    izdelaj(nizi, 268, "W6sj1hXILwHVwPzxBxSaPiLIFhouVlPcrLUbMWEOhVhWAf2A");
    nizi[269] = nizi[71];
    izdelaj(nizi, 270, "0rSlysE2TD1q3lfBnADkzmwfDRhLaduaoZjznz");
    nizi[271] = nizi[123];
    nizi[272] = nizi[12];
    izdelaj(nizi, 273, "KwHMVrbRHCL2oJsuW0ahQxiLZF0SknVgUrRiXUzhfehz1AVomTt4n46oH03izvAZpBtMwdJTlyyjj6Ypj4xqAGZnmFU");
    izdelaj(nizi, 274, "jW1iESEp2yEMPrY2pxXnuul7S9stveGReLF");
    nizi[275] = nizi[263];
    nizi[276] = nizi[1];
    nizi[277] = nizi[123];
    izdelaj(nizi, 278, "6mZOD0kWXawFrInPm0QGp0D1Un5flN1fXgWZpdNgiPd2ksY");
    izdelaj(nizi, 279, "w76FH0MTvApdRqS25YGoy6oNTnNvoJNdXRF3e0o2nmyRprbUkYFG5ajZrLe7UCtix8jV2VCC2BEwie_lAjiwoy13AroQCvpTns8e");
    izdelaj(nizi, 280, "8aZdXhsl1A8aEVXIidgwIxadVx2P4b5TSrrmeKLLNhRJX9PYLKrKKT36qf1XHnA_T0Nzfre");
    izdelaj(nizi, 281, "mwCFEWyQ602QdKsFx9zkOqhLFfAcZja7s32c3Y_giqaB0lQlGpFc3mMbAyp3WRuPVpwZVj9_n8zSbJVPUOb9v35V3_bjVdhwLB4V");
    nizi[282] = nizi[225];
    izdelaj(nizi, 283, "jCzrMZzbzWEmTDIddkYCQjhym4megUvqSueGA8XsAu4J6Ah9WAXDhd63SNCRxyaCf09gMnFxFVi5ydV84nvYC5T2_");
    nizi[284] = nizi[80];
    nizi[285] = nizi[273];
    nizi[286] = nizi[160];
    izdelaj(nizi, 287, "GlpvEYBNH2Fd4VnKvjI6oajQ7ykwpBmGBDEizn1rCYvRA1T7zUuXqmyj5H3N3zrisoVcGhvSfAa");
    izdelaj(nizi, 288, "AdKvwAVrFJ0HqqU8LIR_DGfvygp3wOChihQsy7sweot_JDCpEVkx45GlV9dpjfkrCpPI3_rCGMuXWpwSiXd0vMgsDzdPHX");
    nizi[289] = nizi[9];
    nizi[290] = nizi[270];
    nizi[291] = nizi[222];
    izdelaj(nizi, 292, "ZQD3AYRZ7UXETnxiNZmAd9gddatw");
    izdelaj(nizi, 293, "_EYo_dR30_bvPyO_zavKbET6mja1D4pKqKo3x7ljJdosmM8Ib2a56mUNOJ2JnpAB5U_4Bh");
    izdelaj(nizi, 294, "MGbhtMGxo");
    izdelaj(nizi, 295, "6CHn7kceHJlRUTPZ_hL");
    nizi[296] = nizi[233];
    izdelaj(nizi, 297, "hoc4Tpkt6KXNaA7s9PGNcaxVehZYzREKobHLGqkd6mqihpNLWHSpntcuwMc3zN4oOST2n8efh6aHfb2_89iAZoZa");
    nizi[298] = nizi[267];
    nizi[299] = nizi[86];
    nizi[300] = nizi[50];
    izdelaj(nizi, 301, "04p6MvSkOPW5MkwXXWB3g98GBfOITpYWSTHqWeFd8QlR7SlZFJftDBx5Rnyg3zDbGjJkNdax4t1B53y4NkqRZqEwcQv");
    nizi[302] = nizi[282];
    nizi[303] = nizi[302];
    nizi[304] = nizi[265];
    nizi[305] = nizi[289];
    izdelaj(nizi, 306, "PSbzdNmixSvZ4k2S4GbZE1GIdbV");
    izdelaj(nizi, 307, "63DemVH6CbhegNt6VpCSTgAaHYcet8zeDosE1xnB7dYBFGvfk8p0yh_NfeC0biLgq4CP_nmdEIFFsho7TXuvJbBUbQ");
    izdelaj(nizi, 308, "ac9xJcLhLrrek75QmcpB3FY0YK9RzqXCg");
    izdelaj(nizi, 309, "3gXvHyWK88gneEodmcpTn8zJqBPAwC4zO2ebjJdhFq035lPXfTVBScl7eRDy4In0FCZ9sop_zxTr_GmLJoio2fossxFtQF");
    izdelaj(nizi, 310, "uOE9iMH");
    nizi[311] = nizi[237];
    izdelaj(nizi, 312, "X57CDyzRKOIIWVgQsq6JCIcEpRk6wX_0jUA7Xe9mqEt4ne3ZiMOR8SVOh");
    izdelaj(nizi, 313, "YZgRGnFdb8c3zSspwU_iek4TmJK_ZAXMpMAdPyQhDDTg9Toq63ecKG0buE5M1uEql420h7ZxBq6");
    nizi[314] = nizi[134];
    izdelaj(nizi, 315, "k9vtmIG5hoT_55fexD1");
    izdelaj(nizi, 316, "XbzPomnjDThFrL8ZO58j9sOwNiTDIs9rcaCEeKRWoZImuT_D2T2rbb7LC1NWdT0EU4zdAZMTakg");
    nizi[317] = nizi[220];
    izdelaj(nizi, 318, "EKUnwP7aTEBPU3mDW2mJFwHOi29F9flenMDzvwrIIJYvd0sWuZFq3ZsP1AOaQXAdVTJpqRp");
    izdelaj(nizi, 319, "GnhX3gYqPaO3voVI7nyl32gLjgMxv4l77m");
    nizi[320] = nizi[169];
    izdelaj(nizi, 321, "JNK1dti85F3o");
    izdelaj(nizi, 322, "oGUce_tBJQP0ZvjAbZHAK3WC36DtdPsA7E3R9N_BGqUqTVfNK6r");
    izdelaj(nizi, 323, "6p");
    nizi[324] = nizi[110];
    izdelaj(nizi, 325, "9Rk9HwQHYY0W3vrmNlDZGFMa");
    izdelaj(nizi, 326, "uBMzusI6wqQdLvQQR1yTpBAQhTFZYAbFP6jkbxpfxLXE7cwjxteaLQeL6SkX0dOlduaCP_U24");
    nizi[327] = nizi[121];
    nizi[328] = nizi[21];
    nizi[329] = nizi[3];
    izdelaj(nizi, 330, "DACkMr5WzhFUi7lnpgYcACcIOhRpuBeDxgi0H2HGnNXR5QSHC8");
    izdelaj(nizi, 331, "SC4o9qTtCOfHK065LtpKbF3mRP01zOyiU9H9m4wGaEQrR3QDsemd_T4m1YjKi67zGRwITWZfcQDuHh3");
    izdelaj(nizi, 332, "fQepo7xFHs");
    nizi[333] = nizi[266];
    nizi[334] = nizi[2];
    izdelaj(nizi, 335, "CxhYe_gWMEzbHwAQcthOqD8BQp962j2mX8gpaZSb4xrYooKohk4LgA4pfCT8CFGC8SI");
    izdelaj(nizi, 336, "Hl6mt_gIR7t8OQ6mG8gWDZa1u6_7fUi2n39hjnVEkjNleAbAgrKYNeeJYfPYQRbYe8QCMbDJ9E_cUq4te4kb6G8gQ7");
    izdelaj(nizi, 337, "nGwkjgsmUyxHZ2bxNRBM_A0Wh3hPTLa37uVO4xDFZjgO");
    izdelaj(nizi, 338, "1LuCXXSSlqHvA4xkL1gqgM5L");
    izdelaj(nizi, 339, "YOdd71d1vB7ZvcHr96C0pX32Zp3bpFNRm57RhzE3OkNTHXks4LN2HKZTpq9rjZtNi0wf37ajTZ4XZ63j39no");
    nizi[340] = nizi[196];
    izdelaj(nizi, 341, "hS76AuOgv");
    nizi[342] = nizi[287];
    izdelaj(nizi, 343, "A");
    nizi[344] = nizi[100];
    nizi[345] = nizi[169];
    izdelaj(nizi, 346, "pLMapoS8sKz4G_RvFTesQB8YLbApTeL3YyY1aRV2NaIbxjIG2ltMfl");
    izdelaj(nizi, 347, "75CnzVeoXgoOPaVvEfPmnkWDh057orR_5bLB0Jpirzp7XqQTlD_Mmzctfou0zbiNPPoJ72nK61H");
    nizi[348] = nizi[55];
    nizi[349] = nizi[14];
    izdelaj(nizi, 350, "676muhg");
    nizi[351] = nizi[52];
    izdelaj(nizi, 352, "Bq_PDuEQeR2aHuJnxjPKw0Tpx7q6cRCBVDAsOwF4s77VbkTWPm813ImKiHoEYdr50HQ121iu");
    nizi[353] = nizi[325];
    izdelaj(nizi, 354, "ZgNkWAJsSDw4apb8HDXIy2qoC39cIlYnXX9PlmfFpEVzl2IhDbZeiB30I85wr9fjh7RKMr9Y5t");
    izdelaj(nizi, 355, "mcTpWZ89_Jf86urIj8c_y4EMTvV8v0TFggjixPCBNJIH9V3OE3PtFNbGkP7S4L69ygrBwMvwMMwE7N_stESsRl");
    nizi[356] = nizi[250];
    izdelaj(nizi, 357, "3YXAS27fK5euUZFtP1BzHh5ipZV48xBX94cf8pqtBGQC5UfggUHJZa8UtdcPVKQ2xLCXj9ykMMJFYBjdFOYFfCP");
    nizi[358] = nizi[240];
    izdelaj(nizi, 359, "FwhLpxCxs8ER6cTUDiMnz7PECyzaMMhjxvcLJvSQaP6vSPRZqhRyET");
    izdelaj(nizi, 360, "9VE7KYLztjpSqGUQT");
    izdelaj(nizi, 361, "A1nRSAOqB6pcsVItp9Rp0Hl4Y3h3vudWO2lEInSEHG3dI0wOLVukI1FCLjzFKo");
    izdelaj(nizi, 362, "arDj4tSxtSwYH9d4DRzKGIirbiDtN7rWbInnQBzUXPDwyQTgwIKTPG2mVawSHTd4QLmLMeNC");
    izdelaj(nizi, 363, "NFohzkFDCEPiH_uvkVjsqPLwed9yNb72E3hwReXySEL6gthuSZP1EjSxFBzeiRkGrS37nFngLodecFKUUdtsMqIus3GN");
    nizi[364] = nizi[38];
    izdelaj(nizi, 365, "lY9lDsuz00qLL9CGn1Orxsa85ND8AW74pAuKnuovHPOdcuw");
    izdelaj(nizi, 366, "KxzbnrfAKtQKcJ1c9sehOkjLq7w5rm2Nyos40C");
    izdelaj(nizi, 367, "u7bXrBXJqhusFFByllwdDVmDFVQA607ARS4g4oPaWyNBJMHQ");
    izdelaj(nizi, 368, "CYR1q3mfvNfpe4UnydSkM0uMNRXjrwfLsmjAouNpWp9RQlt");
    nizi[369] = nizi[284];
    nizi[370] = nizi[365];
    nizi[371] = nizi[105];
    izdelaj(nizi, 372, "upX_suDOoLY5HVtlmAO8q5OIUzBHdPG6W12FO6OhAYj7UJbLeUZu6ZC");
    nizi[373] = nizi[269];
    izdelaj(nizi, 374, "tpsMENMEO84l3jC90LfL8cE6oqRGghbTxv4_sPY0TGhKDofziCoDla03jHsAc7ZXciHHryFwAt33R0ID25hfMvvpJVpK9sfy");
    nizi[375] = nizi[106];
    nizi[376] = nizi[82];
    izdelaj(nizi, 377, "h8Gx2Y2fNnKdGjZgrTHcKQDU41s_GEZBk6oEBShBfAVq0IOHBn485m");
    izdelaj(nizi, 378, "Dg8HVyFnLV2ShvPEV3E6a7AUVvDGvC1S9lM4H37nOqoOCgqjPRHQ42UH1DgJ");
    izdelaj(nizi, 379, "W3KCd54W4OCLc8oYre");
    nizi[380] = nizi[260];
    nizi[381] = nizi[156];
    nizi[382] = nizi[27];
    nizi[383] = nizi[292];
    nizi[384] = nizi[311];
    nizi[385] = nizi[220];
    izdelaj(nizi, 386, "I1");
    nizi[387] = nizi[320];
    nizi[388] = nizi[79];
    izdelaj(nizi, 389, "QaHUe5qtIZVVLktkY9eVQXhdhkhdFCmbyBIbv_B7RAwhgPmNH2JQu5_RIyaqZBNZi");
    izdelaj(nizi, 390, "4BIWkDIMu3tiUH");
    nizi[391] = nizi[37];
    nizi[392] = nizi[228];
    izdelaj(nizi, 393, "rG6YISTamv4zYosU2CqXT982iQA1iPfLVyqkwOhADif9MmbB2x1qU7cMxb6M4oJ2SD");
    nizi[394] = nizi[242];
    izdelaj(nizi, 395, "rYyfoa1OSiwkrRZneCW_dbhawB7VJ8Fs7WNJqpJvvFduwnMn0WXgE_4wAab1DB6hwgFxQTXn3XiqcbA6i7Jl_Toy5E");
    izdelaj(nizi, 396, "050YsQuddVDZgP2u8_GdYEFr7SKYURFaUbT_NvYLPCuTRXuosFtvbuli");
    nizi[397] = nizi[80];
    nizi[398] = nizi[200];
    nizi[399] = nizi[188];
    nizi[400] = nizi[396];
    nizi[401] = nizi[47];
    nizi[402] = nizi[293];
    nizi[403] = nizi[230];
    izdelaj(nizi, 404, "mDCaNxOrBBI");
    izdelaj(nizi, 405, "Pk335tMivbg6zHeiNhSs9nnb2N_rAvYlzENsbeCCfbrVWj9Pv4GcgMEAXwIsR6orQ7V4T92h");
    nizi[406] = nizi[249];
    izdelaj(nizi, 407, "hlCwwLcWIF7dCcaNnb0KFtV_wL1nMJQkxfFiFyl65cZCYhSqp4dt1OhlupX");
    nizi[408] = nizi[348];
    izdelaj(nizi, 409, "iv3CNrhMirFlEckzLh55rvMFGFC6ZqbBPzYC3xqzVh2tp58zleHmmogL8lU89k");
    izdelaj(nizi, 410, "z4E4tKcdwBSyoZQFYp9U2d6Q2CfzGKJIqMNZG3N_V86CDViVvVjEemtEY9q6Q");
    izdelaj(nizi, 411, "0Y2jQ5ZEpci7eJIfObX4GYd2Zg9QeBtK6C_t50RfJ4MB0knGj_gABTN0P06ZvGRyMQC");
    izdelaj(nizi, 412, "DnNheHjTDsTUf7npVT5t8D6XUzGcScWWwBmr0ca3HiX4sOGc");
    izdelaj(nizi, 413, "WZiWrkdHvDf87UARKCkoRDGBFZM9PRdsOKqQiLf");
    nizi[414] = nizi[145];
    izdelaj(nizi, 415, "4roiGcZ4aBNFqO");
    izdelaj(nizi, 416, "lZrlEBOIARV32r9xI2C6rG9x3wfpcUmcRNkNNwATvy1H01k7y0X5XEt_U0y4ekAtgyhVAxRfsW3eqAYbeihHPEso7oZzEsgS2");
    izdelaj(nizi, 417, "bxjmsJh2y8wLGEqhQVLoeLD955xYJhywiF_kQmHWlZC6s8EzdayqMO0Q06SY3t7oMDeNm03USP7imZNLFhL");
    izdelaj(nizi, 418, "QgnXPrg5PYUe4yPaXY1bzapyrF5VkTrr0PqkTeOYOPP85527SaFhGellcSUZExBpc48cONHIqwEI");
    nizi[419] = nizi[409];
    izdelaj(nizi, 420, "CD52FtQRmq8jti9RQlRcaxTBTFcZlpAa71biXG9aA2Q");
    nizi[421] = nizi[203];
    nizi[422] = nizi[217];
    izdelaj(nizi, 423, "qiXKSi9XXI68Jj42PvZN83DEUuOELC6UKtPn7K_J4mmvYYoZkjA6qJ8h66LINYakmTrifrZvWy6ABrFytjBE0jlcAhc");
    nizi[424] = nizi[7];
    nizi[425] = nizi[298];
    nizi[426] = nizi[194];
    izdelaj(nizi, 427, "BcO_ku7VzwxXMGOnToFZ4jpD8LzlnS1muXuyjnnEJRyFYotxrWrINEo1mtYq9vTJPhVHF9Z_akzMF8umvhYF7fnTDrtnvmCehPL");
    nizi[428] = nizi[264];
    nizi[429] = nizi[150];
    nizi[430] = nizi[421];
    izdelaj(nizi, 431, "a4CsF2DDysxv64SBnFxwjCVD5zb03uGJxahvYa8NtvbtcAsvS5Xu5FXYZyOq1QlcHAbNEK9pTTCJsqlOu0edxqrBYaIqk");
    izdelaj(nizi, 432, "P4rqJ65xV4Ac5MfW_w7xwEQ7Hxpd9RYMgzyrjAIcnZOzOW9tU1TSLjSH_VVN6PGAWrrrMpd9gL");
    izdelaj(nizi, 433, "q61UzOsjAHRdL1ArtWMsY4K9wzW9fc8RFI0HchMi8B2DumlucMeUUJmF7mXYt");
    nizi[434] = nizi[0];
    nizi[435] = nizi[278];
    izdelaj(nizi, 436, "Qsgr68LNdBz7fjZnGCmq34hcnfb94bVgRA2u62mwcHqrKgmY");
    izdelaj(nizi, 437, "IXsfUjNPOV9FEbc2C9noxkVUbECxD2ibJ3lACMsQTAnFB1yL");
    izdelaj(nizi, 438, "1rAFs3Cl1zJpTbuEzuTpjkkHdnqJqzzPNcH2evUdre8hZBkKBlG1EG_bNxDZsm0");
    nizi[439] = nizi[172];
    izdelaj(nizi, 440, "VEPZGEJF3IsYnImNd8zh6iSaFtJLfa9nReHdhAXwG_GmPvATda_otwdFzTeiWfeO9BsxRpcs3HspH5ziv4J39gYJT1t1MAG");
    izdelaj(nizi, 441, "P3KUPEu4vQCVOznxK6d1MCOzT9NoTLDJWOUCRJ3iSTzGHcTO6");
    izdelaj(nizi, 442, "zIp");
    nizi[443] = nizi[4];
    izdelaj(nizi, 444, "IkKLgDvF5A0Dpirkxh7dG6PKVWho9SY4T2Z6D0VBS0jJDThCZl6MmvQH3gy2MzZyitNkqXY0k_cV8K");
    izdelaj(nizi, 445, "xCWEQS5tPsvKb_wwhdRZKgMygmpxNci6stAvzK");
    nizi[446] = nizi[198];
    nizi[447] = nizi[435];
    izdelaj(nizi, 448, "6qZk2W1wYkeQaWgEHS");
    izdelaj(nizi, 449, "_IF4l91pTXJw5dsji7Jxrj5xs89fNRJEaFsPFWn42RWCc44s9VRzwogimAqy");
    izdelaj(nizi, 450, "BBOaPbzuU1Gt0Gq4o1txS4Gm2p84x3QXYRSo6QVSkVg2AaxWev79zM1LhHCUnbgc");
    izdelaj(nizi, 451, "LS0KuiMxmHZ6Fmc1");
    izdelaj(nizi, 452, "_uHEzRrnrsdOwb39pHHtcR5RwOmOVQNL4OMdyH5f_LAuwllRsTTQaIgxVC1fqJWSsDAb1Z1csOCRRXK4");
    izdelaj(nizi, 453, "ljZXuAEiMfYTma6nOhw5bj19O2vEDgKQvr8q8pgXAWN7LYbPWWfllOY9BfgRWnCk_reaBNqqK53i");
    nizi[454] = nizi[9];
    nizi[455] = nizi[390];
    nizi[456] = nizi[185];
    nizi[457] = nizi[152];
    izdelaj(nizi, 458, "2Hjrlx3K2IfcSre0NG7ahbHt6iZCkxqHwiqX7PezoXglIOUGs9R40_P");
    izdelaj(nizi, 459, "SfDXkc6aRcORONjAeti6rlm");
    nizi[460] = nizi[422];
    nizi[461] = nizi[458];
    izdelaj(nizi, 462, "XcRpwkyScru");
    izdelaj(nizi, 463, "ylkpniw3dBUU0l7Hsq");
    izdelaj(nizi, 464, "VsE");
    izdelaj(nizi, 465, "gAJLZ9AY0OTc5AmYm4_S5qSyiEhB");
    nizi[466] = nizi[58];
    nizi[467] = nizi[418];
    izdelaj(nizi, 468, "Xcj2OwtFIb127hZgZGNIClZ0CitQjy6dWi4SxMqT5Kba2IGwPVYT_Iz9EHDuIE3W1NFR0IHtvfDoeLjawzO8Eha");
    nizi[469] = nizi[267];
    nizi[470] = nizi[353];
    nizi[471] = nizi[32];
    izdelaj(nizi, 472, "7x0cuoCCj");
    nizi[473] = nizi[309];
    izdelaj(nizi, 474, "Je0WYCY2HK7ltZgpnuJ5Lk");
    nizi[475] = nizi[23];
    nizi[476] = nizi[115];

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}