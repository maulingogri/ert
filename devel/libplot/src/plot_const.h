#ifndef __PLOT_CONST_H__
#define __PLOT_CONST_H__

#ifdef __cplusplus 
extern "C" {
#endif


/**
 * @brief: Plot style for one single graph/dataset.
 * 
 * When adding a new dataset to your plot item you can define what plot style
 * you want for that one graph.
 */
typedef enum plot_style_enum {
    BLANK = 0,
    LINE  = 1,
    POINT = 2
} plot_style_type;


/**
 * @brief: Plot color for one single graph/dataset.
 * 
 * When adding a new dataset to your plot item you can define what plot color
 * you want for that one graph. This color is also used to define color on labels
 * and titles.
 */
typedef enum plot_color_enum {
    WHITE      	= 0,
    RED        	= 1,
    YELLOW     	= 2,
    GREEN      	= 3,
    AQUAMARINE 	= 4,
    PINK    	= 5,
    WHEAT  	= 6,
    GRAY   	= 7,
    BROWN  	= 8,
    BLUE   	= 9,
    VIOLET 	= 10,
    CYAN   	= 11,
    TURQUOISE   = 12,
    MAGENTA 	= 13,
    SALMON  	= 14,
    BLACK   	= 15
} plot_color_type;



#if WITH_TRUETYPE
#define LABEL_FONTSIZE 0.6
#define SYMBOL_SIZE 0.7
#define LINEWIDTH_SIZE 2	/* integer */
#else
#define LABEL_FONTSIZE 0.5
#define SYMBOL_SIZE 0.8
#define LINEWIDTH_SIZE 0.9
#endif

#define SYMBOL 17
#define DEFAULT_WIDTH 1024
#define DEFAULT_HEIGHT 768



#ifdef __cplusplus 
}
#endif
#endif