/********************************************************************************
** Form generated from reading UI file 'netwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWINDOW_H
#define UI_NETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_netwindow
{
public:
    QLabel *label;
    QLineEdit *ip_edit;
    QPushButton *disconnect_button;
    QLineEdit *receive_edit;
    QPushButton *connect_button;
    QLineEdit *send_edit;
    QLineEdit *port_edit;
    QPushButton *send_button;

    void setupUi(QWidget *netwindow)
    {
        if (netwindow->objectName().isEmpty())
            netwindow->setObjectName("netwindow");
        netwindow->resize(1040, 641);
        label = new QLabel(netwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 530, 81, 16));
        label->setAlignment(Qt::AlignCenter);
        ip_edit = new QLineEdit(netwindow);
        ip_edit->setObjectName("ip_edit");
        ip_edit->setGeometry(QRect(30, 470, 111, 20));
        ip_edit->setAlignment(Qt::AlignCenter);
        disconnect_button = new QPushButton(netwindow);
        disconnect_button->setObjectName("disconnect_button");
        disconnect_button->setGeometry(QRect(30, 560, 281, 21));
        receive_edit = new QLineEdit(netwindow);
        receive_edit->setObjectName("receive_edit");
        receive_edit->setGeometry(QRect(30, 530, 181, 20));
        connect_button = new QPushButton(netwindow);
        connect_button->setObjectName("connect_button");
        connect_button->setGeometry(QRect(230, 470, 80, 20));
        send_edit = new QLineEdit(netwindow);
        send_edit->setObjectName("send_edit");
        send_edit->setGeometry(QRect(30, 500, 181, 20));
        port_edit = new QLineEdit(netwindow);
        port_edit->setObjectName("port_edit");
        port_edit->setGeometry(QRect(160, 470, 51, 20));
        port_edit->setAlignment(Qt::AlignCenter);
        send_button = new QPushButton(netwindow);
        send_button->setObjectName("send_button");
        send_button->setGeometry(QRect(230, 500, 81, 21));

        retranslateUi(netwindow);

        QMetaObject::connectSlotsByName(netwindow);
    } // setupUi

    void retranslateUi(QWidget *netwindow)
    {
        netwindow->setWindowTitle(QCoreApplication::translate("netwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("netwindow", "Receive", nullptr));
        disconnect_button->setText(QCoreApplication::translate("netwindow", "Disconnect", nullptr));
        connect_button->setText(QCoreApplication::translate("netwindow", "Connect", nullptr));
        send_button->setText(QCoreApplication::translate("netwindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class netwindow: public Ui_netwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWINDOW_H