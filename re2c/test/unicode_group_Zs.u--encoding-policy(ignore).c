/* Generated by re2c */
#line 1 "unicode_group_Zs.u--encoding-policy(ignore).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Zs:
	
#line 13 "unicode_group_Zs.u--encoding-policy(ignore).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x0000180E) {
		if (yych <= 0x000000A0) {
			if (yych == ' ') goto yy4;
			if (yych >= 0x000000A0) goto yy4;
		} else {
			if (yych == 0x00001680) goto yy4;
			if (yych >= 0x0000180E) goto yy4;
		}
	} else {
		if (yych <= 0x0000202F) {
			if (yych <= 0x00001FFF) goto yy2;
			if (yych <= 0x0000200A) goto yy4;
			if (yych >= 0x0000202F) goto yy4;
		} else {
			if (yych <= 0x0000205F) {
				if (yych >= 0x0000205F) goto yy4;
			} else {
				if (yych == 0x00003000) goto yy4;
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "unicode_group_Zs.u--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 42 "unicode_group_Zs.u--encoding-policy(ignore).c"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Zs.u--encoding-policy(ignore).re"
	{ goto Zs; }
#line 47 "unicode_group_Zs.u--encoding-policy(ignore).c"
}
#line 14 "unicode_group_Zs.u--encoding-policy(ignore).re"

}
static const unsigned int chars_Zs [] = {0x20,0x20,  0xa0,0xa0,  0x1680,0x1680,  0x180e,0x180e,  0x2000,0x200a,  0x202f,0x202f,  0x205f,0x205f,  0x3000,0x3000,  0x0,0x0};
static unsigned int encode_utf32 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			*s++ = j;
	return s - s_start;
}

int main ()
{
	YYCTYPE * buffer_Zs = new YYCTYPE [19];
	unsigned int buffer_len = encode_utf32 (chars_Zs, sizeof (chars_Zs) / sizeof (unsigned int), buffer_Zs);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Zs), reinterpret_cast<const YYCTYPE *> (buffer_Zs + buffer_len)))
		printf("test 'Zs' failed\n");
	delete [] buffer_Zs;
	return 0;
}
