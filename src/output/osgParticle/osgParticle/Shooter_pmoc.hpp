#ifndef osgParticle_Shooter_pmocHPP
#define  osgParticle_Shooter_pmocHPP 1


#include <osgParticle/Shooter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/Shooter>
#include <osgParticle/Shooter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_Shooter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Shooter * _model;
QReflect_Shooter(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Shooter( );
//Shooter
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Shooter: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_Shooter();
 virtual pmoc::Instance createInstance();
public:
    virtual pmoc::QQModel* createQQModel(const pmoc::Instance*i);
       virtual const std::string Imports() const;
    ///if not null return statement to describe yourself by hand
    //enough abstract 4 me but override it if you want virtual const std::string fullComponent()const;
    ///these strings will be used to composite it hierarchically in case no qml is found at runtime
    ///DONT work yet..
    virtual  const std::string PREcompoQML()const;
    virtual const std::string POSTcompoQML()const;
};
  
} 



#endif //osgParticle_Shooter_pmocHPP

