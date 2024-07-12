const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#3b3b4d", /* black   */
    [1] = "#9C514F", /* red     */
    [2] = "#508F4D", /* green   */
    [3] = "#958C46", /* yellow  */
    [4] = "#54879C", /* blue    */
    [5] = "#855b3a", /* magenta */
    [6] = "#469195", /* cyan    */
    [7] = "#051215", /* white   */

    /* 8 normal colors */
    [8] = "#3b3b4d",  /* black   */
    [9] = "#9c514f",  /* red     */
    [10] = "#508f4d", /* green   */
    [11] = "#958c46", /* yellow  */
    [12] = "#54879c", /* blue    */
    [13] = "#855b3a", /* magenta */
    [14] = "#469195", /* cyan    */
    [15] = "#051215", /* white   */

    /* special colors */
    /* [256] = "#141b1e",  */
    /* [256] = "#081012",  */
    /* [256] = "#071013",  */
    /* [256] = "#051215", */
    [256] = "#f6f6f6",
    [257] = "#051215", /* foreground */
    [258] = "#051215", /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
