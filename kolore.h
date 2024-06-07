const char *colorname[] = {

    /* Base colors */
    [0] = "#00171a", // Black
    [1] = "#f85552", // red
    [2] = "#36a77c", // green
    [3] = "#dfa000", // yellow
    [4] = "#3a94c5", // blue
    [5] = "#d33682", // magenta
    [6] = "#33b5aa", // cyan
    [7] = "#d3cccc", // white

    /* Colores brillantes */

    [8] = "#d3cccc",
    [9] = "#f85552",
    [10] = "#36a77c",
    [11] = "#dfa000",
    [12] = "#3a94c5",
    [13] = "#d33682",
    [14] = "#33b5aa",
    [15] = "#f2f2f2",

    [256] = "#00171a",
    [257] = "#f2f2f2",
    [258] = "#f2f2f2",
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
