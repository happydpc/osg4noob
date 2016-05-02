#ifndef osg_CameraView_pmocHPP
#define  osg_CameraView_pmocHPP 1


#include <osg/CameraView_pmoc.hpp>
#include <QObject>
namespace osg{ 
class QReflect_NodeVisitor;
			} ;
namespace osg{ 
class QReflect_Vec3d;
			} ;
namespace osg{ 
class QReflect_Matrixd;
			} ;
namespace osg{ 
class QReflect_Quat;
			} ;
#include <osg/CameraView>
#include <osg/CameraView>

#include <osg/ref_ptr>
#include<osg/CameraView_pmoc.hpp>
#include <MetaQQuickClass.h>
namespace osg{
class QReflect_CameraView: public pmoc::QQModel
{
Q_OBJECT
public:
 enum FieldOfViewMode{
UNCONSTRAINED =CameraView::UNCONSTRAINED,
HORIZONTAL =CameraView::HORIZONTAL,
VERTICAL =CameraView::VERTICAL};
  Q_ENUMS(FieldOfViewMode)
private:
public:
virtual unsigned int getNumParentBox(){return 1;}

/// inheritance simulated via composition
CameraView * _model;
QReflect_CameraView(const pmoc::Instance *i=0,QObject* parent=0);
virtual ~QReflect_CameraView( );
//CameraView
//const  Quat & getAttitude();
//const  Vec3d & getPosition();
Q_INVOKABLE  bool  computeLocalToWorldMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *nv)const;
Q_INVOKABLE  bool  computeWorldToLocalMatrix(osg::QReflect_Matrixd *matrix ,osg::QReflect_NodeVisitor *nv)const;
Q_INVOKABLE  double  getFieldOfView()const;
Q_INVOKABLE  double  getFocalLength()const;
Q_INVOKABLE osg::QReflect_CameraView::FieldOfViewMode  getFieldOfViewMode()const;
Q_INVOKABLE void  setAttitude(osg::QReflect_Quat *quat);
Q_INVOKABLE void  setFieldOfView( double fieldOfView);
Q_INVOKABLE void  setFieldOfViewMode(osg::QReflect_CameraView::FieldOfViewMode mode);
Q_INVOKABLE void  setFocalLength( double focalLength);
Q_INVOKABLE void  setPosition(osg::QReflect_Vec3d *pos);
Q_PROPERTY(double  FieldOfView  READ getFieldOfView WRITE setFieldOfView NOTIFY FieldOfViewChanged)
Q_PROPERTY(double  FocalLength  READ getFocalLength WRITE setFocalLength NOTIFY FocalLengthChanged)
Q_PROPERTY(osg::QReflect_CameraView::FieldOfViewMode  FieldOfViewMode  READ getFieldOfViewMode WRITE setFieldOfViewMode NOTIFY FieldOfViewModeChanged)
signals: void FieldOfViewChanged();
public:
signals: void FieldOfViewModeChanged();
public:
signals: void FocalLengthChanged();
public:
public slots:
virtual void updateModel();
 
}; 
class MetaQReflect_CameraView: public pmoc::MetaQQuickClass{
protected:
std::set<osg::ref_ptr<osg::CameraView> 	 > _managedinstances;
public:
  virtual bool isInstanciable(){return true;};
MetaQReflect_CameraView();
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


#endif //osg_CameraView_pmocHPP

