/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#1c2b30", /* black   */
    [1] = "#915a5a", /* red     */
    [2] = "#5c7a53", /* green   */
    [3] = "#a18a5d", /* yellow  */
    [4] = "#607f94", /* blue    */
    [5] = "#997459", /* magenta */
    [6] = "#5f8787", /* cyan    */
    [7] = "#f4ebd7", /* white   */

    /* 8 bright colors */
    [8] = "#1c2b30",  /* black   */
    [9] = "#915a5a",  /* red     */
    [10] = "#5c7a53", /* green   */
    [11] = "#a18a5d", /* yellow  */
    [12] = "#607f94", /* blue    */
    [13] = "#997459", /* magenta */
    [14] = "#5f8787", /* cyan    */
    [15] = "#f4ebd7", /* white   */

    /* special colors */
    [256] = "#09171a",
    [257] = "#f8e7c2", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 258;
