import QtQuick 2.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.0
import ".."

FocusScope {
  onXChanged: link2par.updateLinkCanvas()
    onYChanged: link2par.updateLinkCanvas()
LinkToParent{
id:link2par
target:main
}

  width: 320
            height: 200
    PropertyAnimation on x {
        to: 300
    }
    PropertyAnimation on y {
        to: 50
    }
    //  x: 400
    //    y: 50
    id: main //FocusScope For keyboard events
    property var qmodel

    signal drawableselected(int index)
 
        Rectangle {
            border.color: "black"
            border.width: 3
            radius: 10
          
            color: "yellow"
             anchors.fill:parent
            id: rectangle
            //focus: true
            Keys.onPressed: {
                console.log("Geode")
                //edition action (cur QQModel should be operand or operand of a UIGenerator's MetaAction otherwise do nothing usefull)
                if ((event.key == Qt.Key_C)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("copy")
                    pmocjs.setCopyOperand(main.qmodel)
                    event.accepted = true
                }
                if ((event.key == Qt.Key_X)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("cut")
                    pmocjs.setCopyOperand(main.qmodel)
                    subjectrequired(
                                ) //send a signal (this should be connected with parent (a osg::group or subclass)
                    event.accepted = true
                }
                if ((event.key == Qt.Key_V)
                        && (event.modifiers & Qt.ControlModifier)) {
                    console.log("paste")
                    pmocjs.realPaste()
                    event.accepted = true
                }
            }

            /////////// main class hierarchy apparence///////////////////////

            ///CLASSIC PART TOO BEGIN
            MouseArea {
                objectName: 'pmocmousearea'
                anchors.fill: parent
                acceptedButtons: Qt.AllButtons
                drag.target: main
                drag.axis: Drag.XandYAxis
                onClicked: {

                    if (mouse.button == Qt.RightButton)
                        uaContextMenu.popup()
                    else {
                        console.log("selected")
                        main.focus = true
                        pmocjs.setOperand(main.qmodel)
                    }
                }


                /////CLASSIC PART TO END//////////////////////////////////////////////////////////////////////
                Column {
                    id: classmain
                    objectName: "osg_GeodeQQQ"
                    property var osg_Geode

                    y: 75

                    //Rendondant sinc osg 3.4
                    ListView {

                        anchors.left: parent.left
                        x: 100
                        y: 100
                        width: 200
                        height: 140

                        model: classmain.osg_Geode.drawables
                        delegate: Rectangle {
                            property int m_iIndex: model.index
                            id: caseDrawable
                            height: 25
                            width: 200
                            color: "purple"
                            MouseArea {

                                anchors.fill: parent

                                onDoubleClicked: {
                                    console.log("trying to get properties")
                                    //QQmlEngine engine;
//console.log( JSON.stringify(classmain.osg_Geode));
//console.log(  classmain.osg_Geode.metaObject())
                                    console.log(parent.m_iIndex)
                                    classmain.osg_Geode.DrawableSelected(
                                                parent.m_iIndex)
                                }
                                Grid {
                                    columns: 2
                                    width: 200
                                    id: layout
                                    anchors.fill: parent

                                    Label {
                                        text: model.type
                                    }
                                    TextEdit {

                                        text: model.name
                                        onTextChanged: {
                                            model.name = text
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    
}
