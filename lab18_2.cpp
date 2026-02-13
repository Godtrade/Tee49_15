#include <iostream>
#include <algorithm> 
using namespace std;

struct Rect{
	double x,y,w,h;
};


double overlap(Rect* R1, Rect* R2){

    double left_x = max(R1->x, R2->x); 
    double right_x = min(R1->x + R1->w, R2->x + R2->w); 

    double top_y = min(R1->y, R2->y); 
    double bottom_y = max(R1->y - R1->h, R2->y - R2->h); 

    double overlap_width = right_x - left_x;
    double overlap_height = top_y - bottom_y;
    

    if(overlap_width > 0 && overlap_height > 0){
        return overlap_width * overlap_height;
    } else {
        return 0; 
    }
}