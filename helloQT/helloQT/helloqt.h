#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtWidgets/QMainWindow>
#include "ui_helloqt.h"
#include <string>
class helloQT : public QMainWindow
{
	Q_OBJECT

public:
	helloQT(QWidget *parent = 0);
	~helloQT();
	std::string m_tokens;
	std::string m_errors;

private:
	Ui::helloQTClass ui;
	private slots:
	void exit();
	void compile();
	void save();

};

#endif // HELLOQT_H
