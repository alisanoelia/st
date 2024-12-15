// Creando pome colorscheme
static const char *colorname[] = {

    [0] = "#191b1c", /* black   */
    [1] = "#ea6962", /* red     */
    [2] = "#a9b665", /* green   */
    [3] = "#d8a657", /* yellow  */
    [4] = "#7daea3", /* blue    */
    [5] = "#e78a4e", /* magenta */
    [6] = "#89b482", /* cyan    */
    [7] = "#d7c5a7", /* white   */

    [8] = "#2a3437",  /* black   */
    [9] = "#ea6962", /* red     */
    [10] = "#a9b665", /* green   */
    [11] = "#d8a657", /* yellow  */
    [12] = "#7daea3", /* blue    */
    [13] = "#e78a4e", /* magenta */
    [14] = "#89b482", /* cyan    */
    [15] = "#d7c5a7", /* white   */

    [256] = "#141617",
    [257] = "#d7c5a7",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 258;
