/* Generated by re2c */
// overlapping trailing contexts of variable length:
// in principle, we need multiple tags here, but in this
// particular case all tags can be implemented using sinle
// variable (due to tag deduplication)


{
	YYCTYPE yych;
	if (YYLESSTHAN (3)) YYFILL(3);
	yych = YYPEEK ();
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
	{ d }
yy4:
	YYSKIP ();
	yych = YYPEEK ();
	YYBACKUPCTX ();
	switch (yych) {
	case 'b':	goto yy6;
	default:	goto yy5;
	}
yy5:
	YYRESTORECTX ();
	{ 1 }
yy6:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy8;
	case 'c':
		YYBACKUPCTX ();
		goto yy10;
	default:
		YYBACKUPCTX ();
		goto yy7;
	}
yy7:
	YYRESTORECTX ();
	{ 0 }
yy8:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy5;
	}
yy10:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy7;
	}
}

