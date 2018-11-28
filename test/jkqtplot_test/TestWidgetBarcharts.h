#ifndef TestWidgetBarcharts_H
#define TestWidgetBarcharts_H
#include <QElapsedTimer>
#include <QCheckBox>
#include <QLineEdit>
#include <QTimer>
#include <QImage>
#include <QVBoxLayout>
#include <QWidget>
#include <QTabWidget>
#include <QFormLayout>
#include <QCheckBox>
#include "jkqtplotter/jkqtplotter.h"
#include "jkqtplotter/jkqtpgeoelements.h"
#include "jkqtplotter/jkqtpimageelements.h"
#include "jkqtplotter/jkqtpoverlayelements.h"
#include "jkqtplotter/jkqtpparsedfunctionelements.h"
#include "jkqtplotter/jkqtpbaseelements.h"
#include "jkqtplotter/jkqtpplotsmodel.h"
#include "jkqtplottertools/jkqtptools.h"

#define N1 200
#define N2 50
#define N3 8




class TestWidgetBarcharts : public QWidget
{
        Q_OBJECT
    public:
        explicit TestWidgetBarcharts(QWidget *parent = 0);
        
    signals:
        
    public slots:


        void setBarchartLogLog(bool checked);
        void setBarchartAngele(int angel);
        void setBarchartAngele2(int angel);

    protected:


        JKQtPlotter* plotBarchart;
        JKQtPlotter* plotBarchart2;
        QCheckBox* chkBarLog;
        QSpinBox* spinBarLabelAngel;
        QSpinBox* spinBarLabelAngel2;



        
};


#endif // TestWidgetBarcharts_H
