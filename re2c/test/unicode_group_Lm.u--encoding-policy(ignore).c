/* Generated by re2c */
#line 1 "unicode_group_Lm.u--encoding-policy(ignore).re"
#include <stdio.h>

#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Lm:
	
#line 13 "unicode_group_Lm.u--encoding-policy(ignore).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x00001D77) {
		if (yych <= 0x000007FA) {
			if (yych <= 0x00000374) {
				if (yych <= 0x000002E4) {
					if (yych <= 0x000002C5) {
						if (yych <= 0x000002AF) goto yy2;
						if (yych <= 0x000002C1) goto yy4;
					} else {
						if (yych <= 0x000002D1) goto yy4;
						if (yych >= 0x000002E0) goto yy4;
					}
				} else {
					if (yych <= 0x000002ED) {
						if (yych == 0x000002EC) goto yy4;
					} else {
						if (yych <= 0x000002EE) goto yy4;
						if (yych >= 0x00000374) goto yy4;
					}
				}
			} else {
				if (yych <= 0x00000640) {
					if (yych <= 0x00000558) {
						if (yych == 0x0000037A) goto yy4;
					} else {
						if (yych <= 0x00000559) goto yy4;
						if (yych >= 0x00000640) goto yy4;
					}
				} else {
					if (yych <= 0x000007F3) {
						if (yych <= 0x000006E4) goto yy2;
						if (yych <= 0x000006E6) goto yy4;
					} else {
						if (yych <= 0x000007F5) goto yy4;
						if (yych >= 0x000007FA) goto yy4;
					}
				}
			}
		} else {
			if (yych <= 0x00000EC6) {
				if (yych <= 0x00000828) {
					if (yych <= 0x00000823) {
						if (yych == 0x0000081A) goto yy4;
					} else {
						if (yych <= 0x00000824) goto yy4;
						if (yych >= 0x00000828) goto yy4;
					}
				} else {
					if (yych <= 0x00000E45) {
						if (yych == 0x00000971) goto yy4;
					} else {
						if (yych <= 0x00000E46) goto yy4;
						if (yych >= 0x00000EC6) goto yy4;
					}
				}
			} else {
				if (yych <= 0x00001843) {
					if (yych <= 0x000017D6) {
						if (yych == 0x000010FC) goto yy4;
					} else {
						if (yych <= 0x000017D7) goto yy4;
						if (yych >= 0x00001843) goto yy4;
					}
				} else {
					if (yych <= 0x00001C77) {
						if (yych == 0x00001AA7) goto yy4;
					} else {
						if (yych <= 0x00001C7D) goto yy4;
						if (yych <= 0x00001D2B) goto yy2;
						if (yych <= 0x00001D61) goto yy4;
					}
				}
			}
		}
	} else {
		if (yych <= 0x000030FE) {
			if (yych <= 0x00002D6E) {
				if (yych <= 0x0000207E) {
					if (yych <= 0x00001DBF) {
						if (yych <= 0x00001D78) goto yy4;
						if (yych >= 0x00001D9B) goto yy4;
					} else {
						if (yych == 0x00002071) goto yy4;
					}
				} else {
					if (yych <= 0x0000209C) {
						if (yych <= 0x0000207F) goto yy4;
						if (yych >= 0x00002090) goto yy4;
					} else {
						if (yych == 0x00002C7D) goto yy4;
					}
				}
			} else {
				if (yych <= 0x00003030) {
					if (yych <= 0x00002E2F) {
						if (yych <= 0x00002D6F) goto yy4;
						if (yych >= 0x00002E2F) goto yy4;
					} else {
						if (yych == 0x00003005) goto yy4;
					}
				} else {
					if (yych <= 0x0000303B) {
						if (yych <= 0x00003035) goto yy4;
						if (yych >= 0x0000303B) goto yy4;
					} else {
						if (yych <= 0x0000309C) goto yy2;
						if (yych <= 0x0000309E) goto yy4;
						if (yych >= 0x000030FC) goto yy4;
					}
				}
			}
		} else {
			if (yych <= 0x0000A770) {
				if (yych <= 0x0000A60C) {
					if (yych <= 0x0000A4F7) {
						if (yych == 0x0000A015) goto yy4;
					} else {
						if (yych <= 0x0000A4FD) goto yy4;
						if (yych >= 0x0000A60C) goto yy4;
					}
				} else {
					if (yych <= 0x0000A716) {
						if (yych == 0x0000A67F) goto yy4;
					} else {
						if (yych <= 0x0000A71F) goto yy4;
						if (yych >= 0x0000A770) goto yy4;
					}
				}
			} else {
				if (yych <= 0x0000AA70) {
					if (yych <= 0x0000A9CE) {
						if (yych == 0x0000A788) goto yy4;
					} else {
						if (yych <= 0x0000A9CF) goto yy4;
						if (yych >= 0x0000AA70) goto yy4;
					}
				} else {
					if (yych <= 0x0000FF6F) {
						if (yych == 0x0000AADD) goto yy4;
					} else {
						if (yych <= 0x0000FF70) goto yy4;
						if (yych <= 0x0000FF9D) goto yy2;
						if (yych <= 0x0000FF9F) goto yy4;
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 13 "unicode_group_Lm.u--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 168 "unicode_group_Lm.u--encoding-policy(ignore).c"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Lm.u--encoding-policy(ignore).re"
	{ goto Lm; }
#line 173 "unicode_group_Lm.u--encoding-policy(ignore).c"
}
#line 14 "unicode_group_Lm.u--encoding-policy(ignore).re"

}
static const unsigned int chars_Lm [] = {0x2b0,0x2c1,  0x2c6,0x2d1,  0x2e0,0x2e4,  0x2ec,0x2ec,  0x2ee,0x2ee,  0x374,0x374,  0x37a,0x37a,  0x559,0x559,  0x640,0x640,  0x6e5,0x6e6,  0x7f4,0x7f5,  0x7fa,0x7fa,  0x81a,0x81a,  0x824,0x824,  0x828,0x828,  0x971,0x971,  0xe46,0xe46,  0xec6,0xec6,  0x10fc,0x10fc,  0x17d7,0x17d7,  0x1843,0x1843,  0x1aa7,0x1aa7,  0x1c78,0x1c7d,  0x1d2c,0x1d61,  0x1d78,0x1d78,  0x1d9b,0x1dbf,  0x2071,0x2071,  0x207f,0x207f,  0x2090,0x209c,  0x2c7d,0x2c7d,  0x2d6f,0x2d6f,  0x2e2f,0x2e2f,  0x3005,0x3005,  0x3031,0x3035,  0x303b,0x303b,  0x309d,0x309e,  0x30fc,0x30fe,  0xa015,0xa015,  0xa4f8,0xa4fd,  0xa60c,0xa60c,  0xa67f,0xa67f,  0xa717,0xa71f,  0xa770,0xa770,  0xa788,0xa788,  0xa9cf,0xa9cf,  0xaa70,0xaa70,  0xaadd,0xaadd,  0xff70,0xff70,  0xff9e,0xff9f,  0x0,0x0};
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
	YYCTYPE * buffer_Lm = new YYCTYPE [211];
	unsigned int buffer_len = encode_utf32 (chars_Lm, sizeof (chars_Lm) / sizeof (unsigned int), buffer_Lm);
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Lm), reinterpret_cast<const YYCTYPE *> (buffer_Lm + buffer_len)))
		printf("test 'Lm' failed\n");
	delete [] buffer_Lm;
	return 0;
}
