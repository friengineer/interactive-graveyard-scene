#include "Image.h"
#include <vector>
#include <iostream>
#include <cstdlib>

// constructor
Image::Image(const std::string& file_name)
{
  p_qimage = new QImage(QString(file_name.c_str()));

  _width = p_qimage->width();
  _height = p_qimage->height();

  _image = new GLubyte[_width*_height*3];

  unsigned int nm = _width*_height;

  // iterate over image's pixels and store them as bytes
  for (unsigned int i = 0; i < nm; i++){
    std::div_t part = std::div((int)i, (int)_width);
    QRgb colval = p_qimage->pixel(_width-part.rem-1, part.quot);
    _image[3*nm-3*i-3] = qRed(colval);
    _image[3*nm-3*i-2] = qGreen(colval);
    _image[3*nm-3*i-1] = qBlue(colval);
  }
}

// returns image bytes
const GLubyte* Image::imageField() const
{
  return _image;
}

// destructor
Image::~Image()
{
  delete _image;
  delete p_qimage;
}
