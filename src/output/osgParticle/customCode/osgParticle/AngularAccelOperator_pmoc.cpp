#include <osgParticle/AngularAccelOperator>
//includes

#include <MetaQQuickLibraryRegistry.h>
#include <customCode/osgParticle/AngularAccelOperator_pmoc.hpp>
using namespace pmoc;
osgParticle::QMLAngularAccelOperator::QMLAngularAccelOperator(const pmoc::Instance *i,QObject* parent):QReflect_AngularAccelOperator(i,parent){
//custom initializations
}
QQuickItem* osgParticle::QMLAngularAccelOperator::connect2View(QQuickItem*i){
	this->_view=QReflect_AngularAccelOperator::connect2View(i);
///connect this's signals/slot to its qml component////////////////////////////////////////////////////////////////
	///CustomiZE here



return this->_view;
}
void  osgParticle::QMLAngularAccelOperator::updateModel(){
	  QReflect_AngularAccelOperator::updateModel();
///update this according to state of _model when it has been changed via pmoc/////////////////////////////////////////////
	///CustomiZE here


}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_AngularAccelOperator_pmoc.cpp"
#endif




