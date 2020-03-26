#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


#define CASCADENAME			"haarcascade_frontalface_alt2.xml"
//#define NESTEDCASCADENAME	"haarcascade_eye_tree_eyeglasses.xml"
#define NESTEDCASCADENAME	"haarcascade_eye.xml"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void detectAndDraw( Mat& img, CascadeClassifier& cascade,
        CascadeClassifier& nestedCascade, double scale, bool tryflip );

private slots:
    void on_pushButton_Detect_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
