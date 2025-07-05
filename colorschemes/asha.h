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

    [255] = 0,

    /* special colors */
    "#00ff00",
    "#101516",
    "#232a2d",
    "#f8e7c2",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 256;
