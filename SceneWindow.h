#ifndef __GL_POLYGON_WINDOW_H__
#define __GL_POLYGON_WINDOW_H__ 1

#include <QGLWidget>
#include <QMenuBar>
#include <QLabel>
#include <QPushButton>
#include <QDial>
#include <QSlider>
#include <QDoubleSpinBox>
#include <QTimer>
#include <QBoxLayout>
#include "SceneWidget.h"

// window for the scene
class SceneWindow: public QWidget{
	public:
	SceneWindow(QWidget *parent);
	~SceneWindow();

	QMenuBar *menuBar;
	QMenu *fileMenu;
	QAction *actionQuit;

	QBoxLayout *windowLayout;
	QBoxLayout *controlsLayout;
	SceneWidget *sceneWidget;
	QWidget *controlsWidget;
	QSlider *transparencySlider;
	QPushButton *directionButton;
	QDial *speedDial;
	QSlider *xViewSlider;
	QSlider *yViewSlider;
	QDoubleSpinBox *redBox;
	QDoubleSpinBox *greenBox;
	QDoubleSpinBox *blueBox;

	QTimer *ptimer;

	void ResetInterface();
};

#endif
