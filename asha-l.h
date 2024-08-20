/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#9ba9aa", /* black   */
  [1] = "#91615e", /* red     */
  [2] = "#58784e", /* green   */
  [3] = "#a18a5d", /* yellow  */
  [4] = "#607f94", /* blue    */
  [5] = "#997459", /* magenta */
  [6] = "#5f8787", /* cyan    */
  [7] = "#373b3f", /* white   */

  /* 8 bright colors */
  [8]  = "#9ba9aa", /* black   */
  [9]  = "#91615e", /* red     */
  [10] = "#58784e", /* green   */
  [11] = "#a18a5d", /* yellow  */
  [12] = "#607f94", /* blue    */
  [13] = "#997459", /* magenta */
  [14] = "#5f8787", /* cyan    */
  [15] = "#373b3f", /* white   */

  /* special colors */
  /* [256] = "#051215",  */
  /* [256] = "#07191d",  */
  [256] = "#f1f1f1", 
  [257] = "#081d21", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
unsigned int defaultrcs = 258;
