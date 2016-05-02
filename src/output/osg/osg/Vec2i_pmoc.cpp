#include <osg/Vec2i>
//includes

#include <iostream>
#include <MetaQQuickLibraryRegistry.h>
#include <QtQml/QQmlEngine>
#include <osg/Vec2i_pmoc.hpp>
#include <customCode/osg/Vec2i_pmoc.hpp>
#include <customCode/osg/Vec2i_pmoc.hpp>
using namespace pmoc;
 bool  osg::QReflect_Vec2i:: operator!=(osg::QReflect_Vec2i  &p0)const{
//params checking
return _model->operator!=(*p0._model);

}
 bool  osg::QReflect_Vec2i:: operator<(osg::QReflect_Vec2i  &p0)const{
//params checking
return _model->operator<(*p0._model);

}
 bool  osg::QReflect_Vec2i:: operator==(osg::QReflect_Vec2i  &p0)const{
//params checking
return _model->operator==(*p0._model);

}
 int  osg::QReflect_Vec2i:: g()const{
//params checking
return _model->g();

}
 int  osg::QReflect_Vec2i:: operator[]( int  p0)const{
//params checking
return _model->operator[](p0);

}
 int  osg::QReflect_Vec2i:: r()const{
//params checking
return _model->r();

}
 int  osg::QReflect_Vec2i:: x()const{
//params checking
return _model->x();

}
 int  osg::QReflect_Vec2i:: y()const{
//params checking
return _model->y();

}
 int&  osg::QReflect_Vec2i:: g(){
//params checking
return _model->g();

}
 int&  osg::QReflect_Vec2i:: operator[]( int  p0){
//params checking
return _model->operator[](p0);

}
 int&  osg::QReflect_Vec2i:: r(){
//params checking
return _model->r();

}
 int&  osg::QReflect_Vec2i:: x(){
//params checking
return _model->x();

}
 int&  osg::QReflect_Vec2i:: y(){
//params checking
return _model->y();

}
 int*  osg::QReflect_Vec2i:: ptr(){
//params checking
return _model->ptr();

}
 void osg::QReflect_Vec2i::set( int  p0 , int  p1){
//params checking
 _model->set(p0 ,p1);

}
 void osg::QReflect_Vec2i::set(osg::QReflect_Vec2i  *p0){
//params checking
if(! p0) {std::cerr<<"PMOC: osg::QReflect_Vec2i::set : parameter n.0 is NULL\n"<<endl;return;}
 _model->set(*p0->_model);

}
const  int*  osg::QReflect_Vec2i:: ptr()const{
//params checking
return _model->ptr();

}

///DefaultConstructor////////////////
osg::QReflect_Vec2i::QReflect_Vec2i(const Instance *i,QObject* parent):QQModel(i,parent),_model(0){
 if(!_model)  _model =reinterpret_cast<osg::Vec2i*>(i->ptr);
       ///Initialize Qt Model Here/////////////////////////////////////////



}

///Destuctor////////////////
osg::QReflect_Vec2i::~QReflect_Vec2i( ){
 }
///update this according _model new state
void osg::QReflect_Vec2i::updateModel(){
}
Instance osg::MetaQReflect_Vec2i::createInstance( ){
osg::Vec2i* osg_Vec2i_ptr	;
osg_Vec2i_ptr= new osg::Vec2i()	;
Instance o(PMOCGETMETACLASS("osg::Vec2i"),(void*)osg_Vec2i_ptr	,true);
_managedinstances.insert(osg_Vec2i_ptr);
return(o);
   
}///////////////////////////////////////////META CLASS STRING////////////////////////////////////////////////////
osg::MetaQReflect_Vec2i::MetaQReflect_Vec2i():MetaQQuickClass( "osg::Vec2i"){
_typeid=&typeid(osg::Vec2i );
           qRegisterMetaType<osg::QMLVec2i>();
           qRegisterMetaType<osg::QMLVec2i*>("pmoc.osg.QMLVec2i");
qmlRegisterType<osg::QReflect_Vec2i>("pmoc.osg",1,0,"QReflect_Vec2i");
           qmlRegisterType<osg::QMLVec2i>("pmoc.osg",1,0,"QMLVec2i");
};
const std::string osg::MetaQReflect_Vec2i::Imports() const{
 return std::string("");
}
///if write the external qml in order not to use internal composition
///else these strings will be used to composite it  hierarchically
const std::string osg::MetaQReflect_Vec2i::PREcompoQML()const{return std::string("");}
const std::string osg::MetaQReflect_Vec2i::POSTcompoQML()const{return std::string("");}
QQModel* osg::MetaQReflect_Vec2i::createQQModel(const Instance*i){ //return new MetaQReflect_Vec2i_QModel(i);}
QMLVec2i *ret =new QMLVec2i(i);
                 bool gencontextmenu=false;
if(contextMenu.empty())gencontextmenu=true;
 if(gencontextmenu)
contextMenu+= pmoc::MetaQQuickClass::getPartialContextMenu(*ret);
return ret;}
#ifndef AUTOMOCCPP
#define AUTOMOCCPP 1
#include "moc_Vec2i_pmoc.cpp"
#endif




