const char *colorname[] = {

    /* Base colors */
    [0] = "#00171a", // Black
    [1] = "#C54844", // red
    [2] = "#2A8958", // green
    [3] = "#dfa000", // yellow
    [4] = "#4492C5", // blue
    [5] = "#A2702F", // magenta
    [6] = "#33b5aa", // cyan
    [7] = "#C3BFBB", // white

    /* Colores brillantes */

    [8] = "#C3BFBB",
    [9] = "#C54844",
    [10] = "#2A8958",
    [11] = "#dfa000",
    [12] = "#4492C5",
    [13] = "#A2702F",
    [14] = "#33b5aa",
    [15] = "#C3BFBB",

    /* [256] = "#020d0e", */
    [256] = "#02090e",
    [257] = "#C3BFBB",
    [258] = "#C3BFBB",
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
