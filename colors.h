/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    "#232a2d",
    "#e57474",
    "#8ccf7e",
    "#e6c76b",
    "#67b0e8",
    "#c47fd5",
    "#6cbfbf",
    "#b3b9b8",

    /* 8 bright colors */
    "#2d3437",
    "#ef7e7e",
    "#96d988",
    "#f4d67a",
    "#71baf2",
    "#ce89df",
    "#67cbe7",
    "#bdc3c2",

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#dadada", /* default foreground colour */
    "#141b1e", /* default background colour */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
