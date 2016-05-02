#ifndef osg_Capability_pmocHPP
#define  osg_Capability_pmocHPP 1


#include <osg/Capability_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Capability>
#include <osg/Capability>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Capability: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Capability * _model;
QReflect_Capability(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Capability( );
//Capability
//virtual  Type  getType();
Q_INVOKABLE  GLenum  getCapability()const;
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE void  setCapability( GLenum capability);
Q_PROPERTY(GLenum  Capability  READ getCapability WRITE setCapability NOTIFY CapabilityChanged)
signals: void CapabilityChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Capability: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Capability> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Capability();
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
#include <osg/Capability_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_StateAttribute;
			} ;
#include <osg/Capability>
#include <osg/Capability>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Capabilityi: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Capabilityi * _model;
QReflect_Capabilityi(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Capabilityi( );
//Capabilityi
Q_INVOKABLE  int  compare(osg::QReflect_StateAttribute *sa)const;
Q_INVOKABLE  unsigned int  getIndex()const;
Q_INVOKABLE  unsigned int  getMember()const;
Q_INVOKABLE void  setIndex( unsigned int buf);
Q_PROPERTY(unsigned int  Index  READ getIndex WRITE setIndex NOTIFY IndexChanged)
signals: void IndexChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Capabilityi: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Capabilityi> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Capabilityi();
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
#include <osg/Capability_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/Capability>
#include <osg/Capability>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Enablei: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Enablei * _model;
QReflect_Enablei(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Enablei( );
//Enablei
Q_INVOKABLE void  apply(osg::QReflect_State *)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Enablei: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Enablei> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Enablei();
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
#include <osg/Capability_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_State;
			} ;
#include <osg/Capability>
#include <osg/Capability>

#include <osg/ref_ptr>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_Disablei: public pmoc::QQModel
{
Q_OBJECT
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
Disablei * _model;
QReflect_Disablei(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_Disablei( );
//Disablei
Q_INVOKABLE void  apply(osg::QReflect_State *)const;
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_Disablei: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::Disablei> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_Disablei();
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


#endif //osg_Capability_pmocHPP

