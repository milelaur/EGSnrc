/*

###############################################################################
#
#  EGSnrc user interface for egs_inprz execution dialog
#  Copyright (C) 2015 National Research Council Canada
#
#  This file is part of EGSnrc.
#
#  EGSnrc is free software: you can redistribute it and/or modify it under
#  the terms of the GNU Affero General Public License as published by the
#  Free Software Foundation, either version 3 of the License, or (at your
#  option) any later version.
#
#  EGSnrc is distributed in the hope that it will be useful, but WITHOUT ANY
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
#  FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for
#  more details.
#
#  You should have received a copy of the GNU Affero General Public License
#  along with EGSnrc. If not, see http://www.gnu.org/licenses/.
#
###############################################################################
#
#  Author:          Ernesto Mainegra-Hing, 2003
#
#  Contributors:    Blake Walters
#
###############################################################################

*/

/********************************************************************************
** Form generated from reading UI file 'executiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTIONDIALOG_H
#define UI_EXECUTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MExecutionDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *inputFileGroupBox;
    QVBoxLayout *verticalLayout;
    QLabel *inputFileLabel;
    QGroupBox *runModeButtonGroup;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QRadioButton *interactiveRadioButton;
    QRadioButton *batchRadioButton;
    QGroupBox *batchGroupBox;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout2;
    QSpinBox *NumJobSpinBox;
    QSpacerItem *Spacer26;
    QLabel *NumJobLabel;
    QHBoxLayout *hboxLayout3;
    QComboBox *queueSystemcomboBox;
    QSpacerItem *spacer43;
    QLabel *queueSystemLabel;
    QHBoxLayout *hboxLayout4;
    QComboBox *QueueComboBox;
    QSpacerItem *Spacer27;
    QLabel *QueueLabel;
    QSpacerItem *verticalSpacer;
    QFrame *Frame7;
    QHBoxLayout *hboxLayout5;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *MExecutionDialog)
    {
        if (MExecutionDialog->objectName().isEmpty())
            MExecutionDialog->setObjectName(QString::fromUtf8("MExecutionDialog"));
        MExecutionDialog->resize(378, 442);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MExecutionDialog->sizePolicy().hasHeightForWidth());
        MExecutionDialog->setSizePolicy(sizePolicy);
        MExecutionDialog->setMinimumSize(QSize(270, 406));
        MExecutionDialog->setMaximumSize(QSize(1000, 500));
        MExecutionDialog->setSizeGripEnabled(false);
        verticalLayout_4 = new QVBoxLayout(MExecutionDialog);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        inputFileGroupBox = new QGroupBox(MExecutionDialog);
        inputFileGroupBox->setObjectName(QString::fromUtf8("inputFileGroupBox"));
        sizePolicy.setHeightForWidth(inputFileGroupBox->sizePolicy().hasHeightForWidth());
        inputFileGroupBox->setSizePolicy(sizePolicy);
        inputFileGroupBox->setMaximumSize(QSize(361, 16777215));
        verticalLayout = new QVBoxLayout(inputFileGroupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inputFileLabel = new QLabel(inputFileGroupBox);
        inputFileLabel->setObjectName(QString::fromUtf8("inputFileLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(232);
        sizePolicy1.setVerticalStretch(232);
        sizePolicy1.setHeightForWidth(inputFileLabel->sizePolicy().hasHeightForWidth());
        inputFileLabel->setSizePolicy(sizePolicy1);
        inputFileLabel->setMinimumSize(QSize(210, 40));
        inputFileLabel->setAlignment(Qt::AlignVCenter);
        inputFileLabel->setWordWrap(true);

        verticalLayout->addWidget(inputFileLabel);


        verticalLayout_2->addWidget(inputFileGroupBox);

        runModeButtonGroup = new QGroupBox(MExecutionDialog);
        runModeButtonGroup->setObjectName(QString::fromUtf8("runModeButtonGroup"));
        sizePolicy.setHeightForWidth(runModeButtonGroup->sizePolicy().hasHeightForWidth());
        runModeButtonGroup->setSizePolicy(sizePolicy);
        hboxLayout = new QHBoxLayout(runModeButtonGroup);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        interactiveRadioButton = new QRadioButton(runModeButtonGroup);
        interactiveRadioButton->setObjectName(QString::fromUtf8("interactiveRadioButton"));
        interactiveRadioButton->setChecked(true);

        hboxLayout1->addWidget(interactiveRadioButton);

        batchRadioButton = new QRadioButton(runModeButtonGroup);
        batchRadioButton->setObjectName(QString::fromUtf8("batchRadioButton"));

        hboxLayout1->addWidget(batchRadioButton);


        hboxLayout->addLayout(hboxLayout1);


        verticalLayout_2->addWidget(runModeButtonGroup);

        batchGroupBox = new QGroupBox(MExecutionDialog);
        batchGroupBox->setObjectName(QString::fromUtf8("batchGroupBox"));
        batchGroupBox->setEnabled(false);
        sizePolicy.setHeightForWidth(batchGroupBox->sizePolicy().hasHeightForWidth());
        batchGroupBox->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(batchGroupBox);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        NumJobSpinBox = new QSpinBox(batchGroupBox);
        NumJobSpinBox->setObjectName(QString::fromUtf8("NumJobSpinBox"));
        NumJobSpinBox->setMinimum(1);
        NumJobSpinBox->setMaximum(10000);
        NumJobSpinBox->setValue(1);

        hboxLayout2->addWidget(NumJobSpinBox);

        Spacer26 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(Spacer26);

        NumJobLabel = new QLabel(batchGroupBox);
        NumJobLabel->setObjectName(QString::fromUtf8("NumJobLabel"));
        NumJobLabel->setWordWrap(false);

        hboxLayout2->addWidget(NumJobLabel);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        queueSystemcomboBox = new QComboBox(batchGroupBox);
        queueSystemcomboBox->addItem(QString());
        queueSystemcomboBox->addItem(QString());
        queueSystemcomboBox->addItem(QString());
        queueSystemcomboBox->setObjectName(QString::fromUtf8("queueSystemcomboBox"));

        hboxLayout3->addWidget(queueSystemcomboBox);

        spacer43 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacer43);

        queueSystemLabel = new QLabel(batchGroupBox);
        queueSystemLabel->setObjectName(QString::fromUtf8("queueSystemLabel"));
        queueSystemLabel->setWordWrap(false);

        hboxLayout3->addWidget(queueSystemLabel);


        vboxLayout1->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        QueueComboBox = new QComboBox(batchGroupBox);
        QueueComboBox->addItem(QString());
        QueueComboBox->addItem(QString());
        QueueComboBox->addItem(QString());
        QueueComboBox->setObjectName(QString::fromUtf8("QueueComboBox"));

        hboxLayout4->addWidget(QueueComboBox);

        Spacer27 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(Spacer27);

        QueueLabel = new QLabel(batchGroupBox);
        QueueLabel->setObjectName(QString::fromUtf8("QueueLabel"));
        QueueLabel->setWordWrap(false);

        hboxLayout4->addWidget(QueueLabel);


        vboxLayout1->addLayout(hboxLayout4);


        vboxLayout->addLayout(vboxLayout1);


        verticalLayout_2->addWidget(batchGroupBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        Frame7 = new QFrame(MExecutionDialog);
        Frame7->setObjectName(QString::fromUtf8("Frame7"));
        sizePolicy.setHeightForWidth(Frame7->sizePolicy().hasHeightForWidth());
        Frame7->setSizePolicy(sizePolicy);
        Frame7->setFrameShape(QFrame::StyledPanel);
        Frame7->setFrameShadow(QFrame::Sunken);
        hboxLayout5 = new QHBoxLayout(Frame7);
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(11, 11, 11, 11);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        buttonOk = new QPushButton(Frame7);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        buttonOk->setAutoDefault(true);

        hboxLayout5->addWidget(buttonOk);

        buttonCancel = new QPushButton(Frame7);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        buttonCancel->setAutoDefault(true);

        hboxLayout5->addWidget(buttonCancel);


        verticalLayout_3->addWidget(Frame7);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(MExecutionDialog);
        QObject::connect(buttonCancel, SIGNAL(clicked()), MExecutionDialog, SLOT(reject()));
        QObject::connect(batchRadioButton, SIGNAL(toggled(bool)), MExecutionDialog, SLOT(update_batch()));
        QObject::connect(buttonOk, SIGNAL(clicked()), MExecutionDialog, SLOT(run()));

        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(MExecutionDialog);
    } // setupUi

    void retranslateUi(QDialog *MExecutionDialog)
    {
        MExecutionDialog->setWindowTitle(QApplication::translate("MExecutionDialog", "Execution Setup", nullptr));
#ifndef QT_NO_TOOLTIP
        MExecutionDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        MExecutionDialog->setWhatsThis(QApplication::translate("MExecutionDialog", "Define parameters for user code execution", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        inputFileGroupBox->setToolTip(QApplication::translate("MExecutionDialog", "Name of current input file", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        inputFileGroupBox->setWhatsThis(QApplication::translate("MExecutionDialog", "Name of current input file", nullptr));
#endif // QT_NO_WHATSTHIS
        inputFileGroupBox->setTitle(QApplication::translate("MExecutionDialog", "Input file name to run :", nullptr));
        inputFileLabel->setText(QApplication::translate("MExecutionDialog", "input file name", nullptr));
        runModeButtonGroup->setTitle(QApplication::translate("MExecutionDialog", "Execution mode", nullptr));
#ifndef QT_NO_TOOLTIP
        interactiveRadioButton->setToolTip(QApplication::translate("MExecutionDialog", "run program locally", nullptr));
#endif // QT_NO_TOOLTIP
        interactiveRadioButton->setText(QApplication::translate("MExecutionDialog", "interactive", nullptr));
        batchRadioButton->setText(QApplication::translate("MExecutionDialog", "batch", nullptr));
        batchGroupBox->setTitle(QApplication::translate("MExecutionDialog", "Batch run", nullptr));
#ifndef QT_NO_TOOLTIP
        NumJobSpinBox->setToolTip(QApplication::translate("MExecutionDialog", "If > 1, jobs processed in parallel using pprocess", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        NumJobLabel->setToolTip(QApplication::translate("MExecutionDialog", "number of jobs to run", nullptr));
#endif // QT_NO_TOOLTIP
        NumJobLabel->setText(QApplication::translate("MExecutionDialog", "# of jobs", nullptr));
        queueSystemcomboBox->setItemText(0, QApplication::translate("MExecutionDialog", "at", nullptr));
        queueSystemcomboBox->setItemText(1, QApplication::translate("MExecutionDialog", "nqs", nullptr));
        queueSystemcomboBox->setItemText(2, QApplication::translate("MExecutionDialog", "pbs", nullptr));

        queueSystemLabel->setText(QApplication::translate("MExecutionDialog", "Queueing system", nullptr));
        QueueComboBox->setItemText(0, QApplication::translate("MExecutionDialog", "long", nullptr));
        QueueComboBox->setItemText(1, QApplication::translate("MExecutionDialog", "medium", nullptr));
        QueueComboBox->setItemText(2, QApplication::translate("MExecutionDialog", "short", nullptr));

#ifndef QT_NO_TOOLTIP
        QueueComboBox->setToolTip(QApplication::translate("MExecutionDialog", "type of queue", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        QueueLabel->setToolTip(QApplication::translate("MExecutionDialog", "type of queue", nullptr));
#endif // QT_NO_TOOLTIP
        QueueLabel->setText(QApplication::translate("MExecutionDialog", "Queue", nullptr));
        buttonOk->setText(QApplication::translate("MExecutionDialog", "&Run", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonOk->setShortcut(QApplication::translate("MExecutionDialog", "Alt+R", nullptr));
#endif // QT_NO_SHORTCUT
        buttonCancel->setText(QApplication::translate("MExecutionDialog", "&Close", nullptr));
#ifndef QT_NO_SHORTCUT
        buttonCancel->setShortcut(QApplication::translate("MExecutionDialog", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
    } // retranslateUi

};

namespace Ui {
    class MExecutionDialog: public Ui_MExecutionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTIONDIALOG_H
