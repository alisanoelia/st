const char *colorname[] = {

    /* Base colors */
    [0] = "#0d1617", // Black
    [1] = "#f85552", // red
    [2] = "#1f6f4f", // green
    [3] = "#dfa000", // yellow
    [4] = "#3a94c5", // blue
    [5] = "#b71b8f", // magenta
    [6] = "#35a77c", // cyan
    [7] = "#d3cccc", // white

    /* Colores brillantes */

    [8] = "#d3cccc",
    [9] = "#f85552",
    [10] = "#1f6f4f",
    [11] = "#dfa000",
    [12] = "#3a94c5",
    [13] = "#b71b8f",
    [14] = "#1fbfbf",
    [15] = "#f1f1f1",

    [256] = "#0d1617",
    [257] = "#d3cccc",
    [258] = "#d3cccc",
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
