const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#3b4a4d", /* black   */
    [1] = "#c27370", /* red     */
    [2] = "#89B865", /* green   */
    [3] = "#BFAF63", /* yellow  */
    [4] = "#6391BF", /* blue    */
    [5] = "#C29D70", /* magenta */
    [6] = "#65B3C3", /* cyan    */
    [7] = "#f6f6f6", /* white   */

    /* 8 normal colors */
    [8] = "#3b4a4d",  /* black   */
    [9] = "#c27370",  /* red     */
    [10] = "#89B865", /* green   */
    [11] = "#bfaf63", /* yellow  */
    [12] = "#6391bf", /* blue    */
    [13] = "#c29d70", /* magenta */
    [14] = "#65b3c3", /* cyan    */
    [15] = "#f6f6f6", /* white   */

    /* special colors */
    /* [256] = "#051215", */
    [256] = "#030B0C",
    [257] = "#f6f6f6", /* foreground */
    [258] = "#f6f6f6", /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
