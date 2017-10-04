#include <iostream>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/io/pcd_io.h>
#include <pcl/visualization/pcl_visualizer.h>
#include "xyzreader.h"

int main(int argc, char** argv)
{
  typedef pcl::PointXYZ pointT;
  pcl::PointCloud<pointT>::Ptr cloud(new pcl::PointCloud<pointT>);
  //Load xyz model
  std::string modelName(argv[1]);
  
  tp::xyzReader xyz_reader;
  if(xyz_reader.read(modelName, cloud)==-1)
  {
    std::cout<<">>> Load xyz model failed"<<std::endl;
    return -1;
  }
  std::cout<<">>> Load xyz model finished"<<std::endl;

  std::cout<<">>> point size= "<<cloud->points.size()<<std::endl;
  std::cout<<">>> cloud width= "<<cloud->width<<"   height= "<<cloud->height<<std::endl;

  //Write pcd to file
  pcl::io::savePCDFile(argv[2],*cloud);
  std::cout<<">>> Write pcd to file "<<argv[2]<<std::endl;

  pcl::visualization::PCLVisualizer viewer("stl2pcd viewer");
  viewer.addPointCloud<pcl::PointXYZ>(cloud);
  while(!viewer.wasStopped())
  {
    viewer.spinOnce();
  }
  
}
