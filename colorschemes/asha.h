/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#232a2d", /* black   */
    [1] = "#915a5a", /* red     */
    [2] = "#5c7a53", /* green   */
    [3] = "#a18a5d", /* yellow  */
    [4] = "#607f94", /* blue    */
    [5] = "#997459", /* magenta */
    [6] = "#5f8787", /* cyan    */
    [7] = "#b3b9b8", /* white   */

    /* 8 bright colors */
    [8] = "#2a3437",  /* black   */
    [9] = "#915a5a",  /* red     */
    [10] = "#5c7a53", /* green   */
    [11] = "#a18a5d", /* yellow  */
    [12] = "#607f94", /* blue    */
    [13] = "#997459", /* magenta */
    [14] = "#5f8787", /* cyan    */
    [15] = "#bdc3c2", /* white   */

    /* special colors */
    /* [256] = "#090F11", */
    [256] = "#101516",
    /* [257] = "#f8e7c2",  */
    [257] = "#c5c8c6",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 258;
