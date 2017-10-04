#ifndef XYZREADER_H
#define XYZREADER_H

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <iostream>
#include <fstream>
#include <boost/lexical_cast.hpp>
#include <boost/algorithm/string.hpp>
#include <exception>

namespace tp
{
  typedef pcl::PointXYZ pointT;
  class xyzReader
  {
  public:
    
    //template<typename pointT> static int
    int read(std::string fileName,pcl::PointCloud<pointT>::Ptr & cloud);
  };
}


#endif // XYZREADER_H
