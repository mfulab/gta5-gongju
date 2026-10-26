#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 4
#define BUFFER_SIZE 1615

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} MTDv5VRx_ctx_t;

void init_ctx(MTDv5VRx_ctx_t *ctx) {
    ctx->id = 9327;
    ctx->coefficient = 8.0;
    ctx->flags = 221;
}

int compute_e8bwQPD(int input) {
    int result = input * 39;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} yo0glcjF_ctx_t;

void init_ctx(yo0glcjF_ctx_t *ctx) {
    ctx->id = 4386;
    ctx->coefficient = 4.9;
    ctx->flags = 47;
}

int compute_V0q20v9(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} DoaRHBUO_ctx_t;

void init_ctx(DoaRHBUO_ctx_t *ctx) {
    ctx->id = 4901;
    ctx->coefficient = 1.6;
    ctx->flags = 49;
}

int compute_sqcYMhA(int input) {
    int result = input * 19;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} am2WtSSd_ctx_t;

void init_ctx(am2WtSSd_ctx_t *ctx) {
    ctx->id = 8837;
    ctx->coefficient = 8.6;
    ctx->flags = 28;
}

int compute_Ds7dexp(int input) {
    int result = input * 61;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_POcH7Q0(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_0P9P8Vp(int input) {
    int result = input * 68;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} sFhWfLPo_ctx_t;

void init_ctx(sFhWfLPo_ctx_t *ctx) {
    ctx->id = 7737;
    ctx->coefficient = 9.1;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} kFnGClf4_ctx_t;

void init_ctx(kFnGClf4_ctx_t *ctx) {
    ctx->id = 3706;
    ctx->coefficient = 2.9;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} NpluWvBk_ctx_t;

void init_ctx(NpluWvBk_ctx_t *ctx) {
    ctx->id = 2325;
    ctx->coefficient = 1.2;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} fLAgvI2m_ctx_t;

void init_ctx(fLAgvI2m_ctx_t *ctx) {
    ctx->id = 5800;
    ctx->coefficient = 9.6;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} lU91PxW2_ctx_t;

void init_ctx(lU91PxW2_ctx_t *ctx) {
    ctx->id = 2171;
    ctx->coefficient = 4.0;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} XzeggQ1z_ctx_t;

void init_ctx(XzeggQ1z_ctx_t *ctx) {
    ctx->id = 3317;
    ctx->coefficient = 4.4;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} pEZUmIdK_ctx_t;

void init_ctx(pEZUmIdK_ctx_t *ctx) {
    ctx->id = 2763;
    ctx->coefficient = 6.7;
    ctx->flags = 204;
}

int compute_MIIgvkb(int input) {
    int result = input * 13;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 1b7XTDdC_ctx_t;

void init_ctx(1b7XTDdC_ctx_t *ctx) {
    ctx->id = 4054;
    ctx->coefficient = 9.2;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} uGg2tzez_ctx_t;

void init_ctx(uGg2tzez_ctx_t *ctx) {
    ctx->id = 5375;
    ctx->coefficient = 0.5;
    ctx->flags = 77;
}

int compute_o5BEbLz(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} Wq59uNqi_ctx_t;

void init_ctx(Wq59uNqi_ctx_t *ctx) {
    ctx->id = 8726;
    ctx->coefficient = 0.9;
    ctx->flags = 209;
}

int compute_ofkDyl0(int input) {
    int result = input * 65;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} kVJr25RE_ctx_t;

void init_ctx(kVJr25RE_ctx_t *ctx) {
    ctx->id = 8563;
    ctx->coefficient = 5.9;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} QsJjKRmu_ctx_t;

void init_ctx(QsJjKRmu_ctx_t *ctx) {
    ctx->id = 7101;
    ctx->coefficient = 4.6;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Fw4qfz7q_ctx_t;

void init_ctx(Fw4qfz7q_ctx_t *ctx) {
    ctx->id = 3330;
    ctx->coefficient = 3.1;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} bkoOZpey_ctx_t;

void init_ctx(bkoOZpey_ctx_t *ctx) {
    ctx->id = 5437;
    ctx->coefficient = 5.4;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} CjrvKRzR_ctx_t;

void init_ctx(CjrvKRzR_ctx_t *ctx) {
    ctx->id = 9025;
    ctx->coefficient = 4.5;
    ctx->flags = 76;
}

int compute_Fm6z7vP(int input) {
    int result = input * 51;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} K5tdj9a9_ctx_t;

void init_ctx(K5tdj9a9_ctx_t *ctx) {
    ctx->id = 4426;
    ctx->coefficient = 2.4;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} SIFJl3MH_ctx_t;

void init_ctx(SIFJl3MH_ctx_t *ctx) {
    ctx->id = 9898;
    ctx->coefficient = 5.9;
    ctx->flags = 86;
}

int compute_Bj98ctH(int input) {
    int result = input * 13;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} tDnPoRV3_ctx_t;

void init_ctx(tDnPoRV3_ctx_t *ctx) {
    ctx->id = 5528;
    ctx->coefficient = 5.8;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Dh0iM13T_ctx_t;

void init_ctx(Dh0iM13T_ctx_t *ctx) {
    ctx->id = 4993;
    ctx->coefficient = 1.1;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 4HWC3nTq_ctx_t;

void init_ctx(4HWC3nTq_ctx_t *ctx) {
    ctx->id = 8083;
    ctx->coefficient = 8.4;
    ctx->flags = 79;
}

int compute_X1BMEXJ(int input) {
    int result = input * 10;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} SHzDcHAt_ctx_t;

void init_ctx(SHzDcHAt_ctx_t *ctx) {
    ctx->id = 8164;
    ctx->coefficient = 5.8;
    ctx->flags = 21;
}

int compute_QRWiqZp(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} tV2JceOa_ctx_t;

void init_ctx(tV2JceOa_ctx_t *ctx) {
    ctx->id = 5039;
    ctx->coefficient = 5.1;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} sxE3F0ZW_ctx_t;

void init_ctx(sxE3F0ZW_ctx_t *ctx) {
    ctx->id = 9711;
    ctx->coefficient = 1.8;
    ctx->flags = 237;
}

int compute_Fdd0kSx(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 4ALe5ZDo_ctx_t;

void init_ctx(4ALe5ZDo_ctx_t *ctx) {
    ctx->id = 9894;
    ctx->coefficient = 9.7;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 2hLxYTDy_ctx_t;

void init_ctx(2hLxYTDy_ctx_t *ctx) {
    ctx->id = 7774;
    ctx->coefficient = 8.8;
    ctx->flags = 234;
}

int compute_RdruQnQ(int input) {
    int result = input * 7;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} AM1NTj9c_ctx_t;

void init_ctx(AM1NTj9c_ctx_t *ctx) {
    ctx->id = 7149;
    ctx->coefficient = 5.5;
    ctx->flags = 131;
}

int compute_XOg2R3i(int input) {
    int result = input * 53;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} pomJDuEn_ctx_t;

void init_ctx(pomJDuEn_ctx_t *ctx) {
    ctx->id = 5357;
    ctx->coefficient = 6.1;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} mHtPdekL_ctx_t;

void init_ctx(mHtPdekL_ctx_t *ctx) {
    ctx->id = 1314;
    ctx->coefficient = 5.1;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} F77n9iab_ctx_t;

void init_ctx(F77n9iab_ctx_t *ctx) {
    ctx->id = 1143;
    ctx->coefficient = 2.7;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} kH1cmc0C_ctx_t;

void init_ctx(kH1cmc0C_ctx_t *ctx) {
    ctx->id = 6167;
    ctx->coefficient = 1.6;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ONsiDeGa_ctx_t;

void init_ctx(ONsiDeGa_ctx_t *ctx) {
    ctx->id = 5273;
    ctx->coefficient = 1.6;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} fQTYcOhL_ctx_t;

void init_ctx(fQTYcOhL_ctx_t *ctx) {
    ctx->id = 2467;
    ctx->coefficient = 2.4;
    ctx->flags = 222;
}

int compute_I5tiYia(int input) {
    int result = input * 48;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_1Zomm6X(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_I32dGcP(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_iEbuuCJ(int input) {
    int result = input * 53;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_Ju0fAc7(int input) {
    int result = input * 28;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_J2e0UKK(int input) {
    int result = input * 39;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} pqsC8o39_ctx_t;

void init_ctx(pqsC8o39_ctx_t *ctx) {
    ctx->id = 7978;
    ctx->coefficient = 7.7;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} GiVe3YDM_ctx_t;

void init_ctx(GiVe3YDM_ctx_t *ctx) {
    ctx->id = 6138;
    ctx->coefficient = 5.5;
    ctx->flags = 83;
}

int compute_f3a33bM(int input) {
    int result = input * 37;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} HFSl5ecZ_ctx_t;

void init_ctx(HFSl5ecZ_ctx_t *ctx) {
    ctx->id = 7854;
    ctx->coefficient = 8.1;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} ubP50qEY_ctx_t;

void init_ctx(ubP50qEY_ctx_t *ctx) {
    ctx->id = 3274;
    ctx->coefficient = 3.7;
    ctx->flags = 68;
}

int compute_aRkFOxP(int input) {
    int result = input * 56;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 0S9ndSjs_ctx_t;

void init_ctx(0S9ndSjs_ctx_t *ctx) {
    ctx->id = 7270;
    ctx->coefficient = 0.9;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} SnN3tAvb_ctx_t;

void init_ctx(SnN3tAvb_ctx_t *ctx) {
    ctx->id = 1478;
    ctx->coefficient = 2.1;
    ctx->flags = 98;
}

int compute_mMklCaR(int input) {
    int result = input * 37;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} BJJ9Ik0v_ctx_t;

void init_ctx(BJJ9Ik0v_ctx_t *ctx) {
    ctx->id = 1313;
    ctx->coefficient = 2.9;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} eqVsZxnu_ctx_t;

void init_ctx(eqVsZxnu_ctx_t *ctx) {
    ctx->id = 7793;
    ctx->coefficient = 3.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} CTPtdyL1_ctx_t;

void init_ctx(CTPtdyL1_ctx_t *ctx) {
    ctx->id = 1423;
    ctx->coefficient = 2.5;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} XBOT8ETq_ctx_t;

void init_ctx(XBOT8ETq_ctx_t *ctx) {
    ctx->id = 8986;
    ctx->coefficient = 7.5;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} YsgHCjhz_ctx_t;

void init_ctx(YsgHCjhz_ctx_t *ctx) {
    ctx->id = 1880;
    ctx->coefficient = 2.6;
    ctx->flags = 197;
}

int compute_7dtjvDn(int input) {
    int result = input * 3;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_wIbRnb4(int input) {
    int result = input * 20;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} fpkzsear_ctx_t;

void init_ctx(fpkzsear_ctx_t *ctx) {
    ctx->id = 3006;
    ctx->coefficient = 0.9;
    ctx->flags = 148;
}

int compute_EWf51rX(int input) {
    int result = input * 70;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} RcyI8ESY_ctx_t;

void init_ctx(RcyI8ESY_ctx_t *ctx) {
    ctx->id = 3097;
    ctx->coefficient = 3.6;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 5DERbc4X_ctx_t;

void init_ctx(5DERbc4X_ctx_t *ctx) {
    ctx->id = 8837;
    ctx->coefficient = 3.8;
    ctx->flags = 161;
}

int compute_smvx4z6(int input) {
    int result = input * 16;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} sf7zwFSO_ctx_t;

void init_ctx(sf7zwFSO_ctx_t *ctx) {
    ctx->id = 8066;
    ctx->coefficient = 8.7;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} hjzdwojs_ctx_t;

void init_ctx(hjzdwojs_ctx_t *ctx) {
    ctx->id = 6810;
    ctx->coefficient = 4.7;
    ctx->flags = 222;
}

int compute_NThtWAp(int input) {
    int result = input * 66;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_sLGgwCP(int input) {
    int result = input * 12;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 86il8yDY_ctx_t;

void init_ctx(86il8yDY_ctx_t *ctx) {
    ctx->id = 8563;
    ctx->coefficient = 1.8;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} QOL1Sub6_ctx_t;

void init_ctx(QOL1Sub6_ctx_t *ctx) {
    ctx->id = 5614;
    ctx->coefficient = 3.5;
    ctx->flags = 56;
}

int compute_Jyf2SEa(int input) {
    int result = input * 22;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_mAL4UXj(int input) {
    int result = input * 14;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_YvdUOr2(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_2XI7Y1r(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} YY0FwU3a_ctx_t;

void init_ctx(YY0FwU3a_ctx_t *ctx) {
    ctx->id = 1030;
    ctx->coefficient = 7.4;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} MFqfK1xL_ctx_t;

void init_ctx(MFqfK1xL_ctx_t *ctx) {
    ctx->id = 8997;
    ctx->coefficient = 8.9;
    ctx->flags = 92;
}

int compute_sljmHio(int input) {
    int result = input * 6;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_oreQQ0D(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} bjdIPDFn_ctx_t;

void init_ctx(bjdIPDFn_ctx_t *ctx) {
    ctx->id = 8050;
    ctx->coefficient = 2.5;
    ctx->flags = 172;
}

int compute_lKu4z50(int input) {
    int result = input * 19;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_ZB2VSIv(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_mv9X9HI(int input) {
    int result = input * 32;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_NcKyNF8(int input) {
    int result = input * 60;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_XtPH66w(int input) {
    int result = input * 69;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 2w4xyxVb_ctx_t;

void init_ctx(2w4xyxVb_ctx_t *ctx) {
    ctx->id = 5946;
    ctx->coefficient = 8.6;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} QPiOxMls_ctx_t;

void init_ctx(QPiOxMls_ctx_t *ctx) {
    ctx->id = 4750;
    ctx->coefficient = 0.6;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 7AgtuOa4_ctx_t;

void init_ctx(7AgtuOa4_ctx_t *ctx) {
    ctx->id = 5493;
    ctx->coefficient = 5.6;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} FbBCMfxN_ctx_t;

void init_ctx(FbBCMfxN_ctx_t *ctx) {
    ctx->id = 6623;
    ctx->coefficient = 8.2;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} WqunP3wg_ctx_t;

void init_ctx(WqunP3wg_ctx_t *ctx) {
    ctx->id = 4770;
    ctx->coefficient = 7.7;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} SH7OL6HM_ctx_t;

void init_ctx(SH7OL6HM_ctx_t *ctx) {
    ctx->id = 5970;
    ctx->coefficient = 1.0;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} WcgD1Ssi_ctx_t;

void init_ctx(WcgD1Ssi_ctx_t *ctx) {
    ctx->id = 8765;
    ctx->coefficient = 6.9;
    ctx->flags = 203;
}

int compute_Mpvo22P(int input) {
    int result = input * 2;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} lAI3OmEA_ctx_t;

void init_ctx(lAI3OmEA_ctx_t *ctx) {
    ctx->id = 7652;
    ctx->coefficient = 3.1;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Fj2B7TVR_ctx_t;

void init_ctx(Fj2B7TVR_ctx_t *ctx) {
    ctx->id = 5811;
    ctx->coefficient = 1.5;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} YY8gCA9h_ctx_t;

void init_ctx(YY8gCA9h_ctx_t *ctx) {
    ctx->id = 9891;
    ctx->coefficient = 1.5;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} cLUjdHgL_ctx_t;

void init_ctx(cLUjdHgL_ctx_t *ctx) {
    ctx->id = 8660;
    ctx->coefficient = 0.3;
    ctx->flags = 122;
}

int compute_hRiNEkn(int input) {
    int result = input * 33;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_GyL7s48(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_wGmNhTD(int input) {
    int result = input * 55;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 3I52ELLN_ctx_t;

void init_ctx(3I52ELLN_ctx_t *ctx) {
    ctx->id = 3788;
    ctx->coefficient = 0.6;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} fFBtBDH0_ctx_t;

void init_ctx(fFBtBDH0_ctx_t *ctx) {
    ctx->id = 8215;
    ctx->coefficient = 0.6;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} iA8diFSu_ctx_t;

void init_ctx(iA8diFSu_ctx_t *ctx) {
    ctx->id = 1228;
    ctx->coefficient = 8.4;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} nQs6ZYTh_ctx_t;

void init_ctx(nQs6ZYTh_ctx_t *ctx) {
    ctx->id = 5459;
    ctx->coefficient = 1.1;
    ctx->flags = 38;
}

int compute_tYdzfvo(int input) {
    int result = input * 40;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} mv5h9iy2_ctx_t;

void init_ctx(mv5h9iy2_ctx_t *ctx) {
    ctx->id = 1521;
    ctx->coefficient = 8.0;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} o5UiiN7g_ctx_t;

void init_ctx(o5UiiN7g_ctx_t *ctx) {
    ctx->id = 9008;
    ctx->coefficient = 5.1;
    ctx->flags = 54;
}

int compute_ZCE6Aqf(int input) {
    int result = input * 59;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} KFkA1b3j_ctx_t;

void init_ctx(KFkA1b3j_ctx_t *ctx) {
    ctx->id = 5241;
    ctx->coefficient = 3.9;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} pNefMDE5_ctx_t;

void init_ctx(pNefMDE5_ctx_t *ctx) {
    ctx->id = 9896;
    ctx->coefficient = 5.5;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} mf4iZzkW_ctx_t;

void init_ctx(mf4iZzkW_ctx_t *ctx) {
    ctx->id = 8135;
    ctx->coefficient = 8.9;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ogBBICZZ_ctx_t;

void init_ctx(ogBBICZZ_ctx_t *ctx) {
    ctx->id = 5000;
    ctx->coefficient = 9.0;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} QSCthqVu_ctx_t;

void init_ctx(QSCthqVu_ctx_t *ctx) {
    ctx->id = 6753;
    ctx->coefficient = 5.1;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} vHvrPZE4_ctx_t;

void init_ctx(vHvrPZE4_ctx_t *ctx) {
    ctx->id = 7163;
    ctx->coefficient = 10.0;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 6B4iVIwd_ctx_t;

void init_ctx(6B4iVIwd_ctx_t *ctx) {
    ctx->id = 3929;
    ctx->coefficient = 7.8;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 9zUw9azY_ctx_t;

void init_ctx(9zUw9azY_ctx_t *ctx) {
    ctx->id = 2859;
    ctx->coefficient = 4.2;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} qzWjINTp_ctx_t;

void init_ctx(qzWjINTp_ctx_t *ctx) {
    ctx->id = 9441;
    ctx->coefficient = 6.3;
    ctx->flags = 96;
}

int compute_U6o2nWo(int input) {
    int result = input * 61;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 6nUAtOYc_ctx_t;

void init_ctx(6nUAtOYc_ctx_t *ctx) {
    ctx->id = 5607;
    ctx->coefficient = 6.2;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} lwUTykK9_ctx_t;

void init_ctx(lwUTykK9_ctx_t *ctx) {
    ctx->id = 4331;
    ctx->coefficient = 2.3;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} MfdOScv2_ctx_t;

void init_ctx(MfdOScv2_ctx_t *ctx) {
    ctx->id = 9975;
    ctx->coefficient = 7.5;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} AgzeB5x3_ctx_t;

void init_ctx(AgzeB5x3_ctx_t *ctx) {
    ctx->id = 1307;
    ctx->coefficient = 0.6;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} seJRedvh_ctx_t;

void init_ctx(seJRedvh_ctx_t *ctx) {
    ctx->id = 6879;
    ctx->coefficient = 7.4;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} vWcouFgf_ctx_t;

void init_ctx(vWcouFgf_ctx_t *ctx) {
    ctx->id = 1264;
    ctx->coefficient = 2.6;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} qxMbP5KH_ctx_t;

void init_ctx(qxMbP5KH_ctx_t *ctx) {
    ctx->id = 4305;
    ctx->coefficient = 8.0;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} WLt0ss8b_ctx_t;

void init_ctx(WLt0ss8b_ctx_t *ctx) {
    ctx->id = 4022;
    ctx->coefficient = 9.0;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} nxsIJ2Dn_ctx_t;

void init_ctx(nxsIJ2Dn_ctx_t *ctx) {
    ctx->id = 6811;
    ctx->coefficient = 9.3;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 3e1cesEE_ctx_t;

void init_ctx(3e1cesEE_ctx_t *ctx) {
    ctx->id = 5860;
    ctx->coefficient = 1.6;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} Z79NLOji_ctx_t;

void init_ctx(Z79NLOji_ctx_t *ctx) {
    ctx->id = 6954;
    ctx->coefficient = 5.3;
    ctx->flags = 183;
}

int compute_D8KpkG1(int input) {
    int result = input * 28;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} vYZaCkda_ctx_t;

void init_ctx(vYZaCkda_ctx_t *ctx) {
    ctx->id = 4927;
    ctx->coefficient = 0.6;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} zIHcXBFF_ctx_t;

void init_ctx(zIHcXBFF_ctx_t *ctx) {
    ctx->id = 2617;
    ctx->coefficient = 4.2;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} nJBuSq1r_ctx_t;

void init_ctx(nJBuSq1r_ctx_t *ctx) {
    ctx->id = 3502;
    ctx->coefficient = 5.6;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} AF5pab6e_ctx_t;

void init_ctx(AF5pab6e_ctx_t *ctx) {
    ctx->id = 9614;
    ctx->coefficient = 4.2;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} XGGEh2Se_ctx_t;

void init_ctx(XGGEh2Se_ctx_t *ctx) {
    ctx->id = 4428;
    ctx->coefficient = 3.1;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 7LEyg2QS_ctx_t;

void init_ctx(7LEyg2QS_ctx_t *ctx) {
    ctx->id = 1323;
    ctx->coefficient = 4.4;
    ctx->flags = 3;
}

int compute_TpalQWA(int input) {
    int result = input * 28;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_IVYJAm6(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} DxQld5wN_ctx_t;

void init_ctx(DxQld5wN_ctx_t *ctx) {
    ctx->id = 9684;
    ctx->coefficient = 6.6;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} EOmj3mjV_ctx_t;

void init_ctx(EOmj3mjV_ctx_t *ctx) {
    ctx->id = 6608;
    ctx->coefficient = 7.7;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} DmQ3rLje_ctx_t;

void init_ctx(DmQ3rLje_ctx_t *ctx) {
    ctx->id = 7382;
    ctx->coefficient = 7.5;
    ctx->flags = 245;
}

int compute_kb7JjF3(int input) {
    int result = input * 21;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} uatHRDkc_ctx_t;

void init_ctx(uatHRDkc_ctx_t *ctx) {
    ctx->id = 8367;
    ctx->coefficient = 0.8;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 1fArKPXR_ctx_t;

void init_ctx(1fArKPXR_ctx_t *ctx) {
    ctx->id = 8170;
    ctx->coefficient = 8.7;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} xo2uyKkt_ctx_t;

void init_ctx(xo2uyKkt_ctx_t *ctx) {
    ctx->id = 6823;
    ctx->coefficient = 9.4;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} gBay2Qyb_ctx_t;

void init_ctx(gBay2Qyb_ctx_t *ctx) {
    ctx->id = 3821;
    ctx->coefficient = 8.5;
    ctx->flags = 221;
}

int compute_7ZNK5Wz(int input) {
    int result = input * 22;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 1yBZOSJK_ctx_t;

void init_ctx(1yBZOSJK_ctx_t *ctx) {
    ctx->id = 9000;
    ctx->coefficient = 5.2;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} aymCzZLd_ctx_t;

void init_ctx(aymCzZLd_ctx_t *ctx) {
    ctx->id = 6806;
    ctx->coefficient = 5.6;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} q6PoD07d_ctx_t;

void init_ctx(q6PoD07d_ctx_t *ctx) {
    ctx->id = 2745;
    ctx->coefficient = 7.2;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} kYbdmLNR_ctx_t;

void init_ctx(kYbdmLNR_ctx_t *ctx) {
    ctx->id = 3071;
    ctx->coefficient = 7.3;
    ctx->flags = 153;
}

int compute_P1Jqeqo(int input) {
    int result = input * 22;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_SyGMLYf(int input) {
    int result = input * 55;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_hcYnUUe(int input) {
    int result = input * 60;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Uo94FPzu_ctx_t;

void init_ctx(Uo94FPzu_ctx_t *ctx) {
    ctx->id = 2576;
    ctx->coefficient = 0.6;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} gn1xHFpw_ctx_t;

void init_ctx(gn1xHFpw_ctx_t *ctx) {
    ctx->id = 6393;
    ctx->coefficient = 6.8;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} HfrhqgmP_ctx_t;

void init_ctx(HfrhqgmP_ctx_t *ctx) {
    ctx->id = 1093;
    ctx->coefficient = 6.8;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 8mtXQJ4n_ctx_t;

void init_ctx(8mtXQJ4n_ctx_t *ctx) {
    ctx->id = 4930;
    ctx->coefficient = 2.1;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} hVBobHP9_ctx_t;

void init_ctx(hVBobHP9_ctx_t *ctx) {
    ctx->id = 8718;
    ctx->coefficient = 7.9;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 2wp5FmQw_ctx_t;

void init_ctx(2wp5FmQw_ctx_t *ctx) {
    ctx->id = 6271;
    ctx->coefficient = 4.9;
    ctx->flags = 109;
}

int compute_Kdx43NW(int input) {
    int result = input * 44;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} gUL0eHMW_ctx_t;

void init_ctx(gUL0eHMW_ctx_t *ctx) {
    ctx->id = 1870;
    ctx->coefficient = 3.5;
    ctx->flags = 124;
}

int compute_QMs1jLY(int input) {
    int result = input * 16;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} uIXVQ8A0_ctx_t;

void init_ctx(uIXVQ8A0_ctx_t *ctx) {
    ctx->id = 5692;
    ctx->coefficient = 4.3;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} VkbIXJkp_ctx_t;

void init_ctx(VkbIXJkp_ctx_t *ctx) {
    ctx->id = 1476;
    ctx->coefficient = 5.0;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 8AOk1vj7_ctx_t;

void init_ctx(8AOk1vj7_ctx_t *ctx) {
    ctx->id = 8609;
    ctx->coefficient = 4.1;
    ctx->flags = 249;
}

int compute_0sXXoVR(int input) {
    int result = input * 39;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} v2lw3WtK_ctx_t;

void init_ctx(v2lw3WtK_ctx_t *ctx) {
    ctx->id = 8025;
    ctx->coefficient = 3.4;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} zJemTYrH_ctx_t;

void init_ctx(zJemTYrH_ctx_t *ctx) {
    ctx->id = 4780;
    ctx->coefficient = 6.9;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Do5hWM3R_ctx_t;

void init_ctx(Do5hWM3R_ctx_t *ctx) {
    ctx->id = 8664;
    ctx->coefficient = 4.6;
    ctx->flags = 249;
}

int compute_LQMS5Zg(int input) {
    int result = input * 19;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 8nvtOuDN_ctx_t;

void init_ctx(8nvtOuDN_ctx_t *ctx) {
    ctx->id = 7156;
    ctx->coefficient = 9.0;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} zluXpluk_ctx_t;

void init_ctx(zluXpluk_ctx_t *ctx) {
    ctx->id = 1919;
    ctx->coefficient = 9.8;
    ctx->flags = 101;
}

int compute_sUY8qbh(int input) {
    int result = input * 9;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} BHli7mxC_ctx_t;

void init_ctx(BHli7mxC_ctx_t *ctx) {
    ctx->id = 3403;
    ctx->coefficient = 7.7;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} MaA1sdkC_ctx_t;

void init_ctx(MaA1sdkC_ctx_t *ctx) {
    ctx->id = 3941;
    ctx->coefficient = 5.5;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} IcMZjJ1A_ctx_t;

void init_ctx(IcMZjJ1A_ctx_t *ctx) {
    ctx->id = 5448;
    ctx->coefficient = 5.6;
    ctx->flags = 230;
}

int compute_35YNAhT(int input) {
    int result = input * 32;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_7WdeiuX(int input) {
    int result = input * 38;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} RGxnOCWi_ctx_t;

void init_ctx(RGxnOCWi_ctx_t *ctx) {
    ctx->id = 6441;
    ctx->coefficient = 3.4;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} zZwTntTj_ctx_t;

void init_ctx(zZwTntTj_ctx_t *ctx) {
    ctx->id = 4376;
    ctx->coefficient = 6.6;
    ctx->flags = 73;
}

int compute_qTpqySU(int input) {
    int result = input * 65;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} QgY7OA3S_ctx_t;

void init_ctx(QgY7OA3S_ctx_t *ctx) {
    ctx->id = 4290;
    ctx->coefficient = 7.4;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} hwy5JoCx_ctx_t;

void init_ctx(hwy5JoCx_ctx_t *ctx) {
    ctx->id = 6836;
    ctx->coefficient = 2.4;
    ctx->flags = 42;
}

int compute_V3oi8Cg(int input) {
    int result = input * 24;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_BPW0xrL(int input) {
    int result = input * 68;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} uwnZK3Ni_ctx_t;

void init_ctx(uwnZK3Ni_ctx_t *ctx) {
    ctx->id = 6750;
    ctx->coefficient = 2.7;
    ctx->flags = 238;
}

int compute_2j6vEyd(int input) {
    int result = input * 42;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_4RhzMkQ(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_OMVkatU(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_RtTT89k(int input) {
    int result = input * 24;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} p76xjCsl_ctx_t;

void init_ctx(p76xjCsl_ctx_t *ctx) {
    ctx->id = 1135;
    ctx->coefficient = 7.9;
    ctx->flags = 9;
}

int compute_u9CeFiP(int input) {
    int result = input * 8;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_TaVthkz(int input) {
    int result = input * 63;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} FuEeHXWu_ctx_t;

void init_ctx(FuEeHXWu_ctx_t *ctx) {
    ctx->id = 2940;
    ctx->coefficient = 8.7;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} X0pY0Qvs_ctx_t;

void init_ctx(X0pY0Qvs_ctx_t *ctx) {
    ctx->id = 7213;
    ctx->coefficient = 0.4;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} SVrNcIf8_ctx_t;

void init_ctx(SVrNcIf8_ctx_t *ctx) {
    ctx->id = 1967;
    ctx->coefficient = 9.0;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 6aAyaKlW_ctx_t;

void init_ctx(6aAyaKlW_ctx_t *ctx) {
    ctx->id = 1466;
    ctx->coefficient = 9.9;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} y6t2thqw_ctx_t;

void init_ctx(y6t2thqw_ctx_t *ctx) {
    ctx->id = 6913;
    ctx->coefficient = 1.7;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 5jzUly7a_ctx_t;

void init_ctx(5jzUly7a_ctx_t *ctx) {
    ctx->id = 1032;
    ctx->coefficient = 4.9;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} rCa7vwxB_ctx_t;

void init_ctx(rCa7vwxB_ctx_t *ctx) {
    ctx->id = 2323;
    ctx->coefficient = 8.3;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} y3QWt7sb_ctx_t;

void init_ctx(y3QWt7sb_ctx_t *ctx) {
    ctx->id = 3051;
    ctx->coefficient = 8.1;
    ctx->flags = 87;
}

int compute_JLr0rmR(int input) {
    int result = input * 59;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_6bPfRQE(int input) {
    int result = input * 37;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 6SqwZ4Mj_ctx_t;

void init_ctx(6SqwZ4Mj_ctx_t *ctx) {
    ctx->id = 3153;
    ctx->coefficient = 9.0;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} P8wYSU3I_ctx_t;

void init_ctx(P8wYSU3I_ctx_t *ctx) {
    ctx->id = 1448;
    ctx->coefficient = 7.8;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} wlVj1b0D_ctx_t;

void init_ctx(wlVj1b0D_ctx_t *ctx) {
    ctx->id = 5704;
    ctx->coefficient = 9.9;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} WsuPBZYi_ctx_t;

void init_ctx(WsuPBZYi_ctx_t *ctx) {
    ctx->id = 9885;
    ctx->coefficient = 9.7;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} HcYvrSfn_ctx_t;

void init_ctx(HcYvrSfn_ctx_t *ctx) {
    ctx->id = 7680;
    ctx->coefficient = 5.7;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} DoapO3wB_ctx_t;

void init_ctx(DoapO3wB_ctx_t *ctx) {
    ctx->id = 7068;
    ctx->coefficient = 7.9;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Ozm1TCi6_ctx_t;

void init_ctx(Ozm1TCi6_ctx_t *ctx) {
    ctx->id = 3778;
    ctx->coefficient = 9.3;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} lmI4yKs5_ctx_t;

void init_ctx(lmI4yKs5_ctx_t *ctx) {
    ctx->id = 9079;
    ctx->coefficient = 1.4;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 7MANUHOb_ctx_t;

void init_ctx(7MANUHOb_ctx_t *ctx) {
    ctx->id = 3240;
    ctx->coefficient = 7.7;
    ctx->flags = 183;
}

int compute_YXDeUTK(int input) {
    int result = input * 48;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Mau230fO_ctx_t;

void init_ctx(Mau230fO_ctx_t *ctx) {
    ctx->id = 4036;
    ctx->coefficient = 9.4;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 3rs0Tugu_ctx_t;

void init_ctx(3rs0Tugu_ctx_t *ctx) {
    ctx->id = 9622;
    ctx->coefficient = 1.6;
    ctx->flags = 122;
}

int compute_rBdoJNs(int input) {
    int result = input * 60;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} xElL04dK_ctx_t;

void init_ctx(xElL04dK_ctx_t *ctx) {
    ctx->id = 9515;
    ctx->coefficient = 5.9;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 5dp7Y0V0_ctx_t;

void init_ctx(5dp7Y0V0_ctx_t *ctx) {
    ctx->id = 2220;
    ctx->coefficient = 2.8;
    ctx->flags = 246;
}

int compute_KBjQLdL(int input) {
    int result = input * 42;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_oHR45hx(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Moz2hTUh_ctx_t;

void init_ctx(Moz2hTUh_ctx_t *ctx) {
    ctx->id = 3170;
    ctx->coefficient = 8.9;
    ctx->flags = 27;
}

int compute_u5RNZ7e(int input) {
    int result = input * 42;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_IFfdckI(int input) {
    int result = input * 6;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ZqKnF6CJ_ctx_t;

void init_ctx(ZqKnF6CJ_ctx_t *ctx) {
    ctx->id = 7703;
    ctx->coefficient = 6.8;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ByQrjMYT_ctx_t;

void init_ctx(ByQrjMYT_ctx_t *ctx) {
    ctx->id = 5406;
    ctx->coefficient = 2.3;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} JC38N1rz_ctx_t;

void init_ctx(JC38N1rz_ctx_t *ctx) {
    ctx->id = 8699;
    ctx->coefficient = 9.3;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 4zEuVFct_ctx_t;

void init_ctx(4zEuVFct_ctx_t *ctx) {
    ctx->id = 4734;
    ctx->coefficient = 2.1;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Dh8XhWnx_ctx_t;

void init_ctx(Dh8XhWnx_ctx_t *ctx) {
    ctx->id = 6681;
    ctx->coefficient = 4.1;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Gy320zMP_ctx_t;

void init_ctx(Gy320zMP_ctx_t *ctx) {
    ctx->id = 9074;
    ctx->coefficient = 8.2;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} cvz1RK0r_ctx_t;

void init_ctx(cvz1RK0r_ctx_t *ctx) {
    ctx->id = 2033;
    ctx->coefficient = 3.4;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 9cLsBuhK_ctx_t;

void init_ctx(9cLsBuhK_ctx_t *ctx) {
    ctx->id = 4297;
    ctx->coefficient = 8.9;
    ctx->flags = 172;
}

int compute_pXVu2QJ(int input) {
    int result = input * 54;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_XeJefn1(int input) {
    int result = input * 49;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_lywrPOe(int input) {
    int result = input * 17;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} rMxkS5vd_ctx_t;

void init_ctx(rMxkS5vd_ctx_t *ctx) {
    ctx->id = 1992;
    ctx->coefficient = 9.6;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} FeKIBKof_ctx_t;

void init_ctx(FeKIBKof_ctx_t *ctx) {
    ctx->id = 3676;
    ctx->coefficient = 1.9;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} lFznsa3r_ctx_t;

void init_ctx(lFznsa3r_ctx_t *ctx) {
    ctx->id = 4980;
    ctx->coefficient = 4.0;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} gdX8LqK6_ctx_t;

void init_ctx(gdX8LqK6_ctx_t *ctx) {
    ctx->id = 5999;
    ctx->coefficient = 0.6;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ZNyABxQo_ctx_t;

void init_ctx(ZNyABxQo_ctx_t *ctx) {
    ctx->id = 9599;
    ctx->coefficient = 4.6;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} QIWoSZOw_ctx_t;

void init_ctx(QIWoSZOw_ctx_t *ctx) {
    ctx->id = 8697;
    ctx->coefficient = 5.9;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} oryCCzu2_ctx_t;

void init_ctx(oryCCzu2_ctx_t *ctx) {
    ctx->id = 8339;
    ctx->coefficient = 4.9;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 8X4DhpLS_ctx_t;

void init_ctx(8X4DhpLS_ctx_t *ctx) {
    ctx->id = 8995;
    ctx->coefficient = 8.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} t4ObqYAF_ctx_t;

void init_ctx(t4ObqYAF_ctx_t *ctx) {
    ctx->id = 2462;
    ctx->coefficient = 6.2;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} VG0SFRTs_ctx_t;

void init_ctx(VG0SFRTs_ctx_t *ctx) {
    ctx->id = 4132;
    ctx->coefficient = 6.6;
    ctx->flags = 171;
}

int compute_WrV0tmR(int input) {
    int result = input * 67;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 4TmuXi4Z_ctx_t;

void init_ctx(4TmuXi4Z_ctx_t *ctx) {
    ctx->id = 7695;
    ctx->coefficient = 2.4;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} DvcZWaP5_ctx_t;

void init_ctx(DvcZWaP5_ctx_t *ctx) {
    ctx->id = 6092;
    ctx->coefficient = 5.3;
    ctx->flags = 203;
}

int compute_VgjWq5t(int input) {
    int result = input * 49;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} TBk25Jsh_ctx_t;

void init_ctx(TBk25Jsh_ctx_t *ctx) {
    ctx->id = 7749;
    ctx->coefficient = 8.3;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} qnBkOtJH_ctx_t;

void init_ctx(qnBkOtJH_ctx_t *ctx) {
    ctx->id = 4010;
    ctx->coefficient = 9.0;
    ctx->flags = 15;
}

int compute_T2uit4E(int input) {
    int result = input * 44;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} TDuSnw6N_ctx_t;

void init_ctx(TDuSnw6N_ctx_t *ctx) {
    ctx->id = 6265;
    ctx->coefficient = 3.8;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} uEcoJA5O_ctx_t;

void init_ctx(uEcoJA5O_ctx_t *ctx) {
    ctx->id = 9612;
    ctx->coefficient = 5.6;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} NPwrJRud_ctx_t;

void init_ctx(NPwrJRud_ctx_t *ctx) {
    ctx->id = 8223;
    ctx->coefficient = 9.5;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} pInRync7_ctx_t;

void init_ctx(pInRync7_ctx_t *ctx) {
    ctx->id = 4686;
    ctx->coefficient = 7.6;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} OQwEM5v7_ctx_t;

void init_ctx(OQwEM5v7_ctx_t *ctx) {
    ctx->id = 3727;
    ctx->coefficient = 9.2;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} c0jypPnQ_ctx_t;

void init_ctx(c0jypPnQ_ctx_t *ctx) {
    ctx->id = 9269;
    ctx->coefficient = 9.5;
    ctx->flags = 181;
}

int compute_5ZR48ef(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} oUMOWIDD_ctx_t;

void init_ctx(oUMOWIDD_ctx_t *ctx) {
    ctx->id = 6469;
    ctx->coefficient = 9.0;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 0Xin0tvk_ctx_t;

void init_ctx(0Xin0tvk_ctx_t *ctx) {
    ctx->id = 2413;
    ctx->coefficient = 0.5;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} e2GyICjR_ctx_t;

void init_ctx(e2GyICjR_ctx_t *ctx) {
    ctx->id = 7964;
    ctx->coefficient = 8.8;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} RIOZp6QN_ctx_t;

void init_ctx(RIOZp6QN_ctx_t *ctx) {
    ctx->id = 3653;
    ctx->coefficient = 4.8;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} CdI7I9Zn_ctx_t;

void init_ctx(CdI7I9Zn_ctx_t *ctx) {
    ctx->id = 7327;
    ctx->coefficient = 8.1;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} xnGcP3Zb_ctx_t;

void init_ctx(xnGcP3Zb_ctx_t *ctx) {
    ctx->id = 1022;
    ctx->coefficient = 2.2;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} oYVecwhk_ctx_t;

void init_ctx(oYVecwhk_ctx_t *ctx) {
    ctx->id = 6121;
    ctx->coefficient = 4.3;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 7FLZAUaO_ctx_t;

void init_ctx(7FLZAUaO_ctx_t *ctx) {
    ctx->id = 8626;
    ctx->coefficient = 6.8;
    ctx->flags = 33;
}

int compute_3W2LQW0(int input) {
    int result = input * 55;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_or83KyQ(int input) {
    int result = input * 3;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} JWLhlyVG_ctx_t;

void init_ctx(JWLhlyVG_ctx_t *ctx) {
    ctx->id = 1737;
    ctx->coefficient = 1.1;
    ctx->flags = 67;
}

int compute_na1X31z(int input) {
    int result = input * 7;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_YoLZIqy(int input) {
    int result = input * 52;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_xqX0V68(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 1wSieBev_ctx_t;

void init_ctx(1wSieBev_ctx_t *ctx) {
    ctx->id = 9187;
    ctx->coefficient = 1.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} MLxVxWFx_ctx_t;

void init_ctx(MLxVxWFx_ctx_t *ctx) {
    ctx->id = 6294;
    ctx->coefficient = 6.1;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} T5HkqOSp_ctx_t;

void init_ctx(T5HkqOSp_ctx_t *ctx) {
    ctx->id = 2607;
    ctx->coefficient = 3.3;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 1t0lULbn_ctx_t;

void init_ctx(1t0lULbn_ctx_t *ctx) {
    ctx->id = 8325;
    ctx->coefficient = 3.6;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} vQixS4qU_ctx_t;

void init_ctx(vQixS4qU_ctx_t *ctx) {
    ctx->id = 1805;
    ctx->coefficient = 4.0;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} plGvtJRB_ctx_t;

void init_ctx(plGvtJRB_ctx_t *ctx) {
    ctx->id = 6667;
    ctx->coefficient = 0.7;
    ctx->flags = 51;
}

int compute_WbxmWkg(int input) {
    int result = input * 64;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} j2FxccAn_ctx_t;

void init_ctx(j2FxccAn_ctx_t *ctx) {
    ctx->id = 4087;
    ctx->coefficient = 0.4;
    ctx->flags = 21;
}

int compute_UebdMYX(int input) {
    int result = input * 20;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_R46B2Tw(int input) {
    int result = input * 66;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_ULJhCSj(int input) {
    int result = input * 51;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} Z9SqBQiV_ctx_t;

void init_ctx(Z9SqBQiV_ctx_t *ctx) {
    ctx->id = 7680;
    ctx->coefficient = 9.0;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} N5BT308z_ctx_t;

void init_ctx(N5BT308z_ctx_t *ctx) {
    ctx->id = 1667;
    ctx->coefficient = 2.5;
    ctx->flags = 55;
}

int compute_wHj2cGr(int input) {
    int result = input * 60;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} pO5vacWV_ctx_t;

void init_ctx(pO5vacWV_ctx_t *ctx) {
    ctx->id = 2969;
    ctx->coefficient = 1.5;
    ctx->flags = 107;
}

int compute_rAXl34X(int input) {
    int result = input * 68;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 19Axg8Hj_ctx_t;

void init_ctx(19Axg8Hj_ctx_t *ctx) {
    ctx->id = 3374;
    ctx->coefficient = 3.1;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 6iJdAGDb_ctx_t;

void init_ctx(6iJdAGDb_ctx_t *ctx) {
    ctx->id = 8673;
    ctx->coefficient = 3.7;
    ctx->flags = 106;
}

int compute_be4o99S(int input) {
    int result = input * 9;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} HMqJK42C_ctx_t;

void init_ctx(HMqJK42C_ctx_t *ctx) {
    ctx->id = 5111;
    ctx->coefficient = 6.1;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} pz1i04dg_ctx_t;

void init_ctx(pz1i04dg_ctx_t *ctx) {
    ctx->id = 9524;
    ctx->coefficient = 2.2;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} spVURJBa_ctx_t;

void init_ctx(spVURJBa_ctx_t *ctx) {
    ctx->id = 7553;
    ctx->coefficient = 9.3;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Aqhp5svG_ctx_t;

void init_ctx(Aqhp5svG_ctx_t *ctx) {
    ctx->id = 7094;
    ctx->coefficient = 6.7;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} aM7w3lxB_ctx_t;

void init_ctx(aM7w3lxB_ctx_t *ctx) {
    ctx->id = 6259;
    ctx->coefficient = 4.3;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} P4GGrVme_ctx_t;

void init_ctx(P4GGrVme_ctx_t *ctx) {
    ctx->id = 2533;
    ctx->coefficient = 7.3;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} rkWrw5rd_ctx_t;

void init_ctx(rkWrw5rd_ctx_t *ctx) {
    ctx->id = 6964;
    ctx->coefficient = 8.4;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} CvpQqSZc_ctx_t;

void init_ctx(CvpQqSZc_ctx_t *ctx) {
    ctx->id = 5034;
    ctx->coefficient = 0.7;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} PkNoVcCh_ctx_t;

void init_ctx(PkNoVcCh_ctx_t *ctx) {
    ctx->id = 2215;
    ctx->coefficient = 0.1;
    ctx->flags = 148;
}

int compute_CJSLVpB(int input) {
    int result = input * 43;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} wlrdKvUx_ctx_t;

void init_ctx(wlrdKvUx_ctx_t *ctx) {
    ctx->id = 4235;
    ctx->coefficient = 9.0;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} uDZPTalt_ctx_t;

void init_ctx(uDZPTalt_ctx_t *ctx) {
    ctx->id = 4371;
    ctx->coefficient = 2.1;
    ctx->flags = 137;
}

int compute_2GX8rDo(int input) {
    int result = input * 49;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_AXV3a9U(int input) {
    int result = input * 66;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 5MQWaLCp_ctx_t;

void init_ctx(5MQWaLCp_ctx_t *ctx) {
    ctx->id = 6833;
    ctx->coefficient = 3.7;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} YnOOzTdB_ctx_t;

void init_ctx(YnOOzTdB_ctx_t *ctx) {
    ctx->id = 9057;
    ctx->coefficient = 2.4;
    ctx->flags = 158;
}

int compute_chJAHqO(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_bKDAzRS(int input) {
    int result = input * 6;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} MvGup5gK_ctx_t;

void init_ctx(MvGup5gK_ctx_t *ctx) {
    ctx->id = 2535;
    ctx->coefficient = 7.2;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} sOc0SCrX_ctx_t;

void init_ctx(sOc0SCrX_ctx_t *ctx) {
    ctx->id = 3042;
    ctx->coefficient = 8.8;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} YXuklj0b_ctx_t;

void init_ctx(YXuklj0b_ctx_t *ctx) {
    ctx->id = 2209;
    ctx->coefficient = 8.9;
    ctx->flags = 237;
}

int compute_xwlLVb8(int input) {
    int result = input * 4;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_KjIXo7V(int input) {
    int result = input * 70;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_WBJyWuk(int input) {
    int result = input * 29;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_BcxrFzI(int input) {
    int result = input * 14;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Y5N4K3lj_ctx_t;

void init_ctx(Y5N4K3lj_ctx_t *ctx) {
    ctx->id = 8253;
    ctx->coefficient = 1.1;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} sguL1Uk7_ctx_t;

void init_ctx(sguL1Uk7_ctx_t *ctx) {
    ctx->id = 4637;
    ctx->coefficient = 5.7;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} VHbKqD42_ctx_t;

void init_ctx(VHbKqD42_ctx_t *ctx) {
    ctx->id = 4364;
    ctx->coefficient = 8.9;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 8gxmeHDj_ctx_t;

void init_ctx(8gxmeHDj_ctx_t *ctx) {
    ctx->id = 4457;
    ctx->coefficient = 4.0;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} YM9VaYzo_ctx_t;

void init_ctx(YM9VaYzo_ctx_t *ctx) {
    ctx->id = 9285;
    ctx->coefficient = 6.4;
    ctx->flags = 117;
}

int compute_evK4cBV(int input) {
    int result = input * 66;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} C7pX070N_ctx_t;

void init_ctx(C7pX070N_ctx_t *ctx) {
    ctx->id = 3614;
    ctx->coefficient = 5.3;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} JC4jaVW0_ctx_t;

void init_ctx(JC4jaVW0_ctx_t *ctx) {
    ctx->id = 3817;
    ctx->coefficient = 6.9;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} OKHsnX2P_ctx_t;

void init_ctx(OKHsnX2P_ctx_t *ctx) {
    ctx->id = 8189;
    ctx->coefficient = 5.8;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} oOfTjxOv_ctx_t;

void init_ctx(oOfTjxOv_ctx_t *ctx) {
    ctx->id = 3438;
    ctx->coefficient = 3.9;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} nzZF3EAJ_ctx_t;

void init_ctx(nzZF3EAJ_ctx_t *ctx) {
    ctx->id = 3821;
    ctx->coefficient = 8.5;
    ctx->flags = 21;
}

int compute_7WxHQmM(int input) {
    int result = input * 24;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} haHoqeaO_ctx_t;

void init_ctx(haHoqeaO_ctx_t *ctx) {
    ctx->id = 7639;
    ctx->coefficient = 2.3;
    ctx->flags = 98;
}

int compute_fnyOVok(int input) {
    int result = input * 9;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_RVyG7li(int input) {
    int result = input * 42;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} LFIte0Yk_ctx_t;

void init_ctx(LFIte0Yk_ctx_t *ctx) {
    ctx->id = 4833;
    ctx->coefficient = 4.6;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} wfQuoqPM_ctx_t;

void init_ctx(wfQuoqPM_ctx_t *ctx) {
    ctx->id = 4642;
    ctx->coefficient = 3.0;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} FqSH1NxU_ctx_t;

void init_ctx(FqSH1NxU_ctx_t *ctx) {
    ctx->id = 8442;
    ctx->coefficient = 7.2;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 1tPHAoBm_ctx_t;

void init_ctx(1tPHAoBm_ctx_t *ctx) {
    ctx->id = 4025;
    ctx->coefficient = 8.1;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 2gK2oRmr_ctx_t;

void init_ctx(2gK2oRmr_ctx_t *ctx) {
    ctx->id = 1432;
    ctx->coefficient = 0.9;
    ctx->flags = 60;
}

int compute_wHjuT0M(int input) {
    int result = input * 50;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} SWgd3zae_ctx_t;

void init_ctx(SWgd3zae_ctx_t *ctx) {
    ctx->id = 3210;
    ctx->coefficient = 4.9;
    ctx->flags = 16;
}

int compute_UmxHcUQ(int input) {
    int result = input * 27;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} vy5j9icj_ctx_t;

void init_ctx(vy5j9icj_ctx_t *ctx) {
    ctx->id = 8040;
    ctx->coefficient = 1.1;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} NukPFtCe_ctx_t;

void init_ctx(NukPFtCe_ctx_t *ctx) {
    ctx->id = 9709;
    ctx->coefficient = 1.0;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} gKfnyRI6_ctx_t;

void init_ctx(gKfnyRI6_ctx_t *ctx) {
    ctx->id = 2772;
    ctx->coefficient = 6.2;
    ctx->flags = 163;
}

int compute_S9IEjXZ(int input) {
    int result = input * 27;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} TUZGyvLu_ctx_t;

void init_ctx(TUZGyvLu_ctx_t *ctx) {
    ctx->id = 1064;
    ctx->coefficient = 7.3;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 62kgK3kc_ctx_t;

void init_ctx(62kgK3kc_ctx_t *ctx) {
    ctx->id = 8815;
    ctx->coefficient = 6.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} qIMh9qLt_ctx_t;

void init_ctx(qIMh9qLt_ctx_t *ctx) {
    ctx->id = 8917;
    ctx->coefficient = 7.3;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} rTQmyQEo_ctx_t;

void init_ctx(rTQmyQEo_ctx_t *ctx) {
    ctx->id = 1042;
    ctx->coefficient = 0.1;
    ctx->flags = 79;
}

int compute_etkFSGX(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} azP6f6WJ_ctx_t;

void init_ctx(azP6f6WJ_ctx_t *ctx) {
    ctx->id = 3420;
    ctx->coefficient = 1.4;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} CLixwjQU_ctx_t;

void init_ctx(CLixwjQU_ctx_t *ctx) {
    ctx->id = 3799;
    ctx->coefficient = 3.6;
    ctx->flags = 27;
}

int compute_DdZxV6w(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} XXdiG15q_ctx_t;

void init_ctx(XXdiG15q_ctx_t *ctx) {
    ctx->id = 9144;
    ctx->coefficient = 5.8;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} C52fWKJb_ctx_t;

void init_ctx(C52fWKJb_ctx_t *ctx) {
    ctx->id = 8804;
    ctx->coefficient = 4.1;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} lS77ao0N_ctx_t;

void init_ctx(lS77ao0N_ctx_t *ctx) {
    ctx->id = 6204;
    ctx->coefficient = 10.0;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} gMfRUiY3_ctx_t;

void init_ctx(gMfRUiY3_ctx_t *ctx) {
    ctx->id = 6312;
    ctx->coefficient = 4.8;
    ctx->flags = 240;
}

int compute_kA9xs5e(int input) {
    int result = input * 54;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_hNSKiX3(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_aAyx55I(int input) {
    int result = input * 9;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_oPGQWdE(int input) {
    int result = input * 51;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_mJe9pqJ(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_mxrbuyy(int input) {
    int result = input * 51;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_Ex4JLG6(int input) {
    int result = input * 63;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} MKE8SAvV_ctx_t;

void init_ctx(MKE8SAvV_ctx_t *ctx) {
    ctx->id = 6473;
    ctx->coefficient = 0.6;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} UqxvKXaz_ctx_t;

void init_ctx(UqxvKXaz_ctx_t *ctx) {
    ctx->id = 6670;
    ctx->coefficient = 1.7;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} A9sBhahZ_ctx_t;

void init_ctx(A9sBhahZ_ctx_t *ctx) {
    ctx->id = 9733;
    ctx->coefficient = 0.4;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Enl9s0Qz_ctx_t;

void init_ctx(Enl9s0Qz_ctx_t *ctx) {
    ctx->id = 1767;
    ctx->coefficient = 6.4;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} UpYq0jWI_ctx_t;

void init_ctx(UpYq0jWI_ctx_t *ctx) {
    ctx->id = 8309;
    ctx->coefficient = 3.6;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} MOk1QiNr_ctx_t;

void init_ctx(MOk1QiNr_ctx_t *ctx) {
    ctx->id = 4186;
    ctx->coefficient = 4.0;
    ctx->flags = 193;
}

int compute_3JdAsCj(int input) {
    int result = input * 60;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_YzHFZvs(int input) {
    int result = input * 11;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_khCUD7R(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} rb9cXqgO_ctx_t;

void init_ctx(rb9cXqgO_ctx_t *ctx) {
    ctx->id = 1535;
    ctx->coefficient = 2.9;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} TJGlxiuW_ctx_t;

void init_ctx(TJGlxiuW_ctx_t *ctx) {
    ctx->id = 8666;
    ctx->coefficient = 3.9;
    ctx->flags = 24;
}

int compute_riMDZKx(int input) {
    int result = input * 52;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} ZSBVjnlU_ctx_t;

void init_ctx(ZSBVjnlU_ctx_t *ctx) {
    ctx->id = 1570;
    ctx->coefficient = 3.1;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} FNqyaMvv_ctx_t;

void init_ctx(FNqyaMvv_ctx_t *ctx) {
    ctx->id = 9909;
    ctx->coefficient = 5.9;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} FJuNPUjL_ctx_t;

void init_ctx(FJuNPUjL_ctx_t *ctx) {
    ctx->id = 2188;
    ctx->coefficient = 8.3;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} mAtJP4uu_ctx_t;

void init_ctx(mAtJP4uu_ctx_t *ctx) {
    ctx->id = 6767;
    ctx->coefficient = 6.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} y4oMQy3e_ctx_t;

void init_ctx(y4oMQy3e_ctx_t *ctx) {
    ctx->id = 4281;
    ctx->coefficient = 7.0;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} s9CksyGg_ctx_t;

void init_ctx(s9CksyGg_ctx_t *ctx) {
    ctx->id = 4258;
    ctx->coefficient = 9.4;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} CtCW9WNT_ctx_t;

void init_ctx(CtCW9WNT_ctx_t *ctx) {
    ctx->id = 6221;
    ctx->coefficient = 0.8;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 1ptSz5ag_ctx_t;

void init_ctx(1ptSz5ag_ctx_t *ctx) {
    ctx->id = 4524;
    ctx->coefficient = 3.0;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} Pe7vTA9T_ctx_t;

void init_ctx(Pe7vTA9T_ctx_t *ctx) {
    ctx->id = 1427;
    ctx->coefficient = 3.1;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} RBvHJrsB_ctx_t;

void init_ctx(RBvHJrsB_ctx_t *ctx) {
    ctx->id = 2170;
    ctx->coefficient = 2.4;
    ctx->flags = 199;
}

int compute_VttHrvL(int input) {
    int result = input * 15;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 8hEyhXCg_ctx_t;

void init_ctx(8hEyhXCg_ctx_t *ctx) {
    ctx->id = 5745;
    ctx->coefficient = 8.1;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} pUebFuNv_ctx_t;

void init_ctx(pUebFuNv_ctx_t *ctx) {
    ctx->id = 9911;
    ctx->coefficient = 2.5;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} aBFPi83n_ctx_t;

void init_ctx(aBFPi83n_ctx_t *ctx) {
    ctx->id = 5441;
    ctx->coefficient = 6.3;
    ctx->flags = 187;
}

int compute_mkb66ek(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} X59nk7At_ctx_t;

void init_ctx(X59nk7At_ctx_t *ctx) {
    ctx->id = 3223;
    ctx->coefficient = 7.7;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} StqsfW4P_ctx_t;

void init_ctx(StqsfW4P_ctx_t *ctx) {
    ctx->id = 4256;
    ctx->coefficient = 4.6;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} gN5ZpCmk_ctx_t;

void init_ctx(gN5ZpCmk_ctx_t *ctx) {
    ctx->id = 9247;
    ctx->coefficient = 4.5;
    ctx->flags = 232;
}

int compute_YuhQ8uS(int input) {
    int result = input * 43;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_xZgWMmw(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} UIJP05hH_ctx_t;

void init_ctx(UIJP05hH_ctx_t *ctx) {
    ctx->id = 2159;
    ctx->coefficient = 3.7;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 2e6fhbEk_ctx_t;

void init_ctx(2e6fhbEk_ctx_t *ctx) {
    ctx->id = 4371;
    ctx->coefficient = 9.0;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} xPV9mQb8_ctx_t;

void init_ctx(xPV9mQb8_ctx_t *ctx) {
    ctx->id = 4971;
    ctx->coefficient = 4.1;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} SHDFfjRi_ctx_t;

void init_ctx(SHDFfjRi_ctx_t *ctx) {
    ctx->id = 7231;
    ctx->coefficient = 5.7;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} yEnHEupM_ctx_t;

void init_ctx(yEnHEupM_ctx_t *ctx) {
    ctx->id = 8938;
    ctx->coefficient = 2.6;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} lS7Lck26_ctx_t;

void init_ctx(lS7Lck26_ctx_t *ctx) {
    ctx->id = 1145;
    ctx->coefficient = 8.2;
    ctx->flags = 223;
}

int compute_jMdHMlx(int input) {
    int result = input * 67;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} yt8hukUi_ctx_t;

void init_ctx(yt8hukUi_ctx_t *ctx) {
    ctx->id = 2977;
    ctx->coefficient = 3.5;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} j0ci6AL3_ctx_t;

void init_ctx(j0ci6AL3_ctx_t *ctx) {
    ctx->id = 3336;
    ctx->coefficient = 0.8;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 7iS6ZQws_ctx_t;

void init_ctx(7iS6ZQws_ctx_t *ctx) {
    ctx->id = 8756;
    ctx->coefficient = 3.2;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} HZgh4x6y_ctx_t;

void init_ctx(HZgh4x6y_ctx_t *ctx) {
    ctx->id = 7090;
    ctx->coefficient = 6.1;
    ctx->flags = 125;
}

int compute_CEYEP75(int input) {
    int result = input * 59;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} hQf6ftax_ctx_t;

void init_ctx(hQf6ftax_ctx_t *ctx) {
    ctx->id = 7959;
    ctx->coefficient = 4.3;
    ctx->flags = 164;
}

int compute_2EX0LoT(int input) {
    int result = input * 8;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_0Vp9jmk(int input) {
    int result = input * 50;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} Gawvoqfk_ctx_t;

void init_ctx(Gawvoqfk_ctx_t *ctx) {
    ctx->id = 7740;
    ctx->coefficient = 4.3;
    ctx->flags = 176;
}

int compute_u0y4xqX(int input) {
    int result = input * 62;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_t4BU5qb(int input) {
    int result = input * 64;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} QBfQq5L2_ctx_t;

void init_ctx(QBfQq5L2_ctx_t *ctx) {
    ctx->id = 2880;
    ctx->coefficient = 4.3;
    ctx->flags = 70;
}

int compute_DCSxuCX(int input) {
    int result = input * 39;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Y8jfUPwv_ctx_t;

void init_ctx(Y8jfUPwv_ctx_t *ctx) {
    ctx->id = 1661;
    ctx->coefficient = 2.4;
    ctx->flags = 66;
}

int compute_HvWFY1p(int input) {
    int result = input * 27;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} AnaRKBFX_ctx_t;

void init_ctx(AnaRKBFX_ctx_t *ctx) {
    ctx->id = 3687;
    ctx->coefficient = 5.0;
    ctx->flags = 41;
}

int compute_t7fFCkG(int input) {
    int result = input * 61;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} hQhGzKWS_ctx_t;

void init_ctx(hQhGzKWS_ctx_t *ctx) {
    ctx->id = 5957;
    ctx->coefficient = 7.7;
    ctx->flags = 102;
}

int compute_an0zOLW(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Yv4lOjva_ctx_t;

void init_ctx(Yv4lOjva_ctx_t *ctx) {
    ctx->id = 8789;
    ctx->coefficient = 0.4;
    ctx->flags = 28;
}

int compute_7sn4jI7(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_KLqoyAj(int input) {
    int result = input * 15;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} uzTbT3qc_ctx_t;

void init_ctx(uzTbT3qc_ctx_t *ctx) {
    ctx->id = 2151;
    ctx->coefficient = 7.7;
    ctx->flags = 188;
}

int compute_Qce5ij3(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_toDaQSI(int input) {
    int result = input * 8;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} LZGtgDlX_ctx_t;

void init_ctx(LZGtgDlX_ctx_t *ctx) {
    ctx->id = 4552;
    ctx->coefficient = 1.7;
    ctx->flags = 247;
}

int compute_MUH4zvw(int input) {
    int result = input * 55;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_eDi2piC(int input) {
    int result = input * 58;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} WFZdZSqG_ctx_t;

void init_ctx(WFZdZSqG_ctx_t *ctx) {
    ctx->id = 3291;
    ctx->coefficient = 5.6;
    ctx->flags = 114;
}

int compute_mZrl1y9(int input) {
    int result = input * 36;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} VTSyp1TM_ctx_t;

void init_ctx(VTSyp1TM_ctx_t *ctx) {
    ctx->id = 7440;
    ctx->coefficient = 2.6;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 7NZpxZkj_ctx_t;

void init_ctx(7NZpxZkj_ctx_t *ctx) {
    ctx->id = 8203;
    ctx->coefficient = 3.0;
    ctx->flags = 23;
}

int compute_eAbsaer(int input) {
    int result = input * 32;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_KhNkmF8(int input) {
    int result = input * 4;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_jtWOVXj(int input) {
    int result = input * 57;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} YnCR7Xmz_ctx_t;

void init_ctx(YnCR7Xmz_ctx_t *ctx) {
    ctx->id = 9800;
    ctx->coefficient = 9.6;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 0jXCKHKX_ctx_t;

void init_ctx(0jXCKHKX_ctx_t *ctx) {
    ctx->id = 1744;
    ctx->coefficient = 4.1;
    ctx->flags = 87;
}

int compute_z0U4P8e(int input) {
    int result = input * 45;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} kRhaNNvA_ctx_t;

void init_ctx(kRhaNNvA_ctx_t *ctx) {
    ctx->id = 6186;
    ctx->coefficient = 4.5;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} MdzQhQak_ctx_t;

void init_ctx(MdzQhQak_ctx_t *ctx) {
    ctx->id = 7603;
    ctx->coefficient = 8.4;
    ctx->flags = 68;
}

int compute_f0fY66b(int input) {
    int result = input * 67;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} jzXCvV4Z_ctx_t;

void init_ctx(jzXCvV4Z_ctx_t *ctx) {
    ctx->id = 4680;
    ctx->coefficient = 9.2;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} s0sI9ORT_ctx_t;

void init_ctx(s0sI9ORT_ctx_t *ctx) {
    ctx->id = 6747;
    ctx->coefficient = 2.4;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} WA9Wg9LL_ctx_t;

void init_ctx(WA9Wg9LL_ctx_t *ctx) {
    ctx->id = 1074;
    ctx->coefficient = 3.2;
    ctx->flags = 213;
}

int compute_sZwvJvc(int input) {
    int result = input * 10;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} hoF28QKE_ctx_t;

void init_ctx(hoF28QKE_ctx_t *ctx) {
    ctx->id = 1977;
    ctx->coefficient = 5.3;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} WA7PUlLq_ctx_t;

void init_ctx(WA7PUlLq_ctx_t *ctx) {
    ctx->id = 8038;
    ctx->coefficient = 1.7;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} cTtlfba7_ctx_t;

void init_ctx(cTtlfba7_ctx_t *ctx) {
    ctx->id = 6086;
    ctx->coefficient = 1.7;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} TWeUeGwJ_ctx_t;

void init_ctx(TWeUeGwJ_ctx_t *ctx) {
    ctx->id = 2956;
    ctx->coefficient = 4.7;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} pqFHThPR_ctx_t;

void init_ctx(pqFHThPR_ctx_t *ctx) {
    ctx->id = 9793;
    ctx->coefficient = 9.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} XD8DZTHD_ctx_t;

void init_ctx(XD8DZTHD_ctx_t *ctx) {
    ctx->id = 7945;
    ctx->coefficient = 6.8;
    ctx->flags = 134;
}

int compute_2geyaap(int input) {
    int result = input * 30;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_ghU6ZqC(int input) {
    int result = input * 24;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} J2aoOVAY_ctx_t;

void init_ctx(J2aoOVAY_ctx_t *ctx) {
    ctx->id = 3717;
    ctx->coefficient = 10.0;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 0WDaqwio_ctx_t;

void init_ctx(0WDaqwio_ctx_t *ctx) {
    ctx->id = 6902;
    ctx->coefficient = 8.8;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} Vuis2ACc_ctx_t;

void init_ctx(Vuis2ACc_ctx_t *ctx) {
    ctx->id = 8728;
    ctx->coefficient = 9.8;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} mc7BZyg0_ctx_t;

void init_ctx(mc7BZyg0_ctx_t *ctx) {
    ctx->id = 3684;
    ctx->coefficient = 4.7;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} tg3mn54Q_ctx_t;

void init_ctx(tg3mn54Q_ctx_t *ctx) {
    ctx->id = 3556;
    ctx->coefficient = 0.8;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Cqi75DPR_ctx_t;

void init_ctx(Cqi75DPR_ctx_t *ctx) {
    ctx->id = 4692;
    ctx->coefficient = 5.8;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} nRAF9TGf_ctx_t;

void init_ctx(nRAF9TGf_ctx_t *ctx) {
    ctx->id = 8426;
    ctx->coefficient = 4.3;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} DAZUFPXh_ctx_t;

void init_ctx(DAZUFPXh_ctx_t *ctx) {
    ctx->id = 8107;
    ctx->coefficient = 4.1;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ASaxVj99_ctx_t;

void init_ctx(ASaxVj99_ctx_t *ctx) {
    ctx->id = 8845;
    ctx->coefficient = 9.1;
    ctx->flags = 44;
}

int compute_6K6bgPp(int input) {
    int result = input * 20;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 29wfwRPO_ctx_t;

void init_ctx(29wfwRPO_ctx_t *ctx) {
    ctx->id = 6130;
    ctx->coefficient = 9.7;
    ctx->flags = 74;
}

int compute_e7tzIaz(int input) {
    int result = input * 42;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_qT2GLKQ(int input) {
    int result = input * 2;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} vgU9jeqL_ctx_t;

void init_ctx(vgU9jeqL_ctx_t *ctx) {
    ctx->id = 8781;
    ctx->coefficient = 1.0;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 2a7eO6aC_ctx_t;

void init_ctx(2a7eO6aC_ctx_t *ctx) {
    ctx->id = 1037;
    ctx->coefficient = 7.7;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} EIrTedkN_ctx_t;

void init_ctx(EIrTedkN_ctx_t *ctx) {
    ctx->id = 5207;
    ctx->coefficient = 6.7;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} RuKT8xlL_ctx_t;

void init_ctx(RuKT8xlL_ctx_t *ctx) {
    ctx->id = 8835;
    ctx->coefficient = 3.2;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} wtWa1Nhj_ctx_t;

void init_ctx(wtWa1Nhj_ctx_t *ctx) {
    ctx->id = 9362;
    ctx->coefficient = 7.1;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} ljaOVwu8_ctx_t;

void init_ctx(ljaOVwu8_ctx_t *ctx) {
    ctx->id = 9696;
    ctx->coefficient = 2.1;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} S3pMaImj_ctx_t;

void init_ctx(S3pMaImj_ctx_t *ctx) {
    ctx->id = 7323;
    ctx->coefficient = 0.4;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} UOEbfHZM_ctx_t;

void init_ctx(UOEbfHZM_ctx_t *ctx) {
    ctx->id = 4380;
    ctx->coefficient = 7.9;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} XqUezhbn_ctx_t;

void init_ctx(XqUezhbn_ctx_t *ctx) {
    ctx->id = 6333;
    ctx->coefficient = 9.0;
    ctx->flags = 52;
}

int compute_fXivp1v(int input) {
    int result = input * 51;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} M3U1zztS_ctx_t;

void init_ctx(M3U1zztS_ctx_t *ctx) {
    ctx->id = 3419;
    ctx->coefficient = 8.1;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} EqvinnVD_ctx_t;

void init_ctx(EqvinnVD_ctx_t *ctx) {
    ctx->id = 9777;
    ctx->coefficient = 8.4;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} L1igwkPu_ctx_t;

void init_ctx(L1igwkPu_ctx_t *ctx) {
    ctx->id = 4950;
    ctx->coefficient = 2.4;
    ctx->flags = 220;
}

int compute_iExlfGa(int input) {
    int result = input * 16;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} eTSCwd4e_ctx_t;

void init_ctx(eTSCwd4e_ctx_t *ctx) {
    ctx->id = 6854;
    ctx->coefficient = 5.7;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} OkK94aos_ctx_t;

void init_ctx(OkK94aos_ctx_t *ctx) {
    ctx->id = 2898;
    ctx->coefficient = 3.5;
    ctx->flags = 247;
}

int compute_oyLDHlP(int input) {
    int result = input * 5;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} QlCS0LhY_ctx_t;

void init_ctx(QlCS0LhY_ctx_t *ctx) {
    ctx->id = 1872;
    ctx->coefficient = 1.1;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} I801Xn8q_ctx_t;

void init_ctx(I801Xn8q_ctx_t *ctx) {
    ctx->id = 1055;
    ctx->coefficient = 9.3;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} HuiP19mG_ctx_t;

void init_ctx(HuiP19mG_ctx_t *ctx) {
    ctx->id = 2315;
    ctx->coefficient = 9.6;
    ctx->flags = 176;
}

int compute_h7U7pGd(int input) {
    int result = input * 28;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_JTdj4rR(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} KGNT5sDp_ctx_t;

void init_ctx(KGNT5sDp_ctx_t *ctx) {
    ctx->id = 9798;
    ctx->coefficient = 3.9;
    ctx->flags = 116;
}

int compute_LhoMsop(int input) {
    int result = input * 5;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} kPnEQ6JE_ctx_t;

void init_ctx(kPnEQ6JE_ctx_t *ctx) {
    ctx->id = 5050;
    ctx->coefficient = 0.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} wcI8k0xd_ctx_t;

void init_ctx(wcI8k0xd_ctx_t *ctx) {
    ctx->id = 6468;
    ctx->coefficient = 3.1;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 21eArvZo_ctx_t;

void init_ctx(21eArvZo_ctx_t *ctx) {
    ctx->id = 2574;
    ctx->coefficient = 1.8;
    ctx->flags = 11;
}

int compute_y3g4nFL(int input) {
    int result = input * 13;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_sZ7jTQg(int input) {
    int result = input * 42;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} D4GGet2R_ctx_t;

void init_ctx(D4GGet2R_ctx_t *ctx) {
    ctx->id = 4215;
    ctx->coefficient = 8.0;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} wwyRjOYK_ctx_t;

void init_ctx(wwyRjOYK_ctx_t *ctx) {
    ctx->id = 6187;
    ctx->coefficient = 1.7;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} tJe82i5R_ctx_t;

void init_ctx(tJe82i5R_ctx_t *ctx) {
    ctx->id = 6325;
    ctx->coefficient = 4.5;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} MnznUFqf_ctx_t;

void init_ctx(MnznUFqf_ctx_t *ctx) {
    ctx->id = 7569;
    ctx->coefficient = 9.1;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} NPH8asg5_ctx_t;

void init_ctx(NPH8asg5_ctx_t *ctx) {
    ctx->id = 9125;
    ctx->coefficient = 1.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Ck3R4wqG_ctx_t;

void init_ctx(Ck3R4wqG_ctx_t *ctx) {
    ctx->id = 5863;
    ctx->coefficient = 1.9;
    ctx->flags = 164;
}

int compute_ziakeYg(int input) {
    int result = input * 65;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_f229puo(int input) {
    int result = input * 13;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} ipD3P1rA_ctx_t;

void init_ctx(ipD3P1rA_ctx_t *ctx) {
    ctx->id = 3568;
    ctx->coefficient = 3.7;
    ctx->flags = 45;
}

int compute_Ah1tLt2(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_tIBtQVS(int input) {
    int result = input * 51;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} nSEqx1mw_ctx_t;

void init_ctx(nSEqx1mw_ctx_t *ctx) {
    ctx->id = 9886;
    ctx->coefficient = 1.1;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} wz1rNvyd_ctx_t;

void init_ctx(wz1rNvyd_ctx_t *ctx) {
    ctx->id = 2080;
    ctx->coefficient = 4.7;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} z1frzK7K_ctx_t;

void init_ctx(z1frzK7K_ctx_t *ctx) {
    ctx->id = 8149;
    ctx->coefficient = 7.4;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} vq2paTRX_ctx_t;

void init_ctx(vq2paTRX_ctx_t *ctx) {
    ctx->id = 3178;
    ctx->coefficient = 6.9;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 1jt5hsXf_ctx_t;

void init_ctx(1jt5hsXf_ctx_t *ctx) {
    ctx->id = 8567;
    ctx->coefficient = 2.4;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GZiWYdDm_ctx_t;

void init_ctx(GZiWYdDm_ctx_t *ctx) {
    ctx->id = 1591;
    ctx->coefficient = 9.4;
    ctx->flags = 193;
}

int compute_Y3zpg1j(int input) {
    int result = input * 63;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_G8j9q6n(int input) {
    int result = input * 40;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Jm9wDRQl_ctx_t;

void init_ctx(Jm9wDRQl_ctx_t *ctx) {
    ctx->id = 3363;
    ctx->coefficient = 9.4;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 6vaEBZOL_ctx_t;

void init_ctx(6vaEBZOL_ctx_t *ctx) {
    ctx->id = 5203;
    ctx->coefficient = 5.1;
    ctx->flags = 156;
}

int compute_xN2G8Uo(int input) {
    int result = input * 30;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_NqWnkGk(int input) {
    int result = input * 41;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_nxfrtGg(int input) {
    int result = input * 33;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} rKDY1kdF_ctx_t;

void init_ctx(rKDY1kdF_ctx_t *ctx) {
    ctx->id = 5805;
    ctx->coefficient = 10.0;
    ctx->flags = 255;
}

int compute_kZMVaxC(int input) {
    int result = input * 42;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_dCGEmXu(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} xs1dweNO_ctx_t;

void init_ctx(xs1dweNO_ctx_t *ctx) {
    ctx->id = 2577;
    ctx->coefficient = 4.2;
    ctx->flags = 128;
}

int compute_ooUMATj(int input) {
    int result = input * 66;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_9g4Ycew(int input) {
    int result = input * 25;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 05sHtsCV_ctx_t;

void init_ctx(05sHtsCV_ctx_t *ctx) {
    ctx->id = 1112;
    ctx->coefficient = 1.6;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} IoDkTNm0_ctx_t;

void init_ctx(IoDkTNm0_ctx_t *ctx) {
    ctx->id = 9363;
    ctx->coefficient = 8.5;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} dXIMWfTb_ctx_t;

void init_ctx(dXIMWfTb_ctx_t *ctx) {
    ctx->id = 7792;
    ctx->coefficient = 2.2;
    ctx->flags = 244;
}

int compute_zzL8ICz(int input) {
    int result = input * 70;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} n6c1evA3_ctx_t;

void init_ctx(n6c1evA3_ctx_t *ctx) {
    ctx->id = 4795;
    ctx->coefficient = 3.2;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} vE65l7ji_ctx_t;

void init_ctx(vE65l7ji_ctx_t *ctx) {
    ctx->id = 6636;
    ctx->coefficient = 9.8;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 6lAxvFHf_ctx_t;

void init_ctx(6lAxvFHf_ctx_t *ctx) {
    ctx->id = 1833;
    ctx->coefficient = 7.9;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 5LJssJ9t_ctx_t;

void init_ctx(5LJssJ9t_ctx_t *ctx) {
    ctx->id = 2593;
    ctx->coefficient = 1.2;
    ctx->flags = 6;
}

int compute_TdVxyPQ(int input) {
    int result = input * 41;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Si2uCzlz_ctx_t;

void init_ctx(Si2uCzlz_ctx_t *ctx) {
    ctx->id = 4821;
    ctx->coefficient = 6.1;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 17dqbkUX_ctx_t;

void init_ctx(17dqbkUX_ctx_t *ctx) {
    ctx->id = 7277;
    ctx->coefficient = 4.6;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} DoMciuo7_ctx_t;

void init_ctx(DoMciuo7_ctx_t *ctx) {
    ctx->id = 4229;
    ctx->coefficient = 9.5;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} FWM6Yhux_ctx_t;

void init_ctx(FWM6Yhux_ctx_t *ctx) {
    ctx->id = 2953;
    ctx->coefficient = 2.1;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 6NgDppk3_ctx_t;

void init_ctx(6NgDppk3_ctx_t *ctx) {
    ctx->id = 9433;
    ctx->coefficient = 0.4;
    ctx->flags = 202;
}

int compute_M2NjOLw(int input) {
    int result = input * 27;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_2Rht8TL(int input) {
    int result = input * 6;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} sZ385Src_ctx_t;

void init_ctx(sZ385Src_ctx_t *ctx) {
    ctx->id = 6075;
    ctx->coefficient = 3.2;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} dWJGIzCN_ctx_t;

void init_ctx(dWJGIzCN_ctx_t *ctx) {
    ctx->id = 2683;
    ctx->coefficient = 0.2;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} zcoCpfbi_ctx_t;

void init_ctx(zcoCpfbi_ctx_t *ctx) {
    ctx->id = 2845;
    ctx->coefficient = 0.9;
    ctx->flags = 233;
}

int compute_Jo79c8R(int input) {
    int result = input * 23;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_c2vOmod(int input) {
    int result = input * 35;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} iLHoamGt_ctx_t;

void init_ctx(iLHoamGt_ctx_t *ctx) {
    ctx->id = 9824;
    ctx->coefficient = 9.2;
    ctx->flags = 35;
}

int compute_CkhMRpK(int input) {
    int result = input * 6;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 6tG9pvtn_ctx_t;

void init_ctx(6tG9pvtn_ctx_t *ctx) {
    ctx->id = 1643;
    ctx->coefficient = 0.5;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} AP5boq2i_ctx_t;

void init_ctx(AP5boq2i_ctx_t *ctx) {
    ctx->id = 9467;
    ctx->coefficient = 6.1;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} VxrWFCjX_ctx_t;

void init_ctx(VxrWFCjX_ctx_t *ctx) {
    ctx->id = 3343;
    ctx->coefficient = 8.6;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} LD3FOXUI_ctx_t;

void init_ctx(LD3FOXUI_ctx_t *ctx) {
    ctx->id = 6777;
    ctx->coefficient = 2.2;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 7gYq5lc4_ctx_t;

void init_ctx(7gYq5lc4_ctx_t *ctx) {
    ctx->id = 2968;
    ctx->coefficient = 1.1;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 7kXE2hOk_ctx_t;

void init_ctx(7kXE2hOk_ctx_t *ctx) {
    ctx->id = 4868;
    ctx->coefficient = 4.3;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 28m44yto_ctx_t;

void init_ctx(28m44yto_ctx_t *ctx) {
    ctx->id = 9677;
    ctx->coefficient = 8.3;
    ctx->flags = 171;
}

int compute_oFa8BnV(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} uaJydqn7_ctx_t;

void init_ctx(uaJydqn7_ctx_t *ctx) {
    ctx->id = 1513;
    ctx->coefficient = 3.3;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} dqzpnwXv_ctx_t;

void init_ctx(dqzpnwXv_ctx_t *ctx) {
    ctx->id = 6732;
    ctx->coefficient = 6.1;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} uyMNKtHv_ctx_t;

void init_ctx(uyMNKtHv_ctx_t *ctx) {
    ctx->id = 6324;
    ctx->coefficient = 3.9;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} WNiKS50N_ctx_t;

void init_ctx(WNiKS50N_ctx_t *ctx) {
    ctx->id = 3167;
    ctx->coefficient = 5.7;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} jHV1XI1K_ctx_t;

void init_ctx(jHV1XI1K_ctx_t *ctx) {
    ctx->id = 4190;
    ctx->coefficient = 9.0;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} rsxLpAqL_ctx_t;

void init_ctx(rsxLpAqL_ctx_t *ctx) {
    ctx->id = 3235;
    ctx->coefficient = 6.6;
    ctx->flags = 120;
}

int compute_5t3H5VG(int input) {
    int result = input * 61;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} nVBoMnAg_ctx_t;

void init_ctx(nVBoMnAg_ctx_t *ctx) {
    ctx->id = 5549;
    ctx->coefficient = 8.8;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} dR3Rxnpx_ctx_t;

void init_ctx(dR3Rxnpx_ctx_t *ctx) {
    ctx->id = 9398;
    ctx->coefficient = 6.9;
    ctx->flags = 0;
}

int compute_lUXiwfn(int input) {
    int result = input * 52;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_WyqweA3(int input) {
    int result = input * 59;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} QKNVgAHU_ctx_t;

void init_ctx(QKNVgAHU_ctx_t *ctx) {
    ctx->id = 9290;
    ctx->coefficient = 1.7;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} a6Powuay_ctx_t;

void init_ctx(a6Powuay_ctx_t *ctx) {
    ctx->id = 8797;
    ctx->coefficient = 4.2;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} uXhqURW6_ctx_t;

void init_ctx(uXhqURW6_ctx_t *ctx) {
    ctx->id = 5741;
    ctx->coefficient = 10.0;
    ctx->flags = 117;
}

int compute_OWlGp6u(int input) {
    int result = input * 61;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_o56I1h2(int input) {
    int result = input * 29;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_va5c1ED(int input) {
    int result = input * 53;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} jXDlE7mk_ctx_t;

void init_ctx(jXDlE7mk_ctx_t *ctx) {
    ctx->id = 6918;
    ctx->coefficient = 6.8;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} inQkBYcV_ctx_t;

void init_ctx(inQkBYcV_ctx_t *ctx) {
    ctx->id = 3231;
    ctx->coefficient = 6.4;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} qci79MFA_ctx_t;

void init_ctx(qci79MFA_ctx_t *ctx) {
    ctx->id = 1287;
    ctx->coefficient = 8.1;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} pPwNyhNx_ctx_t;

void init_ctx(pPwNyhNx_ctx_t *ctx) {
    ctx->id = 9895;
    ctx->coefficient = 8.5;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} nd0DmqP4_ctx_t;

void init_ctx(nd0DmqP4_ctx_t *ctx) {
    ctx->id = 8518;
    ctx->coefficient = 6.8;
    ctx->flags = 59;
}

int compute_Jzxqtfc(int input) {
    int result = input * 67;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} h4NSQgwa_ctx_t;

void init_ctx(h4NSQgwa_ctx_t *ctx) {
    ctx->id = 1056;
    ctx->coefficient = 6.5;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} IH6xetB4_ctx_t;

void init_ctx(IH6xetB4_ctx_t *ctx) {
    ctx->id = 5375;
    ctx->coefficient = 3.6;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} f5dGODkM_ctx_t;

void init_ctx(f5dGODkM_ctx_t *ctx) {
    ctx->id = 6099;
    ctx->coefficient = 4.1;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} GaQuGQQQ_ctx_t;

void init_ctx(GaQuGQQQ_ctx_t *ctx) {
    ctx->id = 3212;
    ctx->coefficient = 1.3;
    ctx->flags = 123;
}

int compute_TB259a8(int input) {
    int result = input * 27;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} VO8znZmq_ctx_t;

void init_ctx(VO8znZmq_ctx_t *ctx) {
    ctx->id = 8003;
    ctx->coefficient = 8.8;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} mG3om6kb_ctx_t;

void init_ctx(mG3om6kb_ctx_t *ctx) {
    ctx->id = 9516;
    ctx->coefficient = 4.0;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 9VhucjBZ_ctx_t;

void init_ctx(9VhucjBZ_ctx_t *ctx) {
    ctx->id = 6049;
    ctx->coefficient = 5.5;
    ctx->flags = 10;
}

int compute_4sz8lNg(int input) {
    int result = input * 16;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} grMFBxhI_ctx_t;

void init_ctx(grMFBxhI_ctx_t *ctx) {
    ctx->id = 8844;
    ctx->coefficient = 7.0;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} hPPulsPP_ctx_t;

void init_ctx(hPPulsPP_ctx_t *ctx) {
    ctx->id = 9935;
    ctx->coefficient = 1.0;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} uZnvEcvP_ctx_t;

void init_ctx(uZnvEcvP_ctx_t *ctx) {
    ctx->id = 3465;
    ctx->coefficient = 5.1;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 19uDGzqx_ctx_t;

void init_ctx(19uDGzqx_ctx_t *ctx) {
    ctx->id = 9699;
    ctx->coefficient = 5.1;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} HkYT7X0t_ctx_t;

void init_ctx(HkYT7X0t_ctx_t *ctx) {
    ctx->id = 8410;
    ctx->coefficient = 4.2;
    ctx->flags = 2;
}

int compute_9IH3Y2O(int input) {
    int result = input * 15;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} itVD5hOR_ctx_t;

void init_ctx(itVD5hOR_ctx_t *ctx) {
    ctx->id = 3901;
    ctx->coefficient = 7.5;
    ctx->flags = 211;
}

int compute_MzzN3RL(int input) {
    int result = input * 11;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} I2hKZXjy_ctx_t;

void init_ctx(I2hKZXjy_ctx_t *ctx) {
    ctx->id = 7521;
    ctx->coefficient = 1.0;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} XfOclSRh_ctx_t;

void init_ctx(XfOclSRh_ctx_t *ctx) {
    ctx->id = 2601;
    ctx->coefficient = 6.1;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} C3EMzdVW_ctx_t;

void init_ctx(C3EMzdVW_ctx_t *ctx) {
    ctx->id = 9149;
    ctx->coefficient = 5.7;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} FihcCQLb_ctx_t;

void init_ctx(FihcCQLb_ctx_t *ctx) {
    ctx->id = 7327;
    ctx->coefficient = 3.0;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Wz1FQT65_ctx_t;

void init_ctx(Wz1FQT65_ctx_t *ctx) {
    ctx->id = 3803;
    ctx->coefficient = 9.9;
    ctx->flags = 8;
}

int compute_kjdH5Bg(int input) {
    int result = input * 60;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 9dYsXea2_ctx_t;

void init_ctx(9dYsXea2_ctx_t *ctx) {
    ctx->id = 3333;
    ctx->coefficient = 0.3;
    ctx->flags = 71;
}

int compute_9e5ZJWk(int input) {
    int result = input * 37;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Hg6XDmED_ctx_t;

void init_ctx(Hg6XDmED_ctx_t *ctx) {
    ctx->id = 9423;
    ctx->coefficient = 2.4;
    ctx->flags = 220;
}

int compute_jfADiQI(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_qF9HZRU(int input) {
    int result = input * 66;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_LDWe1LR(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} olyBjLbk_ctx_t;

void init_ctx(olyBjLbk_ctx_t *ctx) {
    ctx->id = 5826;
    ctx->coefficient = 4.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} Jm1pkEZ3_ctx_t;

void init_ctx(Jm1pkEZ3_ctx_t *ctx) {
    ctx->id = 2561;
    ctx->coefficient = 7.9;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 4r4NTNLu_ctx_t;

void init_ctx(4r4NTNLu_ctx_t *ctx) {
    ctx->id = 8186;
    ctx->coefficient = 4.0;
    ctx->flags = 113;
}

int compute_jKkcE3Q(int input) {
    int result = input * 63;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 3oJ7iTuV_ctx_t;

void init_ctx(3oJ7iTuV_ctx_t *ctx) {
    ctx->id = 8672;
    ctx->coefficient = 1.7;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} LcOUFScS_ctx_t;

void init_ctx(LcOUFScS_ctx_t *ctx) {
    ctx->id = 1543;
    ctx->coefficient = 5.2;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} fiOrW3AZ_ctx_t;

void init_ctx(fiOrW3AZ_ctx_t *ctx) {
    ctx->id = 8226;
    ctx->coefficient = 1.4;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} jcyPNK4z_ctx_t;

void init_ctx(jcyPNK4z_ctx_t *ctx) {
    ctx->id = 9874;
    ctx->coefficient = 2.6;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} n0jy3oTQ_ctx_t;

void init_ctx(n0jy3oTQ_ctx_t *ctx) {
    ctx->id = 1888;
    ctx->coefficient = 0.9;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} i584AVE6_ctx_t;

void init_ctx(i584AVE6_ctx_t *ctx) {
    ctx->id = 2440;
    ctx->coefficient = 3.6;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 2H46OTIW_ctx_t;

void init_ctx(2H46OTIW_ctx_t *ctx) {
    ctx->id = 4301;
    ctx->coefficient = 7.9;
    ctx->flags = 54;
}

int compute_98vTFoN(int input) {
    int result = input * 45;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} dFOD8SSF_ctx_t;

void init_ctx(dFOD8SSF_ctx_t *ctx) {
    ctx->id = 7029;
    ctx->coefficient = 0.7;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} hGEaOo27_ctx_t;

void init_ctx(hGEaOo27_ctx_t *ctx) {
    ctx->id = 6607;
    ctx->coefficient = 5.1;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} sQ4uOsOM_ctx_t;

void init_ctx(sQ4uOsOM_ctx_t *ctx) {
    ctx->id = 4005;
    ctx->coefficient = 5.1;
    ctx->flags = 138;
}

int compute_9icyKDZ(int input) {
    int result = input * 4;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Yy65mflx_ctx_t;

void init_ctx(Yy65mflx_ctx_t *ctx) {
    ctx->id = 9315;
    ctx->coefficient = 7.0;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} hJEQqIpy_ctx_t;

void init_ctx(hJEQqIpy_ctx_t *ctx) {
    ctx->id = 7142;
    ctx->coefficient = 2.4;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} PmttbfTr_ctx_t;

void init_ctx(PmttbfTr_ctx_t *ctx) {
    ctx->id = 6961;
    ctx->coefficient = 9.6;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 5NXCLUIJ_ctx_t;

void init_ctx(5NXCLUIJ_ctx_t *ctx) {
    ctx->id = 2108;
    ctx->coefficient = 6.1;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} O6MKcute_ctx_t;

void init_ctx(O6MKcute_ctx_t *ctx) {
    ctx->id = 8792;
    ctx->coefficient = 9.0;
    ctx->flags = 33;
}

int compute_UtwH62h(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_hRQG32e(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_7R4OyRN(int input) {
    int result = input * 19;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} vs0h0emR_ctx_t;

void init_ctx(vs0h0emR_ctx_t *ctx) {
    ctx->id = 6883;
    ctx->coefficient = 1.9;
    ctx->flags = 223;
}

int compute_sB3BTiB(int input) {
    int result = input * 70;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 98thKLgu_ctx_t;

void init_ctx(98thKLgu_ctx_t *ctx) {
    ctx->id = 4065;
    ctx->coefficient = 8.9;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} xQG74MgW_ctx_t;

void init_ctx(xQG74MgW_ctx_t *ctx) {
    ctx->id = 4680;
    ctx->coefficient = 4.4;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} TVvRLaBx_ctx_t;

void init_ctx(TVvRLaBx_ctx_t *ctx) {
    ctx->id = 8976;
    ctx->coefficient = 2.6;
    ctx->flags = 3;
}

int compute_QeZ5AIy(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} t9fs7kve_ctx_t;

void init_ctx(t9fs7kve_ctx_t *ctx) {
    ctx->id = 2064;
    ctx->coefficient = 3.3;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} GN53FnAb_ctx_t;

void init_ctx(GN53FnAb_ctx_t *ctx) {
    ctx->id = 2019;
    ctx->coefficient = 1.2;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 1aAiQD5k_ctx_t;

void init_ctx(1aAiQD5k_ctx_t *ctx) {
    ctx->id = 2550;
    ctx->coefficient = 5.6;
    ctx->flags = 52;
}

int compute_2zc20qZ(int input) {
    int result = input * 60;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} a7FfFcFU_ctx_t;

void init_ctx(a7FfFcFU_ctx_t *ctx) {
    ctx->id = 1996;
    ctx->coefficient = 8.8;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} d1AFm7AC_ctx_t;

void init_ctx(d1AFm7AC_ctx_t *ctx) {
    ctx->id = 1889;
    ctx->coefficient = 9.1;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} WviP3Jg8_ctx_t;

void init_ctx(WviP3Jg8_ctx_t *ctx) {
    ctx->id = 5562;
    ctx->coefficient = 2.7;
    ctx->flags = 53;
}

int compute_TofMG8o(int input) {
    int result = input * 50;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_PWxGC8r(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} pzrJyJcT_ctx_t;

void init_ctx(pzrJyJcT_ctx_t *ctx) {
    ctx->id = 3204;
    ctx->coefficient = 2.9;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} iCbEf1Hp_ctx_t;

void init_ctx(iCbEf1Hp_ctx_t *ctx) {
    ctx->id = 8277;
    ctx->coefficient = 3.0;
    ctx->flags = 236;
}

int compute_x5v6K73(int input) {
    int result = input * 66;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_xCxKs5p(int input) {
    int result = input * 20;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_rLEQRKT(int input) {
    int result = input * 3;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_p7A2XDr(int input) {
    int result = input * 56;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_HFxXSIF(int input) {
    int result = input * 50;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_glTmVdR(int input) {
    int result = input * 46;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} BMiOHpMJ_ctx_t;

void init_ctx(BMiOHpMJ_ctx_t *ctx) {
    ctx->id = 5812;
    ctx->coefficient = 2.5;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Tak0DX0Z_ctx_t;

void init_ctx(Tak0DX0Z_ctx_t *ctx) {
    ctx->id = 4683;
    ctx->coefficient = 3.2;
    ctx->flags = 39;
}

int compute_z7JLCtK(int input) {
    int result = input * 6;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} KOmtegqB_ctx_t;

void init_ctx(KOmtegqB_ctx_t *ctx) {
    ctx->id = 4235;
    ctx->coefficient = 1.0;
    ctx->flags = 5;
}

int compute_SEINhUH(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_fvDplEg(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} naBzSvex_ctx_t;

void init_ctx(naBzSvex_ctx_t *ctx) {
    ctx->id = 6496;
    ctx->coefficient = 6.1;
    ctx->flags = 133;
}

int compute_KY7pwCS(int input) {
    int result = input * 56;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} N7JZqldW_ctx_t;

void init_ctx(N7JZqldW_ctx_t *ctx) {
    ctx->id = 5752;
    ctx->coefficient = 9.7;
    ctx->flags = 101;
}

int compute_vAD8TSr(int input) {
    int result = input * 66;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_sdA5Oj3(int input) {
    int result = input * 20;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_WPh5Uc5(int input) {
    int result = input * 3;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} sy0vZOtI_ctx_t;

void init_ctx(sy0vZOtI_ctx_t *ctx) {
    ctx->id = 8132;
    ctx->coefficient = 8.3;
    ctx->flags = 220;
}

int compute_mEU1sqx(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_ILfYXej(int input) {
    int result = input * 16;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} fPdiwbX8_ctx_t;

void init_ctx(fPdiwbX8_ctx_t *ctx) {
    ctx->id = 3229;
    ctx->coefficient = 5.2;
    ctx->flags = 253;
}

int compute_7e42WsU(int input) {
    int result = input * 2;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} HAWvKlNI_ctx_t;

void init_ctx(HAWvKlNI_ctx_t *ctx) {
    ctx->id = 9546;
    ctx->coefficient = 3.1;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 46ozsWv1_ctx_t;

void init_ctx(46ozsWv1_ctx_t *ctx) {
    ctx->id = 9536;
    ctx->coefficient = 5.0;
    ctx->flags = 228;
}

int compute_BWrN0FB(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_mp6rcYN(int input) {
    int result = input * 58;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 3PWV9G0n_ctx_t;

void init_ctx(3PWV9G0n_ctx_t *ctx) {
    ctx->id = 2884;
    ctx->coefficient = 7.9;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} wELZzDxJ_ctx_t;

void init_ctx(wELZzDxJ_ctx_t *ctx) {
    ctx->id = 7623;
    ctx->coefficient = 4.2;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} gwe39vVl_ctx_t;

void init_ctx(gwe39vVl_ctx_t *ctx) {
    ctx->id = 4240;
    ctx->coefficient = 8.3;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 4rz4ENr4_ctx_t;

void init_ctx(4rz4ENr4_ctx_t *ctx) {
    ctx->id = 5967;
    ctx->coefficient = 4.7;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} gGQ9oCcY_ctx_t;

void init_ctx(gGQ9oCcY_ctx_t *ctx) {
    ctx->id = 9718;
    ctx->coefficient = 6.6;
    ctx->flags = 201;
}

int compute_jn8t2rQ(int input) {
    int result = input * 48;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_RBYs7Sf(int input) {
    int result = input * 45;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_EDVqOEy(int input) {
    int result = input * 12;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} m1gha4iA_ctx_t;

void init_ctx(m1gha4iA_ctx_t *ctx) {
    ctx->id = 6903;
    ctx->coefficient = 9.0;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} LJknPLVh_ctx_t;

void init_ctx(LJknPLVh_ctx_t *ctx) {
    ctx->id = 5348;
    ctx->coefficient = 9.7;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 2DOFW9as_ctx_t;

void init_ctx(2DOFW9as_ctx_t *ctx) {
    ctx->id = 3266;
    ctx->coefficient = 4.2;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} g632Wk7z_ctx_t;

void init_ctx(g632Wk7z_ctx_t *ctx) {
    ctx->id = 3406;
    ctx->coefficient = 8.4;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} M19lUA3B_ctx_t;

void init_ctx(M19lUA3B_ctx_t *ctx) {
    ctx->id = 8313;
    ctx->coefficient = 5.6;
    ctx->flags = 108;
}

int compute_nrtyjfk(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} DB9j5dpN_ctx_t;

void init_ctx(DB9j5dpN_ctx_t *ctx) {
    ctx->id = 6082;
    ctx->coefficient = 2.2;
    ctx->flags = 1;
}

int compute_LW7GLqn(int input) {
    int result = input * 31;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} BhBpeGLu_ctx_t;

void init_ctx(BhBpeGLu_ctx_t *ctx) {
    ctx->id = 3979;
    ctx->coefficient = 5.0;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} nC5VQTgp_ctx_t;

void init_ctx(nC5VQTgp_ctx_t *ctx) {
    ctx->id = 9392;
    ctx->coefficient = 2.4;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} OC3I5ddh_ctx_t;

void init_ctx(OC3I5ddh_ctx_t *ctx) {
    ctx->id = 5038;
    ctx->coefficient = 6.8;
    ctx->flags = 90;
}

int compute_qRLOjHY(int input) {
    int result = input * 57;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} RyqoWgEY_ctx_t;

void init_ctx(RyqoWgEY_ctx_t *ctx) {
    ctx->id = 7687;
    ctx->coefficient = 3.1;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} pXexfCs7_ctx_t;

void init_ctx(pXexfCs7_ctx_t *ctx) {
    ctx->id = 9442;
    ctx->coefficient = 2.2;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} OgKxltQv_ctx_t;

void init_ctx(OgKxltQv_ctx_t *ctx) {
    ctx->id = 8909;
    ctx->coefficient = 9.1;
    ctx->flags = 74;
}

int compute_PO5Afp9(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_KXQLqG7(int input) {
    int result = input * 7;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} vl87cuG8_ctx_t;

void init_ctx(vl87cuG8_ctx_t *ctx) {
    ctx->id = 6955;
    ctx->coefficient = 6.0;
    ctx->flags = 150;
}

int compute_ixmyl8C(int input) {
    int result = input * 13;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_X1YX4gF(int input) {
    int result = input * 46;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 4yu8hmch_ctx_t;

void init_ctx(4yu8hmch_ctx_t *ctx) {
    ctx->id = 7700;
    ctx->coefficient = 5.6;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} YFfJmYdH_ctx_t;

void init_ctx(YFfJmYdH_ctx_t *ctx) {
    ctx->id = 2089;
    ctx->coefficient = 9.7;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 7Cmv3ZYg_ctx_t;

void init_ctx(7Cmv3ZYg_ctx_t *ctx) {
    ctx->id = 4890;
    ctx->coefficient = 8.2;
    ctx->flags = 136;
}

int compute_zbucNrv(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} XpkS5chb_ctx_t;

void init_ctx(XpkS5chb_ctx_t *ctx) {
    ctx->id = 2269;
    ctx->coefficient = 9.4;
    ctx->flags = 210;
}

int compute_khouOHu(int input) {
    int result = input * 8;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} RNn54dOt_ctx_t;

void init_ctx(RNn54dOt_ctx_t *ctx) {
    ctx->id = 1997;
    ctx->coefficient = 2.1;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} BTXNC3Kg_ctx_t;

void init_ctx(BTXNC3Kg_ctx_t *ctx) {
    ctx->id = 6556;
    ctx->coefficient = 5.4;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} dqLVzegn_ctx_t;

void init_ctx(dqLVzegn_ctx_t *ctx) {
    ctx->id = 2409;
    ctx->coefficient = 9.3;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} jAhgU8uK_ctx_t;

void init_ctx(jAhgU8uK_ctx_t *ctx) {
    ctx->id = 2353;
    ctx->coefficient = 3.8;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 0hHEYNZn_ctx_t;

void init_ctx(0hHEYNZn_ctx_t *ctx) {
    ctx->id = 4994;
    ctx->coefficient = 8.9;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} EhweEGyi_ctx_t;

void init_ctx(EhweEGyi_ctx_t *ctx) {
    ctx->id = 4418;
    ctx->coefficient = 3.6;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} KmYhgkgl_ctx_t;

void init_ctx(KmYhgkgl_ctx_t *ctx) {
    ctx->id = 2221;
    ctx->coefficient = 9.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} F6JwJv3T_ctx_t;

void init_ctx(F6JwJv3T_ctx_t *ctx) {
    ctx->id = 9079;
    ctx->coefficient = 0.4;
    ctx->flags = 86;
}

int compute_9BGrtcY(int input) {
    int result = input * 38;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} ySoSRjq0_ctx_t;

void init_ctx(ySoSRjq0_ctx_t *ctx) {
    ctx->id = 6390;
    ctx->coefficient = 8.3;
    ctx->flags = 98;
}

int compute_VLIwwtw(int input) {
    int result = input * 36;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} wlkU4jZP_ctx_t;

void init_ctx(wlkU4jZP_ctx_t *ctx) {
    ctx->id = 3239;
    ctx->coefficient = 9.6;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} hXYoVwnD_ctx_t;

void init_ctx(hXYoVwnD_ctx_t *ctx) {
    ctx->id = 1139;
    ctx->coefficient = 7.7;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 7adCCik7_ctx_t;

void init_ctx(7adCCik7_ctx_t *ctx) {
    ctx->id = 7112;
    ctx->coefficient = 4.0;
    ctx->flags = 218;
}

int compute_tUsUIhz(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} WD7s3aBr_ctx_t;

void init_ctx(WD7s3aBr_ctx_t *ctx) {
    ctx->id = 2453;
    ctx->coefficient = 0.6;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} PMJB5MFq_ctx_t;

void init_ctx(PMJB5MFq_ctx_t *ctx) {
    ctx->id = 8363;
    ctx->coefficient = 2.2;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} zUjZHTnW_ctx_t;

void init_ctx(zUjZHTnW_ctx_t *ctx) {
    ctx->id = 5318;
    ctx->coefficient = 1.4;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} UWFybOlc_ctx_t;

void init_ctx(UWFybOlc_ctx_t *ctx) {
    ctx->id = 1978;
    ctx->coefficient = 8.2;
    ctx->flags = 35;
}

int compute_nkwvj0c(int input) {
    int result = input * 17;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 9he1ShA3_ctx_t;

void init_ctx(9he1ShA3_ctx_t *ctx) {
    ctx->id = 8062;
    ctx->coefficient = 7.4;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} OlrdqpQK_ctx_t;

void init_ctx(OlrdqpQK_ctx_t *ctx) {
    ctx->id = 5156;
    ctx->coefficient = 7.5;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} A2jrDsXk_ctx_t;

void init_ctx(A2jrDsXk_ctx_t *ctx) {
    ctx->id = 9274;
    ctx->coefficient = 6.8;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} AeVAI255_ctx_t;

void init_ctx(AeVAI255_ctx_t *ctx) {
    ctx->id = 3195;
    ctx->coefficient = 6.0;
    ctx->flags = 22;
}

int compute_lKy0N8Z(int input) {
    int result = input * 33;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_BC4i00q(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} neZv3s90_ctx_t;

void init_ctx(neZv3s90_ctx_t *ctx) {
    ctx->id = 4826;
    ctx->coefficient = 7.1;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 4YYM6vt6_ctx_t;

void init_ctx(4YYM6vt6_ctx_t *ctx) {
    ctx->id = 8086;
    ctx->coefficient = 9.9;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} KmNwzoL5_ctx_t;

void init_ctx(KmNwzoL5_ctx_t *ctx) {
    ctx->id = 2704;
    ctx->coefficient = 6.7;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} BkvM1fDG_ctx_t;

void init_ctx(BkvM1fDG_ctx_t *ctx) {
    ctx->id = 5938;
    ctx->coefficient = 4.7;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} IdmhAYcM_ctx_t;

void init_ctx(IdmhAYcM_ctx_t *ctx) {
    ctx->id = 3226;
    ctx->coefficient = 5.1;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} BNoVgvl5_ctx_t;

void init_ctx(BNoVgvl5_ctx_t *ctx) {
    ctx->id = 7348;
    ctx->coefficient = 2.0;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 803rbRM7_ctx_t;

void init_ctx(803rbRM7_ctx_t *ctx) {
    ctx->id = 1105;
    ctx->coefficient = 5.3;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} mms0EZFC_ctx_t;

void init_ctx(mms0EZFC_ctx_t *ctx) {
    ctx->id = 9362;
    ctx->coefficient = 7.3;
    ctx->flags = 211;
}

int compute_dF8Ox3R(int input) {
    int result = input * 15;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} TUpvzUGm_ctx_t;

void init_ctx(TUpvzUGm_ctx_t *ctx) {
    ctx->id = 5858;
    ctx->coefficient = 3.9;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} ohIjZeGe_ctx_t;

void init_ctx(ohIjZeGe_ctx_t *ctx) {
    ctx->id = 6552;
    ctx->coefficient = 6.2;
    ctx->flags = 116;
}

int compute_s6Y0O1J(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} t8t4dx5A_ctx_t;

void init_ctx(t8t4dx5A_ctx_t *ctx) {
    ctx->id = 4203;
    ctx->coefficient = 7.8;
    ctx->flags = 102;
}

int compute_GJRCB35(int input) {
    int result = input * 38;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Bt5jdqoF_ctx_t;

void init_ctx(Bt5jdqoF_ctx_t *ctx) {
    ctx->id = 8179;
    ctx->coefficient = 1.0;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} r4rv7pKI_ctx_t;

void init_ctx(r4rv7pKI_ctx_t *ctx) {
    ctx->id = 5845;
    ctx->coefficient = 6.4;
    ctx->flags = 184;
}

int compute_MfK7wh7(int input) {
    int result = input * 45;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_sIrTbOG(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} wuXqJYvD_ctx_t;

void init_ctx(wuXqJYvD_ctx_t *ctx) {
    ctx->id = 6901;
    ctx->coefficient = 4.0;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} nowLxsBl_ctx_t;

void init_ctx(nowLxsBl_ctx_t *ctx) {
    ctx->id = 8010;
    ctx->coefficient = 2.0;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} tNL17gi4_ctx_t;

void init_ctx(tNL17gi4_ctx_t *ctx) {
    ctx->id = 4296;
    ctx->coefficient = 6.0;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} J15PBhaK_ctx_t;

void init_ctx(J15PBhaK_ctx_t *ctx) {
    ctx->id = 1341;
    ctx->coefficient = 6.4;
    ctx->flags = 120;
}

