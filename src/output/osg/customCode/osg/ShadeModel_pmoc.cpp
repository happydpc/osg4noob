#include <osg/ShadeModel>
//includes
#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osg/ShadeModel_pmoc.hpp>
using namespace pmoc;
osg::QMLShadeModel::QMLShadeModel(const pmoc::Instance *i,QObject* parent):QReflect_ShadeModel(i,parent){
//custom initializations
}
QQuickItem* osg::QMLShadeModel::connect2View(QQuickItem*i){
	this->_view=QReflect_ShadeModel::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osg::QMLShadeModel::updateModel(){
	  QReflect_ShadeModel::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_ShadeModel_pmoc.cpp"
#endif


