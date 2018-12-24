/* Generated by re2c */

#include <stddef.h> /* size_t */
#include <stdio.h>
#include <stdlib.h> /* malloc, free */
#include <string.h> /* memcpy */

static void *read_file
    ( const char *fname
    , size_t unit
    , size_t padding
    , size_t *pfsize
    )
{
    void *buffer = NULL;
    size_t fsize = 0;

    /* open file */
    FILE *f = fopen(fname, "rb");
    if(f == NULL) {
        goto error;
    }

    /* get file size */
    fseek(f, 0, SEEK_END);
    fsize = (size_t) ftell(f) / unit;
    fseek(f, 0, SEEK_SET);

    /* allocate memory for file and padding */
    buffer = malloc(unit * (fsize + padding));
    if (buffer == NULL) {
        goto error;
    }

    /* read the whole file in memory */
    if (fread(buffer, unit, fsize, f) != fsize) {
        goto error;
    }

    fclose(f);
    *pfsize = fsize;
    return buffer;

error:
    fprintf(stderr, "error: cannot read file '%s'\n", fname);
    free(buffer);
    if (f != NULL) {
        fclose(f);
    }
    return NULL;
}

#define YYCTYPE unsigned char
#define YYKEYTYPE unsigned char
#define YYPEEK() *cursor
#define YYSKIP() ++cursor
#define YYBACKUPCTX() ctxmarker = cursor
#define YYRESTORECTX() cursor = ctxmarker
#define YYLESSTHAN(n) (limit - cursor) < n
#define YYFILL(n) { break; }

static int action_line63
    ( unsigned *pkix
    , const YYKEYTYPE *keys
    , const YYCTYPE *start
    , const YYCTYPE *token
    , const YYCTYPE **cursor
    , YYKEYTYPE rule_act
    )
{
    const unsigned kix = *pkix;
    const long pos = token - start;
    const long len_act = *cursor - token;
    const long len_exp = (long) keys[kix + 1];
    const YYKEYTYPE rule_exp = keys[kix + 2];
    *pkix = kix + 3;
    if (rule_exp == 255) {
        fprintf
            ( stderr
            , "warning: lex_line63: control flow is undefined for input"
                " at position %ld, rerun re2c with '-W'\n"
            , pos
            );
    }
    if (len_act == len_exp && rule_act == rule_exp) {
        const YYKEYTYPE offset = keys[kix];
        *cursor = token + offset;
        return 0;
    } else {
        fprintf
            ( stderr
            , "error: lex_line63: at position %ld (key %u):\n"
                "\texpected: match length %ld, rule %u\n"
                "\tactual:   match length %ld, rule %u\n"
            , pos
            , kix
            , len_exp
            , rule_exp
            , len_act
            , rule_act
            );
        return 1;
    }
}

static int check_key_count_line63(unsigned have, unsigned used, unsigned need)
{
    if (used + need <= have) return 0;
    fprintf(stderr, "error: lex_line63: not enough keys\n");
    return 1;
}

int lex_line63()
{
    const size_t padding = 3; /* YYMAXFILL */
    int status = 0;
    size_t input_len = 0;
    size_t keys_count = 0;
    YYCTYPE *input = NULL;
    YYKEYTYPE *keys = NULL;
    const YYCTYPE *cursor = NULL;
    const YYCTYPE *limit = NULL;
    const YYCTYPE *token = NULL;
    const YYCTYPE *eof = NULL;
    unsigned int i = 0;

    input = (YYCTYPE *) read_file
        ("ctx.--skeleton.c.line63.input"
        , sizeof (YYCTYPE)
        , padding
        , &input_len
        );
    if (input == NULL) {
        status = 1;
        goto end;
    }

    keys = (YYKEYTYPE *) read_file
        ("ctx.--skeleton.c.line63.keys"
        , sizeof (YYKEYTYPE)
        , 0
        , &keys_count
        );
    if (keys == NULL) {
        status = 1;
        goto end;
    }

    cursor = input;
    limit = input + input_len + padding;
    eof = input + input_len;

    for (i = 0; status == 0 && cursor < eof && i < keys_count;) {
        token = cursor;
        const YYCTYPE *ctxmarker = NULL;
        YYCTYPE yych;

        if (YYLESSTHAN (3)) YYFILL(3);
        yych = YYPEEK ();
        switch (yych) {
        case '\t':
        case '\n':
        case ' ':    goto yy4;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy6;
        case 'a':
        case 'b':    goto yy9;
        default:    goto yy2;
        }
yy2:
        YYSKIP ();
yy3:
        status = check_key_count_line63(keys_count, i, 3)
             || action_line63(&i, keys, input, token, &cursor, 4);
        continue;
yy4:
        YYSKIP ();
        status = check_key_count_line63(keys_count, i, 3)
             || action_line63(&i, keys, input, token, &cursor, 3);
        continue;
yy6:
        YYSKIP ();
        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy6;
        default:    goto yy8;
        }
yy8:
        status = check_key_count_line63(keys_count, i, 3)
             || action_line63(&i, keys, input, token, &cursor, 2);
        continue;
yy9:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            YYBACKUPCTX ();
            goto yy10;
        case '1':
            YYBACKUPCTX ();
            goto yy13;
        default:    goto yy3;
        }
yy10:
        YYSKIP ();
        if (YYLESSTHAN (1)) YYFILL(1);
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy10;
        default:    goto yy12;
        }
yy12:
        YYRESTORECTX ();
        status = check_key_count_line63(keys_count, i, 3)
             || action_line63(&i, keys, input, token, &cursor, 1);
        continue;
yy13:
        YYSKIP ();
        yych = YYPEEK ();
        switch (yych) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':    goto yy10;
        default:    goto yy14;
        }
yy14:
        YYRESTORECTX ();
        status = check_key_count_line63(keys_count, i, 3)
             || action_line63(&i, keys, input, token, &cursor, 0);
        continue;

    }
    if (status == 0) {
        if (cursor != eof) {
            status = 1;
            const long pos = token - input;
            fprintf(stderr, "error: lex_line63: unused input strings left at position %ld\n", pos);
        }
        if (i != keys_count) {
            status = 1;
            fprintf(stderr, "error: lex_line63: unused keys left after %u keys\n", i);
        }
    }

end:
    free(input);
    free(keys);

    return status;
}

#undef YYCTYPE
#undef YYKEYTYPE
#undef YYPEEK
#undef YYSKIP
#undef YYBACKUPCTX
#undef YYRESTORECTX
#undef YYLESSTHAN
#undef YYFILL

int main()
{
    if(lex_line63() != 0) {
        return 1;
    }
    return 0;
}
 !"#$%&'()*+,-./:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`cdefghijklmnopqrstuvwxyz{|}~��������������������������������������������������������������������������������������������������������������������������������	
 00 112233445566778899	00
11223344556677889900112233445566778899001122 33!44"55#66$77%88&99'00(11)22*33+44,55-66.77/88:99;00<11=22>33?44@55A66B77C88D99E00F11G22H33I44J55K66L77M88N99O00P11Q22R33S44T55U66V77W88X99Y00Z11[22\33]44^55_66`77a88b99c00d11e22f33g44h55i66j77k88l99m00n11o22p33q44r55s66t77u88v99w00x11y22z33{44|55}66~7788�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�66�77�88�99�00�11�22�33�44�55�0 123456789	0
1234567890123456789012 3!4"5#6$7%8&9'0(1)2*3+4,5-6.7/8:9;0<1=2>3?4@5A6B7C8D9E0F1G2H3I4J5K6L7M8N9O0P1Q2R3S4T5U6V7W8X9Y0Z1[2\3]4^5_6`7a8b9c0d1e2f3g4h5i6j7k8l9m0n1o2p3q4r5s6t7u8v9w0x1y2z3{4|5}6~78�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�6�7�8�9�0�1�2�3�4�5�a00 b21a32b43a54b65a76b87a98b09	a20
b31a42b53a64b75a86b97a08b29a30b41a52b63a74b85a96b07a28b39a40b51a62 b73!a84"b95#a06$b27%a38&b49'a50(b61)a72*b83+a94,b05-a26.b37/a48:b59;a60<b71=a82>b93?a04@b25Aa36Bb47Ca58Db69Ea70Fb81Ga92Hb03Ia24Jb35Ka46Lb57Ma68Nb79Oa80Pb91Qa02Rb23Sa34Tb45Ua56Vb67Wa78Xb89Ya90Zb01[a22\b33]a44^b55_a66`b77aa88bb99ca00db21ea32fb43ga54hb65ia76jb87ka98lb09ma20nb31oa42pb53qa64rb75sa86tb97ua08vb29wa30xb41ya52zb63{a74|b85}a96~b07a28�b39�a40�b51�a62�b73�a84�b95�a06�b27�a38�b49�a50�b61�a72�b83�a94�b05�a26�b37�a48�b59�a60�b71�a82�b93�a04�b25�a36�b47�a58�b69�a70�b81�a92�b03�a24�b35�a46�b57�a68�b79�a80�b91�a02�b23�a34�b45�a56�b67�a78�b89�a90�b01�a22�b33�a44�b55�a66�b77�a88�b99�a00�b21�a32�b43�a54�b65�a76�b87�a98�b09�a20�b31�a42�b53�a64�b75�a86�b97�a08�b29�a30�b41�a52�b63�a74�b85�a96�b07�a28�b39�a40�b51�a62�b73�a84�b95�a06�b27�a38�b49�a50�b61�a72�b83�a94�b05�a26�b37�a48�b59�a60�b71�a82�b93�a04�b25�a36�b47�a58�b69�a70�b81�a92�b03�a24�b35�a0 b2a3b4a5b6a7b8a9b0	a2
b3a4b5a6b7a8b9a0b2a3b4a5b6a7b8a9b0a2b3a4b5a6 b7!a8"b9#a0$b2%a3&b4'a5(b6)a7*b8+a9,b0-a2.b3/a4:b5;a6<b7=a8>b9?a0@b2Aa3Bb4Ca5Db6Ea7Fb8Ga9Hb0Ia2Jb3Ka4Lb5Ma6Nb7Oa8Pb9Qa0Rb2Sa3Tb4Ua5Vb6Wa7Xb8Ya9Zb0[a2\b3]a4^b5_a6`b7aa8bb9ca0db2ea3fb4ga5hb6ia7jb8ka9lb0ma2nb3oa4pb5qa6rb7sa8tb9ua0vb2wa3xb4ya5zb6{a7|b8}a9~b0a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a4�b5�a6�b7�a8�b9�a0�b2�a3�b4�a5�b6�a7�b8�a9�b0�a2�b3�a10 b11a12b13a14b15a16b17a18b19	a10
b11a12b13a14b15a16b17a18b19a10b11a12b13a14b15a16b17a18b19a10b11a12 b13!a14"b15#a16$b17%a18&b19'a10(b11)a12*b13+a14,b15-a16.b17/a18:b19;a10<b11=a12>b13?a14@b15Aa16Bb17Ca18Db19Ea10Fb11Ga12Hb13Ia14Jb15Ka16Lb17Ma18Nb19Oa10Pb11Qa12Rb13Sa14Tb15Ua16Vb17Wa18Xb19Ya10Zb11[a12\b13]a14^b15_a16`b17aa18bb19ca10db11ea12fb13ga14hb15ia16jb17ka18lb19ma10nb11oa12pb13qa14rb15sa16tb17ua18vb19wa10xb11ya12zb13{a14|b15}a16~b17a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a16�b17�a18�b19�a10�b11�a12�b13�a14�b15�a1 b1a1b1a1b1a1b1a1b1	a1
b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1b1a1 b1!a1"b1#a1$b1%a1&b1'a1(b1)a1*b1+a1,b1-a1.b1/a1:b1;a1<b1=a1>b1?a1@b1Aa1Bb1Ca1Db1Ea1Fb1Ga1Hb1Ia1Jb1Ka1Lb1Ma1Nb1Oa1Pb1Qa1Rb1Sa1Tb1Ua1Vb1Wa1Xb1Ya1Zb1[a1\b1]a1^b1_a1`b1aa1bb1ca1db1ea1fb1ga1hb1ia1jb1ka1lb1ma1nb1oa1pb1qa1rb1sa1tb1ua1vb1wa1xb1ya1zb1{a1|b1}a1~b1a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a1�b1�a babababab	a
bababababababababababa b!a"b#a$b%a&b'a(b)a*b+a,b-a.b/a:b;a<b=a>b?a@bAaBbCaDbEaFbGaHbIaJbKaLbMaNbOaPbQaRbSaTbUaVbWaXbYaZb[a\b]a^b_a`baabbcadbeafbgahbiajbkalbmanboapbqarbsatbuavbwaxbyazb{a|b}a~ba�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�a�b�                                                                                                                                                                                                                                                      