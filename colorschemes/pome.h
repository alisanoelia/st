/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
    /* 8 normal colors */
    "#191b1c", "#ea6962", "#a9b665", "#d8a657", "#7daea3", "#e78a4e", "#89b482",
    "#dfd6b7",

    /* 8 bright colors */
    "#2a3437", "#ea6962", "#a9b665", "#d8a657", "#7daea3", "#e78a4e", "#89b482",
    "#dfd6b7",

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#dfd6b7", /* default cursor */
    "#131b1e", /* default reverse cursor */
    "#dfd6b7", /* default foreground colour */
    "#131b1e", /* default background colour */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 256;
