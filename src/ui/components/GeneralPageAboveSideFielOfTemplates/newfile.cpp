#include "newfile.h"
#include "QtGui/qicon.h"
#include <QVBoxLayout>

NewFile::NewFile(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout *qv = new QVBoxLayout(this);
    QLabel *ql = new QLabel;
    ql -> setText("newFile");
    qv -> addWidget(ql);


}
