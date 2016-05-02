#include <osgParticle/FluidFrictionOperator>
//includes


#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osgParticle/FluidFrictionOperator_pmoc.hpp>
#include <customCode/osgParticle/FluidFrictionOperator_pmoc.hpp>
#include <customCode/osgParticle/Operator_pmoc.hpp>
#include <customCode/osg/Vec3f_pmoc.hpp>
#include <customCode/osgParticle/Particle_pmoc.hpp>
#include <customCode/osgParticle/Program_pmoc.hpp>
using namespace pmoc;
 float  osgParticle::QReflect_FluidFrictionOperator:: getFluidDensity()const{
//params checking
return _model->getFluidDensity();

}
 float  osgParticle::QReflect_FluidFrictionOperator:: getFluidViscosity()const{
//params checking
return _model->getFluidViscosity();

}
 float  osgParticle::QReflect_FluidFrictionOperator:: getOverrideRadius()const{
//params checking
return _model->getOverrideRadius();

}
 void osgParticle::QReflect_FluidFrictionOperator::beginOperate(osgParticle::QReflect_Program  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_FluidFrictionOperator::beginOperate : parameter n.0 is NULL\n"<<endl;return;}
 _model->beginOperate(p0->_model);

}
 void osgParticle::QReflect_FluidFrictionOperator::operate(osgParticle::QReflect_Particle  *p0 , double  p1){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_FluidFrictionOperator::operate : parameter n.0 is NULL\n"<<endl;return;}
 _model->operate(p0->_model ,p1);

}
 void osgParticle::QReflect_FluidFrictionOperator::setFluidDensity( float  p0){
//params checking
 _model->setFluidDensity(p0);
emit FluidDensityChanged();

}
 void osgParticle::QReflect_FluidFrictionOperator::setFluidToAir(){
//params checking
 _model->setFluidToAir();

}
 void osgParticle::QReflect_FluidFrictionOperator::setFluidToWater(){
//params checking
 _model->setFluidToWater();

}
 void osgParticle::QReflect_FluidFrictionOperator::setFluidViscosity( float  p0){
//params checking
 _model->setFluidViscosity(p0);
emit FluidViscosityChanged();

}
 void osgParticle::QReflect_FluidFrictionOperator::setOverrideRadius( float  p0){
//params checking
 _model->setOverrideRadius(p0);
emit OverrideRadiusChanged();

}
 void osgParticle::QReflect_FluidFrictionOperator::setWind(osg::QReflect_Vec3f  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osgParticle::QReflect_FluidFrictionOperator::setWind : parameter n.0 is NULL\n"<<endl;return;}
 _model->setWind(*p0->_model);

}

///DefaultConstructor////////////////
osgParticle::QReflect_FluidFrictionOperator::QReflect_FluidFrictionOperator(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osgParticle::FluidFrictionOperator*>(i->ptr);
    _parentboxes[0]=0;
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osgParticle::QReflect_FluidFrictionOperator::~QReflect_FluidFrictionOperator( ){
 	if(_parentboxes[0])
delete _parentboxes[0];
}
///update this according _model new state
void osgParticle::QReflect_FluidFrictionOperator::updateModel(){
	if(_parentboxes[0])
_parentboxes[0]->updateModel();
}
Instance osgParticle::MetaQReflect_FluidFrictionOperator::createInstance( ){
osg::ref_ptr<osgParticle::FluidFrictionOperator> osgParticle_FluidFrictionOperator_ptr	;
osgParticle_FluidFrictionOperator_ptr = new osgParticle::FluidFrictionOperator ()	;
Instance o(PMOCGETMETACLASS("osgParticle::FluidFrictionOperator"),(void*)osgParticle_FluidFrictionOperator_ptr.get()		,true);
_managedinstances.insert(osgParticle_FluidFrictionOperator_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osgParticle::MetaQReflect_FluidFrictionOperator::MetaQReflect_FluidFrictionOperator():MetaQQuickClass( "osgParticle::FluidFrictionOperator"){
_typeid=&typeid(osgParticle::FluidFrictionOperator );
           qRegisterMetaType<osgParticle::QMLFluidFrictionOperator>();
           qRegisterMetaType<osgParticle::QMLFluidFrictionOperator*>("pmoc.osgParticle.QMLFluidFrictionOperator");
qmlRegisterType<osgParticle::QReflect_FluidFrictionOperator>("pmoc.osgParticle",1,0,"QReflect_FluidFrictionOperator");
           qmlRegisterType<osgParticle::QMLFluidFrictionOperator>("pmoc.osgParticle",1,0,"QMLFluidFrictionOperator");
};
const std::string osgParticle::MetaQReflect_FluidFrictionOperator::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osgParticle::MetaQReflect_FluidFrictionOperator::PREcompoQML()const{return std::string("");}
const std::string osgParticle::MetaQReflect_FluidFrictionOperator::POSTcompoQML()const{return std::string("");}
QQModel* osgParticle::MetaQReflect_FluidFrictionOperator::createQQModel(const Instance*i){ //return new MetaQReflect_FluidFrictionOperator_QModel(i);}
QMLFluidFrictionOperator *ret =new QMLFluidFrictionOperator(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
{
osgParticle::Operator *mother =dynamic_cast<osgParticle::Operator*>(ret->_model);
  Instance inst;inst.model=PMOCGETMETACLASS("osgParticle::Operator");
  inst.ptr=reinterpret_cast<void*>(mother);
if(!inst.isValid()){std::cerr<<"osgParticle::Operator model for osgParticle::FluidFrictionOperatoris invalid"<<std::endl;return ret;}
pmoc::MetaQQuickClass *cl=PMOCGETMETACLASS("osgParticle::Operator");
if(!cl){std::cerr<<"osgParticle::Operator QQModel for osgParticle::FluidFrictionOperatoris not found"<<std::endl;return ret;}
ret->_parentboxes[0]=cl->createQQModel(&inst);
    if(gencontextmenu)
contextMenu+=cl->contextMenu;
}
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_FluidFrictionOperator_pmoc.cpp"
#endif




