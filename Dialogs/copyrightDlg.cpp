#include "copyrightDlg.h"

copyrightDlg::copyrightDlg(QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);
    this->setWindowTitle(QString(tr("关于软件")));
    text->setText(QString(tr("[ 数独游戏网络对战平台 V1.0 ]\n\n软件基于 C++\n\n和 Qt4.5 平台开发设计\n\n")));
}

copyrightDlg::~copyrightDlg()
{
}