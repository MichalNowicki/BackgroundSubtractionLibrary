#pragma once

#include <cv.h>
#include <highgui.h>

#include "../IBGS.h"

class MyBGS : public IBGS
{
private:
  cv::Mat img_previous;
  
public:
  MyBGS();
  ~MyBGS();

  void process(const cv::Mat &img_input, cv::Mat &img_output, cv::Mat &img_bgmodel);

private:
  void saveConfig(){}
  void loadConfig(){}
};