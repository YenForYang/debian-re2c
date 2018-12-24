/* Generated by re2c */
#line 1 "unicode_group_Zs.8--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Zs:
	
#line 13 "unicode_group_Zs.8--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
	case ' ':	goto yy4;
	case 0xC2:	goto yy6;
	case 0xE1:	goto yy7;
	case 0xE2:	goto yy8;
	case 0xE3:	goto yy9;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "unicode_group_Zs.8--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 30 "unicode_group_Zs.8--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Zs.8--encoding-policy(substitute).re"
	{ goto Zs; }
#line 35 "unicode_group_Zs.8--encoding-policy(substitute).c"
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0xA0:	goto yy4;
	default:	goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x9A:	goto yy10;
	case 0xA0:	goto yy12;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy13;
	case 0x81:	goto yy14;
	default:	goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0x80:	goto yy10;
	default:	goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy4;
	default:	goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	goto yy3;
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x8E:	goto yy4;
	default:	goto yy11;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:
	case 0x81:
	case 0x82:
	case 0x83:
	case 0x84:
	case 0x85:
	case 0x86:
	case 0x87:
	case 0x88:
	case 0x89:
	case 0x8A:
	case 0xAF:	goto yy4;
	default:	goto yy11;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x9F:	goto yy4;
	default:	goto yy11;
	}
}
#line 14 "unicode_group_Zs.8--encoding-policy(substitute).re"

}
static const unsigned int chars_Zs [] = {0x20,0x20,  0xa0,0xa0,  0x1680,0x1680,  0x180e,0x180e,  0x2000,0x200a,  0x202f,0x202f,  0x205f,0x205f,  0x3000,0x3000,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned char * s)
{
	unsigned char * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	YYCTYPE * buffer_Zs = new YYCTYPE [76];
	unsigned int buffer_len = encode_utf8 (chars_Zs, sizeof (chars_Zs) / sizeof (unsigned int), buffer_Zs);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Zs), reinterpret_cast<const YYCTYPE *> (buffer_Zs + buffer_len)))
		printf("test 'Zs' failed\n");
	delete [] buffer_Zs;
	return 0;
}
