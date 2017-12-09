#ifndef Fl_OpenCV_H
#define Fl_OpenCV_H

#include <FL/Fl_Widget.H>
#include <FL/fl_ask.H>
#include <cv.h>
#include <highgui.h>
#include <cvaux.h>
// #include <cvcore.h>

class FL_EXPORT Fl_OpenCV : public Fl_Widget
{
  int       _x,_y,_w,_h;

protected:
  int iscolor;
  void draw(int,int,int,int);
  void draw(){
      draw(Fl_Widget::x(),Fl_Widget::y(),w(),h());
  }

  void x(int X){ _x=X;};
  void y(int Y){ _y=Y;};
  void w(int W){ _w=W;};
  void h(int H){ _h=H;};

public:
  IplImage *image;
  int x(){return _x;};
  int y(){return _y;};
  int w(){return _w;};
  int h(){return _h;};
  bool Load(char*filename,int iscolor=-1);
  bool Save(char*filename);
  void SetImage(IplImage *nimage);

  Fl_OpenCV(int X, int Y,int W,int H,char *file_name);
  Fl_OpenCV(int X, int Y);
  ~Fl_OpenCV();

};



#endif


