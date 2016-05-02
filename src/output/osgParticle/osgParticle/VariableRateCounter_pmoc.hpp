#ifndef osgParticle_VariableRateCounter_pmocHPP
#define  osgParticle_VariableRateCounter_pmocHPP 1


#include <osgParticle/VariableRateCounter_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_Object;
			} ;
#include <osg/ref_ptr>
#include <osgParticle/VariableRateCounter>
#include <osgParticle/VariableRateCounter>

#include <MetaQQuickClass.h>
namespace osgParticle{
class QReflect_VariableRateCounter: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
VariableRateCounter * _model;
QReflect_VariableRateCounter(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_VariableRateCounter( );
//VariableRateCounter
// void  setRateRange(const  rangef &);
//const  rangef & getRateRange();
Q_INVOKABLE  bool  isSameKindAs(osg::QReflect_Object *obj)const;
Q_INVOKABLE const  char*  className()const;
Q_INVOKABLE const  char*  libraryName()const;
Q_INVOKABLE void  setRateRange( float minrange , float maxrange);
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_VariableRateCounter: public pmoc::MetaQQuickClass{
protected:
   public:
MetaQReflect_VariableRateCounter();
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



#endif //osgParticle_VariableRateCounter_pmocHPP

