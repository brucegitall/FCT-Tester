/********************************************************************************
** Form generated from reading UI file 'cgrounpitemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGROUNPITEMWIDGET_H
#define UI_CGROUNPITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cGrounpItemWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNumber;
    QLabel *labelItemName;
    QLabel *labelControl;
    QLabel *labelCmdList;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditLog;

    void setupUi(QWidget *cGrounpItemWidget)
    {
        if (cGrounpItemWidget->objectName().isEmpty())
            cGrounpItemWidget->setObjectName(QLatin1String("cGrounpItemWidget"));
        cGrounpItemWidget->resize(415, 193);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cGrounpItemWidget->sizePolicy().hasHeightForWidth());
        cGrounpItemWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(cGrounpItemWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QLatin1String("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QLatin1String("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QLatin1String("horizontalLayout"));
        labelNumber = new QLabel(cGrounpItemWidget);
        labelNumber->setObjectName(QLatin1String("labelNumber"));

        horizontalLayout->addWidget(labelNumber);

        labelItemName = new QLabel(cGrounpItemWidget);
        labelItemName->setObjectName(QLatin1String("labelItemName"));

        horizontalLayout->addWidget(labelItemName);

        labelControl = new QLabel(cGrounpItemWidget);
        labelControl->setObjectName(QLatin1String("labelControl"));

        horizontalLayout->addWidget(labelControl);

        labelCmdList = new QLabel(cGrounpItemWidget);
        labelCmdList->setObjectName(QLatin1String("labelCmdList"));

        horizontalLayout->addWidget(labelCmdList);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 10);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QLatin1String("verticalLayout_2"));
        textEditLog = new QTextEdit(cGrounpItemWidget);
        textEditLog->setObjectName(QLatin1String("textEditLog"));

        verticalLayout_2->addWidget(textEditLog);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(cGrounpItemWidget);

        QMetaObject::connectSlotsByName(cGrounpItemWidget);
    } // setupUi

    void retranslateUi(QWidget *cGrounpItemWidget)
    {
        cGrounpItemWidget->setWindowTitle(QApplication::translate("cGrounpItemWidget", "Form", nullptr));
        labelNumber->setText(QApplication::translate("cGrounpItemWidget", "0", nullptr));
        labelItemName->setText(QApplication::translate("cGrounpItemWidget", "ItemName", nullptr));
        labelControl->setText(QApplication::translate("cGrounpItemWidget", "{}", nullptr));
        labelCmdList->setText(QApplication::translate("cGrounpItemWidget", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cGrounpItemWidget: public Ui_cGrounpItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGROUNPITEMWIDGET_H
