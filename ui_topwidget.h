/********************************************************************************
** Form generated from reading UI file 'topwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPWIDGET_H
#define UI_TOPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonHide;
    QPushButton *pushButtonMax;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *TopWidget)
    {
        if (TopWidget->objectName().isEmpty())
            TopWidget->setObjectName(QStringLiteral("TopWidget"));
        TopWidget->resize(1376, 32);
        TopWidget->setMinimumSize(QSize(0, 32));
        TopWidget->setMaximumSize(QSize(16777215, 32));
        verticalLayout = new QVBoxLayout(TopWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(TopWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        iconLabel = new QLabel(frame);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/root.jpg")));
        iconLabel->setScaledContents(false);
        iconLabel->setOpenExternalLinks(false);

        horizontalLayout->addWidget(iconLabel);

        titleLabel = new QLabel(frame);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(908, 9, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonHide = new QPushButton(frame);
        pushButtonHide->setObjectName(QStringLiteral("pushButtonHide"));
        pushButtonHide->setMinimumSize(QSize(22, 22));
        pushButtonHide->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(pushButtonHide);

        pushButtonMax = new QPushButton(frame);
        pushButtonMax->setObjectName(QStringLiteral("pushButtonMax"));
        pushButtonMax->setMinimumSize(QSize(22, 22));
        pushButtonMax->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(pushButtonMax);

        pushButtonClose = new QPushButton(frame);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(22, 22));
        pushButtonClose->setMaximumSize(QSize(22, 22));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addWidget(frame);


        retranslateUi(TopWidget);

        QMetaObject::connectSlotsByName(TopWidget);
    } // setupUi

    void retranslateUi(QWidget *TopWidget)
    {
        TopWidget->setWindowTitle(QApplication::translate("TopWidget", "Form", Q_NULLPTR));
        iconLabel->setText(QString());
        titleLabel->setText(QApplication::translate("TopWidget", "HelloQt\350\207\252\345\256\232\344\271\211\346\240\207\351\242\230\346\240\217\345\217\212\350\203\214\346\231\257", Q_NULLPTR));
        pushButtonHide->setText(QString());
        pushButtonMax->setText(QString());
        pushButtonClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TopWidget: public Ui_TopWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPWIDGET_H
