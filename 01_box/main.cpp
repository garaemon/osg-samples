#include <osg/Geode>
#include <osg/Material>
#include <osg/ShapeDrawable>
#include <osg/Texture2D>
#include <osgUtil/ShaderGen>
#include <osgViewer/Viewer>

int main(int argc, char **argv) {
  osgViewer::Viewer viewer;
  osg::Geode *geode = new osg::Geode();
  osg::TessellationHints *hints = new osg::TessellationHints;
  hints->setDetailRatio(0.5f);
  geode->addDrawable(new osg::ShapeDrawable(
      new osg::Box(osg::Vec3(2.0f, 0.0f, 0.0f), 2 * 0.5), hints));
  viewer.setSceneData(geode);

  return viewer.run();
}
