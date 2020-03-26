
OpenCVPath = $${PWD}


win32 {

INCLUDEPATH += $${OpenCVPath}/windows/include

CONFIG(debug, debug|release) { ##debug

#VS2015 QMAKE_MSC_VER = 1900
#VS2017 QMAKE_MSC_VER = 1916
#均使用vc15版本
greaterThan(QMAKE_MSC_VER, 1899) {
LIBS += $${OpenCVPath}/windows/x64/vc15/lib/opencv_world341d.lib

}

}else{ #release

#VS2015 QMAKE_MSC_VER = 1900
#VS2017 QMAKE_MSC_VER = 1916
#均使用vc15版本
greaterThan(QMAKE_MSC_VER, 1899) {
LIBS += $${OpenCVPath}/windows/x64/vc15/lib/opencv_world341.lib
}

} #debug|release

}#win32
