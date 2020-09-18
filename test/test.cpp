#include <pcl/visualization/cloud_viewer.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <iostream>
#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/visualization/cloud_viewer.h>
 #include <pcl/visualization/pcl_visualizer.h>
 #include <pcl/filters/voxel_grid.h>
 #include <pcl/filters/crop_box.h>
 #include <pcl/filters/extract_indices.h>
 #include <pcl/segmentation/sac_segmentation.h>
 #include <pcl/segmentation/extract_clusters.h>
 #include <pcl/kdtree/kdtree.h>
 #include <pcl/common/transforms.h>
 #include <pcl/common/common.h>
 #include <boost/thread/thread.hpp>
 #include <vector>
 #include <unordered_set>
 #include <string>
 #include <chrono>


int main()
 {
/*
   pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
   pcl::io::loadPCDFile ("/home/sunzengpeng/Downloads/test/test.pcd", *cloud);
   pcl::visualization::CloudViewer viewer ("Simple Cloud Viewer");
   viewer.showCloud (cloud);
   while (!viewer.wasStopped ())
   {
   }
   return 0;
*/
	pcl::PointCloud<pcl::PointXYZ>::Ptr cloud1(new pcl::PointCloud<pcl::PointXYZ>);	
	pcl::io::loadPCDFile("/apollo/test/test.pcd", *cloud1);
	boost::shared_ptr<pcl::visualization::PCLVisualizer> viewer(new pcl::visualization::PCLVisualizer("3D Viewer"));
	int v1(0);
	int v2(0);
	viewer->createViewPort(0.0, 0.0, 0.5, 1.0, v1);
	viewer->createViewPort(0.5, 0.0, 1.0, 1.0, v2);
	viewer->addPointCloud(cloud1, "name", v1);
	viewer->addPointCloud(cloud1, "name2", v2);
	viewer->spin();
 }

