const char *colorname[] = {

    /* 8 normal colors */
    [0] = "#1e2326", /* black   */
    [1] = "#e67e80", /* red     */
    [2] = "#a7c080", /* blue    */
    [3] = "#dbbc7f", /* yellow  */
    [4] = "#7fbbb3", /* blue    */
    [5] = "#d699b6", /* magenta */
    [6] = "#83c092", /* cyan    */
    [7] = "#d3c6aa", /* white   */

    [8] = "#d3c6aa", /* black   */
    [9] = "#e67e80", /* red     */
    [10] = "#a7c080", /* blue    */
    [11] = "#dbbc7f", /* yellow  */
    [12] = "#7fbbb3", /* blue    */
    [13] = "#d699b6", /* magenta */
    [14] = "#83c092", /* cyan    */
    [15] = "#d3c6aa", /* white   */

    /* special colors */
    [256] = "#1e2326", /* background */
    [257] = "#d3c6aa", /* foreground */
    [258] = "#d3c6aa", /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
