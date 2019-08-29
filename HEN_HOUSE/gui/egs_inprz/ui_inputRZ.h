/*

###############################################################################
#
#  EGSnrc user interface for egs_inprz
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
#  Contributors:    Frederic Tessier
#                   Blake Walters
#
###############################################################################

*/

/********************************************************************************
** Form generated from reading UI file 'inputRZ.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTRZ_H
#define UI_INPUTRZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputRZForm
{
public:
    QGridLayout *gridLayout_7;
    QLabel *bannerLabel;
    QHBoxLayout *horizontalLayout_17;
    QGroupBox *ButtonGroup4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *ExecuteButton;
    QPushButton *PreviewRZButton;
    QPushButton *PrintButton;
    QPushButton *compileButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *ConfirmButtonGroup;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *ApplyButton;
    QPushButton *CancelButton;
    QPushButton *HelpButton;
    QPushButton *AboutButton;
    QTabWidget *TabWidgetRZ;
    QWidget *GItab;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_28;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QGroupBox *UserCodeButtonGroup;
    QVBoxLayout *vboxLayout;
    QRadioButton *cavrzRadioButton;
    QRadioButton *dosrzRadioButton;
    QRadioButton *sprrzRadioButton;
    QRadioButton *flurzRadioButton;
    QGroupBox *TargetbuttonGroup;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout2;
    QRadioButton *OptradioButton;
    QRadioButton *NoOptradioButton;
    QRadioButton *DebugradioButton;
    QRadioButton *CleanradioButton;
    QGroupBox *UserCodeAreaButtonGroup;
    QVBoxLayout *vboxLayout3;
    QVBoxLayout *vboxLayout4;
    QRadioButton *HOMERadioButton;
    QRadioButton *HEN_HOUSERadioButton;
    QRadioButton *OtherAreaRadioButton;
    QGroupBox *PEGSDataAreaButtonGroup;
    QVBoxLayout *vboxLayout5;
    QVBoxLayout *vboxLayout6;
    QRadioButton *HOMEPegsRadioButton;
    QRadioButton *HEN_HOUSEPegsRadioButton;
    QRadioButton *OtherPegsAreaRadioButton;
    QRadioButton *PEGSlessRadioButton;
    QGroupBox *TitleGroupBox;
    QVBoxLayout *vboxLayout7;
    QLineEdit *TitleEdit;
    QLabel *theguyLabel;
    QVBoxLayout *verticalLayout_26;
    QGroupBox *InputFileGroupBox;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_18;
    QComboBox *InputFileComboBox;
    QPushButton *OpenFileButton;
    QGroupBox *pegs4GroupBox;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout2;
    QComboBox *pegs4ComboBox;
    QPushButton *Pegs4FileButton;
    QGroupBox *groupBox57;
    QHBoxLayout *hboxLayout3;
    QHBoxLayout *hboxLayout4;
    QComboBox *CONFcomboBox;
    QPushButton *SPECButton;
    QHBoxLayout *hboxLayout5;
    QPushButton *ConfigurationButton;
    QSpacerItem *spacer45;
    QPushButton *logfileButton;
    QWidget *IOtab;
    QHBoxLayout *hboxLayout6;
    QHBoxLayout *hboxLayout7;
    QVBoxLayout *vboxLayout8;
    QGroupBox *randNButtonGroup;
    QVBoxLayout *vboxLayout9;
    QVBoxLayout *vboxLayout10;
    QRadioButton *noRandRadioButton;
    QRadioButton *lastRandRadioButton;
    QRadioButton *allRandRadioButton;
    QGroupBox *DoseRegGroupBox;
    QVBoxLayout *vboxLayout11;
    QVBoxLayout *vboxLayout12;
    QHBoxLayout *hboxLayout8;
    QLabel *minPlnTextLabel;
    QSpacerItem *Spacer1;
    QSpinBox *minPlnSpinBox;
    QHBoxLayout *hboxLayout9;
    QLabel *maxPlnTextLabel;
    QSpacerItem *Spacer2;
    QSpinBox *maxPlnSpinBox;
    QHBoxLayout *hboxLayout10;
    QLabel *minCylTextLabel;
    QSpacerItem *Spacer3;
    QSpinBox *minCylSpinBox;
    QHBoxLayout *hboxLayout11;
    QLabel *maxCylTextLabel;
    QSpacerItem *Spacer4;
    QSpinBox *maxCylSpinBox;
    QFrame *Frame4;
    QVBoxLayout *vboxLayout13;
    QCheckBox *storeDataCheckBox;
    QSpacerItem *spacer41;
    QVBoxLayout *vboxLayout14;
    QFrame *Frame6;
    QVBoxLayout *vboxLayout15;
    QVBoxLayout *vboxLayout16;
    QHBoxLayout *hboxLayout12;
    QLabel *outoptTextLabel;
    QSpacerItem *Spacer78;
    QComboBox *outoptComboBox;
    QHBoxLayout *hboxLayout13;
    QLabel *etransportLabel;
    QSpacerItem *Spacer5;
    QComboBox *etransportComboBox;
    QHBoxLayout *hboxLayout14;
    QLabel *iwatchTextLabel;
    QSpacerItem *Spacer8;
    QComboBox *iwatchComboBox;
    QHBoxLayout *hboxLayout15;
    QLabel *restartTextLabel;
    QSpacerItem *Spacer7;
    QComboBox *irestartComboBox;
    QGroupBox *SPRRegGroupBox;
    QComboBox *sproutComboBox;
    QLabel *sproutTextLabel;
    QTableWidget *sproutTable;
    QVBoxLayout *vboxLayout17;
    QGroupBox *PrintFluSpecGroupBox;
    QComboBox *PrintFluSpeComboBox;
    QTableWidget *ListFluTable;
    QGroupBox *IPRIMARYGroupBox;
    QVBoxLayout *vboxLayout18;
    QComboBox *IPRIMARYComboBox;
    QGroupBox *sloteFluGroupBox;
    QLabel *sloteFluLabel;
    QLineEdit *sloteFluEdit;
    QTableWidget *sloteFluTable;
    QWidget *MCtab;
    QWidget *Layout46;
    QVBoxLayout *vboxLayout19;
    QHBoxLayout *hboxLayout16;
    QLabel *ncaseLabel;
    QSpacerItem *Spacer6_2;
    QLineEdit *ncaseEdit;
    QHBoxLayout *hboxLayout17;
    QLabel *maxCPULabel;
    QSpacerItem *Spacer9;
    QLineEdit *maxCPUEdit;
    QHBoxLayout *hboxLayout18;
    QLabel *statLabel;
    QSpacerItem *Spacer8_2;
    QLineEdit *statEdit;
    QGroupBox *kermaGroupBox;
    QCheckBox *kermaCheckBox;
    QGroupBox *randGroupBox;
    QVBoxLayout *vboxLayout20;
    QHBoxLayout *hboxLayout19;
    QLabel *rand1Label;
    QSpacerItem *Spacer4_2;
    QSpinBox *rand1SpinBox;
    QHBoxLayout *hboxLayout20;
    QLabel *rand2Label;
    QSpacerItem *Spacer5_2;
    QSpinBox *rand2SpinBox;
    QGroupBox *photregGroupBox;
    QHBoxLayout *hboxLayout21;
    QCheckBox *photregCheckBox;
    QWidget *layout157;
    QVBoxLayout *vboxLayout21;
    QGroupBox *ifullGroupBox;
    QVBoxLayout *vboxLayout22;
    QHBoxLayout *hboxLayout22;
    QLabel *ifullLabel;
    QSpacerItem *Spacer77;
    QComboBox *ifullComboBox;
    QGroupBox *phdGroupBox;
    QWidget *Layout30;
    QVBoxLayout *vboxLayout23;
    QHBoxLayout *hboxLayout23;
    QLabel *SLOTELabel;
    QSpacerItem *Spacer1_2;
    QLineEdit *SLOTEEdit;
    QHBoxLayout *hboxLayout24;
    QLabel *DELTAELabel;
    QSpacerItem *Spacer2_2;
    QLineEdit *DELTAEEdit;
    QTableWidget *phdTable;
    QWidget *Gtab;
    QGridLayout *gridLayout_24;
    QGridLayout *gridLayout_23;
    QHBoxLayout *horizontalLayout_20;
    QGroupBox *inputmethButtonGroup;
    QVBoxLayout *vboxLayout24;
    QVBoxLayout *vboxLayout25;
    QRadioButton *groupRadioButton;
    QRadioButton *individualRadioButton;
    QRadioButton *cavityRadioButton;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout25;
    QHBoxLayout *hboxLayout26;
    QLabel *ZFaceLabel;
    QLineEdit *ZFaceEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *CavityInfoLabel;
    QGroupBox *mediaGroupBox;
    QVBoxLayout *verticalLayout_36;
    QHBoxLayout *horizontalLayout;
    QLabel *mediaLabel;
    QSpacerItem *spacer42_2;
    QComboBox *mediaComboBox;
    QTableWidget *mediaTable;
    QHBoxLayout *horizontalLayout_12;
    QGroupBox *GroupBox53;
    QVBoxLayout *verticalLayout_33;
    QTableWidget *geometryTable;
    QGroupBox *GroupBox54;
    QVBoxLayout *verticalLayout_34;
    QTableWidget *cylTable;
    QWidget *CItab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *cavityGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer;
    QGroupBox *ButtonGroup25;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *thimbleRadioButton;
    QRadioButton *parallelplateRadioButton;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hboxLayout27;
    QLabel *wallLabel;
    QLineEdit *wallthickEdit;
    QHBoxLayout *hboxLayout28;
    QLabel *cavradLabel;
    QLineEdit *cavradEdit;
    QHBoxLayout *hboxLayout29;
    QLabel *cavlenLabel;
    QLineEdit *cavlenEdit;
    QHBoxLayout *hboxLayout30;
    QLabel *electradLabel;
    QLineEdit *electradEdit;
    QHBoxLayout *hboxLayout31;
    QLabel *wallmaterialLabel;
    QComboBox *wallmaterialComboBox;
    QHBoxLayout *hboxLayout32;
    QLabel *electrmatLabel;
    QComboBox *electrmatComboBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *gr_indGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *GroupBox56;
    QTableWidget *cavTable;
    QWidget *MDTab;
    QVBoxLayout *verticalLayout_52;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_28;
    QGroupBox *ELGroupBox;
    QVBoxLayout *verticalLayout_47;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *vboxLayout26;
    QHBoxLayout *hboxLayout33;
    QLabel *AELabel;
    QLineEdit *AEEdit;
    QHBoxLayout *hboxLayout34;
    QLabel *APLabel;
    QLineEdit *APEdit;
    QVBoxLayout *vboxLayout27;
    QHBoxLayout *hboxLayout35;
    QLabel *UELabel;
    QLineEdit *UEEdit;
    QHBoxLayout *hboxLayout36;
    QLabel *UPLabel;
    QLineEdit *UPEdit;
    QGroupBox *MDGroupBox;
    QVBoxLayout *verticalLayout_48;
    QHBoxLayout *hboxLayout37;
    QLineEdit *MDFEdit;
    QPushButton *MDFileButton;
    QGroupBox *inpmediaGroupBox;
    QVBoxLayout *verticalLayout_50;
    QVBoxLayout *verticalLayout_49;
    QHBoxLayout *horizontalLayout_24;
    QGroupBox *compositionGroupBox;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *pz_or_rhozTable;
    QVBoxLayout *verticalLayout_46;
    QGroupBox *medNameGroupBox;
    QVBoxLayout *verticalLayout_9;
    QComboBox *inpmediumComboBox;
    QHBoxLayout *horizontalLayout_19;
    QGroupBox *medTypeGroupBox;
    QVBoxLayout *verticalLayout_37;
    QComboBox *medTypeComboBox;
    QGroupBox *rhoGroupBox;
    QVBoxLayout *verticalLayout_44;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *rhoEdit;
    QComboBox *rhoScaleComboBox;
    QGroupBox *medOptionsGroupBox;
    QVBoxLayout *verticalLayout_45;
    QVBoxLayout *verticalLayout_35;
    QCheckBox *DCcheckBox;
    QCheckBox *ICRUradCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *isGasCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QLabel *gaspLabel;
    QLineEdit *gaspEdit;
    QLabel *gaspUnits;
    QGroupBox *DFgroupBox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *DFSearchLabel;
    QComboBox *DFSearchComboBox;
    QHBoxLayout *hboxLayout38;
    QLineEdit *DFEdit;
    QHBoxLayout *hboxLayout39;
    QPushButton *DFBrowse;
    QWidget *SItab;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *in_particleButtonGroup;
    QGridLayout *gridLayout_2;
    QRadioButton *eRadioButton;
    QRadioButton *phRadioButton;
    QRadioButton *pRadioButton;
    QRadioButton *chargedRadioButton;
    QRadioButton *allRadioButton;
    QGroupBox *energyButtonGroup;
    QGridLayout *gridLayout1;
    QRadioButton *monoenergeticRadioButton;
    QRadioButton *spectrumRadioButton;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *IniEgroupBox;
    QVBoxLayout *verticalLayout_15;
    QLineEdit *ini_energyEdit;
    QGroupBox *specfnameGroupBox;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *hboxLayout40;
    QComboBox *specfnameComboBox;
    QPushButton *specfnameButton;
    QGroupBox *ioutspGroupBox;
    QFormLayout *formLayout;
    QCheckBox *ioutspCheckBox;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *hboxLayout41;
    QLabel *sourceLabel;
    QComboBox *sourceComboBox;
    QGroupBox *sourceoptionsGroupBox;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *vboxLayout28;
    QHBoxLayout *hboxLayout42;
    QLabel *temp1Label;
    QSpacerItem *Spacer1_4;
    QLineEdit *temp1Edit;
    QHBoxLayout *hboxLayout43;
    QLabel *temp2Label;
    QSpacerItem *Spacer2_4;
    QLineEdit *temp2Edit;
    QHBoxLayout *hboxLayout44;
    QLabel *temp3Label;
    QSpacerItem *Spacer3_3;
    QLineEdit *temp3Edit;
    QHBoxLayout *hboxLayout45;
    QLabel *temp4Label;
    QSpacerItem *Spacer4_4;
    QLineEdit *temp4Edit;
    QComboBox *imodeComboBox;
    QHBoxLayout *hboxLayout46;
    QLabel *temp5Label;
    QSpacerItem *Spacer36;
    QLineEdit *temp5Edit;
    QHBoxLayout *hboxLayout47;
    QLabel *temp6Label;
    QSpacerItem *Spacer37_2;
    QLineEdit *temp6Edit;
    QHBoxLayout *hboxLayout48;
    QLabel *temp7Label;
    QSpacerItem *Spacer38_2;
    QLineEdit *temp7Edit;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *phasespaceGroupBox;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *hboxLayout49;
    QComboBox *phasespaceComboBox;
    QPushButton *phasespacePushButton;
    QGroupBox *src20GroupBox;
    QGridLayout *gridLayout_5;
    QGroupBox *srcinpmodeButtonGroup;
    QHBoxLayout *hboxLayout50;
    QHBoxLayout *hboxLayout51;
    QRadioButton *localRadioButton;
    QRadioButton *externalRadioButton;
    QSpacerItem *spacer56_3;
    QTableWidget *raddistTable;
    QSpacerItem *spacer57_2;
    QVBoxLayout *vboxLayout29;
    QGroupBox *raddistfnameGroupBox;
    QHBoxLayout *hboxLayout52;
    QHBoxLayout *hboxLayout53;
    QComboBox *raddistfnameComboBox;
    QPushButton *raddistfnameButton;
    QGroupBox *ioutrdistGroupBox;
    QHBoxLayout *hboxLayout54;
    QCheckBox *ioutrdistCheckBox;
    QWidget *MCTPtab;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_17;
    QHBoxLayout *hboxLayout55;
    QVBoxLayout *vboxLayout30;
    QGroupBox *PairAngSamplingGroupBox;
    QHBoxLayout *hboxLayout56;
    QComboBox *PairAngSamplingComboBox;
    QGroupBox *BremsAngSamplingGroupBox;
    QHBoxLayout *hboxLayout57;
    QComboBox *BremsAngSamplingComboBox;
    QGroupBox *BremsXSectionGroupBox;
    QHBoxLayout *hboxLayout58;
    QComboBox *BremsXSectionComboBox;
    QVBoxLayout *vboxLayout31;
    QGroupBox *estep_algorithmGroupBox;
    QHBoxLayout *hboxLayout59;
    QComboBox *estep_algorithmComboBox;
    QGroupBox *EIIgroupBox;
    QVBoxLayout *vboxLayout32;
    QComboBox *EIIcomboBox;
    QGroupBox *BCAGroupBox;
    QHBoxLayout *hboxLayout60;
    QComboBox *BCAComboBox;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *GECUTGroupBox;
    QGridLayout *gridLayout_8;
    QLineEdit *GECUTEdit;
    QGroupBox *GPCUTGroupBox;
    QGridLayout *gridLayout_15;
    QLineEdit *GPCUTEdit;
    QGroupBox *GSMAXGroupBox;
    QGridLayout *gridLayout_14;
    QLineEdit *GSMAXEdit;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_13;
    QGroupBox *RayleighgroupBox;
    QGridLayout *gridLayout_9;
    QComboBox *RayleighcomboBox;
    QGroupBox *PEgroupBox;
    QGridLayout *gridLayout_11;
    QComboBox *PEcomboBox;
    QGroupBox *BoundComptongroupBox;
    QGridLayout *gridLayout_6;
    QComboBox *BoundComptoncomboBox;
    QGroupBox *RelaxationgroupBox;
    QGridLayout *gridLayout_10;
    QComboBox *RelaxationcomboBox;
    QVBoxLayout *verticalLayout_19;
    QCheckBox *ECUTCheckBox;
    QCheckBox *PCUTCheckBox;
    QCheckBox *SMAXCheckBox;
    QVBoxLayout *vboxLayout33;
    QGroupBox *photonXSectiongroupBox;
    QVBoxLayout *vboxLayout34;
    QComboBox *photonXSectioncomboBox;
    QCheckBox *photonXSectionOutCheckBox;
    QHBoxLayout *horizontalLayout_27;
    QGroupBox *customFFgroupBox;
    QGridLayout *gridLayout_12;
    QTableWidget *customFFTable;
    QVBoxLayout *verticalLayout_27;
    QVBoxLayout *vboxLayout35;
    QVBoxLayout *vboxLayout36;
    QHBoxLayout *hboxLayout61;
    QLabel *ESTEPELabel;
    QLineEdit *ESTEPEEdit;
    QHBoxLayout *hboxLayout62;
    QLabel *XImaxLabel;
    QLineEdit *XImaxEdit;
    QHBoxLayout *hboxLayout63;
    QLabel *SkinDepthLabel;
    QLineEdit *SkinDepthEdit;
    QCheckBox *SpinCheckBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *VRtab;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *vboxLayout37;
    QGroupBox *PhotonForcingGroupBox;
    QVBoxLayout *vboxLayout38;
    QVBoxLayout *vboxLayout39;
    QCheckBox *PhotonForcingCheckBox;
    QHBoxLayout *hboxLayout64;
    QVBoxLayout *vboxLayout40;
    QLabel *StartForcingLabel;
    QLabel *StopForcingLabel;
    QVBoxLayout *vboxLayout41;
    QSpinBox *StartForcingSpinBox;
    QSpinBox *StopForcingSpinBox;
    QGroupBox *ExpTrafoCGroupBox;
    QHBoxLayout *hboxLayout65;
    QHBoxLayout *hboxLayout66;
    QLabel *ExpTrafoCLabel;
    QLineEdit *ExpTrafoCEdit;
    QGroupBox *RRGroupBox;
    QVBoxLayout *vboxLayout42;
    QVBoxLayout *vboxLayout43;
    QHBoxLayout *hboxLayout67;
    QLabel *RRDepthLabel;
    QLineEdit *RRDepthEdit;
    QHBoxLayout *hboxLayout68;
    QLabel *RRFractionLabel;
    QLineEdit *RRFractionEdit;
    QGroupBox *photonSplitGroupBox;
    QHBoxLayout *hboxLayout69;
    QHBoxLayout *hboxLayout70;
    QSpinBox *photonSplitSpinBox;
    QLabel *photonSplitLabel;
    QVBoxLayout *vboxLayout44;
    QGroupBox *CSEnhancementGroupBox;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TextLabel8;
    QSpinBox *CSEnhancementSpinBox;
    QVBoxLayout *vboxLayout45;
    QVBoxLayout *vboxLayout46;
    QLabel *CSEnhancement_RegionsLabel1;
    QLabel *CSEnhancement_RegionsLabel2;
    QHBoxLayout *hboxLayout71;
    QTableWidget *CSEnhancementTable;
    QVBoxLayout *vboxLayout47;
    QGroupBox *ESAVEINGroupBox;
    QVBoxLayout *vboxLayout48;
    QVBoxLayout *vboxLayout49;
    QCheckBox *eRangeRejCheckBox;
    QHBoxLayout *hboxLayout72;
    QLabel *ESAVEINLabel;
    QSpacerItem *Spacer74;
    QLineEdit *ESAVEINEdit;
    QGroupBox *BremsSplitGroupBox;
    QVBoxLayout *vboxLayout50;
    QVBoxLayout *vboxLayout51;
    QHBoxLayout *hboxLayout73;
    QSpinBox *BremsSplitSpinBox;
    QLabel *BremsSplitTextLabel;
    QCheckBox *BremsSplitCheckBox;
    QCheckBox *ChargedPartRRCheckBox;
    QWidget *MCTPRegTab;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_43;
    QHBoxLayout *horizontalLayout_26;
    QGroupBox *PCUTGroupBox;
    QVBoxLayout *verticalLayout_40;
    QTableWidget *PCUTTable;
    QGroupBox *ECUTGroupBox;
    QVBoxLayout *verticalLayout_41;
    QTableWidget *ECUTTable;
    QGroupBox *SMAXGroupBox;
    QVBoxLayout *verticalLayout_42;
    QTableWidget *SMAXTable;
    QHBoxLayout *horizontalLayout_25;
    QGroupBox *BoundComptonGroupBox;
    QVBoxLayout *verticalLayout_39;
    QTableWidget *BoundComptonTable;
    QGroupBox *RelaxationsGroupBox;
    QVBoxLayout *verticalLayout_38;
    QTableWidget *RelaxationsTable;
    QGroupBox *PEAngSamGroupBox;
    QVBoxLayout *verticalLayout_29;
    QTableWidget *PEAngSamplingTable;
    QGroupBox *RayleighGroupBox;
    QVBoxLayout *verticalLayout_32;
    QTableWidget *RayleighTable;
    QWidget *PLOTtab;
    QGridLayout *gridLayout_22;
    QVBoxLayout *verticalLayout_25;
    QCheckBox *plotCheckBox;
    QGroupBox *PlotGroupBox;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_24;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *LinePrnOutCheckBox;
    QCheckBox *ExtPlotOutCheckBox;
    QGroupBox *ExternalPlotTypeGroupBox;
    QGridLayout *gridLayout_20;
    QComboBox *ExternalPlotTypeComboBox;
    QGroupBox *PlotRegionsGroupBox;
    QHBoxLayout *horizontalLayout_23;
    QTableWidget *PlotRegionsTable;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_21;
    QVBoxLayout *verticalLayout_22;
    QCheckBox *eminusPlotCheckBox;
    QCheckBox *eplusPlotCheckBox;
    QVBoxLayout *verticalLayout_23;
    QCheckBox *gammaPlotCheckBox;
    QCheckBox *ePlotCheckBox;
    QGroupBox *DrawFluPlotsGroupBox;
    QGridLayout *gridLayout_19;
    QComboBox *DrawFluPlotsComboBox;
    QGroupBox *SpecPlotGroupBox;
    QHBoxLayout *horizontalLayout_14;
    QTableWidget *SpecPlotTable;

    void setupUi(QWidget *InputRZForm)
    {
        if (InputRZForm->objectName().isEmpty())
            InputRZForm->setObjectName(QStringLiteral("InputRZForm"));
        InputRZForm->resize(1024, 780);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputRZForm->sizePolicy().hasHeightForWidth());
        InputRZForm->setSizePolicy(sizePolicy);
        InputRZForm->setMinimumSize(QSize(900, 780));
        InputRZForm->setMaximumSize(QSize(1024, 820));
        InputRZForm->setMouseTracking(false);
        gridLayout_7 = new QGridLayout(InputRZForm);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        bannerLabel = new QLabel(InputRZForm);
        bannerLabel->setObjectName(QStringLiteral("bannerLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(232);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bannerLabel->sizePolicy().hasHeightForWidth());
        bannerLabel->setSizePolicy(sizePolicy1);
        bannerLabel->setMinimumSize(QSize(860, 88));
        bannerLabel->setMaximumSize(QSize(800, 88));
        bannerLabel->setFrameShape(QFrame::Box);
        bannerLabel->setFrameShadow(QFrame::Plain);
        bannerLabel->setLineWidth(0);
        bannerLabel->setScaledContents(true);
        bannerLabel->setAlignment(Qt::AlignVCenter);
        bannerLabel->setWordWrap(false);

        gridLayout_7->addWidget(bannerLabel, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        ButtonGroup4 = new QGroupBox(InputRZForm);
        ButtonGroup4->setObjectName(QStringLiteral("ButtonGroup4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ButtonGroup4->sizePolicy().hasHeightForWidth());
        ButtonGroup4->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(ButtonGroup4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        ExecuteButton = new QPushButton(ButtonGroup4);
        ExecuteButton->setObjectName(QStringLiteral("ExecuteButton"));
        ExecuteButton->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ExecuteButton->sizePolicy().hasHeightForWidth());
        ExecuteButton->setSizePolicy(sizePolicy3);
        ExecuteButton->setChecked(false);
        ExecuteButton->setAutoDefault(false);

        horizontalLayout_15->addWidget(ExecuteButton);

        PreviewRZButton = new QPushButton(ButtonGroup4);
        PreviewRZButton->setObjectName(QStringLiteral("PreviewRZButton"));
        PreviewRZButton->setEnabled(false);
        PreviewRZButton->setAutoDefault(false);

        horizontalLayout_15->addWidget(PreviewRZButton);

        PrintButton = new QPushButton(ButtonGroup4);
        PrintButton->setObjectName(QStringLiteral("PrintButton"));
        PrintButton->setEnabled(false);
        PrintButton->setAutoDefault(false);

        horizontalLayout_15->addWidget(PrintButton);

        compileButton = new QPushButton(ButtonGroup4);
        compileButton->setObjectName(QStringLiteral("compileButton"));
        compileButton->setEnabled(true);
        compileButton->setAutoDefault(false);

        horizontalLayout_15->addWidget(compileButton);


        verticalLayout->addLayout(horizontalLayout_15);


        horizontalLayout_17->addWidget(ButtonGroup4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_2);

        ConfirmButtonGroup = new QGroupBox(InputRZForm);
        ConfirmButtonGroup->setObjectName(QStringLiteral("ConfirmButtonGroup"));
        verticalLayout_31 = new QVBoxLayout(ConfirmButtonGroup);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QStringLiteral("verticalLayout_31"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        ApplyButton = new QPushButton(ConfirmButtonGroup);
        ApplyButton->setObjectName(QStringLiteral("ApplyButton"));
        ApplyButton->setAutoDefault(false);

        horizontalLayout_16->addWidget(ApplyButton);

        CancelButton = new QPushButton(ConfirmButtonGroup);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setAutoDefault(false);

        horizontalLayout_16->addWidget(CancelButton);

        HelpButton = new QPushButton(ConfirmButtonGroup);
        HelpButton->setObjectName(QStringLiteral("HelpButton"));
        HelpButton->setAutoDefault(false);

        horizontalLayout_16->addWidget(HelpButton);

        AboutButton = new QPushButton(ConfirmButtonGroup);
        AboutButton->setObjectName(QStringLiteral("AboutButton"));

        horizontalLayout_16->addWidget(AboutButton);


        verticalLayout_31->addLayout(horizontalLayout_16);


        horizontalLayout_17->addWidget(ConfirmButtonGroup);


        gridLayout_7->addLayout(horizontalLayout_17, 2, 0, 1, 1);

        TabWidgetRZ = new QTabWidget(InputRZForm);
        TabWidgetRZ->setObjectName(QStringLiteral("TabWidgetRZ"));
        TabWidgetRZ->setEnabled(true);
        sizePolicy2.setHeightForWidth(TabWidgetRZ->sizePolicy().hasHeightForWidth());
        TabWidgetRZ->setSizePolicy(sizePolicy2);
        TabWidgetRZ->setMinimumSize(QSize(0, 0));
        TabWidgetRZ->setMaximumSize(QSize(30000, 30000));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        TabWidgetRZ->setFont(font);
        TabWidgetRZ->setMouseTracking(false);
        TabWidgetRZ->setTabPosition(QTabWidget::North);
        TabWidgetRZ->setTabShape(QTabWidget::Rounded);
        TabWidgetRZ->setIconSize(QSize(11, 16));
        TabWidgetRZ->setElideMode(Qt::ElideNone);
        TabWidgetRZ->setUsesScrollButtons(true);
        TabWidgetRZ->setDocumentMode(false);
        TabWidgetRZ->setTabsClosable(false);
        TabWidgetRZ->setMovable(false);
        GItab = new QWidget();
        GItab->setObjectName(QStringLiteral("GItab"));
        verticalLayout_30 = new QVBoxLayout(GItab);
        verticalLayout_30->setSpacing(6);
        verticalLayout_30->setContentsMargins(11, 11, 11, 11);
        verticalLayout_30->setObjectName(QStringLiteral("verticalLayout_30"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        UserCodeButtonGroup = new QGroupBox(GItab);
        UserCodeButtonGroup->setObjectName(QStringLiteral("UserCodeButtonGroup"));
        vboxLayout = new QVBoxLayout(UserCodeButtonGroup);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        cavrzRadioButton = new QRadioButton(UserCodeButtonGroup);
        cavrzRadioButton->setObjectName(QStringLiteral("cavrzRadioButton"));
        cavrzRadioButton->setChecked(true);

        vboxLayout->addWidget(cavrzRadioButton);

        dosrzRadioButton = new QRadioButton(UserCodeButtonGroup);
        dosrzRadioButton->setObjectName(QStringLiteral("dosrzRadioButton"));

        vboxLayout->addWidget(dosrzRadioButton);

        sprrzRadioButton = new QRadioButton(UserCodeButtonGroup);
        sprrzRadioButton->setObjectName(QStringLiteral("sprrzRadioButton"));
        sprrzRadioButton->setFocusPolicy(Qt::NoFocus);

        vboxLayout->addWidget(sprrzRadioButton);

        flurzRadioButton = new QRadioButton(UserCodeButtonGroup);
        flurzRadioButton->setObjectName(QStringLiteral("flurzRadioButton"));

        vboxLayout->addWidget(flurzRadioButton);


        hboxLayout->addWidget(UserCodeButtonGroup);

        TargetbuttonGroup = new QGroupBox(GItab);
        TargetbuttonGroup->setObjectName(QStringLiteral("TargetbuttonGroup"));
        vboxLayout1 = new QVBoxLayout(TargetbuttonGroup);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        OptradioButton = new QRadioButton(TargetbuttonGroup);
        OptradioButton->setObjectName(QStringLiteral("OptradioButton"));
        OptradioButton->setChecked(true);

        vboxLayout2->addWidget(OptradioButton);

        NoOptradioButton = new QRadioButton(TargetbuttonGroup);
        NoOptradioButton->setObjectName(QStringLiteral("NoOptradioButton"));

        vboxLayout2->addWidget(NoOptradioButton);

        DebugradioButton = new QRadioButton(TargetbuttonGroup);
        DebugradioButton->setObjectName(QStringLiteral("DebugradioButton"));

        vboxLayout2->addWidget(DebugradioButton);

        CleanradioButton = new QRadioButton(TargetbuttonGroup);
        CleanradioButton->setObjectName(QStringLiteral("CleanradioButton"));

        vboxLayout2->addWidget(CleanradioButton);


        vboxLayout1->addLayout(vboxLayout2);


        hboxLayout->addWidget(TargetbuttonGroup);

        UserCodeAreaButtonGroup = new QGroupBox(GItab);
        UserCodeAreaButtonGroup->setObjectName(QStringLiteral("UserCodeAreaButtonGroup"));
        vboxLayout3 = new QVBoxLayout(UserCodeAreaButtonGroup);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setContentsMargins(11, 11, 11, 11);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(6);
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        HOMERadioButton = new QRadioButton(UserCodeAreaButtonGroup);
        HOMERadioButton->setObjectName(QStringLiteral("HOMERadioButton"));
        HOMERadioButton->setChecked(true);

        vboxLayout4->addWidget(HOMERadioButton);

        HEN_HOUSERadioButton = new QRadioButton(UserCodeAreaButtonGroup);
        HEN_HOUSERadioButton->setObjectName(QStringLiteral("HEN_HOUSERadioButton"));

        vboxLayout4->addWidget(HEN_HOUSERadioButton);

        OtherAreaRadioButton = new QRadioButton(UserCodeAreaButtonGroup);
        OtherAreaRadioButton->setObjectName(QStringLiteral("OtherAreaRadioButton"));

        vboxLayout4->addWidget(OtherAreaRadioButton);


        vboxLayout3->addLayout(vboxLayout4);


        hboxLayout->addWidget(UserCodeAreaButtonGroup);

        PEGSDataAreaButtonGroup = new QGroupBox(GItab);
        PEGSDataAreaButtonGroup->setObjectName(QStringLiteral("PEGSDataAreaButtonGroup"));
        vboxLayout5 = new QVBoxLayout(PEGSDataAreaButtonGroup);
        vboxLayout5->setSpacing(6);
        vboxLayout5->setContentsMargins(11, 11, 11, 11);
        vboxLayout5->setObjectName(QStringLiteral("vboxLayout5"));
        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(6);
        vboxLayout6->setObjectName(QStringLiteral("vboxLayout6"));
        HOMEPegsRadioButton = new QRadioButton(PEGSDataAreaButtonGroup);
        HOMEPegsRadioButton->setObjectName(QStringLiteral("HOMEPegsRadioButton"));

        vboxLayout6->addWidget(HOMEPegsRadioButton);

        HEN_HOUSEPegsRadioButton = new QRadioButton(PEGSDataAreaButtonGroup);
        HEN_HOUSEPegsRadioButton->setObjectName(QStringLiteral("HEN_HOUSEPegsRadioButton"));
        HEN_HOUSEPegsRadioButton->setChecked(true);

        vboxLayout6->addWidget(HEN_HOUSEPegsRadioButton);

        OtherPegsAreaRadioButton = new QRadioButton(PEGSDataAreaButtonGroup);
        OtherPegsAreaRadioButton->setObjectName(QStringLiteral("OtherPegsAreaRadioButton"));

        vboxLayout6->addWidget(OtherPegsAreaRadioButton);

        PEGSlessRadioButton = new QRadioButton(PEGSDataAreaButtonGroup);
        PEGSlessRadioButton->setObjectName(QStringLiteral("PEGSlessRadioButton"));

        vboxLayout6->addWidget(PEGSlessRadioButton);


        vboxLayout5->addLayout(vboxLayout6);


        hboxLayout->addWidget(PEGSDataAreaButtonGroup);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        TitleGroupBox = new QGroupBox(GItab);
        TitleGroupBox->setObjectName(QStringLiteral("TitleGroupBox"));
        vboxLayout7 = new QVBoxLayout(TitleGroupBox);
        vboxLayout7->setSpacing(6);
        vboxLayout7->setContentsMargins(11, 11, 11, 11);
        vboxLayout7->setObjectName(QStringLiteral("vboxLayout7"));
        TitleEdit = new QLineEdit(TitleGroupBox);
        TitleEdit->setObjectName(QStringLiteral("TitleEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(TitleEdit->sizePolicy().hasHeightForWidth());
        TitleEdit->setSizePolicy(sizePolicy4);
        TitleEdit->setMaxLength(80);

        vboxLayout7->addWidget(TitleEdit);


        gridLayout->addWidget(TitleGroupBox, 0, 0, 1, 1);

        theguyLabel = new QLabel(GItab);
        theguyLabel->setObjectName(QStringLiteral("theguyLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(theguyLabel->sizePolicy().hasHeightForWidth());
        theguyLabel->setSizePolicy(sizePolicy5);
        theguyLabel->setMinimumSize(QSize(153, 200));
        theguyLabel->setMaximumSize(QSize(181, 185));
        theguyLabel->setFrameShape(QFrame::Box);
        theguyLabel->setLineWidth(0);
        theguyLabel->setScaledContents(true);
        theguyLabel->setWordWrap(false);

        gridLayout->addWidget(theguyLabel, 0, 1, 2, 1);


        verticalLayout_28->addLayout(gridLayout);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        InputFileGroupBox = new QGroupBox(GItab);
        InputFileGroupBox->setObjectName(QStringLiteral("InputFileGroupBox"));
        horizontalLayout_21 = new QHBoxLayout(InputFileGroupBox);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        InputFileComboBox = new QComboBox(InputFileGroupBox);
        InputFileComboBox->setObjectName(QStringLiteral("InputFileComboBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(232);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(InputFileComboBox->sizePolicy().hasHeightForWidth());
        InputFileComboBox->setSizePolicy(sizePolicy6);
        InputFileComboBox->setMinimumSize(QSize(0, 28));
        InputFileComboBox->setEditable(true);
        InputFileComboBox->setInsertPolicy(QComboBox::InsertAtTop);
        InputFileComboBox->setAutoCompletion(true);
        InputFileComboBox->setDuplicatesEnabled(false);

        horizontalLayout_18->addWidget(InputFileComboBox);

        OpenFileButton = new QPushButton(InputFileGroupBox);
        OpenFileButton->setObjectName(QStringLiteral("OpenFileButton"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(OpenFileButton->sizePolicy().hasHeightForWidth());
        OpenFileButton->setSizePolicy(sizePolicy7);
        OpenFileButton->setMinimumSize(QSize(0, 29));
        OpenFileButton->setAutoDefault(false);

        horizontalLayout_18->addWidget(OpenFileButton);


        horizontalLayout_21->addLayout(horizontalLayout_18);


        verticalLayout_26->addWidget(InputFileGroupBox);

        pegs4GroupBox = new QGroupBox(GItab);
        pegs4GroupBox->setObjectName(QStringLiteral("pegs4GroupBox"));
        hboxLayout1 = new QHBoxLayout(pegs4GroupBox);
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(11, 11, 11, 11);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        pegs4ComboBox = new QComboBox(pegs4GroupBox);
        pegs4ComboBox->setObjectName(QStringLiteral("pegs4ComboBox"));
        sizePolicy6.setHeightForWidth(pegs4ComboBox->sizePolicy().hasHeightForWidth());
        pegs4ComboBox->setSizePolicy(sizePolicy6);
        pegs4ComboBox->setMinimumSize(QSize(0, 28));
        pegs4ComboBox->setEditable(true);
        pegs4ComboBox->setInsertPolicy(QComboBox::InsertAtTop);
        pegs4ComboBox->setAutoCompletion(true);

        hboxLayout2->addWidget(pegs4ComboBox);

        Pegs4FileButton = new QPushButton(pegs4GroupBox);
        Pegs4FileButton->setObjectName(QStringLiteral("Pegs4FileButton"));
        sizePolicy7.setHeightForWidth(Pegs4FileButton->sizePolicy().hasHeightForWidth());
        Pegs4FileButton->setSizePolicy(sizePolicy7);
        Pegs4FileButton->setMinimumSize(QSize(0, 29));
        Pegs4FileButton->setAutoDefault(false);

        hboxLayout2->addWidget(Pegs4FileButton);


        hboxLayout1->addLayout(hboxLayout2);


        verticalLayout_26->addWidget(pegs4GroupBox);

        groupBox57 = new QGroupBox(GItab);
        groupBox57->setObjectName(QStringLiteral("groupBox57"));
        hboxLayout3 = new QHBoxLayout(groupBox57);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(11, 11, 11, 11);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setSpacing(6);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        CONFcomboBox = new QComboBox(groupBox57);
        CONFcomboBox->setObjectName(QStringLiteral("CONFcomboBox"));
        sizePolicy6.setHeightForWidth(CONFcomboBox->sizePolicy().hasHeightForWidth());
        CONFcomboBox->setSizePolicy(sizePolicy6);
        CONFcomboBox->setMinimumSize(QSize(0, 28));
        CONFcomboBox->setEditable(true);
        CONFcomboBox->setInsertPolicy(QComboBox::InsertAtTop);
        CONFcomboBox->setAutoCompletion(true);
        CONFcomboBox->setDuplicatesEnabled(false);

        hboxLayout4->addWidget(CONFcomboBox);

        SPECButton = new QPushButton(groupBox57);
        SPECButton->setObjectName(QStringLiteral("SPECButton"));
        sizePolicy7.setHeightForWidth(SPECButton->sizePolicy().hasHeightForWidth());
        SPECButton->setSizePolicy(sizePolicy7);
        SPECButton->setMinimumSize(QSize(0, 29));

        hboxLayout4->addWidget(SPECButton);


        hboxLayout3->addLayout(hboxLayout4);


        verticalLayout_26->addWidget(groupBox57);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setSpacing(6);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        ConfigurationButton = new QPushButton(GItab);
        ConfigurationButton->setObjectName(QStringLiteral("ConfigurationButton"));

        hboxLayout5->addWidget(ConfigurationButton);

        spacer45 = new QSpacerItem(521, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacer45);

        logfileButton = new QPushButton(GItab);
        logfileButton->setObjectName(QStringLiteral("logfileButton"));
        logfileButton->setEnabled(false);
        logfileButton->setAutoDefault(false);

        hboxLayout5->addWidget(logfileButton);


        verticalLayout_26->addLayout(hboxLayout5);


        verticalLayout_28->addLayout(verticalLayout_26);


        verticalLayout_30->addLayout(verticalLayout_28);

        TabWidgetRZ->addTab(GItab, QString());
        IOtab = new QWidget();
        IOtab->setObjectName(QStringLiteral("IOtab"));
        hboxLayout6 = new QHBoxLayout(IOtab);
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(11, 11, 11, 11);
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setSpacing(6);
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        vboxLayout8 = new QVBoxLayout();
        vboxLayout8->setSpacing(6);
        vboxLayout8->setObjectName(QStringLiteral("vboxLayout8"));
        randNButtonGroup = new QGroupBox(IOtab);
        randNButtonGroup->setObjectName(QStringLiteral("randNButtonGroup"));
        vboxLayout9 = new QVBoxLayout(randNButtonGroup);
        vboxLayout9->setSpacing(6);
        vboxLayout9->setContentsMargins(11, 11, 11, 11);
        vboxLayout9->setObjectName(QStringLiteral("vboxLayout9"));
        vboxLayout10 = new QVBoxLayout();
        vboxLayout10->setSpacing(6);
        vboxLayout10->setObjectName(QStringLiteral("vboxLayout10"));
        noRandRadioButton = new QRadioButton(randNButtonGroup);
        noRandRadioButton->setObjectName(QStringLiteral("noRandRadioButton"));
        noRandRadioButton->setChecked(true);

        vboxLayout10->addWidget(noRandRadioButton);

        lastRandRadioButton = new QRadioButton(randNButtonGroup);
        lastRandRadioButton->setObjectName(QStringLiteral("lastRandRadioButton"));

        vboxLayout10->addWidget(lastRandRadioButton);

        allRandRadioButton = new QRadioButton(randNButtonGroup);
        allRandRadioButton->setObjectName(QStringLiteral("allRandRadioButton"));

        vboxLayout10->addWidget(allRandRadioButton);


        vboxLayout9->addLayout(vboxLayout10);


        vboxLayout8->addWidget(randNButtonGroup);

        DoseRegGroupBox = new QGroupBox(IOtab);
        DoseRegGroupBox->setObjectName(QStringLiteral("DoseRegGroupBox"));
        DoseRegGroupBox->setEnabled(true);
        vboxLayout11 = new QVBoxLayout(DoseRegGroupBox);
        vboxLayout11->setSpacing(6);
        vboxLayout11->setContentsMargins(11, 11, 11, 11);
        vboxLayout11->setObjectName(QStringLiteral("vboxLayout11"));
        vboxLayout12 = new QVBoxLayout();
        vboxLayout12->setSpacing(6);
        vboxLayout12->setObjectName(QStringLiteral("vboxLayout12"));
        hboxLayout8 = new QHBoxLayout();
        hboxLayout8->setSpacing(6);
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        minPlnTextLabel = new QLabel(DoseRegGroupBox);
        minPlnTextLabel->setObjectName(QStringLiteral("minPlnTextLabel"));
        minPlnTextLabel->setWordWrap(false);

        hboxLayout8->addWidget(minPlnTextLabel);

        Spacer1 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(Spacer1);

        minPlnSpinBox = new QSpinBox(DoseRegGroupBox);
        minPlnSpinBox->setObjectName(QStringLiteral("minPlnSpinBox"));
        minPlnSpinBox->setMinimum(1);
        minPlnSpinBox->setMaximum(1001);
        minPlnSpinBox->setValue(1);

        hboxLayout8->addWidget(minPlnSpinBox);


        vboxLayout12->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
        hboxLayout9->setSpacing(6);
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        maxPlnTextLabel = new QLabel(DoseRegGroupBox);
        maxPlnTextLabel->setObjectName(QStringLiteral("maxPlnTextLabel"));
        maxPlnTextLabel->setWordWrap(false);

        hboxLayout9->addWidget(maxPlnTextLabel);

        Spacer2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout9->addItem(Spacer2);

        maxPlnSpinBox = new QSpinBox(DoseRegGroupBox);
        maxPlnSpinBox->setObjectName(QStringLiteral("maxPlnSpinBox"));
        maxPlnSpinBox->setMinimum(1);
        maxPlnSpinBox->setMaximum(1001);
        maxPlnSpinBox->setValue(61);

        hboxLayout9->addWidget(maxPlnSpinBox);


        vboxLayout12->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
        hboxLayout10->setSpacing(6);
        hboxLayout10->setObjectName(QStringLiteral("hboxLayout10"));
        minCylTextLabel = new QLabel(DoseRegGroupBox);
        minCylTextLabel->setObjectName(QStringLiteral("minCylTextLabel"));
        minCylTextLabel->setWordWrap(false);

        hboxLayout10->addWidget(minCylTextLabel);

        Spacer3 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout10->addItem(Spacer3);

        minCylSpinBox = new QSpinBox(DoseRegGroupBox);
        minCylSpinBox->setObjectName(QStringLiteral("minCylSpinBox"));
        minCylSpinBox->setMaximum(1000);

        hboxLayout10->addWidget(minCylSpinBox);


        vboxLayout12->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
        hboxLayout11->setSpacing(6);
        hboxLayout11->setObjectName(QStringLiteral("hboxLayout11"));
        maxCylTextLabel = new QLabel(DoseRegGroupBox);
        maxCylTextLabel->setObjectName(QStringLiteral("maxCylTextLabel"));
        maxCylTextLabel->setWordWrap(false);

        hboxLayout11->addWidget(maxCylTextLabel);

        Spacer4 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout11->addItem(Spacer4);

        maxCylSpinBox = new QSpinBox(DoseRegGroupBox);
        maxCylSpinBox->setObjectName(QStringLiteral("maxCylSpinBox"));
        maxCylSpinBox->setMaximum(1000);
        maxCylSpinBox->setValue(60);

        hboxLayout11->addWidget(maxCylSpinBox);


        vboxLayout12->addLayout(hboxLayout11);


        vboxLayout11->addLayout(vboxLayout12);


        vboxLayout8->addWidget(DoseRegGroupBox);

        Frame4 = new QFrame(IOtab);
        Frame4->setObjectName(QStringLiteral("Frame4"));
        Frame4->setFrameShape(QFrame::StyledPanel);
        Frame4->setFrameShadow(QFrame::Sunken);
        vboxLayout13 = new QVBoxLayout(Frame4);
        vboxLayout13->setSpacing(6);
        vboxLayout13->setContentsMargins(11, 11, 11, 11);
        vboxLayout13->setObjectName(QStringLiteral("vboxLayout13"));
        storeDataCheckBox = new QCheckBox(Frame4);
        storeDataCheckBox->setObjectName(QStringLiteral("storeDataCheckBox"));
        storeDataCheckBox->setChecked(true);

        vboxLayout13->addWidget(storeDataCheckBox);


        vboxLayout8->addWidget(Frame4);

        spacer41 = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(spacer41);


        hboxLayout7->addLayout(vboxLayout8);

        vboxLayout14 = new QVBoxLayout();
        vboxLayout14->setSpacing(6);
        vboxLayout14->setObjectName(QStringLiteral("vboxLayout14"));
        Frame6 = new QFrame(IOtab);
        Frame6->setObjectName(QStringLiteral("Frame6"));
        Frame6->setFrameShape(QFrame::StyledPanel);
        Frame6->setFrameShadow(QFrame::Sunken);
        vboxLayout15 = new QVBoxLayout(Frame6);
        vboxLayout15->setSpacing(6);
        vboxLayout15->setContentsMargins(11, 11, 11, 11);
        vboxLayout15->setObjectName(QStringLiteral("vboxLayout15"));
        vboxLayout16 = new QVBoxLayout();
        vboxLayout16->setSpacing(6);
        vboxLayout16->setObjectName(QStringLiteral("vboxLayout16"));
        hboxLayout12 = new QHBoxLayout();
        hboxLayout12->setSpacing(6);
        hboxLayout12->setObjectName(QStringLiteral("hboxLayout12"));
        outoptTextLabel = new QLabel(Frame6);
        outoptTextLabel->setObjectName(QStringLiteral("outoptTextLabel"));
        outoptTextLabel->setWordWrap(false);

        hboxLayout12->addWidget(outoptTextLabel);

        Spacer78 = new QSpacerItem(21, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout12->addItem(Spacer78);

        outoptComboBox = new QComboBox(Frame6);
        outoptComboBox->setObjectName(QStringLiteral("outoptComboBox"));
        sizePolicy4.setHeightForWidth(outoptComboBox->sizePolicy().hasHeightForWidth());
        outoptComboBox->setSizePolicy(sizePolicy4);
        outoptComboBox->setMaxCount(6);

        hboxLayout12->addWidget(outoptComboBox);


        vboxLayout16->addLayout(hboxLayout12);

        hboxLayout13 = new QHBoxLayout();
        hboxLayout13->setSpacing(6);
        hboxLayout13->setObjectName(QStringLiteral("hboxLayout13"));
        etransportLabel = new QLabel(Frame6);
        etransportLabel->setObjectName(QStringLiteral("etransportLabel"));
        etransportLabel->setEnabled(false);
        etransportLabel->setWordWrap(false);

        hboxLayout13->addWidget(etransportLabel);

        Spacer5 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout13->addItem(Spacer5);

        etransportComboBox = new QComboBox(Frame6);
        etransportComboBox->setObjectName(QStringLiteral("etransportComboBox"));
        etransportComboBox->setEnabled(false);
        etransportComboBox->setMaxCount(6);

        hboxLayout13->addWidget(etransportComboBox);


        vboxLayout16->addLayout(hboxLayout13);

        hboxLayout14 = new QHBoxLayout();
        hboxLayout14->setSpacing(6);
        hboxLayout14->setObjectName(QStringLiteral("hboxLayout14"));
        iwatchTextLabel = new QLabel(Frame6);
        iwatchTextLabel->setObjectName(QStringLiteral("iwatchTextLabel"));
        iwatchTextLabel->setWordWrap(false);

        hboxLayout14->addWidget(iwatchTextLabel);

        Spacer8 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout14->addItem(Spacer8);

        iwatchComboBox = new QComboBox(Frame6);
        iwatchComboBox->setObjectName(QStringLiteral("iwatchComboBox"));

        hboxLayout14->addWidget(iwatchComboBox);


        vboxLayout16->addLayout(hboxLayout14);

        hboxLayout15 = new QHBoxLayout();
        hboxLayout15->setSpacing(6);
        hboxLayout15->setObjectName(QStringLiteral("hboxLayout15"));
        restartTextLabel = new QLabel(Frame6);
        restartTextLabel->setObjectName(QStringLiteral("restartTextLabel"));
        restartTextLabel->setWordWrap(false);

        hboxLayout15->addWidget(restartTextLabel);

        Spacer7 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout15->addItem(Spacer7);

        irestartComboBox = new QComboBox(Frame6);
        irestartComboBox->setObjectName(QStringLiteral("irestartComboBox"));
        irestartComboBox->setMaxCount(6);

        hboxLayout15->addWidget(irestartComboBox);


        vboxLayout16->addLayout(hboxLayout15);


        vboxLayout15->addLayout(vboxLayout16);


        vboxLayout14->addWidget(Frame6);

        SPRRegGroupBox = new QGroupBox(IOtab);
        SPRRegGroupBox->setObjectName(QStringLiteral("SPRRegGroupBox"));
        SPRRegGroupBox->setEnabled(true);
        sproutComboBox = new QComboBox(SPRRegGroupBox);
        sproutComboBox->setObjectName(QStringLiteral("sproutComboBox"));
        sproutComboBox->setGeometry(QRect(192, 25, 120, 22));
        sproutTextLabel = new QLabel(SPRRegGroupBox);
        sproutTextLabel->setObjectName(QStringLiteral("sproutTextLabel"));
        sproutTextLabel->setGeometry(QRect(12, 25, 170, 25));
        sproutTextLabel->setWordWrap(false);
        sproutTable = new QTableWidget(SPRRegGroupBox);
        if (sproutTable->columnCount() < 2)
            sproutTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        sproutTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        sproutTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (sproutTable->rowCount() < 50)
            sproutTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(13, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(14, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(15, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(16, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(17, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(18, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(19, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(20, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(21, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(22, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(23, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(24, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(25, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(26, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(27, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(28, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(29, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(30, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(31, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(32, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(33, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(34, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(35, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(36, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(37, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(38, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(39, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(40, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(41, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(42, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(43, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(44, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(45, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(46, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(47, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(48, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        sproutTable->setVerticalHeaderItem(49, __qtablewidgetitem51);
        sproutTable->setObjectName(QStringLiteral("sproutTable"));
        sproutTable->setGeometry(QRect(9, 54, 251, 170));
        sproutTable->setRowCount(50);
        sproutTable->setProperty("ColumnCount", QVariant(2));

        vboxLayout14->addWidget(SPRRegGroupBox);


        hboxLayout7->addLayout(vboxLayout14);

        vboxLayout17 = new QVBoxLayout();
        vboxLayout17->setSpacing(6);
        vboxLayout17->setObjectName(QStringLiteral("vboxLayout17"));
        PrintFluSpecGroupBox = new QGroupBox(IOtab);
        PrintFluSpecGroupBox->setObjectName(QStringLiteral("PrintFluSpecGroupBox"));
        PrintFluSpeComboBox = new QComboBox(PrintFluSpecGroupBox);
        PrintFluSpeComboBox->setObjectName(QStringLiteral("PrintFluSpeComboBox"));
        PrintFluSpeComboBox->setGeometry(QRect(12, 21, 160, 22));
        ListFluTable = new QTableWidget(PrintFluSpecGroupBox);
        if (ListFluTable->columnCount() < 2)
            ListFluTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        ListFluTable->setHorizontalHeaderItem(0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        ListFluTable->setHorizontalHeaderItem(1, __qtablewidgetitem53);
        if (ListFluTable->rowCount() < 50)
            ListFluTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(1, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(2, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(3, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(4, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(5, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(6, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(7, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(8, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(9, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(10, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(11, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(12, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(13, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(14, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(15, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(16, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(17, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(18, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(19, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(20, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(21, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(22, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(23, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(24, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(25, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(26, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(27, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(28, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(29, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(30, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(31, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(32, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(33, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(34, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(35, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(36, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(37, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(38, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(39, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(40, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(41, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(42, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(43, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(44, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(45, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(46, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(47, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(48, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        ListFluTable->setVerticalHeaderItem(49, __qtablewidgetitem103);
        ListFluTable->setObjectName(QStringLiteral("ListFluTable"));
        ListFluTable->setGeometry(QRect(12, 46, 221, 171));
        ListFluTable->setRowCount(50);
        ListFluTable->setColumnCount(2);

        vboxLayout17->addWidget(PrintFluSpecGroupBox);

        IPRIMARYGroupBox = new QGroupBox(IOtab);
        IPRIMARYGroupBox->setObjectName(QStringLiteral("IPRIMARYGroupBox"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(IPRIMARYGroupBox->sizePolicy().hasHeightForWidth());
        IPRIMARYGroupBox->setSizePolicy(sizePolicy8);
        vboxLayout18 = new QVBoxLayout(IPRIMARYGroupBox);
        vboxLayout18->setSpacing(6);
        vboxLayout18->setContentsMargins(11, 11, 11, 11);
        vboxLayout18->setObjectName(QStringLiteral("vboxLayout18"));
        IPRIMARYComboBox = new QComboBox(IPRIMARYGroupBox);
        IPRIMARYComboBox->setObjectName(QStringLiteral("IPRIMARYComboBox"));

        vboxLayout18->addWidget(IPRIMARYComboBox);


        vboxLayout17->addWidget(IPRIMARYGroupBox);

        sloteFluGroupBox = new QGroupBox(IOtab);
        sloteFluGroupBox->setObjectName(QStringLiteral("sloteFluGroupBox"));
        sloteFluLabel = new QLabel(sloteFluGroupBox);
        sloteFluLabel->setObjectName(QStringLiteral("sloteFluLabel"));
        sloteFluLabel->setGeometry(QRect(21, 21, 70, 28));
        sloteFluLabel->setWordWrap(false);
        sloteFluEdit = new QLineEdit(sloteFluGroupBox);
        sloteFluEdit->setObjectName(QStringLiteral("sloteFluEdit"));
        sloteFluEdit->setGeometry(QRect(93, 25, 90, 20));
        sloteFluTable = new QTableWidget(sloteFluGroupBox);
        if (sloteFluTable->columnCount() < 1)
            sloteFluTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        sloteFluTable->setHorizontalHeaderItem(0, __qtablewidgetitem104);
        if (sloteFluTable->rowCount() < 200)
            sloteFluTable->setRowCount(200);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(0, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(1, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(2, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(3, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(4, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(5, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(6, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(7, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(8, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(9, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(10, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(11, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(12, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(13, __qtablewidgetitem118);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(14, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(15, __qtablewidgetitem120);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(16, __qtablewidgetitem121);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(17, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(18, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(19, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(20, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(21, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(22, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(23, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(24, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(25, __qtablewidgetitem130);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(26, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(27, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(28, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(29, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(30, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(31, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(32, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(33, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(34, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(35, __qtablewidgetitem140);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(36, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(37, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(38, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(39, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(40, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(41, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(42, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(43, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(44, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(45, __qtablewidgetitem150);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(46, __qtablewidgetitem151);
        QTableWidgetItem *__qtablewidgetitem152 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(47, __qtablewidgetitem152);
        QTableWidgetItem *__qtablewidgetitem153 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(48, __qtablewidgetitem153);
        QTableWidgetItem *__qtablewidgetitem154 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(49, __qtablewidgetitem154);
        QTableWidgetItem *__qtablewidgetitem155 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(50, __qtablewidgetitem155);
        QTableWidgetItem *__qtablewidgetitem156 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(51, __qtablewidgetitem156);
        QTableWidgetItem *__qtablewidgetitem157 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(52, __qtablewidgetitem157);
        QTableWidgetItem *__qtablewidgetitem158 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(53, __qtablewidgetitem158);
        QTableWidgetItem *__qtablewidgetitem159 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(54, __qtablewidgetitem159);
        QTableWidgetItem *__qtablewidgetitem160 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(55, __qtablewidgetitem160);
        QTableWidgetItem *__qtablewidgetitem161 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(56, __qtablewidgetitem161);
        QTableWidgetItem *__qtablewidgetitem162 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(57, __qtablewidgetitem162);
        QTableWidgetItem *__qtablewidgetitem163 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(58, __qtablewidgetitem163);
        QTableWidgetItem *__qtablewidgetitem164 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(59, __qtablewidgetitem164);
        QTableWidgetItem *__qtablewidgetitem165 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(60, __qtablewidgetitem165);
        QTableWidgetItem *__qtablewidgetitem166 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(61, __qtablewidgetitem166);
        QTableWidgetItem *__qtablewidgetitem167 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(62, __qtablewidgetitem167);
        QTableWidgetItem *__qtablewidgetitem168 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(63, __qtablewidgetitem168);
        QTableWidgetItem *__qtablewidgetitem169 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(64, __qtablewidgetitem169);
        QTableWidgetItem *__qtablewidgetitem170 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(65, __qtablewidgetitem170);
        QTableWidgetItem *__qtablewidgetitem171 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(66, __qtablewidgetitem171);
        QTableWidgetItem *__qtablewidgetitem172 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(67, __qtablewidgetitem172);
        QTableWidgetItem *__qtablewidgetitem173 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(68, __qtablewidgetitem173);
        QTableWidgetItem *__qtablewidgetitem174 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(69, __qtablewidgetitem174);
        QTableWidgetItem *__qtablewidgetitem175 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(70, __qtablewidgetitem175);
        QTableWidgetItem *__qtablewidgetitem176 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(71, __qtablewidgetitem176);
        QTableWidgetItem *__qtablewidgetitem177 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(72, __qtablewidgetitem177);
        QTableWidgetItem *__qtablewidgetitem178 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(73, __qtablewidgetitem178);
        QTableWidgetItem *__qtablewidgetitem179 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(74, __qtablewidgetitem179);
        QTableWidgetItem *__qtablewidgetitem180 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(75, __qtablewidgetitem180);
        QTableWidgetItem *__qtablewidgetitem181 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(76, __qtablewidgetitem181);
        QTableWidgetItem *__qtablewidgetitem182 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(77, __qtablewidgetitem182);
        QTableWidgetItem *__qtablewidgetitem183 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(78, __qtablewidgetitem183);
        QTableWidgetItem *__qtablewidgetitem184 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(79, __qtablewidgetitem184);
        QTableWidgetItem *__qtablewidgetitem185 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(80, __qtablewidgetitem185);
        QTableWidgetItem *__qtablewidgetitem186 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(81, __qtablewidgetitem186);
        QTableWidgetItem *__qtablewidgetitem187 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(82, __qtablewidgetitem187);
        QTableWidgetItem *__qtablewidgetitem188 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(83, __qtablewidgetitem188);
        QTableWidgetItem *__qtablewidgetitem189 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(84, __qtablewidgetitem189);
        QTableWidgetItem *__qtablewidgetitem190 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(85, __qtablewidgetitem190);
        QTableWidgetItem *__qtablewidgetitem191 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(86, __qtablewidgetitem191);
        QTableWidgetItem *__qtablewidgetitem192 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(87, __qtablewidgetitem192);
        QTableWidgetItem *__qtablewidgetitem193 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(88, __qtablewidgetitem193);
        QTableWidgetItem *__qtablewidgetitem194 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(89, __qtablewidgetitem194);
        QTableWidgetItem *__qtablewidgetitem195 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(90, __qtablewidgetitem195);
        QTableWidgetItem *__qtablewidgetitem196 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(91, __qtablewidgetitem196);
        QTableWidgetItem *__qtablewidgetitem197 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(92, __qtablewidgetitem197);
        QTableWidgetItem *__qtablewidgetitem198 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(93, __qtablewidgetitem198);
        QTableWidgetItem *__qtablewidgetitem199 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(94, __qtablewidgetitem199);
        QTableWidgetItem *__qtablewidgetitem200 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(95, __qtablewidgetitem200);
        QTableWidgetItem *__qtablewidgetitem201 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(96, __qtablewidgetitem201);
        QTableWidgetItem *__qtablewidgetitem202 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(97, __qtablewidgetitem202);
        QTableWidgetItem *__qtablewidgetitem203 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(98, __qtablewidgetitem203);
        QTableWidgetItem *__qtablewidgetitem204 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(99, __qtablewidgetitem204);
        QTableWidgetItem *__qtablewidgetitem205 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(100, __qtablewidgetitem205);
        QTableWidgetItem *__qtablewidgetitem206 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(101, __qtablewidgetitem206);
        QTableWidgetItem *__qtablewidgetitem207 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(102, __qtablewidgetitem207);
        QTableWidgetItem *__qtablewidgetitem208 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(103, __qtablewidgetitem208);
        QTableWidgetItem *__qtablewidgetitem209 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(104, __qtablewidgetitem209);
        QTableWidgetItem *__qtablewidgetitem210 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(105, __qtablewidgetitem210);
        QTableWidgetItem *__qtablewidgetitem211 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(106, __qtablewidgetitem211);
        QTableWidgetItem *__qtablewidgetitem212 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(107, __qtablewidgetitem212);
        QTableWidgetItem *__qtablewidgetitem213 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(108, __qtablewidgetitem213);
        QTableWidgetItem *__qtablewidgetitem214 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(109, __qtablewidgetitem214);
        QTableWidgetItem *__qtablewidgetitem215 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(110, __qtablewidgetitem215);
        QTableWidgetItem *__qtablewidgetitem216 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(111, __qtablewidgetitem216);
        QTableWidgetItem *__qtablewidgetitem217 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(112, __qtablewidgetitem217);
        QTableWidgetItem *__qtablewidgetitem218 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(113, __qtablewidgetitem218);
        QTableWidgetItem *__qtablewidgetitem219 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(114, __qtablewidgetitem219);
        QTableWidgetItem *__qtablewidgetitem220 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(115, __qtablewidgetitem220);
        QTableWidgetItem *__qtablewidgetitem221 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(116, __qtablewidgetitem221);
        QTableWidgetItem *__qtablewidgetitem222 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(117, __qtablewidgetitem222);
        QTableWidgetItem *__qtablewidgetitem223 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(118, __qtablewidgetitem223);
        QTableWidgetItem *__qtablewidgetitem224 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(119, __qtablewidgetitem224);
        QTableWidgetItem *__qtablewidgetitem225 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(120, __qtablewidgetitem225);
        QTableWidgetItem *__qtablewidgetitem226 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(121, __qtablewidgetitem226);
        QTableWidgetItem *__qtablewidgetitem227 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(122, __qtablewidgetitem227);
        QTableWidgetItem *__qtablewidgetitem228 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(123, __qtablewidgetitem228);
        QTableWidgetItem *__qtablewidgetitem229 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(124, __qtablewidgetitem229);
        QTableWidgetItem *__qtablewidgetitem230 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(125, __qtablewidgetitem230);
        QTableWidgetItem *__qtablewidgetitem231 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(126, __qtablewidgetitem231);
        QTableWidgetItem *__qtablewidgetitem232 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(127, __qtablewidgetitem232);
        QTableWidgetItem *__qtablewidgetitem233 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(128, __qtablewidgetitem233);
        QTableWidgetItem *__qtablewidgetitem234 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(129, __qtablewidgetitem234);
        QTableWidgetItem *__qtablewidgetitem235 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(130, __qtablewidgetitem235);
        QTableWidgetItem *__qtablewidgetitem236 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(131, __qtablewidgetitem236);
        QTableWidgetItem *__qtablewidgetitem237 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(132, __qtablewidgetitem237);
        QTableWidgetItem *__qtablewidgetitem238 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(133, __qtablewidgetitem238);
        QTableWidgetItem *__qtablewidgetitem239 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(134, __qtablewidgetitem239);
        QTableWidgetItem *__qtablewidgetitem240 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(135, __qtablewidgetitem240);
        QTableWidgetItem *__qtablewidgetitem241 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(136, __qtablewidgetitem241);
        QTableWidgetItem *__qtablewidgetitem242 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(137, __qtablewidgetitem242);
        QTableWidgetItem *__qtablewidgetitem243 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(138, __qtablewidgetitem243);
        QTableWidgetItem *__qtablewidgetitem244 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(139, __qtablewidgetitem244);
        QTableWidgetItem *__qtablewidgetitem245 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(140, __qtablewidgetitem245);
        QTableWidgetItem *__qtablewidgetitem246 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(141, __qtablewidgetitem246);
        QTableWidgetItem *__qtablewidgetitem247 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(142, __qtablewidgetitem247);
        QTableWidgetItem *__qtablewidgetitem248 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(143, __qtablewidgetitem248);
        QTableWidgetItem *__qtablewidgetitem249 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(144, __qtablewidgetitem249);
        QTableWidgetItem *__qtablewidgetitem250 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(145, __qtablewidgetitem250);
        QTableWidgetItem *__qtablewidgetitem251 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(146, __qtablewidgetitem251);
        QTableWidgetItem *__qtablewidgetitem252 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(147, __qtablewidgetitem252);
        QTableWidgetItem *__qtablewidgetitem253 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(148, __qtablewidgetitem253);
        QTableWidgetItem *__qtablewidgetitem254 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(149, __qtablewidgetitem254);
        QTableWidgetItem *__qtablewidgetitem255 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(150, __qtablewidgetitem255);
        QTableWidgetItem *__qtablewidgetitem256 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(151, __qtablewidgetitem256);
        QTableWidgetItem *__qtablewidgetitem257 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(152, __qtablewidgetitem257);
        QTableWidgetItem *__qtablewidgetitem258 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(153, __qtablewidgetitem258);
        QTableWidgetItem *__qtablewidgetitem259 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(154, __qtablewidgetitem259);
        QTableWidgetItem *__qtablewidgetitem260 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(155, __qtablewidgetitem260);
        QTableWidgetItem *__qtablewidgetitem261 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(156, __qtablewidgetitem261);
        QTableWidgetItem *__qtablewidgetitem262 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(157, __qtablewidgetitem262);
        QTableWidgetItem *__qtablewidgetitem263 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(158, __qtablewidgetitem263);
        QTableWidgetItem *__qtablewidgetitem264 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(159, __qtablewidgetitem264);
        QTableWidgetItem *__qtablewidgetitem265 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(160, __qtablewidgetitem265);
        QTableWidgetItem *__qtablewidgetitem266 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(161, __qtablewidgetitem266);
        QTableWidgetItem *__qtablewidgetitem267 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(162, __qtablewidgetitem267);
        QTableWidgetItem *__qtablewidgetitem268 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(163, __qtablewidgetitem268);
        QTableWidgetItem *__qtablewidgetitem269 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(164, __qtablewidgetitem269);
        QTableWidgetItem *__qtablewidgetitem270 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(165, __qtablewidgetitem270);
        QTableWidgetItem *__qtablewidgetitem271 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(166, __qtablewidgetitem271);
        QTableWidgetItem *__qtablewidgetitem272 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(167, __qtablewidgetitem272);
        QTableWidgetItem *__qtablewidgetitem273 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(168, __qtablewidgetitem273);
        QTableWidgetItem *__qtablewidgetitem274 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(169, __qtablewidgetitem274);
        QTableWidgetItem *__qtablewidgetitem275 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(170, __qtablewidgetitem275);
        QTableWidgetItem *__qtablewidgetitem276 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(171, __qtablewidgetitem276);
        QTableWidgetItem *__qtablewidgetitem277 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(172, __qtablewidgetitem277);
        QTableWidgetItem *__qtablewidgetitem278 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(173, __qtablewidgetitem278);
        QTableWidgetItem *__qtablewidgetitem279 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(174, __qtablewidgetitem279);
        QTableWidgetItem *__qtablewidgetitem280 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(175, __qtablewidgetitem280);
        QTableWidgetItem *__qtablewidgetitem281 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(176, __qtablewidgetitem281);
        QTableWidgetItem *__qtablewidgetitem282 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(177, __qtablewidgetitem282);
        QTableWidgetItem *__qtablewidgetitem283 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(178, __qtablewidgetitem283);
        QTableWidgetItem *__qtablewidgetitem284 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(179, __qtablewidgetitem284);
        QTableWidgetItem *__qtablewidgetitem285 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(180, __qtablewidgetitem285);
        QTableWidgetItem *__qtablewidgetitem286 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(181, __qtablewidgetitem286);
        QTableWidgetItem *__qtablewidgetitem287 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(182, __qtablewidgetitem287);
        QTableWidgetItem *__qtablewidgetitem288 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(183, __qtablewidgetitem288);
        QTableWidgetItem *__qtablewidgetitem289 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(184, __qtablewidgetitem289);
        QTableWidgetItem *__qtablewidgetitem290 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(185, __qtablewidgetitem290);
        QTableWidgetItem *__qtablewidgetitem291 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(186, __qtablewidgetitem291);
        QTableWidgetItem *__qtablewidgetitem292 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(187, __qtablewidgetitem292);
        QTableWidgetItem *__qtablewidgetitem293 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(188, __qtablewidgetitem293);
        QTableWidgetItem *__qtablewidgetitem294 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(189, __qtablewidgetitem294);
        QTableWidgetItem *__qtablewidgetitem295 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(190, __qtablewidgetitem295);
        QTableWidgetItem *__qtablewidgetitem296 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(191, __qtablewidgetitem296);
        QTableWidgetItem *__qtablewidgetitem297 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(192, __qtablewidgetitem297);
        QTableWidgetItem *__qtablewidgetitem298 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(193, __qtablewidgetitem298);
        QTableWidgetItem *__qtablewidgetitem299 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(194, __qtablewidgetitem299);
        QTableWidgetItem *__qtablewidgetitem300 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(195, __qtablewidgetitem300);
        QTableWidgetItem *__qtablewidgetitem301 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(196, __qtablewidgetitem301);
        QTableWidgetItem *__qtablewidgetitem302 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(197, __qtablewidgetitem302);
        QTableWidgetItem *__qtablewidgetitem303 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(198, __qtablewidgetitem303);
        QTableWidgetItem *__qtablewidgetitem304 = new QTableWidgetItem();
        sloteFluTable->setVerticalHeaderItem(199, __qtablewidgetitem304);
        sloteFluTable->setObjectName(QStringLiteral("sloteFluTable"));
        sloteFluTable->setGeometry(QRect(23, 50, 150, 151));
        sloteFluTable->setRowCount(200);
        sloteFluTable->setColumnCount(1);

        vboxLayout17->addWidget(sloteFluGroupBox);


        hboxLayout7->addLayout(vboxLayout17);


        hboxLayout6->addLayout(hboxLayout7);

        TabWidgetRZ->addTab(IOtab, QString());
        MCtab = new QWidget();
        MCtab->setObjectName(QStringLiteral("MCtab"));
        Layout46 = new QWidget(MCtab);
        Layout46->setObjectName(QStringLiteral("Layout46"));
        Layout46->setGeometry(QRect(19, 15, 321, 116));
        vboxLayout19 = new QVBoxLayout(Layout46);
        vboxLayout19->setSpacing(6);
        vboxLayout19->setContentsMargins(11, 11, 11, 11);
        vboxLayout19->setObjectName(QStringLiteral("vboxLayout19"));
        vboxLayout19->setContentsMargins(0, 0, 0, 0);
        hboxLayout16 = new QHBoxLayout();
        hboxLayout16->setSpacing(6);
        hboxLayout16->setObjectName(QStringLiteral("hboxLayout16"));
        ncaseLabel = new QLabel(Layout46);
        ncaseLabel->setObjectName(QStringLiteral("ncaseLabel"));
        ncaseLabel->setWordWrap(false);

        hboxLayout16->addWidget(ncaseLabel);

        Spacer6_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout16->addItem(Spacer6_2);

        ncaseEdit = new QLineEdit(Layout46);
        ncaseEdit->setObjectName(QStringLiteral("ncaseEdit"));

        hboxLayout16->addWidget(ncaseEdit);


        vboxLayout19->addLayout(hboxLayout16);

        hboxLayout17 = new QHBoxLayout();
        hboxLayout17->setSpacing(6);
        hboxLayout17->setObjectName(QStringLiteral("hboxLayout17"));
        maxCPULabel = new QLabel(Layout46);
        maxCPULabel->setObjectName(QStringLiteral("maxCPULabel"));
        maxCPULabel->setWordWrap(false);

        hboxLayout17->addWidget(maxCPULabel);

        Spacer9 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout17->addItem(Spacer9);

        maxCPUEdit = new QLineEdit(Layout46);
        maxCPUEdit->setObjectName(QStringLiteral("maxCPUEdit"));

        hboxLayout17->addWidget(maxCPUEdit);


        vboxLayout19->addLayout(hboxLayout17);

        hboxLayout18 = new QHBoxLayout();
        hboxLayout18->setSpacing(6);
        hboxLayout18->setObjectName(QStringLiteral("hboxLayout18"));
        statLabel = new QLabel(Layout46);
        statLabel->setObjectName(QStringLiteral("statLabel"));
        statLabel->setWordWrap(false);

        hboxLayout18->addWidget(statLabel);

        Spacer8_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout18->addItem(Spacer8_2);

        statEdit = new QLineEdit(Layout46);
        statEdit->setObjectName(QStringLiteral("statEdit"));

        hboxLayout18->addWidget(statEdit);


        vboxLayout19->addLayout(hboxLayout18);

        kermaGroupBox = new QGroupBox(MCtab);
        kermaGroupBox->setObjectName(QStringLiteral("kermaGroupBox"));
        kermaGroupBox->setEnabled(false);
        kermaGroupBox->setGeometry(QRect(18, 281, 180, 40));
        kermaCheckBox = new QCheckBox(kermaGroupBox);
        kermaCheckBox->setObjectName(QStringLiteral("kermaCheckBox"));
        kermaCheckBox->setGeometry(QRect(20, 10, 140, 19));
        randGroupBox = new QGroupBox(MCtab);
        randGroupBox->setObjectName(QStringLiteral("randGroupBox"));
        randGroupBox->setGeometry(QRect(18, 150, 318, 116));
        vboxLayout20 = new QVBoxLayout(randGroupBox);
        vboxLayout20->setSpacing(6);
        vboxLayout20->setContentsMargins(11, 11, 11, 11);
        vboxLayout20->setObjectName(QStringLiteral("vboxLayout20"));
        hboxLayout19 = new QHBoxLayout();
        hboxLayout19->setSpacing(6);
        hboxLayout19->setObjectName(QStringLiteral("hboxLayout19"));
        rand1Label = new QLabel(randGroupBox);
        rand1Label->setObjectName(QStringLiteral("rand1Label"));
        rand1Label->setWordWrap(false);

        hboxLayout19->addWidget(rand1Label);

        Spacer4_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout19->addItem(Spacer4_2);

        rand1SpinBox = new QSpinBox(randGroupBox);
        rand1SpinBox->setObjectName(QStringLiteral("rand1SpinBox"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(rand1SpinBox->sizePolicy().hasHeightForWidth());
        rand1SpinBox->setSizePolicy(sizePolicy9);
        rand1SpinBox->setMinimumSize(QSize(100, 0));
        rand1SpinBox->setMinimum(1);
        rand1SpinBox->setMaximum(31328);
        rand1SpinBox->setValue(1);

        hboxLayout19->addWidget(rand1SpinBox);


        vboxLayout20->addLayout(hboxLayout19);

        hboxLayout20 = new QHBoxLayout();
        hboxLayout20->setSpacing(6);
        hboxLayout20->setObjectName(QStringLiteral("hboxLayout20"));
        rand2Label = new QLabel(randGroupBox);
        rand2Label->setObjectName(QStringLiteral("rand2Label"));
        rand2Label->setWordWrap(false);

        hboxLayout20->addWidget(rand2Label);

        Spacer5_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout20->addItem(Spacer5_2);

        rand2SpinBox = new QSpinBox(randGroupBox);
        rand2SpinBox->setObjectName(QStringLiteral("rand2SpinBox"));
        rand2SpinBox->setMinimumSize(QSize(100, 0));
        rand2SpinBox->setMinimum(1);
        rand2SpinBox->setMaximum(1073741824);
        rand2SpinBox->setValue(33);

        hboxLayout20->addWidget(rand2SpinBox);


        vboxLayout20->addLayout(hboxLayout20);

        photregGroupBox = new QGroupBox(MCtab);
        photregGroupBox->setObjectName(QStringLiteral("photregGroupBox"));
        photregGroupBox->setGeometry(QRect(20, 350, 242, 52));
        hboxLayout21 = new QHBoxLayout(photregGroupBox);
        hboxLayout21->setSpacing(6);
        hboxLayout21->setContentsMargins(11, 11, 11, 11);
        hboxLayout21->setObjectName(QStringLiteral("hboxLayout21"));
        photregCheckBox = new QCheckBox(photregGroupBox);
        photregCheckBox->setObjectName(QStringLiteral("photregCheckBox"));

        hboxLayout21->addWidget(photregCheckBox);

        layout157 = new QWidget(MCtab);
        layout157->setObjectName(QStringLiteral("layout157"));
        layout157->setGeometry(QRect(430, 10, 321, 521));
        vboxLayout21 = new QVBoxLayout(layout157);
        vboxLayout21->setSpacing(6);
        vboxLayout21->setContentsMargins(11, 11, 11, 11);
        vboxLayout21->setObjectName(QStringLiteral("vboxLayout21"));
        vboxLayout21->setContentsMargins(0, 0, 0, 0);
        ifullGroupBox = new QGroupBox(layout157);
        ifullGroupBox->setObjectName(QStringLiteral("ifullGroupBox"));
        sizePolicy8.setHeightForWidth(ifullGroupBox->sizePolicy().hasHeightForWidth());
        ifullGroupBox->setSizePolicy(sizePolicy8);
        vboxLayout22 = new QVBoxLayout(ifullGroupBox);
        vboxLayout22->setSpacing(6);
        vboxLayout22->setContentsMargins(11, 11, 11, 11);
        vboxLayout22->setObjectName(QStringLiteral("vboxLayout22"));
        hboxLayout22 = new QHBoxLayout();
        hboxLayout22->setSpacing(6);
        hboxLayout22->setObjectName(QStringLiteral("hboxLayout22"));
        ifullLabel = new QLabel(ifullGroupBox);
        ifullLabel->setObjectName(QStringLiteral("ifullLabel"));
        ifullLabel->setWordWrap(false);

        hboxLayout22->addWidget(ifullLabel);

        Spacer77 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout22->addItem(Spacer77);

        ifullComboBox = new QComboBox(ifullGroupBox);
        ifullComboBox->setObjectName(QStringLiteral("ifullComboBox"));
        sizePolicy4.setHeightForWidth(ifullComboBox->sizePolicy().hasHeightForWidth());
        ifullComboBox->setSizePolicy(sizePolicy4);

        hboxLayout22->addWidget(ifullComboBox);


        vboxLayout22->addLayout(hboxLayout22);


        vboxLayout21->addWidget(ifullGroupBox);

        phdGroupBox = new QGroupBox(layout157);
        phdGroupBox->setObjectName(QStringLiteral("phdGroupBox"));
        phdGroupBox->setEnabled(false);
        Layout30 = new QWidget(phdGroupBox);
        Layout30->setObjectName(QStringLiteral("Layout30"));
        Layout30->setGeometry(QRect(60, 30, 201, 70));
        vboxLayout23 = new QVBoxLayout(Layout30);
        vboxLayout23->setSpacing(6);
        vboxLayout23->setContentsMargins(11, 11, 11, 11);
        vboxLayout23->setObjectName(QStringLiteral("vboxLayout23"));
        vboxLayout23->setContentsMargins(0, 0, 0, 0);
        hboxLayout23 = new QHBoxLayout();
        hboxLayout23->setSpacing(6);
        hboxLayout23->setObjectName(QStringLiteral("hboxLayout23"));
        SLOTELabel = new QLabel(Layout30);
        SLOTELabel->setObjectName(QStringLiteral("SLOTELabel"));
        SLOTELabel->setWordWrap(false);

        hboxLayout23->addWidget(SLOTELabel);

        Spacer1_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout23->addItem(Spacer1_2);

        SLOTEEdit = new QLineEdit(Layout30);
        SLOTEEdit->setObjectName(QStringLiteral("SLOTEEdit"));

        hboxLayout23->addWidget(SLOTEEdit);


        vboxLayout23->addLayout(hboxLayout23);

        hboxLayout24 = new QHBoxLayout();
        hboxLayout24->setSpacing(6);
        hboxLayout24->setObjectName(QStringLiteral("hboxLayout24"));
        DELTAELabel = new QLabel(Layout30);
        DELTAELabel->setObjectName(QStringLiteral("DELTAELabel"));
        DELTAELabel->setWordWrap(false);

        hboxLayout24->addWidget(DELTAELabel);

        Spacer2_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout24->addItem(Spacer2_2);

        DELTAEEdit = new QLineEdit(Layout30);
        DELTAEEdit->setObjectName(QStringLiteral("DELTAEEdit"));

        hboxLayout24->addWidget(DELTAEEdit);


        vboxLayout23->addLayout(hboxLayout24);

        phdTable = new QTableWidget(phdGroupBox);
        if (phdTable->columnCount() < 2)
            phdTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem305 = new QTableWidgetItem();
        phdTable->setHorizontalHeaderItem(0, __qtablewidgetitem305);
        QTableWidgetItem *__qtablewidgetitem306 = new QTableWidgetItem();
        phdTable->setHorizontalHeaderItem(1, __qtablewidgetitem306);
        if (phdTable->rowCount() < 50)
            phdTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem307 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(0, __qtablewidgetitem307);
        QTableWidgetItem *__qtablewidgetitem308 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(1, __qtablewidgetitem308);
        QTableWidgetItem *__qtablewidgetitem309 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(2, __qtablewidgetitem309);
        QTableWidgetItem *__qtablewidgetitem310 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(3, __qtablewidgetitem310);
        QTableWidgetItem *__qtablewidgetitem311 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(4, __qtablewidgetitem311);
        QTableWidgetItem *__qtablewidgetitem312 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(5, __qtablewidgetitem312);
        QTableWidgetItem *__qtablewidgetitem313 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(6, __qtablewidgetitem313);
        QTableWidgetItem *__qtablewidgetitem314 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(7, __qtablewidgetitem314);
        QTableWidgetItem *__qtablewidgetitem315 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(8, __qtablewidgetitem315);
        QTableWidgetItem *__qtablewidgetitem316 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(9, __qtablewidgetitem316);
        QTableWidgetItem *__qtablewidgetitem317 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(10, __qtablewidgetitem317);
        QTableWidgetItem *__qtablewidgetitem318 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(11, __qtablewidgetitem318);
        QTableWidgetItem *__qtablewidgetitem319 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(12, __qtablewidgetitem319);
        QTableWidgetItem *__qtablewidgetitem320 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(13, __qtablewidgetitem320);
        QTableWidgetItem *__qtablewidgetitem321 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(14, __qtablewidgetitem321);
        QTableWidgetItem *__qtablewidgetitem322 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(15, __qtablewidgetitem322);
        QTableWidgetItem *__qtablewidgetitem323 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(16, __qtablewidgetitem323);
        QTableWidgetItem *__qtablewidgetitem324 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(17, __qtablewidgetitem324);
        QTableWidgetItem *__qtablewidgetitem325 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(18, __qtablewidgetitem325);
        QTableWidgetItem *__qtablewidgetitem326 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(19, __qtablewidgetitem326);
        QTableWidgetItem *__qtablewidgetitem327 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(20, __qtablewidgetitem327);
        QTableWidgetItem *__qtablewidgetitem328 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(21, __qtablewidgetitem328);
        QTableWidgetItem *__qtablewidgetitem329 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(22, __qtablewidgetitem329);
        QTableWidgetItem *__qtablewidgetitem330 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(23, __qtablewidgetitem330);
        QTableWidgetItem *__qtablewidgetitem331 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(24, __qtablewidgetitem331);
        QTableWidgetItem *__qtablewidgetitem332 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(25, __qtablewidgetitem332);
        QTableWidgetItem *__qtablewidgetitem333 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(26, __qtablewidgetitem333);
        QTableWidgetItem *__qtablewidgetitem334 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(27, __qtablewidgetitem334);
        QTableWidgetItem *__qtablewidgetitem335 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(28, __qtablewidgetitem335);
        QTableWidgetItem *__qtablewidgetitem336 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(29, __qtablewidgetitem336);
        QTableWidgetItem *__qtablewidgetitem337 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(30, __qtablewidgetitem337);
        QTableWidgetItem *__qtablewidgetitem338 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(31, __qtablewidgetitem338);
        QTableWidgetItem *__qtablewidgetitem339 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(32, __qtablewidgetitem339);
        QTableWidgetItem *__qtablewidgetitem340 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(33, __qtablewidgetitem340);
        QTableWidgetItem *__qtablewidgetitem341 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(34, __qtablewidgetitem341);
        QTableWidgetItem *__qtablewidgetitem342 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(35, __qtablewidgetitem342);
        QTableWidgetItem *__qtablewidgetitem343 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(36, __qtablewidgetitem343);
        QTableWidgetItem *__qtablewidgetitem344 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(37, __qtablewidgetitem344);
        QTableWidgetItem *__qtablewidgetitem345 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(38, __qtablewidgetitem345);
        QTableWidgetItem *__qtablewidgetitem346 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(39, __qtablewidgetitem346);
        QTableWidgetItem *__qtablewidgetitem347 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(40, __qtablewidgetitem347);
        QTableWidgetItem *__qtablewidgetitem348 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(41, __qtablewidgetitem348);
        QTableWidgetItem *__qtablewidgetitem349 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(42, __qtablewidgetitem349);
        QTableWidgetItem *__qtablewidgetitem350 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(43, __qtablewidgetitem350);
        QTableWidgetItem *__qtablewidgetitem351 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(44, __qtablewidgetitem351);
        QTableWidgetItem *__qtablewidgetitem352 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(45, __qtablewidgetitem352);
        QTableWidgetItem *__qtablewidgetitem353 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(46, __qtablewidgetitem353);
        QTableWidgetItem *__qtablewidgetitem354 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(47, __qtablewidgetitem354);
        QTableWidgetItem *__qtablewidgetitem355 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(48, __qtablewidgetitem355);
        QTableWidgetItem *__qtablewidgetitem356 = new QTableWidgetItem();
        phdTable->setVerticalHeaderItem(49, __qtablewidgetitem356);
        phdTable->setObjectName(QStringLiteral("phdTable"));
        phdTable->setGeometry(QRect(30, 110, 251, 311));
        phdTable->setRowCount(50);
        phdTable->setColumnCount(2);

        vboxLayout21->addWidget(phdGroupBox);

        TabWidgetRZ->addTab(MCtab, QString());
        Gtab = new QWidget();
        Gtab->setObjectName(QStringLiteral("Gtab"));
        gridLayout_24 = new QGridLayout(Gtab);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        gridLayout_23 = new QGridLayout();
        gridLayout_23->setSpacing(6);
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        inputmethButtonGroup = new QGroupBox(Gtab);
        inputmethButtonGroup->setObjectName(QStringLiteral("inputmethButtonGroup"));
        vboxLayout24 = new QVBoxLayout(inputmethButtonGroup);
        vboxLayout24->setSpacing(6);
        vboxLayout24->setContentsMargins(11, 11, 11, 11);
        vboxLayout24->setObjectName(QStringLiteral("vboxLayout24"));
        vboxLayout25 = new QVBoxLayout();
        vboxLayout25->setSpacing(6);
        vboxLayout25->setObjectName(QStringLiteral("vboxLayout25"));
        groupRadioButton = new QRadioButton(inputmethButtonGroup);
        groupRadioButton->setObjectName(QStringLiteral("groupRadioButton"));
        groupRadioButton->setChecked(true);

        vboxLayout25->addWidget(groupRadioButton);

        individualRadioButton = new QRadioButton(inputmethButtonGroup);
        individualRadioButton->setObjectName(QStringLiteral("individualRadioButton"));

        vboxLayout25->addWidget(individualRadioButton);

        cavityRadioButton = new QRadioButton(inputmethButtonGroup);
        cavityRadioButton->setObjectName(QStringLiteral("cavityRadioButton"));

        vboxLayout25->addWidget(cavityRadioButton);


        vboxLayout24->addLayout(vboxLayout25);


        horizontalLayout_20->addWidget(inputmethButtonGroup);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        hboxLayout25 = new QHBoxLayout();
        hboxLayout25->setSpacing(6);
        hboxLayout25->setObjectName(QStringLiteral("hboxLayout25"));
        hboxLayout26 = new QHBoxLayout();
        hboxLayout26->setSpacing(6);
        hboxLayout26->setObjectName(QStringLiteral("hboxLayout26"));
        ZFaceLabel = new QLabel(Gtab);
        ZFaceLabel->setObjectName(QStringLiteral("ZFaceLabel"));
        ZFaceLabel->setWordWrap(false);

        hboxLayout26->addWidget(ZFaceLabel);

        ZFaceEdit = new QLineEdit(Gtab);
        ZFaceEdit->setObjectName(QStringLiteral("ZFaceEdit"));

        hboxLayout26->addWidget(ZFaceEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout26->addItem(horizontalSpacer_3);


        hboxLayout25->addLayout(hboxLayout26);


        verticalLayout_3->addLayout(hboxLayout25);

        CavityInfoLabel = new QLabel(Gtab);
        CavityInfoLabel->setObjectName(QStringLiteral("CavityInfoLabel"));
        CavityInfoLabel->setWordWrap(false);

        verticalLayout_3->addWidget(CavityInfoLabel);


        horizontalLayout_20->addLayout(verticalLayout_3);


        gridLayout_23->addLayout(horizontalLayout_20, 0, 0, 1, 1);

        mediaGroupBox = new QGroupBox(Gtab);
        mediaGroupBox->setObjectName(QStringLiteral("mediaGroupBox"));
        mediaGroupBox->setMinimumSize(QSize(501, 0));
        verticalLayout_36 = new QVBoxLayout(mediaGroupBox);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QStringLiteral("verticalLayout_36"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mediaLabel = new QLabel(mediaGroupBox);
        mediaLabel->setObjectName(QStringLiteral("mediaLabel"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(mediaLabel->sizePolicy().hasHeightForWidth());
        mediaLabel->setSizePolicy(sizePolicy10);
        mediaLabel->setWordWrap(false);

        horizontalLayout->addWidget(mediaLabel);

        spacer42_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacer42_2);

        mediaComboBox = new QComboBox(mediaGroupBox);
        mediaComboBox->setObjectName(QStringLiteral("mediaComboBox"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy11.setHorizontalStretch(16);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(mediaComboBox->sizePolicy().hasHeightForWidth());
        mediaComboBox->setSizePolicy(sizePolicy11);
        mediaComboBox->setMinimumSize(QSize(130, 20));

        horizontalLayout->addWidget(mediaComboBox);


        verticalLayout_36->addLayout(horizontalLayout);

        mediaTable = new QTableWidget(mediaGroupBox);
        if (mediaTable->columnCount() < 3)
            mediaTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem357 = new QTableWidgetItem();
        mediaTable->setHorizontalHeaderItem(0, __qtablewidgetitem357);
        QTableWidgetItem *__qtablewidgetitem358 = new QTableWidgetItem();
        mediaTable->setHorizontalHeaderItem(1, __qtablewidgetitem358);
        QTableWidgetItem *__qtablewidgetitem359 = new QTableWidgetItem();
        mediaTable->setHorizontalHeaderItem(2, __qtablewidgetitem359);
        if (mediaTable->rowCount() < 50)
            mediaTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem360 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(0, __qtablewidgetitem360);
        QTableWidgetItem *__qtablewidgetitem361 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(1, __qtablewidgetitem361);
        QTableWidgetItem *__qtablewidgetitem362 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(2, __qtablewidgetitem362);
        QTableWidgetItem *__qtablewidgetitem363 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(3, __qtablewidgetitem363);
        QTableWidgetItem *__qtablewidgetitem364 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(4, __qtablewidgetitem364);
        QTableWidgetItem *__qtablewidgetitem365 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(5, __qtablewidgetitem365);
        QTableWidgetItem *__qtablewidgetitem366 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(6, __qtablewidgetitem366);
        QTableWidgetItem *__qtablewidgetitem367 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(7, __qtablewidgetitem367);
        QTableWidgetItem *__qtablewidgetitem368 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(8, __qtablewidgetitem368);
        QTableWidgetItem *__qtablewidgetitem369 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(9, __qtablewidgetitem369);
        QTableWidgetItem *__qtablewidgetitem370 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(10, __qtablewidgetitem370);
        QTableWidgetItem *__qtablewidgetitem371 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(11, __qtablewidgetitem371);
        QTableWidgetItem *__qtablewidgetitem372 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(12, __qtablewidgetitem372);
        QTableWidgetItem *__qtablewidgetitem373 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(13, __qtablewidgetitem373);
        QTableWidgetItem *__qtablewidgetitem374 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(14, __qtablewidgetitem374);
        QTableWidgetItem *__qtablewidgetitem375 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(15, __qtablewidgetitem375);
        QTableWidgetItem *__qtablewidgetitem376 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(16, __qtablewidgetitem376);
        QTableWidgetItem *__qtablewidgetitem377 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(17, __qtablewidgetitem377);
        QTableWidgetItem *__qtablewidgetitem378 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(18, __qtablewidgetitem378);
        QTableWidgetItem *__qtablewidgetitem379 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(19, __qtablewidgetitem379);
        QTableWidgetItem *__qtablewidgetitem380 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(20, __qtablewidgetitem380);
        QTableWidgetItem *__qtablewidgetitem381 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(21, __qtablewidgetitem381);
        QTableWidgetItem *__qtablewidgetitem382 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(22, __qtablewidgetitem382);
        QTableWidgetItem *__qtablewidgetitem383 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(23, __qtablewidgetitem383);
        QTableWidgetItem *__qtablewidgetitem384 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(24, __qtablewidgetitem384);
        QTableWidgetItem *__qtablewidgetitem385 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(25, __qtablewidgetitem385);
        QTableWidgetItem *__qtablewidgetitem386 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(26, __qtablewidgetitem386);
        QTableWidgetItem *__qtablewidgetitem387 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(27, __qtablewidgetitem387);
        QTableWidgetItem *__qtablewidgetitem388 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(28, __qtablewidgetitem388);
        QTableWidgetItem *__qtablewidgetitem389 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(29, __qtablewidgetitem389);
        QTableWidgetItem *__qtablewidgetitem390 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(30, __qtablewidgetitem390);
        QTableWidgetItem *__qtablewidgetitem391 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(31, __qtablewidgetitem391);
        QTableWidgetItem *__qtablewidgetitem392 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(32, __qtablewidgetitem392);
        QTableWidgetItem *__qtablewidgetitem393 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(33, __qtablewidgetitem393);
        QTableWidgetItem *__qtablewidgetitem394 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(34, __qtablewidgetitem394);
        QTableWidgetItem *__qtablewidgetitem395 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(35, __qtablewidgetitem395);
        QTableWidgetItem *__qtablewidgetitem396 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(36, __qtablewidgetitem396);
        QTableWidgetItem *__qtablewidgetitem397 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(37, __qtablewidgetitem397);
        QTableWidgetItem *__qtablewidgetitem398 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(38, __qtablewidgetitem398);
        QTableWidgetItem *__qtablewidgetitem399 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(39, __qtablewidgetitem399);
        QTableWidgetItem *__qtablewidgetitem400 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(40, __qtablewidgetitem400);
        QTableWidgetItem *__qtablewidgetitem401 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(41, __qtablewidgetitem401);
        QTableWidgetItem *__qtablewidgetitem402 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(42, __qtablewidgetitem402);
        QTableWidgetItem *__qtablewidgetitem403 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(43, __qtablewidgetitem403);
        QTableWidgetItem *__qtablewidgetitem404 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(44, __qtablewidgetitem404);
        QTableWidgetItem *__qtablewidgetitem405 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(45, __qtablewidgetitem405);
        QTableWidgetItem *__qtablewidgetitem406 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(46, __qtablewidgetitem406);
        QTableWidgetItem *__qtablewidgetitem407 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(47, __qtablewidgetitem407);
        QTableWidgetItem *__qtablewidgetitem408 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(48, __qtablewidgetitem408);
        QTableWidgetItem *__qtablewidgetitem409 = new QTableWidgetItem();
        mediaTable->setVerticalHeaderItem(49, __qtablewidgetitem409);
        mediaTable->setObjectName(QStringLiteral("mediaTable"));
        sizePolicy2.setHeightForWidth(mediaTable->sizePolicy().hasHeightForWidth());
        mediaTable->setSizePolicy(sizePolicy2);
        mediaTable->setMinimumSize(QSize(345, 424));
        mediaTable->setMaximumSize(QSize(32767, 66666));
        mediaTable->setShowGrid(true);
        mediaTable->setSortingEnabled(true);
        mediaTable->setRowCount(50);
        mediaTable->setColumnCount(3);
        mediaTable->horizontalHeader()->setCascadingSectionResizes(false);
        mediaTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_36->addWidget(mediaTable);


        gridLayout_23->addWidget(mediaGroupBox, 0, 1, 2, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        GroupBox53 = new QGroupBox(Gtab);
        GroupBox53->setObjectName(QStringLiteral("GroupBox53"));
        GroupBox53->setMaximumSize(QSize(270, 16777215));
        verticalLayout_33 = new QVBoxLayout(GroupBox53);
        verticalLayout_33->setSpacing(6);
        verticalLayout_33->setContentsMargins(11, 11, 11, 11);
        verticalLayout_33->setObjectName(QStringLiteral("verticalLayout_33"));
        geometryTable = new QTableWidget(GroupBox53);
        if (geometryTable->columnCount() < 2)
            geometryTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem410 = new QTableWidgetItem();
        geometryTable->setHorizontalHeaderItem(0, __qtablewidgetitem410);
        QTableWidgetItem *__qtablewidgetitem411 = new QTableWidgetItem();
        geometryTable->setHorizontalHeaderItem(1, __qtablewidgetitem411);
        if (geometryTable->rowCount() < 50)
            geometryTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem412 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(0, __qtablewidgetitem412);
        QTableWidgetItem *__qtablewidgetitem413 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(1, __qtablewidgetitem413);
        QTableWidgetItem *__qtablewidgetitem414 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(2, __qtablewidgetitem414);
        QTableWidgetItem *__qtablewidgetitem415 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(3, __qtablewidgetitem415);
        QTableWidgetItem *__qtablewidgetitem416 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(4, __qtablewidgetitem416);
        QTableWidgetItem *__qtablewidgetitem417 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(5, __qtablewidgetitem417);
        QTableWidgetItem *__qtablewidgetitem418 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(6, __qtablewidgetitem418);
        QTableWidgetItem *__qtablewidgetitem419 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(7, __qtablewidgetitem419);
        QTableWidgetItem *__qtablewidgetitem420 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(8, __qtablewidgetitem420);
        QTableWidgetItem *__qtablewidgetitem421 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(9, __qtablewidgetitem421);
        QTableWidgetItem *__qtablewidgetitem422 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(10, __qtablewidgetitem422);
        QTableWidgetItem *__qtablewidgetitem423 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(11, __qtablewidgetitem423);
        QTableWidgetItem *__qtablewidgetitem424 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(12, __qtablewidgetitem424);
        QTableWidgetItem *__qtablewidgetitem425 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(13, __qtablewidgetitem425);
        QTableWidgetItem *__qtablewidgetitem426 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(14, __qtablewidgetitem426);
        QTableWidgetItem *__qtablewidgetitem427 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(15, __qtablewidgetitem427);
        QTableWidgetItem *__qtablewidgetitem428 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(16, __qtablewidgetitem428);
        QTableWidgetItem *__qtablewidgetitem429 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(17, __qtablewidgetitem429);
        QTableWidgetItem *__qtablewidgetitem430 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(18, __qtablewidgetitem430);
        QTableWidgetItem *__qtablewidgetitem431 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(19, __qtablewidgetitem431);
        QTableWidgetItem *__qtablewidgetitem432 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(20, __qtablewidgetitem432);
        QTableWidgetItem *__qtablewidgetitem433 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(21, __qtablewidgetitem433);
        QTableWidgetItem *__qtablewidgetitem434 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(22, __qtablewidgetitem434);
        QTableWidgetItem *__qtablewidgetitem435 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(23, __qtablewidgetitem435);
        QTableWidgetItem *__qtablewidgetitem436 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(24, __qtablewidgetitem436);
        QTableWidgetItem *__qtablewidgetitem437 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(25, __qtablewidgetitem437);
        QTableWidgetItem *__qtablewidgetitem438 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(26, __qtablewidgetitem438);
        QTableWidgetItem *__qtablewidgetitem439 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(27, __qtablewidgetitem439);
        QTableWidgetItem *__qtablewidgetitem440 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(28, __qtablewidgetitem440);
        QTableWidgetItem *__qtablewidgetitem441 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(29, __qtablewidgetitem441);
        QTableWidgetItem *__qtablewidgetitem442 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(30, __qtablewidgetitem442);
        QTableWidgetItem *__qtablewidgetitem443 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(31, __qtablewidgetitem443);
        QTableWidgetItem *__qtablewidgetitem444 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(32, __qtablewidgetitem444);
        QTableWidgetItem *__qtablewidgetitem445 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(33, __qtablewidgetitem445);
        QTableWidgetItem *__qtablewidgetitem446 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(34, __qtablewidgetitem446);
        QTableWidgetItem *__qtablewidgetitem447 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(35, __qtablewidgetitem447);
        QTableWidgetItem *__qtablewidgetitem448 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(36, __qtablewidgetitem448);
        QTableWidgetItem *__qtablewidgetitem449 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(37, __qtablewidgetitem449);
        QTableWidgetItem *__qtablewidgetitem450 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(38, __qtablewidgetitem450);
        QTableWidgetItem *__qtablewidgetitem451 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(39, __qtablewidgetitem451);
        QTableWidgetItem *__qtablewidgetitem452 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(40, __qtablewidgetitem452);
        QTableWidgetItem *__qtablewidgetitem453 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(41, __qtablewidgetitem453);
        QTableWidgetItem *__qtablewidgetitem454 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(42, __qtablewidgetitem454);
        QTableWidgetItem *__qtablewidgetitem455 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(43, __qtablewidgetitem455);
        QTableWidgetItem *__qtablewidgetitem456 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(44, __qtablewidgetitem456);
        QTableWidgetItem *__qtablewidgetitem457 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(45, __qtablewidgetitem457);
        QTableWidgetItem *__qtablewidgetitem458 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(46, __qtablewidgetitem458);
        QTableWidgetItem *__qtablewidgetitem459 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(47, __qtablewidgetitem459);
        QTableWidgetItem *__qtablewidgetitem460 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(48, __qtablewidgetitem460);
        QTableWidgetItem *__qtablewidgetitem461 = new QTableWidgetItem();
        geometryTable->setVerticalHeaderItem(49, __qtablewidgetitem461);
        geometryTable->setObjectName(QStringLiteral("geometryTable"));
        sizePolicy2.setHeightForWidth(geometryTable->sizePolicy().hasHeightForWidth());
        geometryTable->setSizePolicy(sizePolicy2);
        geometryTable->setMinimumSize(QSize(235, 350));
        geometryTable->setMaximumSize(QSize(6666, 6666));
        geometryTable->setFocusPolicy(Qt::WheelFocus);
        geometryTable->setRowCount(50);
        geometryTable->setColumnCount(2);

        verticalLayout_33->addWidget(geometryTable);


        horizontalLayout_12->addWidget(GroupBox53);

        GroupBox54 = new QGroupBox(Gtab);
        GroupBox54->setObjectName(QStringLiteral("GroupBox54"));
        GroupBox54->setMaximumSize(QSize(181, 16777215));
        verticalLayout_34 = new QVBoxLayout(GroupBox54);
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setContentsMargins(11, 11, 11, 11);
        verticalLayout_34->setObjectName(QStringLiteral("verticalLayout_34"));
        cylTable = new QTableWidget(GroupBox54);
        if (cylTable->columnCount() < 1)
            cylTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem462 = new QTableWidgetItem();
        cylTable->setHorizontalHeaderItem(0, __qtablewidgetitem462);
        if (cylTable->rowCount() < 50)
            cylTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem463 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(0, __qtablewidgetitem463);
        QTableWidgetItem *__qtablewidgetitem464 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(1, __qtablewidgetitem464);
        QTableWidgetItem *__qtablewidgetitem465 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(2, __qtablewidgetitem465);
        QTableWidgetItem *__qtablewidgetitem466 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(3, __qtablewidgetitem466);
        QTableWidgetItem *__qtablewidgetitem467 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(4, __qtablewidgetitem467);
        QTableWidgetItem *__qtablewidgetitem468 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(5, __qtablewidgetitem468);
        QTableWidgetItem *__qtablewidgetitem469 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(6, __qtablewidgetitem469);
        QTableWidgetItem *__qtablewidgetitem470 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(7, __qtablewidgetitem470);
        QTableWidgetItem *__qtablewidgetitem471 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(8, __qtablewidgetitem471);
        QTableWidgetItem *__qtablewidgetitem472 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(9, __qtablewidgetitem472);
        QTableWidgetItem *__qtablewidgetitem473 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(10, __qtablewidgetitem473);
        QTableWidgetItem *__qtablewidgetitem474 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(11, __qtablewidgetitem474);
        QTableWidgetItem *__qtablewidgetitem475 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(12, __qtablewidgetitem475);
        QTableWidgetItem *__qtablewidgetitem476 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(13, __qtablewidgetitem476);
        QTableWidgetItem *__qtablewidgetitem477 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(14, __qtablewidgetitem477);
        QTableWidgetItem *__qtablewidgetitem478 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(15, __qtablewidgetitem478);
        QTableWidgetItem *__qtablewidgetitem479 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(16, __qtablewidgetitem479);
        QTableWidgetItem *__qtablewidgetitem480 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(17, __qtablewidgetitem480);
        QTableWidgetItem *__qtablewidgetitem481 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(18, __qtablewidgetitem481);
        QTableWidgetItem *__qtablewidgetitem482 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(19, __qtablewidgetitem482);
        QTableWidgetItem *__qtablewidgetitem483 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(20, __qtablewidgetitem483);
        QTableWidgetItem *__qtablewidgetitem484 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(21, __qtablewidgetitem484);
        QTableWidgetItem *__qtablewidgetitem485 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(22, __qtablewidgetitem485);
        QTableWidgetItem *__qtablewidgetitem486 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(23, __qtablewidgetitem486);
        QTableWidgetItem *__qtablewidgetitem487 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(24, __qtablewidgetitem487);
        QTableWidgetItem *__qtablewidgetitem488 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(25, __qtablewidgetitem488);
        QTableWidgetItem *__qtablewidgetitem489 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(26, __qtablewidgetitem489);
        QTableWidgetItem *__qtablewidgetitem490 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(27, __qtablewidgetitem490);
        QTableWidgetItem *__qtablewidgetitem491 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(28, __qtablewidgetitem491);
        QTableWidgetItem *__qtablewidgetitem492 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(29, __qtablewidgetitem492);
        QTableWidgetItem *__qtablewidgetitem493 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(30, __qtablewidgetitem493);
        QTableWidgetItem *__qtablewidgetitem494 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(31, __qtablewidgetitem494);
        QTableWidgetItem *__qtablewidgetitem495 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(32, __qtablewidgetitem495);
        QTableWidgetItem *__qtablewidgetitem496 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(33, __qtablewidgetitem496);
        QTableWidgetItem *__qtablewidgetitem497 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(34, __qtablewidgetitem497);
        QTableWidgetItem *__qtablewidgetitem498 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(35, __qtablewidgetitem498);
        QTableWidgetItem *__qtablewidgetitem499 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(36, __qtablewidgetitem499);
        QTableWidgetItem *__qtablewidgetitem500 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(37, __qtablewidgetitem500);
        QTableWidgetItem *__qtablewidgetitem501 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(38, __qtablewidgetitem501);
        QTableWidgetItem *__qtablewidgetitem502 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(39, __qtablewidgetitem502);
        QTableWidgetItem *__qtablewidgetitem503 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(40, __qtablewidgetitem503);
        QTableWidgetItem *__qtablewidgetitem504 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(41, __qtablewidgetitem504);
        QTableWidgetItem *__qtablewidgetitem505 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(42, __qtablewidgetitem505);
        QTableWidgetItem *__qtablewidgetitem506 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(43, __qtablewidgetitem506);
        QTableWidgetItem *__qtablewidgetitem507 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(44, __qtablewidgetitem507);
        QTableWidgetItem *__qtablewidgetitem508 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(45, __qtablewidgetitem508);
        QTableWidgetItem *__qtablewidgetitem509 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(46, __qtablewidgetitem509);
        QTableWidgetItem *__qtablewidgetitem510 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(47, __qtablewidgetitem510);
        QTableWidgetItem *__qtablewidgetitem511 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(48, __qtablewidgetitem511);
        QTableWidgetItem *__qtablewidgetitem512 = new QTableWidgetItem();
        cylTable->setVerticalHeaderItem(49, __qtablewidgetitem512);
        cylTable->setObjectName(QStringLiteral("cylTable"));
        sizePolicy2.setHeightForWidth(cylTable->sizePolicy().hasHeightForWidth());
        cylTable->setSizePolicy(sizePolicy2);
        cylTable->setMinimumSize(QSize(172, 350));
        cylTable->setMaximumSize(QSize(66666, 66666));
        cylTable->setMouseTracking(false);
        cylTable->setRowCount(50);
        cylTable->setColumnCount(1);

        verticalLayout_34->addWidget(cylTable);


        horizontalLayout_12->addWidget(GroupBox54);


        gridLayout_23->addLayout(horizontalLayout_12, 1, 0, 1, 1);


        gridLayout_24->addLayout(gridLayout_23, 0, 0, 1, 1);

        TabWidgetRZ->addTab(Gtab, QString());
        CItab = new QWidget();
        CItab->setObjectName(QStringLiteral("CItab"));
        layoutWidget = new QWidget(CItab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 901, 451));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        cavityGroupBox = new QGroupBox(layoutWidget);
        cavityGroupBox->setObjectName(QStringLiteral("cavityGroupBox"));
        horizontalLayout_4 = new QHBoxLayout(cavityGroupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        ButtonGroup25 = new QGroupBox(cavityGroupBox);
        ButtonGroup25->setObjectName(QStringLiteral("ButtonGroup25"));
        QSizePolicy sizePolicy12(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(ButtonGroup25->sizePolicy().hasHeightForWidth());
        ButtonGroup25->setSizePolicy(sizePolicy12);
        verticalLayout_4 = new QVBoxLayout(ButtonGroup25);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        thimbleRadioButton = new QRadioButton(ButtonGroup25);
        thimbleRadioButton->setObjectName(QStringLiteral("thimbleRadioButton"));
        thimbleRadioButton->setChecked(true);

        verticalLayout_4->addWidget(thimbleRadioButton);

        parallelplateRadioButton = new QRadioButton(ButtonGroup25);
        parallelplateRadioButton->setObjectName(QStringLiteral("parallelplateRadioButton"));
        parallelplateRadioButton->setChecked(false);

        verticalLayout_4->addWidget(parallelplateRadioButton);


        verticalLayout_6->addWidget(ButtonGroup25);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        hboxLayout27 = new QHBoxLayout();
        hboxLayout27->setSpacing(6);
        hboxLayout27->setObjectName(QStringLiteral("hboxLayout27"));
        wallLabel = new QLabel(cavityGroupBox);
        wallLabel->setObjectName(QStringLiteral("wallLabel"));
        wallLabel->setWordWrap(false);

        hboxLayout27->addWidget(wallLabel);

        wallthickEdit = new QLineEdit(cavityGroupBox);
        wallthickEdit->setObjectName(QStringLiteral("wallthickEdit"));

        hboxLayout27->addWidget(wallthickEdit);


        verticalLayout_5->addLayout(hboxLayout27);

        hboxLayout28 = new QHBoxLayout();
        hboxLayout28->setSpacing(6);
        hboxLayout28->setObjectName(QStringLiteral("hboxLayout28"));
        cavradLabel = new QLabel(cavityGroupBox);
        cavradLabel->setObjectName(QStringLiteral("cavradLabel"));
        cavradLabel->setWordWrap(false);

        hboxLayout28->addWidget(cavradLabel);

        cavradEdit = new QLineEdit(cavityGroupBox);
        cavradEdit->setObjectName(QStringLiteral("cavradEdit"));

        hboxLayout28->addWidget(cavradEdit);


        verticalLayout_5->addLayout(hboxLayout28);

        hboxLayout29 = new QHBoxLayout();
        hboxLayout29->setSpacing(6);
        hboxLayout29->setObjectName(QStringLiteral("hboxLayout29"));
        cavlenLabel = new QLabel(cavityGroupBox);
        cavlenLabel->setObjectName(QStringLiteral("cavlenLabel"));
        cavlenLabel->setWordWrap(false);

        hboxLayout29->addWidget(cavlenLabel);

        cavlenEdit = new QLineEdit(cavityGroupBox);
        cavlenEdit->setObjectName(QStringLiteral("cavlenEdit"));

        hboxLayout29->addWidget(cavlenEdit);


        verticalLayout_5->addLayout(hboxLayout29);

        hboxLayout30 = new QHBoxLayout();
        hboxLayout30->setSpacing(6);
        hboxLayout30->setObjectName(QStringLiteral("hboxLayout30"));
        electradLabel = new QLabel(cavityGroupBox);
        electradLabel->setObjectName(QStringLiteral("electradLabel"));
        electradLabel->setWordWrap(false);

        hboxLayout30->addWidget(electradLabel);

        electradEdit = new QLineEdit(cavityGroupBox);
        electradEdit->setObjectName(QStringLiteral("electradEdit"));

        hboxLayout30->addWidget(electradEdit);


        verticalLayout_5->addLayout(hboxLayout30);

        hboxLayout31 = new QHBoxLayout();
        hboxLayout31->setSpacing(6);
        hboxLayout31->setObjectName(QStringLiteral("hboxLayout31"));
        wallmaterialLabel = new QLabel(cavityGroupBox);
        wallmaterialLabel->setObjectName(QStringLiteral("wallmaterialLabel"));
        wallmaterialLabel->setWordWrap(false);

        hboxLayout31->addWidget(wallmaterialLabel);

        wallmaterialComboBox = new QComboBox(cavityGroupBox);
        wallmaterialComboBox->setObjectName(QStringLiteral("wallmaterialComboBox"));
        sizePolicy4.setHeightForWidth(wallmaterialComboBox->sizePolicy().hasHeightForWidth());
        wallmaterialComboBox->setSizePolicy(sizePolicy4);
        wallmaterialComboBox->setEditable(true);
        wallmaterialComboBox->setInsertPolicy(QComboBox::InsertAtTop);
        wallmaterialComboBox->setAutoCompletion(true);

        hboxLayout31->addWidget(wallmaterialComboBox);


        verticalLayout_5->addLayout(hboxLayout31);

        hboxLayout32 = new QHBoxLayout();
        hboxLayout32->setSpacing(6);
        hboxLayout32->setObjectName(QStringLiteral("hboxLayout32"));
        electrmatLabel = new QLabel(cavityGroupBox);
        electrmatLabel->setObjectName(QStringLiteral("electrmatLabel"));
        electrmatLabel->setWordWrap(false);

        hboxLayout32->addWidget(electrmatLabel);

        electrmatComboBox = new QComboBox(cavityGroupBox);
        electrmatComboBox->setObjectName(QStringLiteral("electrmatComboBox"));
        sizePolicy4.setHeightForWidth(electrmatComboBox->sizePolicy().hasHeightForWidth());
        electrmatComboBox->setSizePolicy(sizePolicy4);
        electrmatComboBox->setEditable(true);
        electrmatComboBox->setInsertPolicy(QComboBox::InsertAtTop);
        electrmatComboBox->setAutoCompletion(true);

        hboxLayout32->addWidget(electrmatComboBox);


        verticalLayout_5->addLayout(hboxLayout32);


        horizontalLayout_3->addLayout(verticalLayout_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_7->addWidget(cavityGroupBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        horizontalLayout_6->addLayout(verticalLayout_7);

        gr_indGroupBox = new QGroupBox(layoutWidget);
        gr_indGroupBox->setObjectName(QStringLiteral("gr_indGroupBox"));
        horizontalLayout_5 = new QHBoxLayout(gr_indGroupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        GroupBox56 = new QGroupBox(gr_indGroupBox);
        GroupBox56->setObjectName(QStringLiteral("GroupBox56"));
        cavTable = new QTableWidget(GroupBox56);
        if (cavTable->columnCount() < 1)
            cavTable->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem513 = new QTableWidgetItem();
        cavTable->setHorizontalHeaderItem(0, __qtablewidgetitem513);
        if (cavTable->rowCount() < 50)
            cavTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem514 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(0, __qtablewidgetitem514);
        QTableWidgetItem *__qtablewidgetitem515 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(1, __qtablewidgetitem515);
        QTableWidgetItem *__qtablewidgetitem516 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(2, __qtablewidgetitem516);
        QTableWidgetItem *__qtablewidgetitem517 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(3, __qtablewidgetitem517);
        QTableWidgetItem *__qtablewidgetitem518 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(4, __qtablewidgetitem518);
        QTableWidgetItem *__qtablewidgetitem519 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(5, __qtablewidgetitem519);
        QTableWidgetItem *__qtablewidgetitem520 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(6, __qtablewidgetitem520);
        QTableWidgetItem *__qtablewidgetitem521 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(7, __qtablewidgetitem521);
        QTableWidgetItem *__qtablewidgetitem522 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(8, __qtablewidgetitem522);
        QTableWidgetItem *__qtablewidgetitem523 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(9, __qtablewidgetitem523);
        QTableWidgetItem *__qtablewidgetitem524 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(10, __qtablewidgetitem524);
        QTableWidgetItem *__qtablewidgetitem525 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(11, __qtablewidgetitem525);
        QTableWidgetItem *__qtablewidgetitem526 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(12, __qtablewidgetitem526);
        QTableWidgetItem *__qtablewidgetitem527 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(13, __qtablewidgetitem527);
        QTableWidgetItem *__qtablewidgetitem528 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(14, __qtablewidgetitem528);
        QTableWidgetItem *__qtablewidgetitem529 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(15, __qtablewidgetitem529);
        QTableWidgetItem *__qtablewidgetitem530 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(16, __qtablewidgetitem530);
        QTableWidgetItem *__qtablewidgetitem531 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(17, __qtablewidgetitem531);
        QTableWidgetItem *__qtablewidgetitem532 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(18, __qtablewidgetitem532);
        QTableWidgetItem *__qtablewidgetitem533 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(19, __qtablewidgetitem533);
        QTableWidgetItem *__qtablewidgetitem534 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(20, __qtablewidgetitem534);
        QTableWidgetItem *__qtablewidgetitem535 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(21, __qtablewidgetitem535);
        QTableWidgetItem *__qtablewidgetitem536 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(22, __qtablewidgetitem536);
        QTableWidgetItem *__qtablewidgetitem537 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(23, __qtablewidgetitem537);
        QTableWidgetItem *__qtablewidgetitem538 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(24, __qtablewidgetitem538);
        QTableWidgetItem *__qtablewidgetitem539 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(25, __qtablewidgetitem539);
        QTableWidgetItem *__qtablewidgetitem540 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(26, __qtablewidgetitem540);
        QTableWidgetItem *__qtablewidgetitem541 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(27, __qtablewidgetitem541);
        QTableWidgetItem *__qtablewidgetitem542 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(28, __qtablewidgetitem542);
        QTableWidgetItem *__qtablewidgetitem543 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(29, __qtablewidgetitem543);
        QTableWidgetItem *__qtablewidgetitem544 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(30, __qtablewidgetitem544);
        QTableWidgetItem *__qtablewidgetitem545 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(31, __qtablewidgetitem545);
        QTableWidgetItem *__qtablewidgetitem546 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(32, __qtablewidgetitem546);
        QTableWidgetItem *__qtablewidgetitem547 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(33, __qtablewidgetitem547);
        QTableWidgetItem *__qtablewidgetitem548 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(34, __qtablewidgetitem548);
        QTableWidgetItem *__qtablewidgetitem549 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(35, __qtablewidgetitem549);
        QTableWidgetItem *__qtablewidgetitem550 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(36, __qtablewidgetitem550);
        QTableWidgetItem *__qtablewidgetitem551 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(37, __qtablewidgetitem551);
        QTableWidgetItem *__qtablewidgetitem552 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(38, __qtablewidgetitem552);
        QTableWidgetItem *__qtablewidgetitem553 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(39, __qtablewidgetitem553);
        QTableWidgetItem *__qtablewidgetitem554 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(40, __qtablewidgetitem554);
        QTableWidgetItem *__qtablewidgetitem555 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(41, __qtablewidgetitem555);
        QTableWidgetItem *__qtablewidgetitem556 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(42, __qtablewidgetitem556);
        QTableWidgetItem *__qtablewidgetitem557 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(43, __qtablewidgetitem557);
        QTableWidgetItem *__qtablewidgetitem558 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(44, __qtablewidgetitem558);
        QTableWidgetItem *__qtablewidgetitem559 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(45, __qtablewidgetitem559);
        QTableWidgetItem *__qtablewidgetitem560 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(46, __qtablewidgetitem560);
        QTableWidgetItem *__qtablewidgetitem561 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(47, __qtablewidgetitem561);
        QTableWidgetItem *__qtablewidgetitem562 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(48, __qtablewidgetitem562);
        QTableWidgetItem *__qtablewidgetitem563 = new QTableWidgetItem();
        cavTable->setVerticalHeaderItem(49, __qtablewidgetitem563);
        cavTable->setObjectName(QStringLiteral("cavTable"));
        cavTable->setGeometry(QRect(19, 29, 150, 250));
        cavTable->setRowCount(50);
        cavTable->setColumnCount(1);

        horizontalLayout_5->addWidget(GroupBox56);


        horizontalLayout_6->addWidget(gr_indGroupBox);

        TabWidgetRZ->addTab(CItab, QString());
        MDTab = new QWidget();
        MDTab->setObjectName(QStringLiteral("MDTab"));
        verticalLayout_52 = new QVBoxLayout(MDTab);
        verticalLayout_52->setSpacing(6);
        verticalLayout_52->setContentsMargins(11, 11, 11, 11);
        verticalLayout_52->setObjectName(QStringLiteral("verticalLayout_52"));
        verticalLayout_51 = new QVBoxLayout();
        verticalLayout_51->setSpacing(6);
        verticalLayout_51->setObjectName(QStringLiteral("verticalLayout_51"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        ELGroupBox = new QGroupBox(MDTab);
        ELGroupBox->setObjectName(QStringLiteral("ELGroupBox"));
        verticalLayout_47 = new QVBoxLayout(ELGroupBox);
        verticalLayout_47->setSpacing(6);
        verticalLayout_47->setContentsMargins(11, 11, 11, 11);
        verticalLayout_47->setObjectName(QStringLiteral("verticalLayout_47"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        vboxLayout26 = new QVBoxLayout();
        vboxLayout26->setSpacing(6);
        vboxLayout26->setObjectName(QStringLiteral("vboxLayout26"));
        hboxLayout33 = new QHBoxLayout();
        hboxLayout33->setSpacing(6);
        hboxLayout33->setObjectName(QStringLiteral("hboxLayout33"));
        AELabel = new QLabel(ELGroupBox);
        AELabel->setObjectName(QStringLiteral("AELabel"));
        AELabel->setWordWrap(false);

        hboxLayout33->addWidget(AELabel);

        AEEdit = new QLineEdit(ELGroupBox);
        AEEdit->setObjectName(QStringLiteral("AEEdit"));

        hboxLayout33->addWidget(AEEdit);


        vboxLayout26->addLayout(hboxLayout33);

        hboxLayout34 = new QHBoxLayout();
        hboxLayout34->setSpacing(6);
        hboxLayout34->setObjectName(QStringLiteral("hboxLayout34"));
        APLabel = new QLabel(ELGroupBox);
        APLabel->setObjectName(QStringLiteral("APLabel"));
        APLabel->setWordWrap(false);

        hboxLayout34->addWidget(APLabel);

        APEdit = new QLineEdit(ELGroupBox);
        APEdit->setObjectName(QStringLiteral("APEdit"));

        hboxLayout34->addWidget(APEdit);


        vboxLayout26->addLayout(hboxLayout34);


        horizontalLayout_7->addLayout(vboxLayout26);

        vboxLayout27 = new QVBoxLayout();
        vboxLayout27->setSpacing(6);
        vboxLayout27->setObjectName(QStringLiteral("vboxLayout27"));
        hboxLayout35 = new QHBoxLayout();
        hboxLayout35->setSpacing(6);
        hboxLayout35->setObjectName(QStringLiteral("hboxLayout35"));
        UELabel = new QLabel(ELGroupBox);
        UELabel->setObjectName(QStringLiteral("UELabel"));
        UELabel->setWordWrap(false);

        hboxLayout35->addWidget(UELabel);

        UEEdit = new QLineEdit(ELGroupBox);
        UEEdit->setObjectName(QStringLiteral("UEEdit"));

        hboxLayout35->addWidget(UEEdit);


        vboxLayout27->addLayout(hboxLayout35);

        hboxLayout36 = new QHBoxLayout();
        hboxLayout36->setSpacing(6);
        hboxLayout36->setObjectName(QStringLiteral("hboxLayout36"));
        UPLabel = new QLabel(ELGroupBox);
        UPLabel->setObjectName(QStringLiteral("UPLabel"));
        UPLabel->setWordWrap(false);

        hboxLayout36->addWidget(UPLabel);

        UPEdit = new QLineEdit(ELGroupBox);
        UPEdit->setObjectName(QStringLiteral("UPEdit"));

        hboxLayout36->addWidget(UPEdit);


        vboxLayout27->addLayout(hboxLayout36);


        horizontalLayout_7->addLayout(vboxLayout27);


        verticalLayout_47->addLayout(horizontalLayout_7);


        horizontalLayout_28->addWidget(ELGroupBox);

        MDGroupBox = new QGroupBox(MDTab);
        MDGroupBox->setObjectName(QStringLiteral("MDGroupBox"));
        verticalLayout_48 = new QVBoxLayout(MDGroupBox);
        verticalLayout_48->setSpacing(6);
        verticalLayout_48->setContentsMargins(11, 11, 11, 11);
        verticalLayout_48->setObjectName(QStringLiteral("verticalLayout_48"));
        hboxLayout37 = new QHBoxLayout();
        hboxLayout37->setSpacing(6);
        hboxLayout37->setObjectName(QStringLiteral("hboxLayout37"));
        MDFEdit = new QLineEdit(MDGroupBox);
        MDFEdit->setObjectName(QStringLiteral("MDFEdit"));

        hboxLayout37->addWidget(MDFEdit);

        MDFileButton = new QPushButton(MDGroupBox);
        MDFileButton->setObjectName(QStringLiteral("MDFileButton"));
        MDFileButton->setAutoDefault(false);

        hboxLayout37->addWidget(MDFileButton);


        verticalLayout_48->addLayout(hboxLayout37);


        horizontalLayout_28->addWidget(MDGroupBox);


        verticalLayout_51->addLayout(horizontalLayout_28);

        inpmediaGroupBox = new QGroupBox(MDTab);
        inpmediaGroupBox->setObjectName(QStringLiteral("inpmediaGroupBox"));
        verticalLayout_50 = new QVBoxLayout(inpmediaGroupBox);
        verticalLayout_50->setSpacing(6);
        verticalLayout_50->setContentsMargins(11, 11, 11, 11);
        verticalLayout_50->setObjectName(QStringLiteral("verticalLayout_50"));
        verticalLayout_49 = new QVBoxLayout();
        verticalLayout_49->setSpacing(6);
        verticalLayout_49->setObjectName(QStringLiteral("verticalLayout_49"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        compositionGroupBox = new QGroupBox(inpmediaGroupBox);
        compositionGroupBox->setObjectName(QStringLiteral("compositionGroupBox"));
        verticalLayout_8 = new QVBoxLayout(compositionGroupBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pz_or_rhozTable = new QTableWidget(compositionGroupBox);
        if (pz_or_rhozTable->columnCount() < 2)
            pz_or_rhozTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem564 = new QTableWidgetItem();
        pz_or_rhozTable->setHorizontalHeaderItem(0, __qtablewidgetitem564);
        QTableWidgetItem *__qtablewidgetitem565 = new QTableWidgetItem();
        pz_or_rhozTable->setHorizontalHeaderItem(1, __qtablewidgetitem565);
        if (pz_or_rhozTable->rowCount() < 50)
            pz_or_rhozTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem566 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(0, __qtablewidgetitem566);
        QTableWidgetItem *__qtablewidgetitem567 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(1, __qtablewidgetitem567);
        QTableWidgetItem *__qtablewidgetitem568 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(2, __qtablewidgetitem568);
        QTableWidgetItem *__qtablewidgetitem569 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(3, __qtablewidgetitem569);
        QTableWidgetItem *__qtablewidgetitem570 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(4, __qtablewidgetitem570);
        QTableWidgetItem *__qtablewidgetitem571 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(5, __qtablewidgetitem571);
        QTableWidgetItem *__qtablewidgetitem572 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(6, __qtablewidgetitem572);
        QTableWidgetItem *__qtablewidgetitem573 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(7, __qtablewidgetitem573);
        QTableWidgetItem *__qtablewidgetitem574 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(8, __qtablewidgetitem574);
        QTableWidgetItem *__qtablewidgetitem575 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(9, __qtablewidgetitem575);
        QTableWidgetItem *__qtablewidgetitem576 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(10, __qtablewidgetitem576);
        QTableWidgetItem *__qtablewidgetitem577 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(11, __qtablewidgetitem577);
        QTableWidgetItem *__qtablewidgetitem578 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(12, __qtablewidgetitem578);
        QTableWidgetItem *__qtablewidgetitem579 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(13, __qtablewidgetitem579);
        QTableWidgetItem *__qtablewidgetitem580 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(14, __qtablewidgetitem580);
        QTableWidgetItem *__qtablewidgetitem581 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(15, __qtablewidgetitem581);
        QTableWidgetItem *__qtablewidgetitem582 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(16, __qtablewidgetitem582);
        QTableWidgetItem *__qtablewidgetitem583 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(17, __qtablewidgetitem583);
        QTableWidgetItem *__qtablewidgetitem584 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(18, __qtablewidgetitem584);
        QTableWidgetItem *__qtablewidgetitem585 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(19, __qtablewidgetitem585);
        QTableWidgetItem *__qtablewidgetitem586 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(20, __qtablewidgetitem586);
        QTableWidgetItem *__qtablewidgetitem587 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(21, __qtablewidgetitem587);
        QTableWidgetItem *__qtablewidgetitem588 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(22, __qtablewidgetitem588);
        QTableWidgetItem *__qtablewidgetitem589 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(23, __qtablewidgetitem589);
        QTableWidgetItem *__qtablewidgetitem590 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(24, __qtablewidgetitem590);
        QTableWidgetItem *__qtablewidgetitem591 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(25, __qtablewidgetitem591);
        QTableWidgetItem *__qtablewidgetitem592 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(26, __qtablewidgetitem592);
        QTableWidgetItem *__qtablewidgetitem593 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(27, __qtablewidgetitem593);
        QTableWidgetItem *__qtablewidgetitem594 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(28, __qtablewidgetitem594);
        QTableWidgetItem *__qtablewidgetitem595 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(29, __qtablewidgetitem595);
        QTableWidgetItem *__qtablewidgetitem596 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(30, __qtablewidgetitem596);
        QTableWidgetItem *__qtablewidgetitem597 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(31, __qtablewidgetitem597);
        QTableWidgetItem *__qtablewidgetitem598 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(32, __qtablewidgetitem598);
        QTableWidgetItem *__qtablewidgetitem599 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(33, __qtablewidgetitem599);
        QTableWidgetItem *__qtablewidgetitem600 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(34, __qtablewidgetitem600);
        QTableWidgetItem *__qtablewidgetitem601 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(35, __qtablewidgetitem601);
        QTableWidgetItem *__qtablewidgetitem602 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(36, __qtablewidgetitem602);
        QTableWidgetItem *__qtablewidgetitem603 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(37, __qtablewidgetitem603);
        QTableWidgetItem *__qtablewidgetitem604 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(38, __qtablewidgetitem604);
        QTableWidgetItem *__qtablewidgetitem605 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(39, __qtablewidgetitem605);
        QTableWidgetItem *__qtablewidgetitem606 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(40, __qtablewidgetitem606);
        QTableWidgetItem *__qtablewidgetitem607 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(41, __qtablewidgetitem607);
        QTableWidgetItem *__qtablewidgetitem608 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(42, __qtablewidgetitem608);
        QTableWidgetItem *__qtablewidgetitem609 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(43, __qtablewidgetitem609);
        QTableWidgetItem *__qtablewidgetitem610 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(44, __qtablewidgetitem610);
        QTableWidgetItem *__qtablewidgetitem611 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(45, __qtablewidgetitem611);
        QTableWidgetItem *__qtablewidgetitem612 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(46, __qtablewidgetitem612);
        QTableWidgetItem *__qtablewidgetitem613 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(47, __qtablewidgetitem613);
        QTableWidgetItem *__qtablewidgetitem614 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(48, __qtablewidgetitem614);
        QTableWidgetItem *__qtablewidgetitem615 = new QTableWidgetItem();
        pz_or_rhozTable->setVerticalHeaderItem(49, __qtablewidgetitem615);
        pz_or_rhozTable->setObjectName(QStringLiteral("pz_or_rhozTable"));
        pz_or_rhozTable->setRowCount(50);
        pz_or_rhozTable->setColumnCount(2);

        verticalLayout_8->addWidget(pz_or_rhozTable);


        horizontalLayout_24->addWidget(compositionGroupBox);

        verticalLayout_46 = new QVBoxLayout();
        verticalLayout_46->setSpacing(6);
        verticalLayout_46->setObjectName(QStringLiteral("verticalLayout_46"));
        medNameGroupBox = new QGroupBox(inpmediaGroupBox);
        medNameGroupBox->setObjectName(QStringLiteral("medNameGroupBox"));
        verticalLayout_9 = new QVBoxLayout(medNameGroupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        inpmediumComboBox = new QComboBox(medNameGroupBox);
        inpmediumComboBox->setObjectName(QStringLiteral("inpmediumComboBox"));
        QSizePolicy sizePolicy13(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(inpmediumComboBox->sizePolicy().hasHeightForWidth());
        inpmediumComboBox->setSizePolicy(sizePolicy13);
        inpmediumComboBox->setEditable(true);
        inpmediumComboBox->setInsertPolicy(QComboBox::InsertAtCurrent);

        verticalLayout_9->addWidget(inpmediumComboBox);


        verticalLayout_46->addWidget(medNameGroupBox);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        medTypeGroupBox = new QGroupBox(inpmediaGroupBox);
        medTypeGroupBox->setObjectName(QStringLiteral("medTypeGroupBox"));
        verticalLayout_37 = new QVBoxLayout(medTypeGroupBox);
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setContentsMargins(11, 11, 11, 11);
        verticalLayout_37->setObjectName(QStringLiteral("verticalLayout_37"));
        medTypeComboBox = new QComboBox(medTypeGroupBox);
        medTypeComboBox->setObjectName(QStringLiteral("medTypeComboBox"));
        medTypeComboBox->setEditable(false);
        medTypeComboBox->setMaxVisibleItems(3);

        verticalLayout_37->addWidget(medTypeComboBox);


        horizontalLayout_19->addWidget(medTypeGroupBox);

        rhoGroupBox = new QGroupBox(inpmediaGroupBox);
        rhoGroupBox->setObjectName(QStringLiteral("rhoGroupBox"));
        verticalLayout_44 = new QVBoxLayout(rhoGroupBox);
        verticalLayout_44->setSpacing(6);
        verticalLayout_44->setContentsMargins(11, 11, 11, 11);
        verticalLayout_44->setObjectName(QStringLiteral("verticalLayout_44"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        rhoEdit = new QLineEdit(rhoGroupBox);
        rhoEdit->setObjectName(QStringLiteral("rhoEdit"));

        horizontalLayout_8->addWidget(rhoEdit);

        rhoScaleComboBox = new QComboBox(rhoGroupBox);
        rhoScaleComboBox->setObjectName(QStringLiteral("rhoScaleComboBox"));

        horizontalLayout_8->addWidget(rhoScaleComboBox);


        verticalLayout_44->addLayout(horizontalLayout_8);


        horizontalLayout_19->addWidget(rhoGroupBox);


        verticalLayout_46->addLayout(horizontalLayout_19);

        medOptionsGroupBox = new QGroupBox(inpmediaGroupBox);
        medOptionsGroupBox->setObjectName(QStringLiteral("medOptionsGroupBox"));
        verticalLayout_45 = new QVBoxLayout(medOptionsGroupBox);
        verticalLayout_45->setSpacing(6);
        verticalLayout_45->setContentsMargins(11, 11, 11, 11);
        verticalLayout_45->setObjectName(QStringLiteral("verticalLayout_45"));
        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setObjectName(QStringLiteral("verticalLayout_35"));
        DCcheckBox = new QCheckBox(medOptionsGroupBox);
        DCcheckBox->setObjectName(QStringLiteral("DCcheckBox"));

        verticalLayout_35->addWidget(DCcheckBox);

        ICRUradCheckBox = new QCheckBox(medOptionsGroupBox);
        ICRUradCheckBox->setObjectName(QStringLiteral("ICRUradCheckBox"));

        verticalLayout_35->addWidget(ICRUradCheckBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        isGasCheckBox = new QCheckBox(medOptionsGroupBox);
        isGasCheckBox->setObjectName(QStringLiteral("isGasCheckBox"));

        horizontalLayout_10->addWidget(isGasCheckBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        gaspLabel = new QLabel(medOptionsGroupBox);
        gaspLabel->setObjectName(QStringLiteral("gaspLabel"));
        gaspLabel->setWordWrap(false);

        horizontalLayout_10->addWidget(gaspLabel);

        gaspEdit = new QLineEdit(medOptionsGroupBox);
        gaspEdit->setObjectName(QStringLiteral("gaspEdit"));

        horizontalLayout_10->addWidget(gaspEdit);

        gaspUnits = new QLabel(medOptionsGroupBox);
        gaspUnits->setObjectName(QStringLiteral("gaspUnits"));
        gaspUnits->setWordWrap(false);

        horizontalLayout_10->addWidget(gaspUnits);


        verticalLayout_35->addLayout(horizontalLayout_10);


        verticalLayout_45->addLayout(verticalLayout_35);


        verticalLayout_46->addWidget(medOptionsGroupBox);


        horizontalLayout_24->addLayout(verticalLayout_46);


        verticalLayout_49->addLayout(horizontalLayout_24);

        DFgroupBox = new QGroupBox(inpmediaGroupBox);
        DFgroupBox->setObjectName(QStringLiteral("DFgroupBox"));
        verticalLayout_10 = new QVBoxLayout(DFgroupBox);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        DFSearchLabel = new QLabel(DFgroupBox);
        DFSearchLabel->setObjectName(QStringLiteral("DFSearchLabel"));

        horizontalLayout_9->addWidget(DFSearchLabel);

        DFSearchComboBox = new QComboBox(DFgroupBox);
        DFSearchComboBox->setObjectName(QStringLiteral("DFSearchComboBox"));

        horizontalLayout_9->addWidget(DFSearchComboBox);

        hboxLayout38 = new QHBoxLayout();
        hboxLayout38->setSpacing(6);
        hboxLayout38->setObjectName(QStringLiteral("hboxLayout38"));
        DFEdit = new QLineEdit(DFgroupBox);
        DFEdit->setObjectName(QStringLiteral("DFEdit"));

        hboxLayout38->addWidget(DFEdit);

        hboxLayout39 = new QHBoxLayout();
        hboxLayout39->setSpacing(6);
        hboxLayout39->setObjectName(QStringLiteral("hboxLayout39"));
        DFBrowse = new QPushButton(DFgroupBox);
        DFBrowse->setObjectName(QStringLiteral("DFBrowse"));

        hboxLayout39->addWidget(DFBrowse);


        hboxLayout38->addLayout(hboxLayout39);


        horizontalLayout_9->addLayout(hboxLayout38);


        verticalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_49->addWidget(DFgroupBox);


        verticalLayout_50->addLayout(verticalLayout_49);


        verticalLayout_51->addWidget(inpmediaGroupBox);


        verticalLayout_52->addLayout(verticalLayout_51);

        TabWidgetRZ->addTab(MDTab, QString());
        SItab = new QWidget();
        SItab->setObjectName(QStringLiteral("SItab"));
        gridLayout_4 = new QGridLayout(SItab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        in_particleButtonGroup = new QGroupBox(SItab);
        in_particleButtonGroup->setObjectName(QStringLiteral("in_particleButtonGroup"));
        in_particleButtonGroup->setMaximumSize(QSize(237, 16777215));
        gridLayout_2 = new QGridLayout(in_particleButtonGroup);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        eRadioButton = new QRadioButton(in_particleButtonGroup);
        eRadioButton->setObjectName(QStringLiteral("eRadioButton"));

        gridLayout_2->addWidget(eRadioButton, 0, 0, 1, 1);

        phRadioButton = new QRadioButton(in_particleButtonGroup);
        phRadioButton->setObjectName(QStringLiteral("phRadioButton"));
        phRadioButton->setChecked(true);

        gridLayout_2->addWidget(phRadioButton, 1, 0, 1, 1);

        pRadioButton = new QRadioButton(in_particleButtonGroup);
        pRadioButton->setObjectName(QStringLiteral("pRadioButton"));

        gridLayout_2->addWidget(pRadioButton, 2, 0, 1, 1);

        chargedRadioButton = new QRadioButton(in_particleButtonGroup);
        chargedRadioButton->setObjectName(QStringLiteral("chargedRadioButton"));
        chargedRadioButton->setEnabled(false);

        gridLayout_2->addWidget(chargedRadioButton, 3, 0, 1, 1);

        allRadioButton = new QRadioButton(in_particleButtonGroup);
        allRadioButton->setObjectName(QStringLiteral("allRadioButton"));
        allRadioButton->setEnabled(false);

        gridLayout_2->addWidget(allRadioButton, 4, 0, 1, 1);


        verticalLayout_13->addWidget(in_particleButtonGroup);

        energyButtonGroup = new QGroupBox(SItab);
        energyButtonGroup->setObjectName(QStringLiteral("energyButtonGroup"));
        gridLayout1 = new QGridLayout(energyButtonGroup);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        monoenergeticRadioButton = new QRadioButton(energyButtonGroup);
        monoenergeticRadioButton->setObjectName(QStringLiteral("monoenergeticRadioButton"));
        monoenergeticRadioButton->setChecked(true);

        gridLayout1->addWidget(monoenergeticRadioButton, 0, 0, 1, 1);

        spectrumRadioButton = new QRadioButton(energyButtonGroup);
        spectrumRadioButton->setObjectName(QStringLiteral("spectrumRadioButton"));

        gridLayout1->addWidget(spectrumRadioButton, 1, 0, 1, 1);


        verticalLayout_13->addWidget(energyButtonGroup);


        gridLayout_3->addLayout(verticalLayout_13, 0, 0, 1, 1);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        IniEgroupBox = new QGroupBox(SItab);
        IniEgroupBox->setObjectName(QStringLiteral("IniEgroupBox"));
        verticalLayout_15 = new QVBoxLayout(IniEgroupBox);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        ini_energyEdit = new QLineEdit(IniEgroupBox);
        ini_energyEdit->setObjectName(QStringLiteral("ini_energyEdit"));
        sizePolicy4.setHeightForWidth(ini_energyEdit->sizePolicy().hasHeightForWidth());
        ini_energyEdit->setSizePolicy(sizePolicy4);

        verticalLayout_15->addWidget(ini_energyEdit);


        verticalLayout_16->addWidget(IniEgroupBox);

        specfnameGroupBox = new QGroupBox(SItab);
        specfnameGroupBox->setObjectName(QStringLiteral("specfnameGroupBox"));
        specfnameGroupBox->setEnabled(false);
        verticalLayout_17 = new QVBoxLayout(specfnameGroupBox);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        hboxLayout40 = new QHBoxLayout();
        hboxLayout40->setSpacing(6);
        hboxLayout40->setObjectName(QStringLiteral("hboxLayout40"));
        specfnameComboBox = new QComboBox(specfnameGroupBox);
        specfnameComboBox->setObjectName(QStringLiteral("specfnameComboBox"));
        specfnameComboBox->setEnabled(false);
        sizePolicy6.setHeightForWidth(specfnameComboBox->sizePolicy().hasHeightForWidth());
        specfnameComboBox->setSizePolicy(sizePolicy6);
        specfnameComboBox->setEditable(true);

        hboxLayout40->addWidget(specfnameComboBox);

        specfnameButton = new QPushButton(specfnameGroupBox);
        specfnameButton->setObjectName(QStringLiteral("specfnameButton"));
        sizePolicy7.setHeightForWidth(specfnameButton->sizePolicy().hasHeightForWidth());
        specfnameButton->setSizePolicy(sizePolicy7);

        hboxLayout40->addWidget(specfnameButton);


        verticalLayout_17->addLayout(hboxLayout40);


        verticalLayout_16->addWidget(specfnameGroupBox);

        ioutspGroupBox = new QGroupBox(SItab);
        ioutspGroupBox->setObjectName(QStringLiteral("ioutspGroupBox"));
        ioutspGroupBox->setEnabled(false);
        formLayout = new QFormLayout(ioutspGroupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        ioutspCheckBox = new QCheckBox(ioutspGroupBox);
        ioutspCheckBox->setObjectName(QStringLiteral("ioutspCheckBox"));
        ioutspCheckBox->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, ioutspCheckBox);


        verticalLayout_16->addWidget(ioutspGroupBox);


        gridLayout_3->addLayout(verticalLayout_16, 1, 0, 1, 1);


        horizontalLayout_11->addLayout(gridLayout_3);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        hboxLayout41 = new QHBoxLayout();
        hboxLayout41->setSpacing(6);
        hboxLayout41->setObjectName(QStringLiteral("hboxLayout41"));
        sourceLabel = new QLabel(SItab);
        sourceLabel->setObjectName(QStringLiteral("sourceLabel"));
        QSizePolicy sizePolicy14(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy14.setHorizontalStretch(232);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(sourceLabel->sizePolicy().hasHeightForWidth());
        sourceLabel->setSizePolicy(sizePolicy14);
        sourceLabel->setWordWrap(false);

        hboxLayout41->addWidget(sourceLabel);

        sourceComboBox = new QComboBox(SItab);
        sourceComboBox->setObjectName(QStringLiteral("sourceComboBox"));

        hboxLayout41->addWidget(sourceComboBox);


        verticalLayout_12->addLayout(hboxLayout41);

        sourceoptionsGroupBox = new QGroupBox(SItab);
        sourceoptionsGroupBox->setObjectName(QStringLiteral("sourceoptionsGroupBox"));
        QFont font1;
        sourceoptionsGroupBox->setFont(font1);
        verticalLayout_11 = new QVBoxLayout(sourceoptionsGroupBox);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        vboxLayout28 = new QVBoxLayout();
        vboxLayout28->setSpacing(6);
        vboxLayout28->setObjectName(QStringLiteral("vboxLayout28"));
        hboxLayout42 = new QHBoxLayout();
        hboxLayout42->setSpacing(6);
        hboxLayout42->setObjectName(QStringLiteral("hboxLayout42"));
        temp1Label = new QLabel(sourceoptionsGroupBox);
        temp1Label->setObjectName(QStringLiteral("temp1Label"));
        temp1Label->setWordWrap(false);

        hboxLayout42->addWidget(temp1Label);

        Spacer1_4 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout42->addItem(Spacer1_4);

        temp1Edit = new QLineEdit(sourceoptionsGroupBox);
        temp1Edit->setObjectName(QStringLiteral("temp1Edit"));

        hboxLayout42->addWidget(temp1Edit);


        vboxLayout28->addLayout(hboxLayout42);

        hboxLayout43 = new QHBoxLayout();
        hboxLayout43->setSpacing(6);
        hboxLayout43->setObjectName(QStringLiteral("hboxLayout43"));
        temp2Label = new QLabel(sourceoptionsGroupBox);
        temp2Label->setObjectName(QStringLiteral("temp2Label"));
        temp2Label->setWordWrap(false);

        hboxLayout43->addWidget(temp2Label);

        Spacer2_4 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout43->addItem(Spacer2_4);

        temp2Edit = new QLineEdit(sourceoptionsGroupBox);
        temp2Edit->setObjectName(QStringLiteral("temp2Edit"));

        hboxLayout43->addWidget(temp2Edit);


        vboxLayout28->addLayout(hboxLayout43);

        hboxLayout44 = new QHBoxLayout();
        hboxLayout44->setSpacing(6);
        hboxLayout44->setObjectName(QStringLiteral("hboxLayout44"));
        temp3Label = new QLabel(sourceoptionsGroupBox);
        temp3Label->setObjectName(QStringLiteral("temp3Label"));
        temp3Label->setWordWrap(false);

        hboxLayout44->addWidget(temp3Label);

        Spacer3_3 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout44->addItem(Spacer3_3);

        temp3Edit = new QLineEdit(sourceoptionsGroupBox);
        temp3Edit->setObjectName(QStringLiteral("temp3Edit"));

        hboxLayout44->addWidget(temp3Edit);


        vboxLayout28->addLayout(hboxLayout44);

        hboxLayout45 = new QHBoxLayout();
        hboxLayout45->setSpacing(6);
        hboxLayout45->setObjectName(QStringLiteral("hboxLayout45"));
        temp4Label = new QLabel(sourceoptionsGroupBox);
        temp4Label->setObjectName(QStringLiteral("temp4Label"));
        temp4Label->setWordWrap(false);

        hboxLayout45->addWidget(temp4Label);

        Spacer4_4 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout45->addItem(Spacer4_4);

        temp4Edit = new QLineEdit(sourceoptionsGroupBox);
        temp4Edit->setObjectName(QStringLiteral("temp4Edit"));

        hboxLayout45->addWidget(temp4Edit);


        vboxLayout28->addLayout(hboxLayout45);

        imodeComboBox = new QComboBox(sourceoptionsGroupBox);
        imodeComboBox->setObjectName(QStringLiteral("imodeComboBox"));

        vboxLayout28->addWidget(imodeComboBox);

        hboxLayout46 = new QHBoxLayout();
        hboxLayout46->setSpacing(6);
        hboxLayout46->setObjectName(QStringLiteral("hboxLayout46"));
        temp5Label = new QLabel(sourceoptionsGroupBox);
        temp5Label->setObjectName(QStringLiteral("temp5Label"));
        temp5Label->setWordWrap(false);

        hboxLayout46->addWidget(temp5Label);

        Spacer36 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout46->addItem(Spacer36);

        temp5Edit = new QLineEdit(sourceoptionsGroupBox);
        temp5Edit->setObjectName(QStringLiteral("temp5Edit"));

        hboxLayout46->addWidget(temp5Edit);


        vboxLayout28->addLayout(hboxLayout46);

        hboxLayout47 = new QHBoxLayout();
        hboxLayout47->setSpacing(6);
        hboxLayout47->setObjectName(QStringLiteral("hboxLayout47"));
        temp6Label = new QLabel(sourceoptionsGroupBox);
        temp6Label->setObjectName(QStringLiteral("temp6Label"));
        temp6Label->setWordWrap(false);

        hboxLayout47->addWidget(temp6Label);

        Spacer37_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout47->addItem(Spacer37_2);

        temp6Edit = new QLineEdit(sourceoptionsGroupBox);
        temp6Edit->setObjectName(QStringLiteral("temp6Edit"));

        hboxLayout47->addWidget(temp6Edit);


        vboxLayout28->addLayout(hboxLayout47);

        hboxLayout48 = new QHBoxLayout();
        hboxLayout48->setSpacing(6);
        hboxLayout48->setObjectName(QStringLiteral("hboxLayout48"));
        temp7Label = new QLabel(sourceoptionsGroupBox);
        temp7Label->setObjectName(QStringLiteral("temp7Label"));
        temp7Label->setWordWrap(false);

        hboxLayout48->addWidget(temp7Label);

        Spacer38_2 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout48->addItem(Spacer38_2);

        temp7Edit = new QLineEdit(sourceoptionsGroupBox);
        temp7Edit->setObjectName(QStringLiteral("temp7Edit"));

        hboxLayout48->addWidget(temp7Edit);


        vboxLayout28->addLayout(hboxLayout48);


        verticalLayout_11->addLayout(vboxLayout28);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_5);


        verticalLayout_12->addWidget(sourceoptionsGroupBox);


        verticalLayout_14->addLayout(verticalLayout_12);

        phasespaceGroupBox = new QGroupBox(SItab);
        phasespaceGroupBox->setObjectName(QStringLiteral("phasespaceGroupBox"));
        phasespaceGroupBox->setEnabled(false);
        verticalLayout_18 = new QVBoxLayout(phasespaceGroupBox);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        hboxLayout49 = new QHBoxLayout();
        hboxLayout49->setSpacing(6);
        hboxLayout49->setObjectName(QStringLiteral("hboxLayout49"));
        phasespaceComboBox = new QComboBox(phasespaceGroupBox);
        phasespaceComboBox->setObjectName(QStringLiteral("phasespaceComboBox"));
        sizePolicy6.setHeightForWidth(phasespaceComboBox->sizePolicy().hasHeightForWidth());
        phasespaceComboBox->setSizePolicy(sizePolicy6);
        phasespaceComboBox->setEditable(true);

        hboxLayout49->addWidget(phasespaceComboBox);

        phasespacePushButton = new QPushButton(phasespaceGroupBox);
        phasespacePushButton->setObjectName(QStringLiteral("phasespacePushButton"));
        sizePolicy7.setHeightForWidth(phasespacePushButton->sizePolicy().hasHeightForWidth());
        phasespacePushButton->setSizePolicy(sizePolicy7);

        hboxLayout49->addWidget(phasespacePushButton);


        verticalLayout_18->addLayout(hboxLayout49);


        verticalLayout_14->addWidget(phasespaceGroupBox);


        horizontalLayout_11->addLayout(verticalLayout_14);

        src20GroupBox = new QGroupBox(SItab);
        src20GroupBox->setObjectName(QStringLiteral("src20GroupBox"));
        src20GroupBox->setEnabled(true);
        src20GroupBox->setMaximumSize(QSize(288, 16777215));
        gridLayout_5 = new QGridLayout(src20GroupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        srcinpmodeButtonGroup = new QGroupBox(src20GroupBox);
        srcinpmodeButtonGroup->setObjectName(QStringLiteral("srcinpmodeButtonGroup"));
        srcinpmodeButtonGroup->setEnabled(true);
        hboxLayout50 = new QHBoxLayout(srcinpmodeButtonGroup);
        hboxLayout50->setSpacing(6);
        hboxLayout50->setContentsMargins(11, 11, 11, 11);
        hboxLayout50->setObjectName(QStringLiteral("hboxLayout50"));
        hboxLayout51 = new QHBoxLayout();
        hboxLayout51->setSpacing(6);
        hboxLayout51->setObjectName(QStringLiteral("hboxLayout51"));
        localRadioButton = new QRadioButton(srcinpmodeButtonGroup);
        localRadioButton->setObjectName(QStringLiteral("localRadioButton"));
        localRadioButton->setChecked(true);

        hboxLayout51->addWidget(localRadioButton);

        externalRadioButton = new QRadioButton(srcinpmodeButtonGroup);
        externalRadioButton->setObjectName(QStringLiteral("externalRadioButton"));

        hboxLayout51->addWidget(externalRadioButton);


        hboxLayout50->addLayout(hboxLayout51);


        gridLayout_5->addWidget(srcinpmodeButtonGroup, 0, 0, 1, 1);

        spacer56_3 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(spacer56_3, 1, 0, 1, 1);

        raddistTable = new QTableWidget(src20GroupBox);
        if (raddistTable->columnCount() < 2)
            raddistTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem616 = new QTableWidgetItem();
        raddistTable->setHorizontalHeaderItem(0, __qtablewidgetitem616);
        QTableWidgetItem *__qtablewidgetitem617 = new QTableWidgetItem();
        raddistTable->setHorizontalHeaderItem(1, __qtablewidgetitem617);
        if (raddistTable->rowCount() < 50)
            raddistTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem618 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(0, __qtablewidgetitem618);
        QTableWidgetItem *__qtablewidgetitem619 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(1, __qtablewidgetitem619);
        QTableWidgetItem *__qtablewidgetitem620 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(2, __qtablewidgetitem620);
        QTableWidgetItem *__qtablewidgetitem621 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(3, __qtablewidgetitem621);
        QTableWidgetItem *__qtablewidgetitem622 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(4, __qtablewidgetitem622);
        QTableWidgetItem *__qtablewidgetitem623 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(5, __qtablewidgetitem623);
        QTableWidgetItem *__qtablewidgetitem624 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(6, __qtablewidgetitem624);
        QTableWidgetItem *__qtablewidgetitem625 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(7, __qtablewidgetitem625);
        QTableWidgetItem *__qtablewidgetitem626 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(8, __qtablewidgetitem626);
        QTableWidgetItem *__qtablewidgetitem627 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(9, __qtablewidgetitem627);
        QTableWidgetItem *__qtablewidgetitem628 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(10, __qtablewidgetitem628);
        QTableWidgetItem *__qtablewidgetitem629 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(11, __qtablewidgetitem629);
        QTableWidgetItem *__qtablewidgetitem630 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(12, __qtablewidgetitem630);
        QTableWidgetItem *__qtablewidgetitem631 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(13, __qtablewidgetitem631);
        QTableWidgetItem *__qtablewidgetitem632 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(14, __qtablewidgetitem632);
        QTableWidgetItem *__qtablewidgetitem633 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(15, __qtablewidgetitem633);
        QTableWidgetItem *__qtablewidgetitem634 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(16, __qtablewidgetitem634);
        QTableWidgetItem *__qtablewidgetitem635 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(17, __qtablewidgetitem635);
        QTableWidgetItem *__qtablewidgetitem636 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(18, __qtablewidgetitem636);
        QTableWidgetItem *__qtablewidgetitem637 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(19, __qtablewidgetitem637);
        QTableWidgetItem *__qtablewidgetitem638 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(20, __qtablewidgetitem638);
        QTableWidgetItem *__qtablewidgetitem639 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(21, __qtablewidgetitem639);
        QTableWidgetItem *__qtablewidgetitem640 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(22, __qtablewidgetitem640);
        QTableWidgetItem *__qtablewidgetitem641 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(23, __qtablewidgetitem641);
        QTableWidgetItem *__qtablewidgetitem642 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(24, __qtablewidgetitem642);
        QTableWidgetItem *__qtablewidgetitem643 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(25, __qtablewidgetitem643);
        QTableWidgetItem *__qtablewidgetitem644 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(26, __qtablewidgetitem644);
        QTableWidgetItem *__qtablewidgetitem645 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(27, __qtablewidgetitem645);
        QTableWidgetItem *__qtablewidgetitem646 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(28, __qtablewidgetitem646);
        QTableWidgetItem *__qtablewidgetitem647 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(29, __qtablewidgetitem647);
        QTableWidgetItem *__qtablewidgetitem648 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(30, __qtablewidgetitem648);
        QTableWidgetItem *__qtablewidgetitem649 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(31, __qtablewidgetitem649);
        QTableWidgetItem *__qtablewidgetitem650 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(32, __qtablewidgetitem650);
        QTableWidgetItem *__qtablewidgetitem651 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(33, __qtablewidgetitem651);
        QTableWidgetItem *__qtablewidgetitem652 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(34, __qtablewidgetitem652);
        QTableWidgetItem *__qtablewidgetitem653 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(35, __qtablewidgetitem653);
        QTableWidgetItem *__qtablewidgetitem654 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(36, __qtablewidgetitem654);
        QTableWidgetItem *__qtablewidgetitem655 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(37, __qtablewidgetitem655);
        QTableWidgetItem *__qtablewidgetitem656 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(38, __qtablewidgetitem656);
        QTableWidgetItem *__qtablewidgetitem657 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(39, __qtablewidgetitem657);
        QTableWidgetItem *__qtablewidgetitem658 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(40, __qtablewidgetitem658);
        QTableWidgetItem *__qtablewidgetitem659 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(41, __qtablewidgetitem659);
        QTableWidgetItem *__qtablewidgetitem660 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(42, __qtablewidgetitem660);
        QTableWidgetItem *__qtablewidgetitem661 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(43, __qtablewidgetitem661);
        QTableWidgetItem *__qtablewidgetitem662 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(44, __qtablewidgetitem662);
        QTableWidgetItem *__qtablewidgetitem663 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(45, __qtablewidgetitem663);
        QTableWidgetItem *__qtablewidgetitem664 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(46, __qtablewidgetitem664);
        QTableWidgetItem *__qtablewidgetitem665 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(47, __qtablewidgetitem665);
        QTableWidgetItem *__qtablewidgetitem666 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(48, __qtablewidgetitem666);
        QTableWidgetItem *__qtablewidgetitem667 = new QTableWidgetItem();
        raddistTable->setVerticalHeaderItem(49, __qtablewidgetitem667);
        raddistTable->setObjectName(QStringLiteral("raddistTable"));
        raddistTable->setMinimumSize(QSize(250, 132));
        raddistTable->setMaximumSize(QSize(250, 132));
        raddistTable->setRowCount(50);
        raddistTable->setColumnCount(2);

        gridLayout_5->addWidget(raddistTable, 2, 0, 1, 1);

        spacer57_2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(spacer57_2, 3, 0, 1, 1);

        vboxLayout29 = new QVBoxLayout();
        vboxLayout29->setSpacing(6);
        vboxLayout29->setObjectName(QStringLiteral("vboxLayout29"));
        raddistfnameGroupBox = new QGroupBox(src20GroupBox);
        raddistfnameGroupBox->setObjectName(QStringLiteral("raddistfnameGroupBox"));
        raddistfnameGroupBox->setEnabled(false);
        hboxLayout52 = new QHBoxLayout(raddistfnameGroupBox);
        hboxLayout52->setSpacing(6);
        hboxLayout52->setContentsMargins(11, 11, 11, 11);
        hboxLayout52->setObjectName(QStringLiteral("hboxLayout52"));
        hboxLayout53 = new QHBoxLayout();
        hboxLayout53->setSpacing(6);
        hboxLayout53->setObjectName(QStringLiteral("hboxLayout53"));
        raddistfnameComboBox = new QComboBox(raddistfnameGroupBox);
        raddistfnameComboBox->setObjectName(QStringLiteral("raddistfnameComboBox"));
        sizePolicy6.setHeightForWidth(raddistfnameComboBox->sizePolicy().hasHeightForWidth());
        raddistfnameComboBox->setSizePolicy(sizePolicy6);
        raddistfnameComboBox->setEditable(true);

        hboxLayout53->addWidget(raddistfnameComboBox);

        raddistfnameButton = new QPushButton(raddistfnameGroupBox);
        raddistfnameButton->setObjectName(QStringLiteral("raddistfnameButton"));
        sizePolicy7.setHeightForWidth(raddistfnameButton->sizePolicy().hasHeightForWidth());
        raddistfnameButton->setSizePolicy(sizePolicy7);

        hboxLayout53->addWidget(raddistfnameButton);


        hboxLayout52->addLayout(hboxLayout53);


        vboxLayout29->addWidget(raddistfnameGroupBox);

        ioutrdistGroupBox = new QGroupBox(src20GroupBox);
        ioutrdistGroupBox->setObjectName(QStringLiteral("ioutrdistGroupBox"));
        ioutrdistGroupBox->setEnabled(false);
        hboxLayout54 = new QHBoxLayout(ioutrdistGroupBox);
        hboxLayout54->setSpacing(6);
        hboxLayout54->setContentsMargins(11, 11, 11, 11);
        hboxLayout54->setObjectName(QStringLiteral("hboxLayout54"));
        ioutrdistCheckBox = new QCheckBox(ioutrdistGroupBox);
        ioutrdistCheckBox->setObjectName(QStringLiteral("ioutrdistCheckBox"));
        ioutrdistCheckBox->setChecked(true);

        hboxLayout54->addWidget(ioutrdistCheckBox);


        vboxLayout29->addWidget(ioutrdistGroupBox);


        gridLayout_5->addLayout(vboxLayout29, 4, 0, 1, 1);


        horizontalLayout_11->addWidget(src20GroupBox);


        gridLayout_4->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        TabWidgetRZ->addTab(SItab, QString());
        MCTPtab = new QWidget();
        MCTPtab->setObjectName(QStringLiteral("MCTPtab"));
        gridLayout_18 = new QGridLayout(MCTPtab);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        hboxLayout55 = new QHBoxLayout();
        hboxLayout55->setSpacing(6);
        hboxLayout55->setObjectName(QStringLiteral("hboxLayout55"));
        vboxLayout30 = new QVBoxLayout();
        vboxLayout30->setSpacing(6);
        vboxLayout30->setObjectName(QStringLiteral("vboxLayout30"));
        PairAngSamplingGroupBox = new QGroupBox(MCTPtab);
        PairAngSamplingGroupBox->setObjectName(QStringLiteral("PairAngSamplingGroupBox"));
        sizePolicy9.setHeightForWidth(PairAngSamplingGroupBox->sizePolicy().hasHeightForWidth());
        PairAngSamplingGroupBox->setSizePolicy(sizePolicy9);
        PairAngSamplingGroupBox->setFont(font1);
        hboxLayout56 = new QHBoxLayout(PairAngSamplingGroupBox);
        hboxLayout56->setSpacing(6);
        hboxLayout56->setContentsMargins(11, 11, 11, 11);
        hboxLayout56->setObjectName(QStringLiteral("hboxLayout56"));
        PairAngSamplingComboBox = new QComboBox(PairAngSamplingGroupBox);
        PairAngSamplingComboBox->setObjectName(QStringLiteral("PairAngSamplingComboBox"));

        hboxLayout56->addWidget(PairAngSamplingComboBox);


        vboxLayout30->addWidget(PairAngSamplingGroupBox);

        BremsAngSamplingGroupBox = new QGroupBox(MCTPtab);
        BremsAngSamplingGroupBox->setObjectName(QStringLiteral("BremsAngSamplingGroupBox"));
        sizePolicy9.setHeightForWidth(BremsAngSamplingGroupBox->sizePolicy().hasHeightForWidth());
        BremsAngSamplingGroupBox->setSizePolicy(sizePolicy9);
        BremsAngSamplingGroupBox->setFont(font1);
        hboxLayout57 = new QHBoxLayout(BremsAngSamplingGroupBox);
        hboxLayout57->setSpacing(6);
        hboxLayout57->setContentsMargins(11, 11, 11, 11);
        hboxLayout57->setObjectName(QStringLiteral("hboxLayout57"));
        BremsAngSamplingComboBox = new QComboBox(BremsAngSamplingGroupBox);
        BremsAngSamplingComboBox->setObjectName(QStringLiteral("BremsAngSamplingComboBox"));

        hboxLayout57->addWidget(BremsAngSamplingComboBox);


        vboxLayout30->addWidget(BremsAngSamplingGroupBox);

        BremsXSectionGroupBox = new QGroupBox(MCTPtab);
        BremsXSectionGroupBox->setObjectName(QStringLiteral("BremsXSectionGroupBox"));
        sizePolicy9.setHeightForWidth(BremsXSectionGroupBox->sizePolicy().hasHeightForWidth());
        BremsXSectionGroupBox->setSizePolicy(sizePolicy9);
        BremsXSectionGroupBox->setFont(font1);
        hboxLayout58 = new QHBoxLayout(BremsXSectionGroupBox);
        hboxLayout58->setSpacing(6);
        hboxLayout58->setContentsMargins(11, 11, 11, 11);
        hboxLayout58->setObjectName(QStringLiteral("hboxLayout58"));
        BremsXSectionComboBox = new QComboBox(BremsXSectionGroupBox);
        BremsXSectionComboBox->setObjectName(QStringLiteral("BremsXSectionComboBox"));

        hboxLayout58->addWidget(BremsXSectionComboBox);


        vboxLayout30->addWidget(BremsXSectionGroupBox);


        hboxLayout55->addLayout(vboxLayout30);

        vboxLayout31 = new QVBoxLayout();
        vboxLayout31->setSpacing(6);
        vboxLayout31->setObjectName(QStringLiteral("vboxLayout31"));
        estep_algorithmGroupBox = new QGroupBox(MCTPtab);
        estep_algorithmGroupBox->setObjectName(QStringLiteral("estep_algorithmGroupBox"));
        sizePolicy9.setHeightForWidth(estep_algorithmGroupBox->sizePolicy().hasHeightForWidth());
        estep_algorithmGroupBox->setSizePolicy(sizePolicy9);
        estep_algorithmGroupBox->setFont(font1);
        hboxLayout59 = new QHBoxLayout(estep_algorithmGroupBox);
        hboxLayout59->setSpacing(6);
        hboxLayout59->setContentsMargins(11, 11, 11, 11);
        hboxLayout59->setObjectName(QStringLiteral("hboxLayout59"));
        estep_algorithmComboBox = new QComboBox(estep_algorithmGroupBox);
        estep_algorithmComboBox->setObjectName(QStringLiteral("estep_algorithmComboBox"));

        hboxLayout59->addWidget(estep_algorithmComboBox);


        vboxLayout31->addWidget(estep_algorithmGroupBox);

        EIIgroupBox = new QGroupBox(MCTPtab);
        EIIgroupBox->setObjectName(QStringLiteral("EIIgroupBox"));
        sizePolicy9.setHeightForWidth(EIIgroupBox->sizePolicy().hasHeightForWidth());
        EIIgroupBox->setSizePolicy(sizePolicy9);
        EIIgroupBox->setFont(font1);
        vboxLayout32 = new QVBoxLayout(EIIgroupBox);
        vboxLayout32->setSpacing(6);
        vboxLayout32->setContentsMargins(11, 11, 11, 11);
        vboxLayout32->setObjectName(QStringLiteral("vboxLayout32"));
        EIIcomboBox = new QComboBox(EIIgroupBox);
        EIIcomboBox->setObjectName(QStringLiteral("EIIcomboBox"));
        EIIcomboBox->setEditable(false);

        vboxLayout32->addWidget(EIIcomboBox);


        vboxLayout31->addWidget(EIIgroupBox);

        BCAGroupBox = new QGroupBox(MCTPtab);
        BCAGroupBox->setObjectName(QStringLiteral("BCAGroupBox"));
        sizePolicy9.setHeightForWidth(BCAGroupBox->sizePolicy().hasHeightForWidth());
        BCAGroupBox->setSizePolicy(sizePolicy9);
        BCAGroupBox->setFont(font1);
        hboxLayout60 = new QHBoxLayout(BCAGroupBox);
        hboxLayout60->setSpacing(6);
        hboxLayout60->setContentsMargins(11, 11, 11, 11);
        hboxLayout60->setObjectName(QStringLiteral("hboxLayout60"));
        BCAComboBox = new QComboBox(BCAGroupBox);
        BCAComboBox->setObjectName(QStringLiteral("BCAComboBox"));

        hboxLayout60->addWidget(BCAComboBox);


        vboxLayout31->addWidget(BCAGroupBox);


        hboxLayout55->addLayout(vboxLayout31);


        gridLayout_17->addLayout(hboxLayout55, 0, 0, 1, 1);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        GECUTGroupBox = new QGroupBox(MCTPtab);
        GECUTGroupBox->setObjectName(QStringLiteral("GECUTGroupBox"));
        sizePolicy5.setHeightForWidth(GECUTGroupBox->sizePolicy().hasHeightForWidth());
        GECUTGroupBox->setSizePolicy(sizePolicy5);
        GECUTGroupBox->setFont(font1);
        gridLayout_8 = new QGridLayout(GECUTGroupBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        GECUTEdit = new QLineEdit(GECUTGroupBox);
        GECUTEdit->setObjectName(QStringLiteral("GECUTEdit"));

        gridLayout_8->addWidget(GECUTEdit, 0, 0, 1, 1);


        verticalLayout_20->addWidget(GECUTGroupBox);

        GPCUTGroupBox = new QGroupBox(MCTPtab);
        GPCUTGroupBox->setObjectName(QStringLiteral("GPCUTGroupBox"));
        sizePolicy5.setHeightForWidth(GPCUTGroupBox->sizePolicy().hasHeightForWidth());
        GPCUTGroupBox->setSizePolicy(sizePolicy5);
        GPCUTGroupBox->setMinimumSize(QSize(115, 0));
        GPCUTGroupBox->setFont(font1);
        gridLayout_15 = new QGridLayout(GPCUTGroupBox);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        GPCUTEdit = new QLineEdit(GPCUTGroupBox);
        GPCUTEdit->setObjectName(QStringLiteral("GPCUTEdit"));
        sizePolicy5.setHeightForWidth(GPCUTEdit->sizePolicy().hasHeightForWidth());
        GPCUTEdit->setSizePolicy(sizePolicy5);
        GPCUTEdit->setMinimumSize(QSize(110, 0));

        gridLayout_15->addWidget(GPCUTEdit, 0, 0, 1, 1);


        verticalLayout_20->addWidget(GPCUTGroupBox);

        GSMAXGroupBox = new QGroupBox(MCTPtab);
        GSMAXGroupBox->setObjectName(QStringLiteral("GSMAXGroupBox"));
        sizePolicy5.setHeightForWidth(GSMAXGroupBox->sizePolicy().hasHeightForWidth());
        GSMAXGroupBox->setSizePolicy(sizePolicy5);
        GSMAXGroupBox->setFont(font1);
        gridLayout_14 = new QGridLayout(GSMAXGroupBox);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        GSMAXEdit = new QLineEdit(GSMAXGroupBox);
        GSMAXEdit->setObjectName(QStringLiteral("GSMAXEdit"));

        gridLayout_14->addWidget(GSMAXEdit, 0, 0, 1, 1);


        verticalLayout_20->addWidget(GSMAXGroupBox);


        gridLayout_17->addLayout(verticalLayout_20, 0, 1, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        RayleighgroupBox = new QGroupBox(MCTPtab);
        RayleighgroupBox->setObjectName(QStringLiteral("RayleighgroupBox"));
        sizePolicy5.setHeightForWidth(RayleighgroupBox->sizePolicy().hasHeightForWidth());
        RayleighgroupBox->setSizePolicy(sizePolicy5);
        RayleighgroupBox->setMinimumSize(QSize(190, 0));
        RayleighgroupBox->setFont(font1);
        gridLayout_9 = new QGridLayout(RayleighgroupBox);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        RayleighcomboBox = new QComboBox(RayleighgroupBox);
        RayleighcomboBox->setObjectName(QStringLiteral("RayleighcomboBox"));

        gridLayout_9->addWidget(RayleighcomboBox, 0, 0, 1, 1);


        gridLayout_13->addWidget(RayleighgroupBox, 0, 0, 1, 1);

        PEgroupBox = new QGroupBox(MCTPtab);
        PEgroupBox->setObjectName(QStringLiteral("PEgroupBox"));
        sizePolicy5.setHeightForWidth(PEgroupBox->sizePolicy().hasHeightForWidth());
        PEgroupBox->setSizePolicy(sizePolicy5);
        PEgroupBox->setMinimumSize(QSize(190, 0));
        PEgroupBox->setFont(font1);
        gridLayout_11 = new QGridLayout(PEgroupBox);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        PEcomboBox = new QComboBox(PEgroupBox);
        PEcomboBox->setObjectName(QStringLiteral("PEcomboBox"));

        gridLayout_11->addWidget(PEcomboBox, 0, 0, 1, 1);


        gridLayout_13->addWidget(PEgroupBox, 0, 1, 1, 1);

        BoundComptongroupBox = new QGroupBox(MCTPtab);
        BoundComptongroupBox->setObjectName(QStringLiteral("BoundComptongroupBox"));
        sizePolicy5.setHeightForWidth(BoundComptongroupBox->sizePolicy().hasHeightForWidth());
        BoundComptongroupBox->setSizePolicy(sizePolicy5);
        BoundComptongroupBox->setFont(font1);
        gridLayout_6 = new QGridLayout(BoundComptongroupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        BoundComptoncomboBox = new QComboBox(BoundComptongroupBox);
        BoundComptoncomboBox->setObjectName(QStringLiteral("BoundComptoncomboBox"));

        gridLayout_6->addWidget(BoundComptoncomboBox, 0, 0, 1, 1);


        gridLayout_13->addWidget(BoundComptongroupBox, 1, 0, 1, 1);

        RelaxationgroupBox = new QGroupBox(MCTPtab);
        RelaxationgroupBox->setObjectName(QStringLiteral("RelaxationgroupBox"));
        sizePolicy5.setHeightForWidth(RelaxationgroupBox->sizePolicy().hasHeightForWidth());
        RelaxationgroupBox->setSizePolicy(sizePolicy5);
        RelaxationgroupBox->setMinimumSize(QSize(190, 0));
        RelaxationgroupBox->setFont(font1);
        gridLayout_10 = new QGridLayout(RelaxationgroupBox);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        RelaxationcomboBox = new QComboBox(RelaxationgroupBox);
        RelaxationcomboBox->setObjectName(QStringLiteral("RelaxationcomboBox"));

        gridLayout_10->addWidget(RelaxationcomboBox, 0, 0, 1, 1);


        gridLayout_13->addWidget(RelaxationgroupBox, 1, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_13, 0, 0, 1, 2);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        ECUTCheckBox = new QCheckBox(MCTPtab);
        ECUTCheckBox->setObjectName(QStringLiteral("ECUTCheckBox"));
        ECUTCheckBox->setFont(font1);

        verticalLayout_19->addWidget(ECUTCheckBox);

        PCUTCheckBox = new QCheckBox(MCTPtab);
        PCUTCheckBox->setObjectName(QStringLiteral("PCUTCheckBox"));
        PCUTCheckBox->setFont(font1);

        verticalLayout_19->addWidget(PCUTCheckBox);

        SMAXCheckBox = new QCheckBox(MCTPtab);
        SMAXCheckBox->setObjectName(QStringLiteral("SMAXCheckBox"));
        SMAXCheckBox->setFont(font1);

        verticalLayout_19->addWidget(SMAXCheckBox);


        gridLayout_16->addLayout(verticalLayout_19, 1, 0, 1, 1);

        vboxLayout33 = new QVBoxLayout();
        vboxLayout33->setSpacing(6);
        vboxLayout33->setObjectName(QStringLiteral("vboxLayout33"));
        photonXSectiongroupBox = new QGroupBox(MCTPtab);
        photonXSectiongroupBox->setObjectName(QStringLiteral("photonXSectiongroupBox"));
        sizePolicy5.setHeightForWidth(photonXSectiongroupBox->sizePolicy().hasHeightForWidth());
        photonXSectiongroupBox->setSizePolicy(sizePolicy5);
        photonXSectiongroupBox->setFont(font1);
        vboxLayout34 = new QVBoxLayout(photonXSectiongroupBox);
        vboxLayout34->setSpacing(6);
        vboxLayout34->setContentsMargins(11, 11, 11, 11);
        vboxLayout34->setObjectName(QStringLiteral("vboxLayout34"));
        photonXSectioncomboBox = new QComboBox(photonXSectiongroupBox);
        photonXSectioncomboBox->setObjectName(QStringLiteral("photonXSectioncomboBox"));
        photonXSectioncomboBox->setFont(font1);
        photonXSectioncomboBox->setEditable(false);

        vboxLayout34->addWidget(photonXSectioncomboBox);


        vboxLayout33->addWidget(photonXSectiongroupBox);

        photonXSectionOutCheckBox = new QCheckBox(MCTPtab);
        photonXSectionOutCheckBox->setObjectName(QStringLiteral("photonXSectionOutCheckBox"));
        sizePolicy5.setHeightForWidth(photonXSectionOutCheckBox->sizePolicy().hasHeightForWidth());
        photonXSectionOutCheckBox->setSizePolicy(sizePolicy5);
        photonXSectionOutCheckBox->setFont(font1);
        photonXSectionOutCheckBox->setChecked(false);

        vboxLayout33->addWidget(photonXSectionOutCheckBox);


        gridLayout_16->addLayout(vboxLayout33, 1, 1, 1, 1);


        gridLayout_17->addLayout(gridLayout_16, 0, 2, 1, 1);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        customFFgroupBox = new QGroupBox(MCTPtab);
        customFFgroupBox->setObjectName(QStringLiteral("customFFgroupBox"));
        customFFgroupBox->setEnabled(true);
        sizePolicy2.setHeightForWidth(customFFgroupBox->sizePolicy().hasHeightForWidth());
        customFFgroupBox->setSizePolicy(sizePolicy2);
        customFFgroupBox->setMinimumSize(QSize(0, 0));
        gridLayout_12 = new QGridLayout(customFFgroupBox);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        customFFTable = new QTableWidget(customFFgroupBox);
        if (customFFTable->columnCount() < 2)
            customFFTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem668 = new QTableWidgetItem();
        customFFTable->setHorizontalHeaderItem(0, __qtablewidgetitem668);
        QTableWidgetItem *__qtablewidgetitem669 = new QTableWidgetItem();
        customFFTable->setHorizontalHeaderItem(1, __qtablewidgetitem669);
        if (customFFTable->rowCount() < 50)
            customFFTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem670 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(0, __qtablewidgetitem670);
        QTableWidgetItem *__qtablewidgetitem671 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(1, __qtablewidgetitem671);
        QTableWidgetItem *__qtablewidgetitem672 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(2, __qtablewidgetitem672);
        QTableWidgetItem *__qtablewidgetitem673 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(3, __qtablewidgetitem673);
        QTableWidgetItem *__qtablewidgetitem674 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(4, __qtablewidgetitem674);
        QTableWidgetItem *__qtablewidgetitem675 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(5, __qtablewidgetitem675);
        QTableWidgetItem *__qtablewidgetitem676 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(6, __qtablewidgetitem676);
        QTableWidgetItem *__qtablewidgetitem677 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(7, __qtablewidgetitem677);
        QTableWidgetItem *__qtablewidgetitem678 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(8, __qtablewidgetitem678);
        QTableWidgetItem *__qtablewidgetitem679 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(9, __qtablewidgetitem679);
        QTableWidgetItem *__qtablewidgetitem680 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(10, __qtablewidgetitem680);
        QTableWidgetItem *__qtablewidgetitem681 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(11, __qtablewidgetitem681);
        QTableWidgetItem *__qtablewidgetitem682 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(12, __qtablewidgetitem682);
        QTableWidgetItem *__qtablewidgetitem683 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(13, __qtablewidgetitem683);
        QTableWidgetItem *__qtablewidgetitem684 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(14, __qtablewidgetitem684);
        QTableWidgetItem *__qtablewidgetitem685 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(15, __qtablewidgetitem685);
        QTableWidgetItem *__qtablewidgetitem686 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(16, __qtablewidgetitem686);
        QTableWidgetItem *__qtablewidgetitem687 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(17, __qtablewidgetitem687);
        QTableWidgetItem *__qtablewidgetitem688 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(18, __qtablewidgetitem688);
        QTableWidgetItem *__qtablewidgetitem689 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(19, __qtablewidgetitem689);
        QTableWidgetItem *__qtablewidgetitem690 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(20, __qtablewidgetitem690);
        QTableWidgetItem *__qtablewidgetitem691 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(21, __qtablewidgetitem691);
        QTableWidgetItem *__qtablewidgetitem692 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(22, __qtablewidgetitem692);
        QTableWidgetItem *__qtablewidgetitem693 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(23, __qtablewidgetitem693);
        QTableWidgetItem *__qtablewidgetitem694 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(24, __qtablewidgetitem694);
        QTableWidgetItem *__qtablewidgetitem695 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(25, __qtablewidgetitem695);
        QTableWidgetItem *__qtablewidgetitem696 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(26, __qtablewidgetitem696);
        QTableWidgetItem *__qtablewidgetitem697 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(27, __qtablewidgetitem697);
        QTableWidgetItem *__qtablewidgetitem698 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(28, __qtablewidgetitem698);
        QTableWidgetItem *__qtablewidgetitem699 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(29, __qtablewidgetitem699);
        QTableWidgetItem *__qtablewidgetitem700 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(30, __qtablewidgetitem700);
        QTableWidgetItem *__qtablewidgetitem701 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(31, __qtablewidgetitem701);
        QTableWidgetItem *__qtablewidgetitem702 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(32, __qtablewidgetitem702);
        QTableWidgetItem *__qtablewidgetitem703 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(33, __qtablewidgetitem703);
        QTableWidgetItem *__qtablewidgetitem704 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(34, __qtablewidgetitem704);
        QTableWidgetItem *__qtablewidgetitem705 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(35, __qtablewidgetitem705);
        QTableWidgetItem *__qtablewidgetitem706 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(36, __qtablewidgetitem706);
        QTableWidgetItem *__qtablewidgetitem707 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(37, __qtablewidgetitem707);
        QTableWidgetItem *__qtablewidgetitem708 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(38, __qtablewidgetitem708);
        QTableWidgetItem *__qtablewidgetitem709 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(39, __qtablewidgetitem709);
        QTableWidgetItem *__qtablewidgetitem710 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(40, __qtablewidgetitem710);
        QTableWidgetItem *__qtablewidgetitem711 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(41, __qtablewidgetitem711);
        QTableWidgetItem *__qtablewidgetitem712 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(42, __qtablewidgetitem712);
        QTableWidgetItem *__qtablewidgetitem713 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(43, __qtablewidgetitem713);
        QTableWidgetItem *__qtablewidgetitem714 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(44, __qtablewidgetitem714);
        QTableWidgetItem *__qtablewidgetitem715 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(45, __qtablewidgetitem715);
        QTableWidgetItem *__qtablewidgetitem716 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(46, __qtablewidgetitem716);
        QTableWidgetItem *__qtablewidgetitem717 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(47, __qtablewidgetitem717);
        QTableWidgetItem *__qtablewidgetitem718 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(48, __qtablewidgetitem718);
        QTableWidgetItem *__qtablewidgetitem719 = new QTableWidgetItem();
        customFFTable->setVerticalHeaderItem(49, __qtablewidgetitem719);
        customFFTable->setObjectName(QStringLiteral("customFFTable"));
        customFFTable->setMinimumSize(QSize(570, 174));
        customFFTable->setAutoScroll(true);
        customFFTable->setRowCount(50);
        customFFTable->setColumnCount(2);

        gridLayout_12->addWidget(customFFTable, 0, 0, 1, 1);


        horizontalLayout_27->addWidget(customFFgroupBox);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        vboxLayout35 = new QVBoxLayout();
        vboxLayout35->setSpacing(6);
        vboxLayout35->setObjectName(QStringLiteral("vboxLayout35"));
        vboxLayout36 = new QVBoxLayout();
        vboxLayout36->setSpacing(6);
        vboxLayout36->setObjectName(QStringLiteral("vboxLayout36"));
        hboxLayout61 = new QHBoxLayout();
        hboxLayout61->setSpacing(6);
        hboxLayout61->setObjectName(QStringLiteral("hboxLayout61"));
        ESTEPELabel = new QLabel(MCTPtab);
        ESTEPELabel->setObjectName(QStringLiteral("ESTEPELabel"));
        sizePolicy2.setHeightForWidth(ESTEPELabel->sizePolicy().hasHeightForWidth());
        ESTEPELabel->setSizePolicy(sizePolicy2);
        ESTEPELabel->setFont(font1);
        ESTEPELabel->setWordWrap(false);

        hboxLayout61->addWidget(ESTEPELabel);

        ESTEPEEdit = new QLineEdit(MCTPtab);
        ESTEPEEdit->setObjectName(QStringLiteral("ESTEPEEdit"));
        sizePolicy5.setHeightForWidth(ESTEPEEdit->sizePolicy().hasHeightForWidth());
        ESTEPEEdit->setSizePolicy(sizePolicy5);
        ESTEPEEdit->setMaximumSize(QSize(90, 32767));
        ESTEPEEdit->setFont(font1);

        hboxLayout61->addWidget(ESTEPEEdit);


        vboxLayout36->addLayout(hboxLayout61);

        hboxLayout62 = new QHBoxLayout();
        hboxLayout62->setSpacing(6);
        hboxLayout62->setObjectName(QStringLiteral("hboxLayout62"));
        XImaxLabel = new QLabel(MCTPtab);
        XImaxLabel->setObjectName(QStringLiteral("XImaxLabel"));
        XImaxLabel->setFont(font1);
        XImaxLabel->setWordWrap(false);

        hboxLayout62->addWidget(XImaxLabel);

        XImaxEdit = new QLineEdit(MCTPtab);
        XImaxEdit->setObjectName(QStringLiteral("XImaxEdit"));
        sizePolicy5.setHeightForWidth(XImaxEdit->sizePolicy().hasHeightForWidth());
        XImaxEdit->setSizePolicy(sizePolicy5);
        XImaxEdit->setMaximumSize(QSize(90, 32767));
        XImaxEdit->setFont(font1);

        hboxLayout62->addWidget(XImaxEdit);


        vboxLayout36->addLayout(hboxLayout62);

        hboxLayout63 = new QHBoxLayout();
        hboxLayout63->setSpacing(6);
        hboxLayout63->setObjectName(QStringLiteral("hboxLayout63"));
        SkinDepthLabel = new QLabel(MCTPtab);
        SkinDepthLabel->setObjectName(QStringLiteral("SkinDepthLabel"));
        SkinDepthLabel->setFont(font1);
        SkinDepthLabel->setWordWrap(false);

        hboxLayout63->addWidget(SkinDepthLabel);

        SkinDepthEdit = new QLineEdit(MCTPtab);
        SkinDepthEdit->setObjectName(QStringLiteral("SkinDepthEdit"));
        sizePolicy5.setHeightForWidth(SkinDepthEdit->sizePolicy().hasHeightForWidth());
        SkinDepthEdit->setSizePolicy(sizePolicy5);
        SkinDepthEdit->setMaximumSize(QSize(90, 32767));
        SkinDepthEdit->setFont(font1);

        hboxLayout63->addWidget(SkinDepthEdit);


        vboxLayout36->addLayout(hboxLayout63);


        vboxLayout35->addLayout(vboxLayout36);

        SpinCheckBox = new QCheckBox(MCTPtab);
        SpinCheckBox->setObjectName(QStringLiteral("SpinCheckBox"));
        sizePolicy5.setHeightForWidth(SpinCheckBox->sizePolicy().hasHeightForWidth());
        SpinCheckBox->setSizePolicy(sizePolicy5);
        SpinCheckBox->setFont(font1);
        SpinCheckBox->setChecked(true);

        vboxLayout35->addWidget(SpinCheckBox);


        verticalLayout_27->addLayout(vboxLayout35);

        verticalSpacer_4 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_4);


        horizontalLayout_27->addLayout(verticalLayout_27);


        gridLayout_17->addLayout(horizontalLayout_27, 1, 0, 1, 3);


        gridLayout_18->addLayout(gridLayout_17, 0, 0, 1, 1);

        TabWidgetRZ->addTab(MCTPtab, QString());
        VRtab = new QWidget();
        VRtab->setObjectName(QStringLiteral("VRtab"));
        layoutWidget3 = new QWidget(VRtab);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 0, 921, 541));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        vboxLayout37 = new QVBoxLayout();
        vboxLayout37->setSpacing(6);
        vboxLayout37->setObjectName(QStringLiteral("vboxLayout37"));
        PhotonForcingGroupBox = new QGroupBox(layoutWidget3);
        PhotonForcingGroupBox->setObjectName(QStringLiteral("PhotonForcingGroupBox"));
        vboxLayout38 = new QVBoxLayout(PhotonForcingGroupBox);
        vboxLayout38->setSpacing(6);
        vboxLayout38->setContentsMargins(11, 11, 11, 11);
        vboxLayout38->setObjectName(QStringLiteral("vboxLayout38"));
        vboxLayout39 = new QVBoxLayout();
        vboxLayout39->setSpacing(6);
        vboxLayout39->setObjectName(QStringLiteral("vboxLayout39"));
        PhotonForcingCheckBox = new QCheckBox(PhotonForcingGroupBox);
        PhotonForcingCheckBox->setObjectName(QStringLiteral("PhotonForcingCheckBox"));
        sizePolicy13.setHeightForWidth(PhotonForcingCheckBox->sizePolicy().hasHeightForWidth());
        PhotonForcingCheckBox->setSizePolicy(sizePolicy13);
        QFont font2;
        font2.setFamily(QStringLiteral("Helvetica"));
        PhotonForcingCheckBox->setFont(font2);

        vboxLayout39->addWidget(PhotonForcingCheckBox);

        hboxLayout64 = new QHBoxLayout();
        hboxLayout64->setSpacing(6);
        hboxLayout64->setObjectName(QStringLiteral("hboxLayout64"));
        vboxLayout40 = new QVBoxLayout();
        vboxLayout40->setSpacing(6);
        vboxLayout40->setObjectName(QStringLiteral("vboxLayout40"));
        StartForcingLabel = new QLabel(PhotonForcingGroupBox);
        StartForcingLabel->setObjectName(QStringLiteral("StartForcingLabel"));
        StartForcingLabel->setEnabled(false);
        StartForcingLabel->setWordWrap(false);

        vboxLayout40->addWidget(StartForcingLabel);

        StopForcingLabel = new QLabel(PhotonForcingGroupBox);
        StopForcingLabel->setObjectName(QStringLiteral("StopForcingLabel"));
        StopForcingLabel->setEnabled(false);
        StopForcingLabel->setWordWrap(false);

        vboxLayout40->addWidget(StopForcingLabel);


        hboxLayout64->addLayout(vboxLayout40);

        vboxLayout41 = new QVBoxLayout();
        vboxLayout41->setSpacing(6);
        vboxLayout41->setObjectName(QStringLiteral("vboxLayout41"));
        StartForcingSpinBox = new QSpinBox(PhotonForcingGroupBox);
        StartForcingSpinBox->setObjectName(QStringLiteral("StartForcingSpinBox"));
        StartForcingSpinBox->setEnabled(false);

        vboxLayout41->addWidget(StartForcingSpinBox);

        StopForcingSpinBox = new QSpinBox(PhotonForcingGroupBox);
        StopForcingSpinBox->setObjectName(QStringLiteral("StopForcingSpinBox"));
        StopForcingSpinBox->setEnabled(false);

        vboxLayout41->addWidget(StopForcingSpinBox);


        hboxLayout64->addLayout(vboxLayout41);


        vboxLayout39->addLayout(hboxLayout64);


        vboxLayout38->addLayout(vboxLayout39);


        vboxLayout37->addWidget(PhotonForcingGroupBox);

        ExpTrafoCGroupBox = new QGroupBox(layoutWidget3);
        ExpTrafoCGroupBox->setObjectName(QStringLiteral("ExpTrafoCGroupBox"));
        hboxLayout65 = new QHBoxLayout(ExpTrafoCGroupBox);
        hboxLayout65->setSpacing(6);
        hboxLayout65->setContentsMargins(11, 11, 11, 11);
        hboxLayout65->setObjectName(QStringLiteral("hboxLayout65"));
        hboxLayout66 = new QHBoxLayout();
        hboxLayout66->setSpacing(6);
        hboxLayout66->setObjectName(QStringLiteral("hboxLayout66"));
        ExpTrafoCLabel = new QLabel(ExpTrafoCGroupBox);
        ExpTrafoCLabel->setObjectName(QStringLiteral("ExpTrafoCLabel"));
        ExpTrafoCLabel->setWordWrap(false);

        hboxLayout66->addWidget(ExpTrafoCLabel);

        ExpTrafoCEdit = new QLineEdit(ExpTrafoCGroupBox);
        ExpTrafoCEdit->setObjectName(QStringLiteral("ExpTrafoCEdit"));

        hboxLayout66->addWidget(ExpTrafoCEdit);


        hboxLayout65->addLayout(hboxLayout66);


        vboxLayout37->addWidget(ExpTrafoCGroupBox);

        RRGroupBox = new QGroupBox(layoutWidget3);
        RRGroupBox->setObjectName(QStringLiteral("RRGroupBox"));
        vboxLayout42 = new QVBoxLayout(RRGroupBox);
        vboxLayout42->setSpacing(6);
        vboxLayout42->setContentsMargins(11, 11, 11, 11);
        vboxLayout42->setObjectName(QStringLiteral("vboxLayout42"));
        vboxLayout43 = new QVBoxLayout();
        vboxLayout43->setSpacing(6);
        vboxLayout43->setObjectName(QStringLiteral("vboxLayout43"));
        hboxLayout67 = new QHBoxLayout();
        hboxLayout67->setSpacing(6);
        hboxLayout67->setObjectName(QStringLiteral("hboxLayout67"));
        RRDepthLabel = new QLabel(RRGroupBox);
        RRDepthLabel->setObjectName(QStringLiteral("RRDepthLabel"));
        RRDepthLabel->setWordWrap(false);

        hboxLayout67->addWidget(RRDepthLabel);

        RRDepthEdit = new QLineEdit(RRGroupBox);
        RRDepthEdit->setObjectName(QStringLiteral("RRDepthEdit"));

        hboxLayout67->addWidget(RRDepthEdit);


        vboxLayout43->addLayout(hboxLayout67);

        hboxLayout68 = new QHBoxLayout();
        hboxLayout68->setSpacing(6);
        hboxLayout68->setObjectName(QStringLiteral("hboxLayout68"));
        RRFractionLabel = new QLabel(RRGroupBox);
        RRFractionLabel->setObjectName(QStringLiteral("RRFractionLabel"));
        RRFractionLabel->setWordWrap(false);

        hboxLayout68->addWidget(RRFractionLabel);

        RRFractionEdit = new QLineEdit(RRGroupBox);
        RRFractionEdit->setObjectName(QStringLiteral("RRFractionEdit"));

        hboxLayout68->addWidget(RRFractionEdit);


        vboxLayout43->addLayout(hboxLayout68);


        vboxLayout42->addLayout(vboxLayout43);


        vboxLayout37->addWidget(RRGroupBox);

        photonSplitGroupBox = new QGroupBox(layoutWidget3);
        photonSplitGroupBox->setObjectName(QStringLiteral("photonSplitGroupBox"));
        hboxLayout69 = new QHBoxLayout(photonSplitGroupBox);
        hboxLayout69->setSpacing(6);
        hboxLayout69->setContentsMargins(11, 11, 11, 11);
        hboxLayout69->setObjectName(QStringLiteral("hboxLayout69"));
        hboxLayout70 = new QHBoxLayout();
        hboxLayout70->setSpacing(6);
        hboxLayout70->setObjectName(QStringLiteral("hboxLayout70"));
        photonSplitSpinBox = new QSpinBox(photonSplitGroupBox);
        photonSplitSpinBox->setObjectName(QStringLiteral("photonSplitSpinBox"));
        photonSplitSpinBox->setMinimum(1);
        photonSplitSpinBox->setMaximum(10000);
        photonSplitSpinBox->setValue(1);

        hboxLayout70->addWidget(photonSplitSpinBox);

        photonSplitLabel = new QLabel(photonSplitGroupBox);
        photonSplitLabel->setObjectName(QStringLiteral("photonSplitLabel"));
        photonSplitLabel->setWordWrap(false);

        hboxLayout70->addWidget(photonSplitLabel);


        hboxLayout69->addLayout(hboxLayout70);


        vboxLayout37->addWidget(photonSplitGroupBox);


        horizontalLayout_22->addLayout(vboxLayout37);

        vboxLayout44 = new QVBoxLayout();
        vboxLayout44->setSpacing(6);
        vboxLayout44->setObjectName(QStringLiteral("vboxLayout44"));
        CSEnhancementGroupBox = new QGroupBox(layoutWidget3);
        CSEnhancementGroupBox->setObjectName(QStringLiteral("CSEnhancementGroupBox"));
        layoutWidget4 = new QWidget(CSEnhancementGroupBox);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(19, 32, 371, 231));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        TextLabel8 = new QLabel(layoutWidget4);
        TextLabel8->setObjectName(QStringLiteral("TextLabel8"));
        QSizePolicy sizePolicy15(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(TextLabel8->sizePolicy().hasHeightForWidth());
        TextLabel8->setSizePolicy(sizePolicy15);
        TextLabel8->setWordWrap(false);

        horizontalLayout_2->addWidget(TextLabel8);

        CSEnhancementSpinBox = new QSpinBox(layoutWidget4);
        CSEnhancementSpinBox->setObjectName(QStringLiteral("CSEnhancementSpinBox"));
        CSEnhancementSpinBox->setMinimum(1);
        CSEnhancementSpinBox->setMaximum(10000);
        CSEnhancementSpinBox->setValue(200);

        horizontalLayout_2->addWidget(CSEnhancementSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        vboxLayout45 = new QVBoxLayout();
        vboxLayout45->setSpacing(6);
        vboxLayout45->setObjectName(QStringLiteral("vboxLayout45"));
        vboxLayout46 = new QVBoxLayout();
        vboxLayout46->setSpacing(6);
        vboxLayout46->setObjectName(QStringLiteral("vboxLayout46"));
        CSEnhancement_RegionsLabel1 = new QLabel(layoutWidget4);
        CSEnhancement_RegionsLabel1->setObjectName(QStringLiteral("CSEnhancement_RegionsLabel1"));
        CSEnhancement_RegionsLabel1->setEnabled(false);
        CSEnhancement_RegionsLabel1->setWordWrap(false);

        vboxLayout46->addWidget(CSEnhancement_RegionsLabel1);

        CSEnhancement_RegionsLabel2 = new QLabel(layoutWidget4);
        CSEnhancement_RegionsLabel2->setObjectName(QStringLiteral("CSEnhancement_RegionsLabel2"));
        CSEnhancement_RegionsLabel2->setEnabled(false);
        CSEnhancement_RegionsLabel2->setAlignment(Qt::AlignCenter);
        CSEnhancement_RegionsLabel2->setWordWrap(false);

        vboxLayout46->addWidget(CSEnhancement_RegionsLabel2);


        vboxLayout45->addLayout(vboxLayout46);

        hboxLayout71 = new QHBoxLayout();
        hboxLayout71->setSpacing(6);
        hboxLayout71->setObjectName(QStringLiteral("hboxLayout71"));
        CSEnhancementTable = new QTableWidget(layoutWidget4);
        if (CSEnhancementTable->columnCount() < 2)
            CSEnhancementTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem720 = new QTableWidgetItem();
        CSEnhancementTable->setHorizontalHeaderItem(0, __qtablewidgetitem720);
        QTableWidgetItem *__qtablewidgetitem721 = new QTableWidgetItem();
        CSEnhancementTable->setHorizontalHeaderItem(1, __qtablewidgetitem721);
        if (CSEnhancementTable->rowCount() < 50)
            CSEnhancementTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem722 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(0, __qtablewidgetitem722);
        QTableWidgetItem *__qtablewidgetitem723 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(1, __qtablewidgetitem723);
        QTableWidgetItem *__qtablewidgetitem724 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(2, __qtablewidgetitem724);
        QTableWidgetItem *__qtablewidgetitem725 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(3, __qtablewidgetitem725);
        QTableWidgetItem *__qtablewidgetitem726 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(4, __qtablewidgetitem726);
        QTableWidgetItem *__qtablewidgetitem727 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(5, __qtablewidgetitem727);
        QTableWidgetItem *__qtablewidgetitem728 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(6, __qtablewidgetitem728);
        QTableWidgetItem *__qtablewidgetitem729 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(7, __qtablewidgetitem729);
        QTableWidgetItem *__qtablewidgetitem730 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(8, __qtablewidgetitem730);
        QTableWidgetItem *__qtablewidgetitem731 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(9, __qtablewidgetitem731);
        QTableWidgetItem *__qtablewidgetitem732 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(10, __qtablewidgetitem732);
        QTableWidgetItem *__qtablewidgetitem733 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(11, __qtablewidgetitem733);
        QTableWidgetItem *__qtablewidgetitem734 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(12, __qtablewidgetitem734);
        QTableWidgetItem *__qtablewidgetitem735 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(13, __qtablewidgetitem735);
        QTableWidgetItem *__qtablewidgetitem736 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(14, __qtablewidgetitem736);
        QTableWidgetItem *__qtablewidgetitem737 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(15, __qtablewidgetitem737);
        QTableWidgetItem *__qtablewidgetitem738 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(16, __qtablewidgetitem738);
        QTableWidgetItem *__qtablewidgetitem739 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(17, __qtablewidgetitem739);
        QTableWidgetItem *__qtablewidgetitem740 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(18, __qtablewidgetitem740);
        QTableWidgetItem *__qtablewidgetitem741 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(19, __qtablewidgetitem741);
        QTableWidgetItem *__qtablewidgetitem742 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(20, __qtablewidgetitem742);
        QTableWidgetItem *__qtablewidgetitem743 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(21, __qtablewidgetitem743);
        QTableWidgetItem *__qtablewidgetitem744 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(22, __qtablewidgetitem744);
        QTableWidgetItem *__qtablewidgetitem745 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(23, __qtablewidgetitem745);
        QTableWidgetItem *__qtablewidgetitem746 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(24, __qtablewidgetitem746);
        QTableWidgetItem *__qtablewidgetitem747 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(25, __qtablewidgetitem747);
        QTableWidgetItem *__qtablewidgetitem748 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(26, __qtablewidgetitem748);
        QTableWidgetItem *__qtablewidgetitem749 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(27, __qtablewidgetitem749);
        QTableWidgetItem *__qtablewidgetitem750 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(28, __qtablewidgetitem750);
        QTableWidgetItem *__qtablewidgetitem751 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(29, __qtablewidgetitem751);
        QTableWidgetItem *__qtablewidgetitem752 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(30, __qtablewidgetitem752);
        QTableWidgetItem *__qtablewidgetitem753 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(31, __qtablewidgetitem753);
        QTableWidgetItem *__qtablewidgetitem754 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(32, __qtablewidgetitem754);
        QTableWidgetItem *__qtablewidgetitem755 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(33, __qtablewidgetitem755);
        QTableWidgetItem *__qtablewidgetitem756 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(34, __qtablewidgetitem756);
        QTableWidgetItem *__qtablewidgetitem757 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(35, __qtablewidgetitem757);
        QTableWidgetItem *__qtablewidgetitem758 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(36, __qtablewidgetitem758);
        QTableWidgetItem *__qtablewidgetitem759 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(37, __qtablewidgetitem759);
        QTableWidgetItem *__qtablewidgetitem760 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(38, __qtablewidgetitem760);
        QTableWidgetItem *__qtablewidgetitem761 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(39, __qtablewidgetitem761);
        QTableWidgetItem *__qtablewidgetitem762 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(40, __qtablewidgetitem762);
        QTableWidgetItem *__qtablewidgetitem763 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(41, __qtablewidgetitem763);
        QTableWidgetItem *__qtablewidgetitem764 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(42, __qtablewidgetitem764);
        QTableWidgetItem *__qtablewidgetitem765 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(43, __qtablewidgetitem765);
        QTableWidgetItem *__qtablewidgetitem766 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(44, __qtablewidgetitem766);
        QTableWidgetItem *__qtablewidgetitem767 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(45, __qtablewidgetitem767);
        QTableWidgetItem *__qtablewidgetitem768 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(46, __qtablewidgetitem768);
        QTableWidgetItem *__qtablewidgetitem769 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(47, __qtablewidgetitem769);
        QTableWidgetItem *__qtablewidgetitem770 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(48, __qtablewidgetitem770);
        QTableWidgetItem *__qtablewidgetitem771 = new QTableWidgetItem();
        CSEnhancementTable->setVerticalHeaderItem(49, __qtablewidgetitem771);
        CSEnhancementTable->setObjectName(QStringLiteral("CSEnhancementTable"));
        CSEnhancementTable->setMinimumSize(QSize(190, 0));
        CSEnhancementTable->setMaximumSize(QSize(195, 115));
        CSEnhancementTable->setRowCount(50);
        CSEnhancementTable->setColumnCount(2);

        hboxLayout71->addWidget(CSEnhancementTable);


        vboxLayout45->addLayout(hboxLayout71);


        verticalLayout_2->addLayout(vboxLayout45);


        vboxLayout44->addWidget(CSEnhancementGroupBox);

        vboxLayout47 = new QVBoxLayout();
        vboxLayout47->setSpacing(6);
        vboxLayout47->setObjectName(QStringLiteral("vboxLayout47"));
        ESAVEINGroupBox = new QGroupBox(layoutWidget3);
        ESAVEINGroupBox->setObjectName(QStringLiteral("ESAVEINGroupBox"));
        vboxLayout48 = new QVBoxLayout(ESAVEINGroupBox);
        vboxLayout48->setSpacing(6);
        vboxLayout48->setContentsMargins(11, 11, 11, 11);
        vboxLayout48->setObjectName(QStringLiteral("vboxLayout48"));
        vboxLayout49 = new QVBoxLayout();
        vboxLayout49->setSpacing(6);
        vboxLayout49->setObjectName(QStringLiteral("vboxLayout49"));
        eRangeRejCheckBox = new QCheckBox(ESAVEINGroupBox);
        eRangeRejCheckBox->setObjectName(QStringLiteral("eRangeRejCheckBox"));

        vboxLayout49->addWidget(eRangeRejCheckBox);

        hboxLayout72 = new QHBoxLayout();
        hboxLayout72->setSpacing(6);
        hboxLayout72->setObjectName(QStringLiteral("hboxLayout72"));
        ESAVEINLabel = new QLabel(ESAVEINGroupBox);
        ESAVEINLabel->setObjectName(QStringLiteral("ESAVEINLabel"));
        ESAVEINLabel->setEnabled(false);
        ESAVEINLabel->setWordWrap(false);

        hboxLayout72->addWidget(ESAVEINLabel);

        Spacer74 = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout72->addItem(Spacer74);

        ESAVEINEdit = new QLineEdit(ESAVEINGroupBox);
        ESAVEINEdit->setObjectName(QStringLiteral("ESAVEINEdit"));
        ESAVEINEdit->setEnabled(false);

        hboxLayout72->addWidget(ESAVEINEdit);


        vboxLayout49->addLayout(hboxLayout72);


        vboxLayout48->addLayout(vboxLayout49);


        vboxLayout47->addWidget(ESAVEINGroupBox);

        BremsSplitGroupBox = new QGroupBox(layoutWidget3);
        BremsSplitGroupBox->setObjectName(QStringLiteral("BremsSplitGroupBox"));
        vboxLayout50 = new QVBoxLayout(BremsSplitGroupBox);
        vboxLayout50->setSpacing(6);
        vboxLayout50->setContentsMargins(11, 11, 11, 11);
        vboxLayout50->setObjectName(QStringLiteral("vboxLayout50"));
        vboxLayout51 = new QVBoxLayout();
        vboxLayout51->setSpacing(6);
        vboxLayout51->setObjectName(QStringLiteral("vboxLayout51"));
        hboxLayout73 = new QHBoxLayout();
        hboxLayout73->setSpacing(6);
        hboxLayout73->setObjectName(QStringLiteral("hboxLayout73"));
        BremsSplitSpinBox = new QSpinBox(BremsSplitGroupBox);
        BremsSplitSpinBox->setObjectName(QStringLiteral("BremsSplitSpinBox"));
        BremsSplitSpinBox->setMinimum(1);
        BremsSplitSpinBox->setMaximum(1000);
        BremsSplitSpinBox->setValue(1);

        hboxLayout73->addWidget(BremsSplitSpinBox);

        BremsSplitTextLabel = new QLabel(BremsSplitGroupBox);
        BremsSplitTextLabel->setObjectName(QStringLiteral("BremsSplitTextLabel"));
        BremsSplitTextLabel->setWordWrap(false);

        hboxLayout73->addWidget(BremsSplitTextLabel);


        vboxLayout51->addLayout(hboxLayout73);

        BremsSplitCheckBox = new QCheckBox(BremsSplitGroupBox);
        BremsSplitCheckBox->setObjectName(QStringLiteral("BremsSplitCheckBox"));

        vboxLayout51->addWidget(BremsSplitCheckBox);

        ChargedPartRRCheckBox = new QCheckBox(BremsSplitGroupBox);
        ChargedPartRRCheckBox->setObjectName(QStringLiteral("ChargedPartRRCheckBox"));

        vboxLayout51->addWidget(ChargedPartRRCheckBox);


        vboxLayout50->addLayout(vboxLayout51);


        vboxLayout47->addWidget(BremsSplitGroupBox);


        vboxLayout44->addLayout(vboxLayout47);


        horizontalLayout_22->addLayout(vboxLayout44);

        TabWidgetRZ->addTab(VRtab, QString());
        MCTPRegTab = new QWidget();
        MCTPRegTab->setObjectName(QStringLiteral("MCTPRegTab"));
        layoutWidget5 = new QWidget(MCTPRegTab);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 3, 901, 541));
        verticalLayout_43 = new QVBoxLayout(layoutWidget5);
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setContentsMargins(11, 11, 11, 11);
        verticalLayout_43->setObjectName(QStringLiteral("verticalLayout_43"));
        verticalLayout_43->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        PCUTGroupBox = new QGroupBox(layoutWidget5);
        PCUTGroupBox->setObjectName(QStringLiteral("PCUTGroupBox"));
        verticalLayout_40 = new QVBoxLayout(PCUTGroupBox);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QStringLiteral("verticalLayout_40"));
        PCUTTable = new QTableWidget(PCUTGroupBox);
        if (PCUTTable->columnCount() < 3)
            PCUTTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem772 = new QTableWidgetItem();
        PCUTTable->setHorizontalHeaderItem(0, __qtablewidgetitem772);
        QTableWidgetItem *__qtablewidgetitem773 = new QTableWidgetItem();
        PCUTTable->setHorizontalHeaderItem(1, __qtablewidgetitem773);
        QTableWidgetItem *__qtablewidgetitem774 = new QTableWidgetItem();
        PCUTTable->setHorizontalHeaderItem(2, __qtablewidgetitem774);
        if (PCUTTable->rowCount() < 20)
            PCUTTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem775 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(0, __qtablewidgetitem775);
        QTableWidgetItem *__qtablewidgetitem776 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(1, __qtablewidgetitem776);
        QTableWidgetItem *__qtablewidgetitem777 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(2, __qtablewidgetitem777);
        QTableWidgetItem *__qtablewidgetitem778 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(3, __qtablewidgetitem778);
        QTableWidgetItem *__qtablewidgetitem779 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(4, __qtablewidgetitem779);
        QTableWidgetItem *__qtablewidgetitem780 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(5, __qtablewidgetitem780);
        QTableWidgetItem *__qtablewidgetitem781 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(6, __qtablewidgetitem781);
        QTableWidgetItem *__qtablewidgetitem782 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(7, __qtablewidgetitem782);
        QTableWidgetItem *__qtablewidgetitem783 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(8, __qtablewidgetitem783);
        QTableWidgetItem *__qtablewidgetitem784 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(9, __qtablewidgetitem784);
        QTableWidgetItem *__qtablewidgetitem785 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(10, __qtablewidgetitem785);
        QTableWidgetItem *__qtablewidgetitem786 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(11, __qtablewidgetitem786);
        QTableWidgetItem *__qtablewidgetitem787 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(12, __qtablewidgetitem787);
        QTableWidgetItem *__qtablewidgetitem788 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(13, __qtablewidgetitem788);
        QTableWidgetItem *__qtablewidgetitem789 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(14, __qtablewidgetitem789);
        QTableWidgetItem *__qtablewidgetitem790 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(15, __qtablewidgetitem790);
        QTableWidgetItem *__qtablewidgetitem791 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(16, __qtablewidgetitem791);
        QTableWidgetItem *__qtablewidgetitem792 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(17, __qtablewidgetitem792);
        QTableWidgetItem *__qtablewidgetitem793 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(18, __qtablewidgetitem793);
        QTableWidgetItem *__qtablewidgetitem794 = new QTableWidgetItem();
        PCUTTable->setVerticalHeaderItem(19, __qtablewidgetitem794);
        PCUTTable->setObjectName(QStringLiteral("PCUTTable"));
        sizePolicy2.setHeightForWidth(PCUTTable->sizePolicy().hasHeightForWidth());
        PCUTTable->setSizePolicy(sizePolicy2);
        PCUTTable->setRowCount(20);
        PCUTTable->setColumnCount(3);

        verticalLayout_40->addWidget(PCUTTable);


        horizontalLayout_26->addWidget(PCUTGroupBox);

        ECUTGroupBox = new QGroupBox(layoutWidget5);
        ECUTGroupBox->setObjectName(QStringLiteral("ECUTGroupBox"));
        verticalLayout_41 = new QVBoxLayout(ECUTGroupBox);
        verticalLayout_41->setSpacing(6);
        verticalLayout_41->setContentsMargins(11, 11, 11, 11);
        verticalLayout_41->setObjectName(QStringLiteral("verticalLayout_41"));
        ECUTTable = new QTableWidget(ECUTGroupBox);
        if (ECUTTable->columnCount() < 3)
            ECUTTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem795 = new QTableWidgetItem();
        ECUTTable->setHorizontalHeaderItem(0, __qtablewidgetitem795);
        QTableWidgetItem *__qtablewidgetitem796 = new QTableWidgetItem();
        ECUTTable->setHorizontalHeaderItem(1, __qtablewidgetitem796);
        QTableWidgetItem *__qtablewidgetitem797 = new QTableWidgetItem();
        ECUTTable->setHorizontalHeaderItem(2, __qtablewidgetitem797);
        if (ECUTTable->rowCount() < 20)
            ECUTTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem798 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(0, __qtablewidgetitem798);
        QTableWidgetItem *__qtablewidgetitem799 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(1, __qtablewidgetitem799);
        QTableWidgetItem *__qtablewidgetitem800 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(2, __qtablewidgetitem800);
        QTableWidgetItem *__qtablewidgetitem801 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(3, __qtablewidgetitem801);
        QTableWidgetItem *__qtablewidgetitem802 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(4, __qtablewidgetitem802);
        QTableWidgetItem *__qtablewidgetitem803 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(5, __qtablewidgetitem803);
        QTableWidgetItem *__qtablewidgetitem804 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(6, __qtablewidgetitem804);
        QTableWidgetItem *__qtablewidgetitem805 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(7, __qtablewidgetitem805);
        QTableWidgetItem *__qtablewidgetitem806 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(8, __qtablewidgetitem806);
        QTableWidgetItem *__qtablewidgetitem807 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(9, __qtablewidgetitem807);
        QTableWidgetItem *__qtablewidgetitem808 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(10, __qtablewidgetitem808);
        QTableWidgetItem *__qtablewidgetitem809 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(11, __qtablewidgetitem809);
        QTableWidgetItem *__qtablewidgetitem810 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(12, __qtablewidgetitem810);
        QTableWidgetItem *__qtablewidgetitem811 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(13, __qtablewidgetitem811);
        QTableWidgetItem *__qtablewidgetitem812 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(14, __qtablewidgetitem812);
        QTableWidgetItem *__qtablewidgetitem813 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(15, __qtablewidgetitem813);
        QTableWidgetItem *__qtablewidgetitem814 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(16, __qtablewidgetitem814);
        QTableWidgetItem *__qtablewidgetitem815 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(17, __qtablewidgetitem815);
        QTableWidgetItem *__qtablewidgetitem816 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(18, __qtablewidgetitem816);
        QTableWidgetItem *__qtablewidgetitem817 = new QTableWidgetItem();
        ECUTTable->setVerticalHeaderItem(19, __qtablewidgetitem817);
        ECUTTable->setObjectName(QStringLiteral("ECUTTable"));
        sizePolicy2.setHeightForWidth(ECUTTable->sizePolicy().hasHeightForWidth());
        ECUTTable->setSizePolicy(sizePolicy2);
        ECUTTable->setRowCount(20);
        ECUTTable->setColumnCount(3);

        verticalLayout_41->addWidget(ECUTTable);


        horizontalLayout_26->addWidget(ECUTGroupBox);

        SMAXGroupBox = new QGroupBox(layoutWidget5);
        SMAXGroupBox->setObjectName(QStringLiteral("SMAXGroupBox"));
        verticalLayout_42 = new QVBoxLayout(SMAXGroupBox);
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setContentsMargins(11, 11, 11, 11);
        verticalLayout_42->setObjectName(QStringLiteral("verticalLayout_42"));
        SMAXTable = new QTableWidget(SMAXGroupBox);
        if (SMAXTable->columnCount() < 3)
            SMAXTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem818 = new QTableWidgetItem();
        SMAXTable->setHorizontalHeaderItem(0, __qtablewidgetitem818);
        QTableWidgetItem *__qtablewidgetitem819 = new QTableWidgetItem();
        SMAXTable->setHorizontalHeaderItem(1, __qtablewidgetitem819);
        QTableWidgetItem *__qtablewidgetitem820 = new QTableWidgetItem();
        SMAXTable->setHorizontalHeaderItem(2, __qtablewidgetitem820);
        if (SMAXTable->rowCount() < 20)
            SMAXTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem821 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(0, __qtablewidgetitem821);
        QTableWidgetItem *__qtablewidgetitem822 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(1, __qtablewidgetitem822);
        QTableWidgetItem *__qtablewidgetitem823 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(2, __qtablewidgetitem823);
        QTableWidgetItem *__qtablewidgetitem824 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(3, __qtablewidgetitem824);
        QTableWidgetItem *__qtablewidgetitem825 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(4, __qtablewidgetitem825);
        QTableWidgetItem *__qtablewidgetitem826 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(5, __qtablewidgetitem826);
        QTableWidgetItem *__qtablewidgetitem827 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(6, __qtablewidgetitem827);
        QTableWidgetItem *__qtablewidgetitem828 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(7, __qtablewidgetitem828);
        QTableWidgetItem *__qtablewidgetitem829 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(8, __qtablewidgetitem829);
        QTableWidgetItem *__qtablewidgetitem830 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(9, __qtablewidgetitem830);
        QTableWidgetItem *__qtablewidgetitem831 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(10, __qtablewidgetitem831);
        QTableWidgetItem *__qtablewidgetitem832 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(11, __qtablewidgetitem832);
        QTableWidgetItem *__qtablewidgetitem833 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(12, __qtablewidgetitem833);
        QTableWidgetItem *__qtablewidgetitem834 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(13, __qtablewidgetitem834);
        QTableWidgetItem *__qtablewidgetitem835 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(14, __qtablewidgetitem835);
        QTableWidgetItem *__qtablewidgetitem836 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(15, __qtablewidgetitem836);
        QTableWidgetItem *__qtablewidgetitem837 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(16, __qtablewidgetitem837);
        QTableWidgetItem *__qtablewidgetitem838 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(17, __qtablewidgetitem838);
        QTableWidgetItem *__qtablewidgetitem839 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(18, __qtablewidgetitem839);
        QTableWidgetItem *__qtablewidgetitem840 = new QTableWidgetItem();
        SMAXTable->setVerticalHeaderItem(19, __qtablewidgetitem840);
        SMAXTable->setObjectName(QStringLiteral("SMAXTable"));
        sizePolicy2.setHeightForWidth(SMAXTable->sizePolicy().hasHeightForWidth());
        SMAXTable->setSizePolicy(sizePolicy2);
        SMAXTable->setRowCount(20);
        SMAXTable->setColumnCount(3);

        verticalLayout_42->addWidget(SMAXTable);


        horizontalLayout_26->addWidget(SMAXGroupBox);


        verticalLayout_43->addLayout(horizontalLayout_26);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        BoundComptonGroupBox = new QGroupBox(layoutWidget5);
        BoundComptonGroupBox->setObjectName(QStringLiteral("BoundComptonGroupBox"));
        verticalLayout_39 = new QVBoxLayout(BoundComptonGroupBox);
        verticalLayout_39->setSpacing(6);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QStringLiteral("verticalLayout_39"));
        BoundComptonTable = new QTableWidget(BoundComptonGroupBox);
        if (BoundComptonTable->columnCount() < 2)
            BoundComptonTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem841 = new QTableWidgetItem();
        BoundComptonTable->setHorizontalHeaderItem(0, __qtablewidgetitem841);
        QTableWidgetItem *__qtablewidgetitem842 = new QTableWidgetItem();
        BoundComptonTable->setHorizontalHeaderItem(1, __qtablewidgetitem842);
        if (BoundComptonTable->rowCount() < 20)
            BoundComptonTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem843 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(0, __qtablewidgetitem843);
        QTableWidgetItem *__qtablewidgetitem844 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(1, __qtablewidgetitem844);
        QTableWidgetItem *__qtablewidgetitem845 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(2, __qtablewidgetitem845);
        QTableWidgetItem *__qtablewidgetitem846 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(3, __qtablewidgetitem846);
        QTableWidgetItem *__qtablewidgetitem847 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(4, __qtablewidgetitem847);
        QTableWidgetItem *__qtablewidgetitem848 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(5, __qtablewidgetitem848);
        QTableWidgetItem *__qtablewidgetitem849 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(6, __qtablewidgetitem849);
        QTableWidgetItem *__qtablewidgetitem850 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(7, __qtablewidgetitem850);
        QTableWidgetItem *__qtablewidgetitem851 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(8, __qtablewidgetitem851);
        QTableWidgetItem *__qtablewidgetitem852 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(9, __qtablewidgetitem852);
        QTableWidgetItem *__qtablewidgetitem853 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(10, __qtablewidgetitem853);
        QTableWidgetItem *__qtablewidgetitem854 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(11, __qtablewidgetitem854);
        QTableWidgetItem *__qtablewidgetitem855 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(12, __qtablewidgetitem855);
        QTableWidgetItem *__qtablewidgetitem856 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(13, __qtablewidgetitem856);
        QTableWidgetItem *__qtablewidgetitem857 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(14, __qtablewidgetitem857);
        QTableWidgetItem *__qtablewidgetitem858 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(15, __qtablewidgetitem858);
        QTableWidgetItem *__qtablewidgetitem859 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(16, __qtablewidgetitem859);
        QTableWidgetItem *__qtablewidgetitem860 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(17, __qtablewidgetitem860);
        QTableWidgetItem *__qtablewidgetitem861 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(18, __qtablewidgetitem861);
        QTableWidgetItem *__qtablewidgetitem862 = new QTableWidgetItem();
        BoundComptonTable->setVerticalHeaderItem(19, __qtablewidgetitem862);
        BoundComptonTable->setObjectName(QStringLiteral("BoundComptonTable"));
        sizePolicy2.setHeightForWidth(BoundComptonTable->sizePolicy().hasHeightForWidth());
        BoundComptonTable->setSizePolicy(sizePolicy2);
        BoundComptonTable->setRowCount(20);
        BoundComptonTable->setColumnCount(2);

        verticalLayout_39->addWidget(BoundComptonTable);


        horizontalLayout_25->addWidget(BoundComptonGroupBox);

        RelaxationsGroupBox = new QGroupBox(layoutWidget5);
        RelaxationsGroupBox->setObjectName(QStringLiteral("RelaxationsGroupBox"));
        verticalLayout_38 = new QVBoxLayout(RelaxationsGroupBox);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QStringLiteral("verticalLayout_38"));
        RelaxationsTable = new QTableWidget(RelaxationsGroupBox);
        if (RelaxationsTable->columnCount() < 2)
            RelaxationsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem863 = new QTableWidgetItem();
        RelaxationsTable->setHorizontalHeaderItem(0, __qtablewidgetitem863);
        QTableWidgetItem *__qtablewidgetitem864 = new QTableWidgetItem();
        RelaxationsTable->setHorizontalHeaderItem(1, __qtablewidgetitem864);
        if (RelaxationsTable->rowCount() < 20)
            RelaxationsTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem865 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(0, __qtablewidgetitem865);
        QTableWidgetItem *__qtablewidgetitem866 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(1, __qtablewidgetitem866);
        QTableWidgetItem *__qtablewidgetitem867 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(2, __qtablewidgetitem867);
        QTableWidgetItem *__qtablewidgetitem868 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(3, __qtablewidgetitem868);
        QTableWidgetItem *__qtablewidgetitem869 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(4, __qtablewidgetitem869);
        QTableWidgetItem *__qtablewidgetitem870 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(5, __qtablewidgetitem870);
        QTableWidgetItem *__qtablewidgetitem871 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(6, __qtablewidgetitem871);
        QTableWidgetItem *__qtablewidgetitem872 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(7, __qtablewidgetitem872);
        QTableWidgetItem *__qtablewidgetitem873 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(8, __qtablewidgetitem873);
        QTableWidgetItem *__qtablewidgetitem874 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(9, __qtablewidgetitem874);
        QTableWidgetItem *__qtablewidgetitem875 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(10, __qtablewidgetitem875);
        QTableWidgetItem *__qtablewidgetitem876 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(11, __qtablewidgetitem876);
        QTableWidgetItem *__qtablewidgetitem877 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(12, __qtablewidgetitem877);
        QTableWidgetItem *__qtablewidgetitem878 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(13, __qtablewidgetitem878);
        QTableWidgetItem *__qtablewidgetitem879 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(14, __qtablewidgetitem879);
        QTableWidgetItem *__qtablewidgetitem880 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(15, __qtablewidgetitem880);
        QTableWidgetItem *__qtablewidgetitem881 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(16, __qtablewidgetitem881);
        QTableWidgetItem *__qtablewidgetitem882 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(17, __qtablewidgetitem882);
        QTableWidgetItem *__qtablewidgetitem883 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(18, __qtablewidgetitem883);
        QTableWidgetItem *__qtablewidgetitem884 = new QTableWidgetItem();
        RelaxationsTable->setVerticalHeaderItem(19, __qtablewidgetitem884);
        RelaxationsTable->setObjectName(QStringLiteral("RelaxationsTable"));
        sizePolicy2.setHeightForWidth(RelaxationsTable->sizePolicy().hasHeightForWidth());
        RelaxationsTable->setSizePolicy(sizePolicy2);
        RelaxationsTable->setRowCount(20);
        RelaxationsTable->setColumnCount(2);

        verticalLayout_38->addWidget(RelaxationsTable);


        horizontalLayout_25->addWidget(RelaxationsGroupBox);

        PEAngSamGroupBox = new QGroupBox(layoutWidget5);
        PEAngSamGroupBox->setObjectName(QStringLiteral("PEAngSamGroupBox"));
        verticalLayout_29 = new QVBoxLayout(PEAngSamGroupBox);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        PEAngSamplingTable = new QTableWidget(PEAngSamGroupBox);
        if (PEAngSamplingTable->columnCount() < 2)
            PEAngSamplingTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem885 = new QTableWidgetItem();
        PEAngSamplingTable->setHorizontalHeaderItem(0, __qtablewidgetitem885);
        QTableWidgetItem *__qtablewidgetitem886 = new QTableWidgetItem();
        PEAngSamplingTable->setHorizontalHeaderItem(1, __qtablewidgetitem886);
        if (PEAngSamplingTable->rowCount() < 20)
            PEAngSamplingTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem887 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(0, __qtablewidgetitem887);
        QTableWidgetItem *__qtablewidgetitem888 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(1, __qtablewidgetitem888);
        QTableWidgetItem *__qtablewidgetitem889 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(2, __qtablewidgetitem889);
        QTableWidgetItem *__qtablewidgetitem890 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(3, __qtablewidgetitem890);
        QTableWidgetItem *__qtablewidgetitem891 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(4, __qtablewidgetitem891);
        QTableWidgetItem *__qtablewidgetitem892 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(5, __qtablewidgetitem892);
        QTableWidgetItem *__qtablewidgetitem893 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(6, __qtablewidgetitem893);
        QTableWidgetItem *__qtablewidgetitem894 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(7, __qtablewidgetitem894);
        QTableWidgetItem *__qtablewidgetitem895 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(8, __qtablewidgetitem895);
        QTableWidgetItem *__qtablewidgetitem896 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(9, __qtablewidgetitem896);
        QTableWidgetItem *__qtablewidgetitem897 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(10, __qtablewidgetitem897);
        QTableWidgetItem *__qtablewidgetitem898 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(11, __qtablewidgetitem898);
        QTableWidgetItem *__qtablewidgetitem899 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(12, __qtablewidgetitem899);
        QTableWidgetItem *__qtablewidgetitem900 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(13, __qtablewidgetitem900);
        QTableWidgetItem *__qtablewidgetitem901 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(14, __qtablewidgetitem901);
        QTableWidgetItem *__qtablewidgetitem902 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(15, __qtablewidgetitem902);
        QTableWidgetItem *__qtablewidgetitem903 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(16, __qtablewidgetitem903);
        QTableWidgetItem *__qtablewidgetitem904 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(17, __qtablewidgetitem904);
        QTableWidgetItem *__qtablewidgetitem905 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(18, __qtablewidgetitem905);
        QTableWidgetItem *__qtablewidgetitem906 = new QTableWidgetItem();
        PEAngSamplingTable->setVerticalHeaderItem(19, __qtablewidgetitem906);
        PEAngSamplingTable->setObjectName(QStringLiteral("PEAngSamplingTable"));
        sizePolicy2.setHeightForWidth(PEAngSamplingTable->sizePolicy().hasHeightForWidth());
        PEAngSamplingTable->setSizePolicy(sizePolicy2);
        PEAngSamplingTable->setRowCount(20);
        PEAngSamplingTable->setColumnCount(2);

        verticalLayout_29->addWidget(PEAngSamplingTable);


        horizontalLayout_25->addWidget(PEAngSamGroupBox);

        RayleighGroupBox = new QGroupBox(layoutWidget5);
        RayleighGroupBox->setObjectName(QStringLiteral("RayleighGroupBox"));
        verticalLayout_32 = new QVBoxLayout(RayleighGroupBox);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QStringLiteral("verticalLayout_32"));
        RayleighTable = new QTableWidget(RayleighGroupBox);
        if (RayleighTable->columnCount() < 2)
            RayleighTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem907 = new QTableWidgetItem();
        RayleighTable->setHorizontalHeaderItem(0, __qtablewidgetitem907);
        QTableWidgetItem *__qtablewidgetitem908 = new QTableWidgetItem();
        RayleighTable->setHorizontalHeaderItem(1, __qtablewidgetitem908);
        if (RayleighTable->rowCount() < 20)
            RayleighTable->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem909 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(0, __qtablewidgetitem909);
        QTableWidgetItem *__qtablewidgetitem910 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(1, __qtablewidgetitem910);
        QTableWidgetItem *__qtablewidgetitem911 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(2, __qtablewidgetitem911);
        QTableWidgetItem *__qtablewidgetitem912 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(3, __qtablewidgetitem912);
        QTableWidgetItem *__qtablewidgetitem913 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(4, __qtablewidgetitem913);
        QTableWidgetItem *__qtablewidgetitem914 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(5, __qtablewidgetitem914);
        QTableWidgetItem *__qtablewidgetitem915 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(6, __qtablewidgetitem915);
        QTableWidgetItem *__qtablewidgetitem916 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(7, __qtablewidgetitem916);
        QTableWidgetItem *__qtablewidgetitem917 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(8, __qtablewidgetitem917);
        QTableWidgetItem *__qtablewidgetitem918 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(9, __qtablewidgetitem918);
        QTableWidgetItem *__qtablewidgetitem919 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(10, __qtablewidgetitem919);
        QTableWidgetItem *__qtablewidgetitem920 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(11, __qtablewidgetitem920);
        QTableWidgetItem *__qtablewidgetitem921 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(12, __qtablewidgetitem921);
        QTableWidgetItem *__qtablewidgetitem922 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(13, __qtablewidgetitem922);
        QTableWidgetItem *__qtablewidgetitem923 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(14, __qtablewidgetitem923);
        QTableWidgetItem *__qtablewidgetitem924 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(15, __qtablewidgetitem924);
        QTableWidgetItem *__qtablewidgetitem925 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(16, __qtablewidgetitem925);
        QTableWidgetItem *__qtablewidgetitem926 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(17, __qtablewidgetitem926);
        QTableWidgetItem *__qtablewidgetitem927 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(18, __qtablewidgetitem927);
        QTableWidgetItem *__qtablewidgetitem928 = new QTableWidgetItem();
        RayleighTable->setVerticalHeaderItem(19, __qtablewidgetitem928);
        RayleighTable->setObjectName(QStringLiteral("RayleighTable"));
        sizePolicy2.setHeightForWidth(RayleighTable->sizePolicy().hasHeightForWidth());
        RayleighTable->setSizePolicy(sizePolicy2);
        RayleighTable->setRowCount(20);
        RayleighTable->setColumnCount(2);

        verticalLayout_32->addWidget(RayleighTable);


        horizontalLayout_25->addWidget(RayleighGroupBox);


        verticalLayout_43->addLayout(horizontalLayout_25);

        TabWidgetRZ->addTab(MCTPRegTab, QString());
        PLOTtab = new QWidget();
        PLOTtab->setObjectName(QStringLiteral("PLOTtab"));
        gridLayout_22 = new QGridLayout(PLOTtab);
        gridLayout_22->setSpacing(6);
        gridLayout_22->setContentsMargins(11, 11, 11, 11);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        plotCheckBox = new QCheckBox(PLOTtab);
        plotCheckBox->setObjectName(QStringLiteral("plotCheckBox"));

        verticalLayout_25->addWidget(plotCheckBox);

        PlotGroupBox = new QGroupBox(PLOTtab);
        PlotGroupBox->setObjectName(QStringLiteral("PlotGroupBox"));
        formLayout_2 = new QFormLayout(PlotGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        LinePrnOutCheckBox = new QCheckBox(PlotGroupBox);
        LinePrnOutCheckBox->setObjectName(QStringLiteral("LinePrnOutCheckBox"));

        verticalLayout_21->addWidget(LinePrnOutCheckBox);

        ExtPlotOutCheckBox = new QCheckBox(PlotGroupBox);
        ExtPlotOutCheckBox->setObjectName(QStringLiteral("ExtPlotOutCheckBox"));

        verticalLayout_21->addWidget(ExtPlotOutCheckBox);


        verticalLayout_24->addLayout(verticalLayout_21);

        ExternalPlotTypeGroupBox = new QGroupBox(PlotGroupBox);
        ExternalPlotTypeGroupBox->setObjectName(QStringLiteral("ExternalPlotTypeGroupBox"));
        sizePolicy.setHeightForWidth(ExternalPlotTypeGroupBox->sizePolicy().hasHeightForWidth());
        ExternalPlotTypeGroupBox->setSizePolicy(sizePolicy);
        gridLayout_20 = new QGridLayout(ExternalPlotTypeGroupBox);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        ExternalPlotTypeComboBox = new QComboBox(ExternalPlotTypeGroupBox);
        ExternalPlotTypeComboBox->setObjectName(QStringLiteral("ExternalPlotTypeComboBox"));

        gridLayout_20->addWidget(ExternalPlotTypeComboBox, 0, 0, 1, 1);


        verticalLayout_24->addWidget(ExternalPlotTypeGroupBox);

        PlotRegionsGroupBox = new QGroupBox(PlotGroupBox);
        PlotRegionsGroupBox->setObjectName(QStringLiteral("PlotRegionsGroupBox"));
        PlotRegionsGroupBox->setMaximumSize(QSize(270, 16777215));
        horizontalLayout_23 = new QHBoxLayout(PlotRegionsGroupBox);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        PlotRegionsTable = new QTableWidget(PlotRegionsGroupBox);
        if (PlotRegionsTable->columnCount() < 2)
            PlotRegionsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem929 = new QTableWidgetItem();
        PlotRegionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem929);
        QTableWidgetItem *__qtablewidgetitem930 = new QTableWidgetItem();
        PlotRegionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem930);
        if (PlotRegionsTable->rowCount() < 50)
            PlotRegionsTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem931 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(0, __qtablewidgetitem931);
        QTableWidgetItem *__qtablewidgetitem932 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(1, __qtablewidgetitem932);
        QTableWidgetItem *__qtablewidgetitem933 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(2, __qtablewidgetitem933);
        QTableWidgetItem *__qtablewidgetitem934 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(3, __qtablewidgetitem934);
        QTableWidgetItem *__qtablewidgetitem935 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(4, __qtablewidgetitem935);
        QTableWidgetItem *__qtablewidgetitem936 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(5, __qtablewidgetitem936);
        QTableWidgetItem *__qtablewidgetitem937 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(6, __qtablewidgetitem937);
        QTableWidgetItem *__qtablewidgetitem938 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(7, __qtablewidgetitem938);
        QTableWidgetItem *__qtablewidgetitem939 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(8, __qtablewidgetitem939);
        QTableWidgetItem *__qtablewidgetitem940 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(9, __qtablewidgetitem940);
        QTableWidgetItem *__qtablewidgetitem941 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(10, __qtablewidgetitem941);
        QTableWidgetItem *__qtablewidgetitem942 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(11, __qtablewidgetitem942);
        QTableWidgetItem *__qtablewidgetitem943 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(12, __qtablewidgetitem943);
        QTableWidgetItem *__qtablewidgetitem944 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(13, __qtablewidgetitem944);
        QTableWidgetItem *__qtablewidgetitem945 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(14, __qtablewidgetitem945);
        QTableWidgetItem *__qtablewidgetitem946 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(15, __qtablewidgetitem946);
        QTableWidgetItem *__qtablewidgetitem947 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(16, __qtablewidgetitem947);
        QTableWidgetItem *__qtablewidgetitem948 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(17, __qtablewidgetitem948);
        QTableWidgetItem *__qtablewidgetitem949 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(18, __qtablewidgetitem949);
        QTableWidgetItem *__qtablewidgetitem950 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(19, __qtablewidgetitem950);
        QTableWidgetItem *__qtablewidgetitem951 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(20, __qtablewidgetitem951);
        QTableWidgetItem *__qtablewidgetitem952 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(21, __qtablewidgetitem952);
        QTableWidgetItem *__qtablewidgetitem953 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(22, __qtablewidgetitem953);
        QTableWidgetItem *__qtablewidgetitem954 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(23, __qtablewidgetitem954);
        QTableWidgetItem *__qtablewidgetitem955 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(24, __qtablewidgetitem955);
        QTableWidgetItem *__qtablewidgetitem956 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(25, __qtablewidgetitem956);
        QTableWidgetItem *__qtablewidgetitem957 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(26, __qtablewidgetitem957);
        QTableWidgetItem *__qtablewidgetitem958 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(27, __qtablewidgetitem958);
        QTableWidgetItem *__qtablewidgetitem959 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(28, __qtablewidgetitem959);
        QTableWidgetItem *__qtablewidgetitem960 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(29, __qtablewidgetitem960);
        QTableWidgetItem *__qtablewidgetitem961 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(30, __qtablewidgetitem961);
        QTableWidgetItem *__qtablewidgetitem962 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(31, __qtablewidgetitem962);
        QTableWidgetItem *__qtablewidgetitem963 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(32, __qtablewidgetitem963);
        QTableWidgetItem *__qtablewidgetitem964 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(33, __qtablewidgetitem964);
        QTableWidgetItem *__qtablewidgetitem965 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(34, __qtablewidgetitem965);
        QTableWidgetItem *__qtablewidgetitem966 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(35, __qtablewidgetitem966);
        QTableWidgetItem *__qtablewidgetitem967 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(36, __qtablewidgetitem967);
        QTableWidgetItem *__qtablewidgetitem968 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(37, __qtablewidgetitem968);
        QTableWidgetItem *__qtablewidgetitem969 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(38, __qtablewidgetitem969);
        QTableWidgetItem *__qtablewidgetitem970 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(39, __qtablewidgetitem970);
        QTableWidgetItem *__qtablewidgetitem971 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(40, __qtablewidgetitem971);
        QTableWidgetItem *__qtablewidgetitem972 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(41, __qtablewidgetitem972);
        QTableWidgetItem *__qtablewidgetitem973 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(42, __qtablewidgetitem973);
        QTableWidgetItem *__qtablewidgetitem974 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(43, __qtablewidgetitem974);
        QTableWidgetItem *__qtablewidgetitem975 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(44, __qtablewidgetitem975);
        QTableWidgetItem *__qtablewidgetitem976 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(45, __qtablewidgetitem976);
        QTableWidgetItem *__qtablewidgetitem977 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(46, __qtablewidgetitem977);
        QTableWidgetItem *__qtablewidgetitem978 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(47, __qtablewidgetitem978);
        QTableWidgetItem *__qtablewidgetitem979 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(48, __qtablewidgetitem979);
        QTableWidgetItem *__qtablewidgetitem980 = new QTableWidgetItem();
        PlotRegionsTable->setVerticalHeaderItem(49, __qtablewidgetitem980);
        PlotRegionsTable->setObjectName(QStringLiteral("PlotRegionsTable"));
        sizePolicy2.setHeightForWidth(PlotRegionsTable->sizePolicy().hasHeightForWidth());
        PlotRegionsTable->setSizePolicy(sizePolicy2);
        PlotRegionsTable->setMinimumSize(QSize(0, 0));
        PlotRegionsTable->setMaximumSize(QSize(10000, 10000));
        PlotRegionsTable->setRowCount(50);
        PlotRegionsTable->setColumnCount(2);

        horizontalLayout_23->addWidget(PlotRegionsTable);


        verticalLayout_24->addWidget(PlotRegionsGroupBox);


        horizontalLayout_13->addLayout(verticalLayout_24);

        horizontalSpacer_4 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(6);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        eminusPlotCheckBox = new QCheckBox(PlotGroupBox);
        eminusPlotCheckBox->setObjectName(QStringLiteral("eminusPlotCheckBox"));

        verticalLayout_22->addWidget(eminusPlotCheckBox);

        eplusPlotCheckBox = new QCheckBox(PlotGroupBox);
        eplusPlotCheckBox->setObjectName(QStringLiteral("eplusPlotCheckBox"));

        verticalLayout_22->addWidget(eplusPlotCheckBox);


        gridLayout_21->addLayout(verticalLayout_22, 0, 0, 1, 1);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        gammaPlotCheckBox = new QCheckBox(PlotGroupBox);
        gammaPlotCheckBox->setObjectName(QStringLiteral("gammaPlotCheckBox"));

        verticalLayout_23->addWidget(gammaPlotCheckBox);

        ePlotCheckBox = new QCheckBox(PlotGroupBox);
        ePlotCheckBox->setObjectName(QStringLiteral("ePlotCheckBox"));

        verticalLayout_23->addWidget(ePlotCheckBox);


        gridLayout_21->addLayout(verticalLayout_23, 0, 1, 1, 1);

        DrawFluPlotsGroupBox = new QGroupBox(PlotGroupBox);
        DrawFluPlotsGroupBox->setObjectName(QStringLiteral("DrawFluPlotsGroupBox"));
        sizePolicy.setHeightForWidth(DrawFluPlotsGroupBox->sizePolicy().hasHeightForWidth());
        DrawFluPlotsGroupBox->setSizePolicy(sizePolicy);
        gridLayout_19 = new QGridLayout(DrawFluPlotsGroupBox);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        DrawFluPlotsComboBox = new QComboBox(DrawFluPlotsGroupBox);
        DrawFluPlotsComboBox->setObjectName(QStringLiteral("DrawFluPlotsComboBox"));

        gridLayout_19->addWidget(DrawFluPlotsComboBox, 0, 0, 1, 1);


        gridLayout_21->addWidget(DrawFluPlotsGroupBox, 1, 0, 1, 2);

        SpecPlotGroupBox = new QGroupBox(PlotGroupBox);
        SpecPlotGroupBox->setObjectName(QStringLiteral("SpecPlotGroupBox"));
        SpecPlotGroupBox->setMaximumSize(QSize(270, 16777215));
        horizontalLayout_14 = new QHBoxLayout(SpecPlotGroupBox);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        SpecPlotTable = new QTableWidget(SpecPlotGroupBox);
        if (SpecPlotTable->columnCount() < 2)
            SpecPlotTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem981 = new QTableWidgetItem();
        SpecPlotTable->setHorizontalHeaderItem(0, __qtablewidgetitem981);
        QTableWidgetItem *__qtablewidgetitem982 = new QTableWidgetItem();
        SpecPlotTable->setHorizontalHeaderItem(1, __qtablewidgetitem982);
        if (SpecPlotTable->rowCount() < 50)
            SpecPlotTable->setRowCount(50);
        QTableWidgetItem *__qtablewidgetitem983 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(0, __qtablewidgetitem983);
        QTableWidgetItem *__qtablewidgetitem984 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(1, __qtablewidgetitem984);
        QTableWidgetItem *__qtablewidgetitem985 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(2, __qtablewidgetitem985);
        QTableWidgetItem *__qtablewidgetitem986 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(3, __qtablewidgetitem986);
        QTableWidgetItem *__qtablewidgetitem987 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(4, __qtablewidgetitem987);
        QTableWidgetItem *__qtablewidgetitem988 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(5, __qtablewidgetitem988);
        QTableWidgetItem *__qtablewidgetitem989 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(6, __qtablewidgetitem989);
        QTableWidgetItem *__qtablewidgetitem990 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(7, __qtablewidgetitem990);
        QTableWidgetItem *__qtablewidgetitem991 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(8, __qtablewidgetitem991);
        QTableWidgetItem *__qtablewidgetitem992 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(9, __qtablewidgetitem992);
        QTableWidgetItem *__qtablewidgetitem993 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(10, __qtablewidgetitem993);
        QTableWidgetItem *__qtablewidgetitem994 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(11, __qtablewidgetitem994);
        QTableWidgetItem *__qtablewidgetitem995 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(12, __qtablewidgetitem995);
        QTableWidgetItem *__qtablewidgetitem996 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(13, __qtablewidgetitem996);
        QTableWidgetItem *__qtablewidgetitem997 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(14, __qtablewidgetitem997);
        QTableWidgetItem *__qtablewidgetitem998 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(15, __qtablewidgetitem998);
        QTableWidgetItem *__qtablewidgetitem999 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(16, __qtablewidgetitem999);
        QTableWidgetItem *__qtablewidgetitem1000 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(17, __qtablewidgetitem1000);
        QTableWidgetItem *__qtablewidgetitem1001 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(18, __qtablewidgetitem1001);
        QTableWidgetItem *__qtablewidgetitem1002 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(19, __qtablewidgetitem1002);
        QTableWidgetItem *__qtablewidgetitem1003 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(20, __qtablewidgetitem1003);
        QTableWidgetItem *__qtablewidgetitem1004 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(21, __qtablewidgetitem1004);
        QTableWidgetItem *__qtablewidgetitem1005 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(22, __qtablewidgetitem1005);
        QTableWidgetItem *__qtablewidgetitem1006 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(23, __qtablewidgetitem1006);
        QTableWidgetItem *__qtablewidgetitem1007 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(24, __qtablewidgetitem1007);
        QTableWidgetItem *__qtablewidgetitem1008 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(25, __qtablewidgetitem1008);
        QTableWidgetItem *__qtablewidgetitem1009 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(26, __qtablewidgetitem1009);
        QTableWidgetItem *__qtablewidgetitem1010 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(27, __qtablewidgetitem1010);
        QTableWidgetItem *__qtablewidgetitem1011 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(28, __qtablewidgetitem1011);
        QTableWidgetItem *__qtablewidgetitem1012 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(29, __qtablewidgetitem1012);
        QTableWidgetItem *__qtablewidgetitem1013 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(30, __qtablewidgetitem1013);
        QTableWidgetItem *__qtablewidgetitem1014 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(31, __qtablewidgetitem1014);
        QTableWidgetItem *__qtablewidgetitem1015 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(32, __qtablewidgetitem1015);
        QTableWidgetItem *__qtablewidgetitem1016 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(33, __qtablewidgetitem1016);
        QTableWidgetItem *__qtablewidgetitem1017 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(34, __qtablewidgetitem1017);
        QTableWidgetItem *__qtablewidgetitem1018 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(35, __qtablewidgetitem1018);
        QTableWidgetItem *__qtablewidgetitem1019 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(36, __qtablewidgetitem1019);
        QTableWidgetItem *__qtablewidgetitem1020 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(37, __qtablewidgetitem1020);
        QTableWidgetItem *__qtablewidgetitem1021 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(38, __qtablewidgetitem1021);
        QTableWidgetItem *__qtablewidgetitem1022 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(39, __qtablewidgetitem1022);
        QTableWidgetItem *__qtablewidgetitem1023 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(40, __qtablewidgetitem1023);
        QTableWidgetItem *__qtablewidgetitem1024 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(41, __qtablewidgetitem1024);
        QTableWidgetItem *__qtablewidgetitem1025 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(42, __qtablewidgetitem1025);
        QTableWidgetItem *__qtablewidgetitem1026 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(43, __qtablewidgetitem1026);
        QTableWidgetItem *__qtablewidgetitem1027 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(44, __qtablewidgetitem1027);
        QTableWidgetItem *__qtablewidgetitem1028 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(45, __qtablewidgetitem1028);
        QTableWidgetItem *__qtablewidgetitem1029 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(46, __qtablewidgetitem1029);
        QTableWidgetItem *__qtablewidgetitem1030 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(47, __qtablewidgetitem1030);
        QTableWidgetItem *__qtablewidgetitem1031 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(48, __qtablewidgetitem1031);
        QTableWidgetItem *__qtablewidgetitem1032 = new QTableWidgetItem();
        SpecPlotTable->setVerticalHeaderItem(49, __qtablewidgetitem1032);
        SpecPlotTable->setObjectName(QStringLiteral("SpecPlotTable"));
        sizePolicy2.setHeightForWidth(SpecPlotTable->sizePolicy().hasHeightForWidth());
        SpecPlotTable->setSizePolicy(sizePolicy2);
        SpecPlotTable->setMinimumSize(QSize(0, 0));
        SpecPlotTable->setMaximumSize(QSize(10000, 10000));
        SpecPlotTable->setRowCount(50);
        SpecPlotTable->setColumnCount(2);

        horizontalLayout_14->addWidget(SpecPlotTable);


        gridLayout_21->addWidget(SpecPlotGroupBox, 2, 0, 1, 2);


        horizontalLayout_13->addLayout(gridLayout_21);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, horizontalLayout_13);


        verticalLayout_25->addWidget(PlotGroupBox);


        gridLayout_22->addLayout(verticalLayout_25, 0, 0, 1, 1);

        TabWidgetRZ->addTab(PLOTtab, QString());

        gridLayout_7->addWidget(TabWidgetRZ, 1, 0, 1, 1);

        QWidget::setTabOrder(TitleEdit, cavrzRadioButton);
        QWidget::setTabOrder(cavrzRadioButton, dosrzRadioButton);
        QWidget::setTabOrder(dosrzRadioButton, flurzRadioButton);
        QWidget::setTabOrder(flurzRadioButton, OptradioButton);
        QWidget::setTabOrder(OptradioButton, NoOptradioButton);
        QWidget::setTabOrder(NoOptradioButton, DebugradioButton);
        QWidget::setTabOrder(DebugradioButton, CleanradioButton);
        QWidget::setTabOrder(CleanradioButton, HOMERadioButton);
        QWidget::setTabOrder(HOMERadioButton, HEN_HOUSERadioButton);
        QWidget::setTabOrder(HEN_HOUSERadioButton, OtherAreaRadioButton);
        QWidget::setTabOrder(OtherAreaRadioButton, HOMEPegsRadioButton);
        QWidget::setTabOrder(HOMEPegsRadioButton, HEN_HOUSEPegsRadioButton);
        QWidget::setTabOrder(HEN_HOUSEPegsRadioButton, OtherPegsAreaRadioButton);
        QWidget::setTabOrder(OtherPegsAreaRadioButton, InputFileComboBox);
        QWidget::setTabOrder(InputFileComboBox, pegs4ComboBox);
        QWidget::setTabOrder(pegs4ComboBox, CONFcomboBox);
        QWidget::setTabOrder(CONFcomboBox, OpenFileButton);
        QWidget::setTabOrder(OpenFileButton, Pegs4FileButton);
        QWidget::setTabOrder(Pegs4FileButton, SPECButton);
        QWidget::setTabOrder(SPECButton, ConfigurationButton);
        QWidget::setTabOrder(ConfigurationButton, logfileButton);
        QWidget::setTabOrder(logfileButton, ExecuteButton);
        QWidget::setTabOrder(ExecuteButton, PreviewRZButton);
        QWidget::setTabOrder(PreviewRZButton, PrintButton);
        QWidget::setTabOrder(PrintButton, compileButton);
        QWidget::setTabOrder(compileButton, ApplyButton);
        QWidget::setTabOrder(ApplyButton, CancelButton);
        QWidget::setTabOrder(CancelButton, HelpButton);
        QWidget::setTabOrder(HelpButton, TabWidgetRZ);
        QWidget::setTabOrder(TabWidgetRZ, noRandRadioButton);
        QWidget::setTabOrder(noRandRadioButton, lastRandRadioButton);
        QWidget::setTabOrder(lastRandRadioButton, allRandRadioButton);
        QWidget::setTabOrder(allRandRadioButton, storeDataCheckBox);
        QWidget::setTabOrder(storeDataCheckBox, PrintFluSpeComboBox);
        QWidget::setTabOrder(PrintFluSpeComboBox, sloteFluEdit);
        QWidget::setTabOrder(sloteFluEdit, sproutComboBox);
        QWidget::setTabOrder(sproutComboBox, outoptComboBox);
        QWidget::setTabOrder(outoptComboBox, etransportComboBox);
        QWidget::setTabOrder(etransportComboBox, iwatchComboBox);
        QWidget::setTabOrder(iwatchComboBox, irestartComboBox);
        QWidget::setTabOrder(irestartComboBox, minPlnSpinBox);
        QWidget::setTabOrder(minPlnSpinBox, maxPlnSpinBox);
        QWidget::setTabOrder(maxPlnSpinBox, minCylSpinBox);
        QWidget::setTabOrder(minCylSpinBox, maxCylSpinBox);
        QWidget::setTabOrder(maxCylSpinBox, IPRIMARYComboBox);
        QWidget::setTabOrder(IPRIMARYComboBox, kermaCheckBox);
        QWidget::setTabOrder(kermaCheckBox, photregCheckBox);
        QWidget::setTabOrder(photregCheckBox, ncaseEdit);
        QWidget::setTabOrder(ncaseEdit, maxCPUEdit);
        QWidget::setTabOrder(maxCPUEdit, statEdit);
        QWidget::setTabOrder(statEdit, ifullComboBox);
        QWidget::setTabOrder(ifullComboBox, rand1SpinBox);
        QWidget::setTabOrder(rand1SpinBox, rand2SpinBox);
        QWidget::setTabOrder(rand2SpinBox, SLOTEEdit);
        QWidget::setTabOrder(SLOTEEdit, DELTAEEdit);
        QWidget::setTabOrder(DELTAEEdit, ZFaceEdit);
        QWidget::setTabOrder(ZFaceEdit, groupRadioButton);
        QWidget::setTabOrder(groupRadioButton, individualRadioButton);
        QWidget::setTabOrder(individualRadioButton, cavityRadioButton);
        QWidget::setTabOrder(cavityRadioButton, mediaComboBox);
        QWidget::setTabOrder(mediaComboBox, parallelplateRadioButton);
        QWidget::setTabOrder(parallelplateRadioButton, wallthickEdit);
        QWidget::setTabOrder(wallthickEdit, cavradEdit);
        QWidget::setTabOrder(cavradEdit, cavlenEdit);
        QWidget::setTabOrder(cavlenEdit, electradEdit);
        QWidget::setTabOrder(electradEdit, wallmaterialComboBox);
        QWidget::setTabOrder(wallmaterialComboBox, electrmatComboBox);
        QWidget::setTabOrder(electrmatComboBox, phasespacePushButton);
        QWidget::setTabOrder(phasespacePushButton, phasespaceComboBox);
        QWidget::setTabOrder(phasespaceComboBox, phRadioButton);
        QWidget::setTabOrder(phRadioButton, allRadioButton);
        QWidget::setTabOrder(allRadioButton, chargedRadioButton);
        QWidget::setTabOrder(chargedRadioButton, monoenergeticRadioButton);
        QWidget::setTabOrder(monoenergeticRadioButton, ini_energyEdit);
        QWidget::setTabOrder(ini_energyEdit, specfnameButton);
        QWidget::setTabOrder(specfnameButton, specfnameComboBox);
        QWidget::setTabOrder(specfnameComboBox, ioutspCheckBox);
        QWidget::setTabOrder(ioutspCheckBox, localRadioButton);
        QWidget::setTabOrder(localRadioButton, externalRadioButton);
        QWidget::setTabOrder(externalRadioButton, raddistfnameButton);
        QWidget::setTabOrder(raddistfnameButton, raddistfnameComboBox);
        QWidget::setTabOrder(raddistfnameComboBox, ioutrdistCheckBox);
        QWidget::setTabOrder(ioutrdistCheckBox, temp1Edit);
        QWidget::setTabOrder(temp1Edit, temp2Edit);
        QWidget::setTabOrder(temp2Edit, temp3Edit);
        QWidget::setTabOrder(temp3Edit, temp4Edit);
        QWidget::setTabOrder(temp4Edit, imodeComboBox);
        QWidget::setTabOrder(imodeComboBox, SpinCheckBox);
        QWidget::setTabOrder(SpinCheckBox, ESTEPEEdit);
        QWidget::setTabOrder(ESTEPEEdit, XImaxEdit);
        QWidget::setTabOrder(XImaxEdit, SkinDepthEdit);
        QWidget::setTabOrder(SkinDepthEdit, PairAngSamplingComboBox);
        QWidget::setTabOrder(PairAngSamplingComboBox, BremsAngSamplingComboBox);
        QWidget::setTabOrder(BremsAngSamplingComboBox, BremsXSectionComboBox);
        QWidget::setTabOrder(BremsXSectionComboBox, estep_algorithmComboBox);
        QWidget::setTabOrder(estep_algorithmComboBox, BCAComboBox);
        QWidget::setTabOrder(BCAComboBox, GPCUTEdit);
        QWidget::setTabOrder(GPCUTEdit, PCUTCheckBox);
        QWidget::setTabOrder(PCUTCheckBox, GECUTEdit);
        QWidget::setTabOrder(GECUTEdit, ECUTCheckBox);
        QWidget::setTabOrder(ECUTCheckBox, GSMAXEdit);
        QWidget::setTabOrder(GSMAXEdit, SMAXCheckBox);
        QWidget::setTabOrder(SMAXCheckBox, photonSplitSpinBox);
        QWidget::setTabOrder(photonSplitSpinBox, ESAVEINEdit);
        QWidget::setTabOrder(ESAVEINEdit, eRangeRejCheckBox);
        QWidget::setTabOrder(eRangeRejCheckBox, ChargedPartRRCheckBox);
        QWidget::setTabOrder(ChargedPartRRCheckBox, BremsSplitSpinBox);
        QWidget::setTabOrder(BremsSplitSpinBox, BremsSplitCheckBox);
        QWidget::setTabOrder(BremsSplitCheckBox, PhotonForcingCheckBox);
        QWidget::setTabOrder(PhotonForcingCheckBox, StartForcingSpinBox);
        QWidget::setTabOrder(StartForcingSpinBox, StopForcingSpinBox);
        QWidget::setTabOrder(StopForcingSpinBox, RRDepthEdit);
        QWidget::setTabOrder(RRDepthEdit, RRFractionEdit);
        QWidget::setTabOrder(RRFractionEdit, CSEnhancementSpinBox);
        QWidget::setTabOrder(CSEnhancementSpinBox, ExpTrafoCEdit);
        QWidget::setTabOrder(ExpTrafoCEdit, plotCheckBox);
        QWidget::setTabOrder(plotCheckBox, eplusPlotCheckBox);
        QWidget::setTabOrder(eplusPlotCheckBox, ePlotCheckBox);
        QWidget::setTabOrder(ePlotCheckBox, ExtPlotOutCheckBox);
        QWidget::setTabOrder(ExtPlotOutCheckBox, ExternalPlotTypeComboBox);
        QWidget::setTabOrder(ExternalPlotTypeComboBox, LinePrnOutCheckBox);
        QWidget::setTabOrder(LinePrnOutCheckBox, eminusPlotCheckBox);
        QWidget::setTabOrder(eminusPlotCheckBox, gammaPlotCheckBox);
        QWidget::setTabOrder(gammaPlotCheckBox, DrawFluPlotsComboBox);
        QWidget::setTabOrder(DrawFluPlotsComboBox, thimbleRadioButton);
        QWidget::setTabOrder(thimbleRadioButton, temp5Edit);
        QWidget::setTabOrder(temp5Edit, temp6Edit);
        QWidget::setTabOrder(temp6Edit, temp7Edit);

        retranslateUi(InputRZForm);
        QObject::connect(CancelButton, SIGNAL(clicked()), InputRZForm, SLOT(close()));
        QObject::connect(sproutComboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(update_SprOutTableHeaders()));
        QObject::connect(sproutComboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(update_SprOutTableHeaders()));
        QObject::connect(parallelplateRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_electr()));
        QObject::connect(localRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_local_external()));
        QObject::connect(externalRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_local_external()));
        QObject::connect(monoenergeticRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_mono_spectrum()));
        QObject::connect(spectrumRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_mono_spectrum()));
        QObject::connect(specfnameButton, SIGNAL(clicked()), InputRZForm, SLOT(GetSPECfile()));
        QObject::connect(phasespacePushButton, SIGNAL(clicked()), InputRZForm, SLOT(GetPHSPfile()));
        QObject::connect(raddistfnameButton, SIGNAL(clicked()), InputRZForm, SLOT(GetRDISTfile()));
        QObject::connect(PCUTCheckBox, SIGNAL(toggled(bool)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(ECUTCheckBox, SIGNAL(toggled(bool)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(SMAXCheckBox, SIGNAL(toggled(bool)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(PrintFluSpeComboBox, SIGNAL(highlighted(int)), InputRZForm, SLOT(activate_fluence_table()));
        QObject::connect(PrintFluSpeComboBox, SIGNAL(activated(int)), InputRZForm, SLOT(activate_fluence_table()));
        QObject::connect(BremsSplitCheckBox, SIGNAL(clicked()), InputRZForm, SLOT(Enable_BremsSplit()));
        QObject::connect(plotCheckBox, SIGNAL(clicked()), InputRZForm, SLOT(enable_plot()));
        QObject::connect(HOMERadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_working_area()));
        QObject::connect(HEN_HOUSERadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_working_area()));
        QObject::connect(OtherAreaRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_working_area()));
        QObject::connect(logfileButton, SIGNAL(clicked()), InputRZForm, SLOT(show_errors()));
        QObject::connect(HOMEPegsRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_data_area()));
        QObject::connect(HEN_HOUSEPegsRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_data_area()));
        QObject::connect(OtherPegsAreaRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_data_area()));
        QObject::connect(OpenFileButton, SIGNAL(clicked()), InputRZForm, SLOT(OpenEGSInpFile()));
        QObject::connect(Pegs4FileButton, SIGNAL(clicked()), InputRZForm, SLOT(GetPEGSfile()));
        QObject::connect(ApplyButton, SIGNAL(clicked()), InputRZForm, SLOT(UpDateInputRZFile()));
        QObject::connect(individualRadioButton, SIGNAL(clicked()), InputRZForm, SLOT(set_individual()));
        QObject::connect(groupRadioButton, SIGNAL(clicked()), InputRZForm, SLOT(set_group()));
        QObject::connect(cavityRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_cav_regions()));
        QObject::connect(cavityRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_cavity()));
        QObject::connect(HelpButton, SIGNAL(clicked()), InputRZForm, SLOT(show_help()));
        QObject::connect(eRangeRejCheckBox, SIGNAL(clicked()), InputRZForm, SLOT(update_range_rejection()));
        QObject::connect(PhotonForcingCheckBox, SIGNAL(clicked()), InputRZForm, SLOT(update_photon_forcing()));
        QObject::connect(ifullComboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(activate_PulseHDistInputs()));
        QObject::connect(ifullComboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(activate_PulseHDistInputs()));
        QObject::connect(InputFileComboBox, SIGNAL(activated(int)), InputRZForm, SLOT(change_input_file()));
        QObject::connect(cavrzRadioButton, SIGNAL(clicked()), InputRZForm, SLOT(update_usercode_open()));
        QObject::connect(sprrzRadioButton, SIGNAL(clicked()), InputRZForm, SLOT(update_usercode_open()));
        QObject::connect(dosrzRadioButton, SIGNAL(clicked()), InputRZForm, SLOT(update_usercode_open()));
        QObject::connect(flurzRadioButton, SIGNAL(clicked()), InputRZForm, SLOT(update_usercode_open()));
        QObject::connect(CleanradioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(cleanChecked(bool)));
        QObject::connect(OptradioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(cleanChecked(bool)));
        QObject::connect(NoOptradioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(cleanChecked(bool)));
        QObject::connect(DebugradioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(cleanChecked(bool)));
        QObject::connect(SPECButton, SIGNAL(clicked()), InputRZForm, SLOT(getCONFFile()));
        QObject::connect(ConfigurationButton, SIGNAL(clicked()), InputRZForm, SLOT(configure()));
        QObject::connect(CONFcomboBox, SIGNAL(activated(int)), InputRZForm, SLOT(change_config_file()));
        QObject::connect(AboutButton, SIGNAL(clicked()), InputRZForm, SLOT(show_about()));
        QObject::connect(BoundComptoncomboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(PEcomboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(RayleighcomboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(RelaxationcomboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(RayleighcomboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(activate_ff_table()));
        QObject::connect(RayleighcomboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(activate_ff_table()));
        QObject::connect(RayleighcomboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(RelaxationcomboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(PEcomboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(BoundComptoncomboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(EnableTransportParamByRegions()));
        QObject::connect(PEGSlessRadioButton, SIGNAL(toggled(bool)), InputRZForm, SLOT(set_data_area()));
        QObject::connect(MDFileButton, SIGNAL(clicked()), InputRZForm, SLOT(GetMDfile()));
        QObject::connect(DFBrowse, SIGNAL(clicked()), InputRZForm, SLOT(GetDFfile()));
        QObject::connect(mediaComboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(update_MediaInput()));
        QObject::connect(sourceComboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(update_source_type()));
        QObject::connect(mediaTable, SIGNAL(cellDoubleClicked(int,int)), InputRZForm, SLOT(mediaTable_clicked(int,int)));
        QObject::connect(mediaTable, SIGNAL(cellClicked(int,int)), InputRZForm, SLOT(mediaTable_singleclicked(int,int)));
        QObject::connect(customFFTable, SIGNAL(cellDoubleClicked(int,int)), InputRZForm, SLOT(customFFTable_clicked(int,int)));
        QObject::connect(customFFTable, SIGNAL(cellClicked(int,int)), InputRZForm, SLOT(customFFTable_singleclicked(int,int)));
        QObject::connect(compileButton, SIGNAL(clicked()), InputRZForm, SLOT(compile_userCode()));
        QObject::connect(ExecuteButton, SIGNAL(clicked()), InputRZForm, SLOT(run_userCode()));
        QObject::connect(PreviewRZButton, SIGNAL(clicked()), InputRZForm, SLOT(run_previewRZ()));
        QObject::connect(ExtPlotOutCheckBox, SIGNAL(clicked()), InputRZForm, SLOT(enable_external_plot()));
        QObject::connect(isGasCheckBox, SIGNAL(clicked()), InputRZForm, SLOT(enable_gaspEdit()));
        QObject::connect(pz_or_rhozTable, SIGNAL(cellDoubleClicked(int,int)), InputRZForm, SLOT(pz_or_rhozTable_clicked(int,int)));
        QObject::connect(pz_or_rhozTable, SIGNAL(cellClicked(int,int)), InputRZForm, SLOT(pz_or_rhozTable_singleclicked(int,int)));
        QObject::connect(inpmediumComboBox, SIGNAL(highlighted(QString)), InputRZForm, SLOT(inpmediumSave(QString)));
        QObject::connect(inpmediumComboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(inpmediumChanged(QString)));
        QObject::connect(DCcheckBox, SIGNAL(toggled(bool)), InputRZForm, SLOT(enableDCfileInput(bool)));
        QObject::connect(medTypeComboBox, SIGNAL(activated(QString)), InputRZForm, SLOT(medTypeChanged(QString)));
        QObject::connect(DFEdit, SIGNAL(returnPressed()), InputRZForm, SLOT(GetDFfileReturn()));

        TabWidgetRZ->setCurrentIndex(7);
        InputFileComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(InputRZForm);
    } // setupUi

    void retranslateUi(QWidget *InputRZForm)
    {
        InputRZForm->setWindowTitle(QApplication::translate("InputRZForm", "GUI for RZ EGSnrc user codes. Copyright 2004 NRC Canada", Q_NULLPTR));
        InputRZForm->setWindowIconText(QApplication::translate("InputRZForm", "inpuRZ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputRZForm->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        InputRZForm->setWhatsThis(QApplication::translate("InputRZForm", "Nothing defined !", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        bannerLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ButtonGroup4->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        ExecuteButton->setToolTip(QApplication::translate("InputRZForm", "Only enabled if user code compiled, no input errors found and proper pegs data used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ExecuteButton->setWhatsThis(QApplication::translate("InputRZForm", "Only enabled if user code compiled, no input errors found and proper pegs data used.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ExecuteButton->setText(QApplication::translate("InputRZForm", "&Execute", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ExecuteButton->setShortcut(QApplication::translate("InputRZForm", "Alt+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        PreviewRZButton->setToolTip(QApplication::translate("InputRZForm", "preview geometry of an existing input file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PreviewRZButton->setWhatsThis(QApplication::translate("InputRZForm", "preview geometry of an existing input file", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        PreviewRZButton->setText(QApplication::translate("InputRZForm", "Pre&viewRZ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        PreviewRZButton->setShortcut(QApplication::translate("InputRZForm", "Alt+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        PrintButton->setToolTip(QApplication::translate("InputRZForm", "print input file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PrintButton->setWhatsThis(QApplication::translate("InputRZForm", "print input file", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        PrintButton->setText(QApplication::translate("InputRZForm", "&Print", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        PrintButton->setShortcut(QApplication::translate("InputRZForm", "Alt+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        compileButton->setToolTip(QApplication::translate("InputRZForm", "Compile user code", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        compileButton->setWhatsThis(QApplication::translate("InputRZForm", "Compile user code", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        compileButton->setText(QApplication::translate("InputRZForm", "&Compile", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        compileButton->setShortcut(QApplication::translate("InputRZForm", "Alt+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ConfirmButtonGroup->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        ApplyButton->setToolTip(QApplication::translate("InputRZForm", "save to/modify file !", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ApplyButton->setWhatsThis(QApplication::translate("InputRZForm", "save to/modify file !", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ApplyButton->setText(QApplication::translate("InputRZForm", "&Save", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ApplyButton->setShortcut(QApplication::translate("InputRZForm", "Alt+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        CancelButton->setToolTip(QApplication::translate("InputRZForm", "close application without saving.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        CancelButton->setWhatsThis(QApplication::translate("InputRZForm", "close application without saving.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        CancelButton->setText(QApplication::translate("InputRZForm", "&Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        CancelButton->setShortcut(QApplication::translate("InputRZForm", "Alt+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        HelpButton->setToolTip(QApplication::translate("InputRZForm", "shows the user manual with Netscape or Konqueror", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        HelpButton->setWhatsThis(QApplication::translate("InputRZForm", "shows the user manual with Netscape or Konqueror", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        HelpButton->setText(QApplication::translate("InputRZForm", "&Help", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        HelpButton->setShortcut(QApplication::translate("InputRZForm", "Alt+H", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        AboutButton->setText(QApplication::translate("InputRZForm", "&About", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        AboutButton->setShortcut(QApplication::translate("InputRZForm", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        UserCodeButtonGroup->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        UserCodeButtonGroup->setTitle(QApplication::translate("InputRZForm", "EGSnrc user code", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cavrzRadioButton->setToolTip(QApplication::translate("InputRZForm", "calculates quantities of interest for right cylindrical ion chambers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cavrzRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "calculates quantities of interest for right cylindrical ion chambers", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cavrzRadioButton->setText(QApplication::translate("InputRZForm", "CAVRZnrc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        dosrzRadioButton->setToolTip(QApplication::translate("InputRZForm", "scores dose deposited by a photon or electron beam in a right cylindrical geometry", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        dosrzRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "scores dose deposited by a photon or electron beam in a right cylindrical geometry", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        dosrzRadioButton->setText(QApplication::translate("InputRZForm", "DOSRZnrc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sprrzRadioButton->setToolTip(QApplication::translate("InputRZForm", "calculates medium to air stopping power ratios in right cylindrical geometries", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sprrzRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "calculates medium to air stopping power ratios in right cylindrical geometries", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        sprrzRadioButton->setText(QApplication::translate("InputRZForm", "SPRRZnrc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        flurzRadioButton->setToolTip(QApplication::translate("InputRZForm", "fluence spectra scored by summing track lengths in a zone", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        flurzRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "fluence spectra scored by summing track lengths in a zone", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        flurzRadioButton->setText(QApplication::translate("InputRZForm", "FLURZnrc", Q_NULLPTR));
        TargetbuttonGroup->setTitle(QApplication::translate("InputRZForm", "Target", Q_NULLPTR));
        OptradioButton->setText(QApplication::translate("InputRZForm", "optimization", Q_NULLPTR));
        NoOptradioButton->setText(QApplication::translate("InputRZForm", "no optimization", Q_NULLPTR));
        DebugradioButton->setText(QApplication::translate("InputRZForm", "debug", Q_NULLPTR));
        CleanradioButton->setText(QApplication::translate("InputRZForm", "clean", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UserCodeAreaButtonGroup->setToolTip(QApplication::translate("InputRZForm", "Select default area for user code and pegs4 data location", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UserCodeAreaButtonGroup->setTitle(QApplication::translate("InputRZForm", "User code area", Q_NULLPTR));
        HOMERadioButton->setText(QApplication::translate("InputRZForm", "EGS_HOME", Q_NULLPTR));
        HEN_HOUSERadioButton->setText(QApplication::translate("InputRZForm", "HEN_HOUSE", Q_NULLPTR));
        OtherAreaRadioButton->setText(QApplication::translate("InputRZForm", "Other", Q_NULLPTR));
        PEGSDataAreaButtonGroup->setTitle(QApplication::translate("InputRZForm", "Pegs data area", Q_NULLPTR));
        HOMEPegsRadioButton->setText(QApplication::translate("InputRZForm", "EGS_HOME", Q_NULLPTR));
        HEN_HOUSEPegsRadioButton->setText(QApplication::translate("InputRZForm", "HEN_HOUSE", Q_NULLPTR));
        OtherPegsAreaRadioButton->setText(QApplication::translate("InputRZForm", "Other", Q_NULLPTR));
        PEGSlessRadioButton->setText(QApplication::translate("InputRZForm", "Go PEGSless", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TitleGroupBox->setToolTip(QApplication::translate("InputRZForm", "title is maximum 80 characters wide", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        TitleGroupBox->setWhatsThis(QApplication::translate("InputRZForm", "title is maximum 80 characters wide", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        TitleGroupBox->setTitle(QApplication::translate("InputRZForm", "Title (80 characters maximum)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TitleEdit->setToolTip(QApplication::translate("InputRZForm", "title is maximum 80 characters wide", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        TitleEdit->setWhatsThis(QApplication::translate("InputRZForm", "title is maximum 80 characters wide", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        TitleEdit->setText(QApplication::translate("InputRZForm", "EGSnrc input template file: Please modify this !!!", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputFileGroupBox->setToolTip(QApplication::translate("InputRZForm", "select input file in current user code area.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        InputFileGroupBox->setWhatsThis(QApplication::translate("InputRZForm", "select input file in current user code area.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        InputFileGroupBox->setTitle(QApplication::translate("InputRZForm", "EGSnrc input file name (*.egsinp)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        InputFileComboBox->setToolTip(QApplication::translate("InputRZForm", "select input file in current user code area.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        InputFileComboBox->setWhatsThis(QApplication::translate("InputRZForm", "select input file in current user code area.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        OpenFileButton->setToolTip(QApplication::translate("InputRZForm", "load EGSnrc input file using an Open File Dialog.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        OpenFileButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pegs4GroupBox->setToolTip(QApplication::translate("InputRZForm", "select pegs4 file in current pegs data area.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pegs4GroupBox->setWhatsThis(QApplication::translate("InputRZForm", "select pegs4 file in current pegs data area.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pegs4GroupBox->setTitle(QApplication::translate("InputRZForm", "PEGS4 file name (*.pegs4dat)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pegs4ComboBox->setToolTip(QApplication::translate("InputRZForm", "select pegs4 file in current pegs data area.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pegs4ComboBox->setWhatsThis(QApplication::translate("InputRZForm", "select pegs4 file in current pegs data area.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        Pegs4FileButton->setToolTip(QApplication::translate("InputRZForm", "load pegs4 file using an Open File Dialog.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        Pegs4FileButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        groupBox57->setTitle(QApplication::translate("InputRZForm", "Configuration file", Q_NULLPTR));
        SPECButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        ConfigurationButton->setText(QApplication::translate("InputRZForm", "Configuration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        logfileButton->setToolTip(QApplication::translate("InputRZForm", "enabled if errors detected reading the file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logfileButton->setWhatsThis(QApplication::translate("InputRZForm", "enabled if errors detected reading the file", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        logfileButton->setText(QApplication::translate("InputRZForm", "view errors", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(GItab), QApplication::translate("InputRZForm", "General", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        randNButtonGroup->setToolTip(QApplication::translate("InputRZForm", "choose for which history initial random numbers should be stored", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        randNButtonGroup->setWhatsThis(QApplication::translate("InputRZForm", "choose for which history initial random numbers should be stored", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        randNButtonGroup->setTitle(QApplication::translate("InputRZForm", "Store initial random numbers", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        noRandRadioButton->setToolTip(QApplication::translate("InputRZForm", "don't store random numbers", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        noRandRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "don't store random numbers", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        noRandRadioButton->setText(QApplication::translate("InputRZForm", "no", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lastRandRadioButton->setToolTip(QApplication::translate("InputRZForm", "store initial random number for last history", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lastRandRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "store initial random number for last history", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lastRandRadioButton->setText(QApplication::translate("InputRZForm", "last", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        allRandRadioButton->setToolTip(QApplication::translate("InputRZForm", "store initial random number for each history", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        allRandRadioButton->setWhatsThis(QApplication::translate("InputRZForm", "store initial random number for each history", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        allRandRadioButton->setText(QApplication::translate("InputRZForm", "all", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DoseRegGroupBox->setToolTip(QApplication::translate("InputRZForm", "Define dose scoring regions", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DoseRegGroupBox->setTitle(QApplication::translate("InputRZForm", "Dose regions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minPlnTextLabel->setToolTip(QApplication::translate("InputRZForm", "Minimum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        minPlnTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "Minimum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        minPlnTextLabel->setText(QApplication::translate("InputRZForm", "minimum plane", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minPlnSpinBox->setToolTip(QApplication::translate("InputRZForm", "Minimum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        minPlnSpinBox->setWhatsThis(QApplication::translate("InputRZForm", "Minimum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        maxPlnTextLabel->setToolTip(QApplication::translate("InputRZForm", "Maximum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        maxPlnTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "Maximum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        maxPlnTextLabel->setText(QApplication::translate("InputRZForm", "maximum plane", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxPlnSpinBox->setToolTip(QApplication::translate("InputRZForm", "Maximum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        maxPlnSpinBox->setWhatsThis(QApplication::translate("InputRZForm", "Maximum plane defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        minCylTextLabel->setToolTip(QApplication::translate("InputRZForm", "Minimum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        minCylTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "Minimum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        minCylTextLabel->setText(QApplication::translate("InputRZForm", "minimum cylinder", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minCylSpinBox->setToolTip(QApplication::translate("InputRZForm", "Minimum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        minCylSpinBox->setWhatsThis(QApplication::translate("InputRZForm", "Minimum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        maxCylTextLabel->setToolTip(QApplication::translate("InputRZForm", "Maximum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        maxCylTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "Maximum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        maxCylTextLabel->setText(QApplication::translate("InputRZForm", "maximum cylinder", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxCylSpinBox->setToolTip(QApplication::translate("InputRZForm", "Maximum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        maxCylSpinBox->setWhatsThis(QApplication::translate("InputRZForm", "Maximum cylinder defining dose region", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        Frame4->setToolTip(QApplication::translate("InputRZForm", "output *.egsdat file for restarts, parallel post-processing, etc", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        Frame4->setWhatsThis(QApplication::translate("InputRZForm", "output *.egsdat file for restarts, parallel post-processing, etc", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        storeDataCheckBox->setToolTip(QApplication::translate("InputRZForm", "output *.egsdat file for restarts, parallel post-processing, etc", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        storeDataCheckBox->setWhatsThis(QApplication::translate("InputRZForm", "output *.egsdat file for restarts, parallel post-processing, etc", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        storeDataCheckBox->setText(QApplication::translate("InputRZForm", "store data array", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        outoptTextLabel->setToolTip(QApplication::translate("InputRZForm", "Select output type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        outoptTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "Select output type", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        outoptTextLabel->setText(QApplication::translate("InputRZForm", "output options :", Q_NULLPTR));
        outoptComboBox->clear();
        outoptComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "short", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "cavity details", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "material and dose summary", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        outoptComboBox->setToolTip(QApplication::translate("InputRZForm", "Select output type", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        outoptComboBox->setWhatsThis(QApplication::translate("InputRZForm", "Select output type", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        etransportLabel->setToolTip(QApplication::translate("InputRZForm", "Define type of electron transport. See options for more detail.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        etransportLabel->setWhatsThis(QApplication::translate("InputRZForm", "Define type of electron transport. See options for more detail.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        etransportLabel->setText(QApplication::translate("InputRZForm", "electron transport :", Q_NULLPTR));
        etransportComboBox->clear();
        etransportComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "normal", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "no interactions", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        etransportComboBox->setToolTip(QApplication::translate("InputRZForm", "Define type of electron transport. See options for more detail.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        etransportComboBox->setWhatsThis(QApplication::translate("InputRZForm", "Define type of electron transport. See options for more detail.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        iwatchTextLabel->setToolTip(QApplication::translate("InputRZForm", "debug output with increasing detail, if not \"off\" use very few histories", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        iwatchTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "debug output with increasing detail, if not \"off\" use very few histories", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        iwatchTextLabel->setText(QApplication::translate("InputRZForm", "iwatch :", Q_NULLPTR));
        iwatchComboBox->clear();
        iwatchComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "interactions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "steps", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "deposited", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "graph", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        iwatchComboBox->setToolTip(QApplication::translate("InputRZForm", "Debug output with increasing detail, if not \"off\" use very few histories", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        iwatchComboBox->setWhatsThis(QApplication::translate("InputRZForm", "Debug output with increasing detail, if not \"off\" use very few histories", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        restartTextLabel->setToolTip(QApplication::translate("InputRZForm", "Define run mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        restartTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "Define run mode", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        restartTextLabel->setText(QApplication::translate("InputRZForm", "irestart :", Q_NULLPTR));
        irestartComboBox->clear();
        irestartComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "first", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "restart", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "analyze", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "start-RNS", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "parallel", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        irestartComboBox->setToolTip(QApplication::translate("InputRZForm", "run mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        irestartComboBox->setWhatsThis(QApplication::translate("InputRZForm", "Run mode", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        SPRRegGroupBox->setTitle(QApplication::translate("InputRZForm", "Stopping power output regions", Q_NULLPTR));
        sproutComboBox->clear();
        sproutComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "slabs/cylinders", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        sproutComboBox->setToolTip(QApplication::translate("InputRZForm", "define output mode for stopping power ratios", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sproutComboBox->setWhatsThis(QApplication::translate("InputRZForm", "define output mode for stopping power ratios", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        sproutTextLabel->setToolTip(QApplication::translate("InputRZForm", "define output mode for stopping power ratios", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sproutTextLabel->setWhatsThis(QApplication::translate("InputRZForm", "define output mode for stopping power ratios", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        sproutTextLabel->setText(QApplication::translate("InputRZForm", "spr output mode :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = sproutTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = sproutTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = sproutTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = sproutTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = sproutTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = sproutTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = sproutTable->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = sproutTable->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = sproutTable->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = sproutTable->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = sproutTable->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = sproutTable->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = sproutTable->verticalHeaderItem(10);
        ___qtablewidgetitem12->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = sproutTable->verticalHeaderItem(11);
        ___qtablewidgetitem13->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = sproutTable->verticalHeaderItem(12);
        ___qtablewidgetitem14->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = sproutTable->verticalHeaderItem(13);
        ___qtablewidgetitem15->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = sproutTable->verticalHeaderItem(14);
        ___qtablewidgetitem16->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = sproutTable->verticalHeaderItem(15);
        ___qtablewidgetitem17->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = sproutTable->verticalHeaderItem(16);
        ___qtablewidgetitem18->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = sproutTable->verticalHeaderItem(17);
        ___qtablewidgetitem19->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = sproutTable->verticalHeaderItem(18);
        ___qtablewidgetitem20->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = sproutTable->verticalHeaderItem(19);
        ___qtablewidgetitem21->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = sproutTable->verticalHeaderItem(20);
        ___qtablewidgetitem22->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = sproutTable->verticalHeaderItem(21);
        ___qtablewidgetitem23->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = sproutTable->verticalHeaderItem(22);
        ___qtablewidgetitem24->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = sproutTable->verticalHeaderItem(23);
        ___qtablewidgetitem25->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = sproutTable->verticalHeaderItem(24);
        ___qtablewidgetitem26->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = sproutTable->verticalHeaderItem(25);
        ___qtablewidgetitem27->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = sproutTable->verticalHeaderItem(26);
        ___qtablewidgetitem28->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = sproutTable->verticalHeaderItem(27);
        ___qtablewidgetitem29->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = sproutTable->verticalHeaderItem(28);
        ___qtablewidgetitem30->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = sproutTable->verticalHeaderItem(29);
        ___qtablewidgetitem31->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = sproutTable->verticalHeaderItem(30);
        ___qtablewidgetitem32->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = sproutTable->verticalHeaderItem(31);
        ___qtablewidgetitem33->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = sproutTable->verticalHeaderItem(32);
        ___qtablewidgetitem34->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = sproutTable->verticalHeaderItem(33);
        ___qtablewidgetitem35->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = sproutTable->verticalHeaderItem(34);
        ___qtablewidgetitem36->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = sproutTable->verticalHeaderItem(35);
        ___qtablewidgetitem37->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = sproutTable->verticalHeaderItem(36);
        ___qtablewidgetitem38->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = sproutTable->verticalHeaderItem(37);
        ___qtablewidgetitem39->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = sproutTable->verticalHeaderItem(38);
        ___qtablewidgetitem40->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = sproutTable->verticalHeaderItem(39);
        ___qtablewidgetitem41->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = sproutTable->verticalHeaderItem(40);
        ___qtablewidgetitem42->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = sproutTable->verticalHeaderItem(41);
        ___qtablewidgetitem43->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = sproutTable->verticalHeaderItem(42);
        ___qtablewidgetitem44->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = sproutTable->verticalHeaderItem(43);
        ___qtablewidgetitem45->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = sproutTable->verticalHeaderItem(44);
        ___qtablewidgetitem46->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = sproutTable->verticalHeaderItem(45);
        ___qtablewidgetitem47->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = sproutTable->verticalHeaderItem(46);
        ___qtablewidgetitem48->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = sproutTable->verticalHeaderItem(47);
        ___qtablewidgetitem49->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = sproutTable->verticalHeaderItem(48);
        ___qtablewidgetitem50->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = sproutTable->verticalHeaderItem(49);
        ___qtablewidgetitem51->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        sproutTable->setToolTip(QApplication::translate("InputRZForm", "Enter regions in which stopping power ratios are to be output.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sproutTable->setWhatsThis(QApplication::translate("InputRZForm", "Enter regions in which stopping power ratios are to be output.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        PrintFluSpecGroupBox->setTitle(QApplication::translate("InputRZForm", "Print fluence spectra", Q_NULLPTR));
        PrintFluSpeComboBox->clear();
        PrintFluSpeComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "all", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "specified", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "none", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "zut alors", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        PrintFluSpeComboBox->setToolTip(QApplication::translate("InputRZForm", "Define wheter spectra will be printed for all regions, specific regions or none.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        PrintFluSpeComboBox->setWhatsThis(QApplication::translate("InputRZForm", "Define wheter spectra will be printed for all regions, specific regions or none.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        QTableWidgetItem *___qtablewidgetitem52 = ListFluTable->horizontalHeaderItem(0);
        ___qtablewidgetitem52->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = ListFluTable->horizontalHeaderItem(1);
        ___qtablewidgetitem53->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = ListFluTable->verticalHeaderItem(0);
        ___qtablewidgetitem54->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = ListFluTable->verticalHeaderItem(1);
        ___qtablewidgetitem55->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = ListFluTable->verticalHeaderItem(2);
        ___qtablewidgetitem56->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = ListFluTable->verticalHeaderItem(3);
        ___qtablewidgetitem57->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = ListFluTable->verticalHeaderItem(4);
        ___qtablewidgetitem58->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = ListFluTable->verticalHeaderItem(5);
        ___qtablewidgetitem59->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = ListFluTable->verticalHeaderItem(6);
        ___qtablewidgetitem60->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = ListFluTable->verticalHeaderItem(7);
        ___qtablewidgetitem61->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = ListFluTable->verticalHeaderItem(8);
        ___qtablewidgetitem62->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = ListFluTable->verticalHeaderItem(9);
        ___qtablewidgetitem63->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = ListFluTable->verticalHeaderItem(10);
        ___qtablewidgetitem64->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = ListFluTable->verticalHeaderItem(11);
        ___qtablewidgetitem65->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem66 = ListFluTable->verticalHeaderItem(12);
        ___qtablewidgetitem66->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = ListFluTable->verticalHeaderItem(13);
        ___qtablewidgetitem67->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = ListFluTable->verticalHeaderItem(14);
        ___qtablewidgetitem68->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = ListFluTable->verticalHeaderItem(15);
        ___qtablewidgetitem69->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = ListFluTable->verticalHeaderItem(16);
        ___qtablewidgetitem70->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem71 = ListFluTable->verticalHeaderItem(17);
        ___qtablewidgetitem71->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem72 = ListFluTable->verticalHeaderItem(18);
        ___qtablewidgetitem72->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem73 = ListFluTable->verticalHeaderItem(19);
        ___qtablewidgetitem73->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem74 = ListFluTable->verticalHeaderItem(20);
        ___qtablewidgetitem74->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem75 = ListFluTable->verticalHeaderItem(21);
        ___qtablewidgetitem75->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem76 = ListFluTable->verticalHeaderItem(22);
        ___qtablewidgetitem76->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem77 = ListFluTable->verticalHeaderItem(23);
        ___qtablewidgetitem77->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem78 = ListFluTable->verticalHeaderItem(24);
        ___qtablewidgetitem78->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem79 = ListFluTable->verticalHeaderItem(25);
        ___qtablewidgetitem79->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem80 = ListFluTable->verticalHeaderItem(26);
        ___qtablewidgetitem80->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem81 = ListFluTable->verticalHeaderItem(27);
        ___qtablewidgetitem81->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem82 = ListFluTable->verticalHeaderItem(28);
        ___qtablewidgetitem82->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem83 = ListFluTable->verticalHeaderItem(29);
        ___qtablewidgetitem83->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem84 = ListFluTable->verticalHeaderItem(30);
        ___qtablewidgetitem84->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem85 = ListFluTable->verticalHeaderItem(31);
        ___qtablewidgetitem85->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem86 = ListFluTable->verticalHeaderItem(32);
        ___qtablewidgetitem86->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem87 = ListFluTable->verticalHeaderItem(33);
        ___qtablewidgetitem87->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem88 = ListFluTable->verticalHeaderItem(34);
        ___qtablewidgetitem88->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem89 = ListFluTable->verticalHeaderItem(35);
        ___qtablewidgetitem89->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem90 = ListFluTable->verticalHeaderItem(36);
        ___qtablewidgetitem90->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem91 = ListFluTable->verticalHeaderItem(37);
        ___qtablewidgetitem91->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem92 = ListFluTable->verticalHeaderItem(38);
        ___qtablewidgetitem92->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem93 = ListFluTable->verticalHeaderItem(39);
        ___qtablewidgetitem93->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem94 = ListFluTable->verticalHeaderItem(40);
        ___qtablewidgetitem94->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem95 = ListFluTable->verticalHeaderItem(41);
        ___qtablewidgetitem95->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem96 = ListFluTable->verticalHeaderItem(42);
        ___qtablewidgetitem96->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem97 = ListFluTable->verticalHeaderItem(43);
        ___qtablewidgetitem97->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem98 = ListFluTable->verticalHeaderItem(44);
        ___qtablewidgetitem98->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem99 = ListFluTable->verticalHeaderItem(45);
        ___qtablewidgetitem99->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem100 = ListFluTable->verticalHeaderItem(46);
        ___qtablewidgetitem100->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem101 = ListFluTable->verticalHeaderItem(47);
        ___qtablewidgetitem101->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem102 = ListFluTable->verticalHeaderItem(48);
        ___qtablewidgetitem102->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem103 = ListFluTable->verticalHeaderItem(49);
        ___qtablewidgetitem103->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ListFluTable->setToolTip(QApplication::translate("InputRZForm", "Specify regions to print spectra.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ListFluTable->setWhatsThis(QApplication::translate("InputRZForm", "Specify regions to print spectra.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        IPRIMARYGroupBox->setToolTip(QApplication::translate("InputRZForm", "Defines for which particles spectra are going to be printed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        IPRIMARYGroupBox->setWhatsThis(QApplication::translate("InputRZForm", "Defines for which particles spectra are going to be printed.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        IPRIMARYGroupBox->setTitle(QApplication::translate("InputRZForm", "Type of spectra to print", Q_NULLPTR));
        IPRIMARYComboBox->clear();
        IPRIMARYComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "total fluence", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "electron primaries", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "include brem secondaries", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "photon primaries", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "electron secondaries", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        IPRIMARYComboBox->setToolTip(QApplication::translate("InputRZForm", "Defines for which particles spectra are going to be printed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        IPRIMARYComboBox->setWhatsThis(QApplication::translate("InputRZForm", "Defines for which particles spectra are going to be printed.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        sloteFluGroupBox->setTitle(QApplication::translate("InputRZForm", "Output energy bins", Q_NULLPTR));
        sloteFluLabel->setText(QApplication::translate("InputRZForm", "SLOTE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem104 = sloteFluTable->horizontalHeaderItem(0);
        ___qtablewidgetitem104->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem105 = sloteFluTable->verticalHeaderItem(0);
        ___qtablewidgetitem105->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem106 = sloteFluTable->verticalHeaderItem(1);
        ___qtablewidgetitem106->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem107 = sloteFluTable->verticalHeaderItem(2);
        ___qtablewidgetitem107->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem108 = sloteFluTable->verticalHeaderItem(3);
        ___qtablewidgetitem108->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem109 = sloteFluTable->verticalHeaderItem(4);
        ___qtablewidgetitem109->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem110 = sloteFluTable->verticalHeaderItem(5);
        ___qtablewidgetitem110->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem111 = sloteFluTable->verticalHeaderItem(6);
        ___qtablewidgetitem111->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem112 = sloteFluTable->verticalHeaderItem(7);
        ___qtablewidgetitem112->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem113 = sloteFluTable->verticalHeaderItem(8);
        ___qtablewidgetitem113->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem114 = sloteFluTable->verticalHeaderItem(9);
        ___qtablewidgetitem114->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem115 = sloteFluTable->verticalHeaderItem(10);
        ___qtablewidgetitem115->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem116 = sloteFluTable->verticalHeaderItem(11);
        ___qtablewidgetitem116->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem117 = sloteFluTable->verticalHeaderItem(12);
        ___qtablewidgetitem117->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem118 = sloteFluTable->verticalHeaderItem(13);
        ___qtablewidgetitem118->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem119 = sloteFluTable->verticalHeaderItem(14);
        ___qtablewidgetitem119->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem120 = sloteFluTable->verticalHeaderItem(15);
        ___qtablewidgetitem120->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem121 = sloteFluTable->verticalHeaderItem(16);
        ___qtablewidgetitem121->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem122 = sloteFluTable->verticalHeaderItem(17);
        ___qtablewidgetitem122->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem123 = sloteFluTable->verticalHeaderItem(18);
        ___qtablewidgetitem123->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem124 = sloteFluTable->verticalHeaderItem(19);
        ___qtablewidgetitem124->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem125 = sloteFluTable->verticalHeaderItem(20);
        ___qtablewidgetitem125->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem126 = sloteFluTable->verticalHeaderItem(21);
        ___qtablewidgetitem126->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem127 = sloteFluTable->verticalHeaderItem(22);
        ___qtablewidgetitem127->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem128 = sloteFluTable->verticalHeaderItem(23);
        ___qtablewidgetitem128->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem129 = sloteFluTable->verticalHeaderItem(24);
        ___qtablewidgetitem129->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem130 = sloteFluTable->verticalHeaderItem(25);
        ___qtablewidgetitem130->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem131 = sloteFluTable->verticalHeaderItem(26);
        ___qtablewidgetitem131->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem132 = sloteFluTable->verticalHeaderItem(27);
        ___qtablewidgetitem132->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem133 = sloteFluTable->verticalHeaderItem(28);
        ___qtablewidgetitem133->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem134 = sloteFluTable->verticalHeaderItem(29);
        ___qtablewidgetitem134->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem135 = sloteFluTable->verticalHeaderItem(30);
        ___qtablewidgetitem135->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem136 = sloteFluTable->verticalHeaderItem(31);
        ___qtablewidgetitem136->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem137 = sloteFluTable->verticalHeaderItem(32);
        ___qtablewidgetitem137->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem138 = sloteFluTable->verticalHeaderItem(33);
        ___qtablewidgetitem138->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem139 = sloteFluTable->verticalHeaderItem(34);
        ___qtablewidgetitem139->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem140 = sloteFluTable->verticalHeaderItem(35);
        ___qtablewidgetitem140->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem141 = sloteFluTable->verticalHeaderItem(36);
        ___qtablewidgetitem141->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem142 = sloteFluTable->verticalHeaderItem(37);
        ___qtablewidgetitem142->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem143 = sloteFluTable->verticalHeaderItem(38);
        ___qtablewidgetitem143->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem144 = sloteFluTable->verticalHeaderItem(39);
        ___qtablewidgetitem144->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem145 = sloteFluTable->verticalHeaderItem(40);
        ___qtablewidgetitem145->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem146 = sloteFluTable->verticalHeaderItem(41);
        ___qtablewidgetitem146->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem147 = sloteFluTable->verticalHeaderItem(42);
        ___qtablewidgetitem147->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem148 = sloteFluTable->verticalHeaderItem(43);
        ___qtablewidgetitem148->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem149 = sloteFluTable->verticalHeaderItem(44);
        ___qtablewidgetitem149->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem150 = sloteFluTable->verticalHeaderItem(45);
        ___qtablewidgetitem150->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem151 = sloteFluTable->verticalHeaderItem(46);
        ___qtablewidgetitem151->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem152 = sloteFluTable->verticalHeaderItem(47);
        ___qtablewidgetitem152->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem153 = sloteFluTable->verticalHeaderItem(48);
        ___qtablewidgetitem153->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem154 = sloteFluTable->verticalHeaderItem(49);
        ___qtablewidgetitem154->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem155 = sloteFluTable->verticalHeaderItem(50);
        ___qtablewidgetitem155->setText(QApplication::translate("InputRZForm", "51", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem156 = sloteFluTable->verticalHeaderItem(51);
        ___qtablewidgetitem156->setText(QApplication::translate("InputRZForm", "52", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem157 = sloteFluTable->verticalHeaderItem(52);
        ___qtablewidgetitem157->setText(QApplication::translate("InputRZForm", "53", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem158 = sloteFluTable->verticalHeaderItem(53);
        ___qtablewidgetitem158->setText(QApplication::translate("InputRZForm", "54", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem159 = sloteFluTable->verticalHeaderItem(54);
        ___qtablewidgetitem159->setText(QApplication::translate("InputRZForm", "55", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem160 = sloteFluTable->verticalHeaderItem(55);
        ___qtablewidgetitem160->setText(QApplication::translate("InputRZForm", "56", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem161 = sloteFluTable->verticalHeaderItem(56);
        ___qtablewidgetitem161->setText(QApplication::translate("InputRZForm", "57", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem162 = sloteFluTable->verticalHeaderItem(57);
        ___qtablewidgetitem162->setText(QApplication::translate("InputRZForm", "58", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem163 = sloteFluTable->verticalHeaderItem(58);
        ___qtablewidgetitem163->setText(QApplication::translate("InputRZForm", "59", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem164 = sloteFluTable->verticalHeaderItem(59);
        ___qtablewidgetitem164->setText(QApplication::translate("InputRZForm", "60", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem165 = sloteFluTable->verticalHeaderItem(60);
        ___qtablewidgetitem165->setText(QApplication::translate("InputRZForm", "61", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem166 = sloteFluTable->verticalHeaderItem(61);
        ___qtablewidgetitem166->setText(QApplication::translate("InputRZForm", "62", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem167 = sloteFluTable->verticalHeaderItem(62);
        ___qtablewidgetitem167->setText(QApplication::translate("InputRZForm", "63", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem168 = sloteFluTable->verticalHeaderItem(63);
        ___qtablewidgetitem168->setText(QApplication::translate("InputRZForm", "64", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem169 = sloteFluTable->verticalHeaderItem(64);
        ___qtablewidgetitem169->setText(QApplication::translate("InputRZForm", "65", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem170 = sloteFluTable->verticalHeaderItem(65);
        ___qtablewidgetitem170->setText(QApplication::translate("InputRZForm", "66", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem171 = sloteFluTable->verticalHeaderItem(66);
        ___qtablewidgetitem171->setText(QApplication::translate("InputRZForm", "67", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem172 = sloteFluTable->verticalHeaderItem(67);
        ___qtablewidgetitem172->setText(QApplication::translate("InputRZForm", "68", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem173 = sloteFluTable->verticalHeaderItem(68);
        ___qtablewidgetitem173->setText(QApplication::translate("InputRZForm", "69", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem174 = sloteFluTable->verticalHeaderItem(69);
        ___qtablewidgetitem174->setText(QApplication::translate("InputRZForm", "70", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem175 = sloteFluTable->verticalHeaderItem(70);
        ___qtablewidgetitem175->setText(QApplication::translate("InputRZForm", "71", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem176 = sloteFluTable->verticalHeaderItem(71);
        ___qtablewidgetitem176->setText(QApplication::translate("InputRZForm", "72", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem177 = sloteFluTable->verticalHeaderItem(72);
        ___qtablewidgetitem177->setText(QApplication::translate("InputRZForm", "73", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem178 = sloteFluTable->verticalHeaderItem(73);
        ___qtablewidgetitem178->setText(QApplication::translate("InputRZForm", "74", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem179 = sloteFluTable->verticalHeaderItem(74);
        ___qtablewidgetitem179->setText(QApplication::translate("InputRZForm", "75", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem180 = sloteFluTable->verticalHeaderItem(75);
        ___qtablewidgetitem180->setText(QApplication::translate("InputRZForm", "76", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem181 = sloteFluTable->verticalHeaderItem(76);
        ___qtablewidgetitem181->setText(QApplication::translate("InputRZForm", "77", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem182 = sloteFluTable->verticalHeaderItem(77);
        ___qtablewidgetitem182->setText(QApplication::translate("InputRZForm", "78", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem183 = sloteFluTable->verticalHeaderItem(78);
        ___qtablewidgetitem183->setText(QApplication::translate("InputRZForm", "79", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem184 = sloteFluTable->verticalHeaderItem(79);
        ___qtablewidgetitem184->setText(QApplication::translate("InputRZForm", "80", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem185 = sloteFluTable->verticalHeaderItem(80);
        ___qtablewidgetitem185->setText(QApplication::translate("InputRZForm", "81", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem186 = sloteFluTable->verticalHeaderItem(81);
        ___qtablewidgetitem186->setText(QApplication::translate("InputRZForm", "82", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem187 = sloteFluTable->verticalHeaderItem(82);
        ___qtablewidgetitem187->setText(QApplication::translate("InputRZForm", "83", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem188 = sloteFluTable->verticalHeaderItem(83);
        ___qtablewidgetitem188->setText(QApplication::translate("InputRZForm", "84", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem189 = sloteFluTable->verticalHeaderItem(84);
        ___qtablewidgetitem189->setText(QApplication::translate("InputRZForm", "85", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem190 = sloteFluTable->verticalHeaderItem(85);
        ___qtablewidgetitem190->setText(QApplication::translate("InputRZForm", "86", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem191 = sloteFluTable->verticalHeaderItem(86);
        ___qtablewidgetitem191->setText(QApplication::translate("InputRZForm", "87", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem192 = sloteFluTable->verticalHeaderItem(87);
        ___qtablewidgetitem192->setText(QApplication::translate("InputRZForm", "88", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem193 = sloteFluTable->verticalHeaderItem(88);
        ___qtablewidgetitem193->setText(QApplication::translate("InputRZForm", "89", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem194 = sloteFluTable->verticalHeaderItem(89);
        ___qtablewidgetitem194->setText(QApplication::translate("InputRZForm", "90", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem195 = sloteFluTable->verticalHeaderItem(90);
        ___qtablewidgetitem195->setText(QApplication::translate("InputRZForm", "91", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem196 = sloteFluTable->verticalHeaderItem(91);
        ___qtablewidgetitem196->setText(QApplication::translate("InputRZForm", "92", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem197 = sloteFluTable->verticalHeaderItem(92);
        ___qtablewidgetitem197->setText(QApplication::translate("InputRZForm", "93", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem198 = sloteFluTable->verticalHeaderItem(93);
        ___qtablewidgetitem198->setText(QApplication::translate("InputRZForm", "94", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem199 = sloteFluTable->verticalHeaderItem(94);
        ___qtablewidgetitem199->setText(QApplication::translate("InputRZForm", "95", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem200 = sloteFluTable->verticalHeaderItem(95);
        ___qtablewidgetitem200->setText(QApplication::translate("InputRZForm", "96", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem201 = sloteFluTable->verticalHeaderItem(96);
        ___qtablewidgetitem201->setText(QApplication::translate("InputRZForm", "97", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem202 = sloteFluTable->verticalHeaderItem(97);
        ___qtablewidgetitem202->setText(QApplication::translate("InputRZForm", "98", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem203 = sloteFluTable->verticalHeaderItem(98);
        ___qtablewidgetitem203->setText(QApplication::translate("InputRZForm", "99", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem204 = sloteFluTable->verticalHeaderItem(99);
        ___qtablewidgetitem204->setText(QApplication::translate("InputRZForm", "100", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem205 = sloteFluTable->verticalHeaderItem(100);
        ___qtablewidgetitem205->setText(QApplication::translate("InputRZForm", "101", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem206 = sloteFluTable->verticalHeaderItem(101);
        ___qtablewidgetitem206->setText(QApplication::translate("InputRZForm", "102", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem207 = sloteFluTable->verticalHeaderItem(102);
        ___qtablewidgetitem207->setText(QApplication::translate("InputRZForm", "103", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem208 = sloteFluTable->verticalHeaderItem(103);
        ___qtablewidgetitem208->setText(QApplication::translate("InputRZForm", "104", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem209 = sloteFluTable->verticalHeaderItem(104);
        ___qtablewidgetitem209->setText(QApplication::translate("InputRZForm", "105", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem210 = sloteFluTable->verticalHeaderItem(105);
        ___qtablewidgetitem210->setText(QApplication::translate("InputRZForm", "106", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem211 = sloteFluTable->verticalHeaderItem(106);
        ___qtablewidgetitem211->setText(QApplication::translate("InputRZForm", "107", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem212 = sloteFluTable->verticalHeaderItem(107);
        ___qtablewidgetitem212->setText(QApplication::translate("InputRZForm", "108", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem213 = sloteFluTable->verticalHeaderItem(108);
        ___qtablewidgetitem213->setText(QApplication::translate("InputRZForm", "109", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem214 = sloteFluTable->verticalHeaderItem(109);
        ___qtablewidgetitem214->setText(QApplication::translate("InputRZForm", "110", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem215 = sloteFluTable->verticalHeaderItem(110);
        ___qtablewidgetitem215->setText(QApplication::translate("InputRZForm", "111", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem216 = sloteFluTable->verticalHeaderItem(111);
        ___qtablewidgetitem216->setText(QApplication::translate("InputRZForm", "112", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem217 = sloteFluTable->verticalHeaderItem(112);
        ___qtablewidgetitem217->setText(QApplication::translate("InputRZForm", "113", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem218 = sloteFluTable->verticalHeaderItem(113);
        ___qtablewidgetitem218->setText(QApplication::translate("InputRZForm", "114", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem219 = sloteFluTable->verticalHeaderItem(114);
        ___qtablewidgetitem219->setText(QApplication::translate("InputRZForm", "115", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem220 = sloteFluTable->verticalHeaderItem(115);
        ___qtablewidgetitem220->setText(QApplication::translate("InputRZForm", "116", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem221 = sloteFluTable->verticalHeaderItem(116);
        ___qtablewidgetitem221->setText(QApplication::translate("InputRZForm", "117", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem222 = sloteFluTable->verticalHeaderItem(117);
        ___qtablewidgetitem222->setText(QApplication::translate("InputRZForm", "118", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem223 = sloteFluTable->verticalHeaderItem(118);
        ___qtablewidgetitem223->setText(QApplication::translate("InputRZForm", "119", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem224 = sloteFluTable->verticalHeaderItem(119);
        ___qtablewidgetitem224->setText(QApplication::translate("InputRZForm", "120", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem225 = sloteFluTable->verticalHeaderItem(120);
        ___qtablewidgetitem225->setText(QApplication::translate("InputRZForm", "121", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem226 = sloteFluTable->verticalHeaderItem(121);
        ___qtablewidgetitem226->setText(QApplication::translate("InputRZForm", "122", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem227 = sloteFluTable->verticalHeaderItem(122);
        ___qtablewidgetitem227->setText(QApplication::translate("InputRZForm", "123", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem228 = sloteFluTable->verticalHeaderItem(123);
        ___qtablewidgetitem228->setText(QApplication::translate("InputRZForm", "124", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem229 = sloteFluTable->verticalHeaderItem(124);
        ___qtablewidgetitem229->setText(QApplication::translate("InputRZForm", "125", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem230 = sloteFluTable->verticalHeaderItem(125);
        ___qtablewidgetitem230->setText(QApplication::translate("InputRZForm", "126", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem231 = sloteFluTable->verticalHeaderItem(126);
        ___qtablewidgetitem231->setText(QApplication::translate("InputRZForm", "127", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem232 = sloteFluTable->verticalHeaderItem(127);
        ___qtablewidgetitem232->setText(QApplication::translate("InputRZForm", "128", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem233 = sloteFluTable->verticalHeaderItem(128);
        ___qtablewidgetitem233->setText(QApplication::translate("InputRZForm", "129", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem234 = sloteFluTable->verticalHeaderItem(129);
        ___qtablewidgetitem234->setText(QApplication::translate("InputRZForm", "130", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem235 = sloteFluTable->verticalHeaderItem(130);
        ___qtablewidgetitem235->setText(QApplication::translate("InputRZForm", "131", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem236 = sloteFluTable->verticalHeaderItem(131);
        ___qtablewidgetitem236->setText(QApplication::translate("InputRZForm", "132", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem237 = sloteFluTable->verticalHeaderItem(132);
        ___qtablewidgetitem237->setText(QApplication::translate("InputRZForm", "133", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem238 = sloteFluTable->verticalHeaderItem(133);
        ___qtablewidgetitem238->setText(QApplication::translate("InputRZForm", "134", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem239 = sloteFluTable->verticalHeaderItem(134);
        ___qtablewidgetitem239->setText(QApplication::translate("InputRZForm", "135", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem240 = sloteFluTable->verticalHeaderItem(135);
        ___qtablewidgetitem240->setText(QApplication::translate("InputRZForm", "136", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem241 = sloteFluTable->verticalHeaderItem(136);
        ___qtablewidgetitem241->setText(QApplication::translate("InputRZForm", "137", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem242 = sloteFluTable->verticalHeaderItem(137);
        ___qtablewidgetitem242->setText(QApplication::translate("InputRZForm", "138", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem243 = sloteFluTable->verticalHeaderItem(138);
        ___qtablewidgetitem243->setText(QApplication::translate("InputRZForm", "139", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem244 = sloteFluTable->verticalHeaderItem(139);
        ___qtablewidgetitem244->setText(QApplication::translate("InputRZForm", "140", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem245 = sloteFluTable->verticalHeaderItem(140);
        ___qtablewidgetitem245->setText(QApplication::translate("InputRZForm", "141", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem246 = sloteFluTable->verticalHeaderItem(141);
        ___qtablewidgetitem246->setText(QApplication::translate("InputRZForm", "142", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem247 = sloteFluTable->verticalHeaderItem(142);
        ___qtablewidgetitem247->setText(QApplication::translate("InputRZForm", "143", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem248 = sloteFluTable->verticalHeaderItem(143);
        ___qtablewidgetitem248->setText(QApplication::translate("InputRZForm", "144", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem249 = sloteFluTable->verticalHeaderItem(144);
        ___qtablewidgetitem249->setText(QApplication::translate("InputRZForm", "145", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem250 = sloteFluTable->verticalHeaderItem(145);
        ___qtablewidgetitem250->setText(QApplication::translate("InputRZForm", "146", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem251 = sloteFluTable->verticalHeaderItem(146);
        ___qtablewidgetitem251->setText(QApplication::translate("InputRZForm", "147", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem252 = sloteFluTable->verticalHeaderItem(147);
        ___qtablewidgetitem252->setText(QApplication::translate("InputRZForm", "148", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem253 = sloteFluTable->verticalHeaderItem(148);
        ___qtablewidgetitem253->setText(QApplication::translate("InputRZForm", "149", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem254 = sloteFluTable->verticalHeaderItem(149);
        ___qtablewidgetitem254->setText(QApplication::translate("InputRZForm", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem255 = sloteFluTable->verticalHeaderItem(150);
        ___qtablewidgetitem255->setText(QApplication::translate("InputRZForm", "151", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem256 = sloteFluTable->verticalHeaderItem(151);
        ___qtablewidgetitem256->setText(QApplication::translate("InputRZForm", "152", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem257 = sloteFluTable->verticalHeaderItem(152);
        ___qtablewidgetitem257->setText(QApplication::translate("InputRZForm", "153", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem258 = sloteFluTable->verticalHeaderItem(153);
        ___qtablewidgetitem258->setText(QApplication::translate("InputRZForm", "154", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem259 = sloteFluTable->verticalHeaderItem(154);
        ___qtablewidgetitem259->setText(QApplication::translate("InputRZForm", "155", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem260 = sloteFluTable->verticalHeaderItem(155);
        ___qtablewidgetitem260->setText(QApplication::translate("InputRZForm", "156", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem261 = sloteFluTable->verticalHeaderItem(156);
        ___qtablewidgetitem261->setText(QApplication::translate("InputRZForm", "157", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem262 = sloteFluTable->verticalHeaderItem(157);
        ___qtablewidgetitem262->setText(QApplication::translate("InputRZForm", "158", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem263 = sloteFluTable->verticalHeaderItem(158);
        ___qtablewidgetitem263->setText(QApplication::translate("InputRZForm", "159", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem264 = sloteFluTable->verticalHeaderItem(159);
        ___qtablewidgetitem264->setText(QApplication::translate("InputRZForm", "160", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem265 = sloteFluTable->verticalHeaderItem(160);
        ___qtablewidgetitem265->setText(QApplication::translate("InputRZForm", "161", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem266 = sloteFluTable->verticalHeaderItem(161);
        ___qtablewidgetitem266->setText(QApplication::translate("InputRZForm", "162", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem267 = sloteFluTable->verticalHeaderItem(162);
        ___qtablewidgetitem267->setText(QApplication::translate("InputRZForm", "163", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem268 = sloteFluTable->verticalHeaderItem(163);
        ___qtablewidgetitem268->setText(QApplication::translate("InputRZForm", "164", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem269 = sloteFluTable->verticalHeaderItem(164);
        ___qtablewidgetitem269->setText(QApplication::translate("InputRZForm", "165", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem270 = sloteFluTable->verticalHeaderItem(165);
        ___qtablewidgetitem270->setText(QApplication::translate("InputRZForm", "166", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem271 = sloteFluTable->verticalHeaderItem(166);
        ___qtablewidgetitem271->setText(QApplication::translate("InputRZForm", "167", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem272 = sloteFluTable->verticalHeaderItem(167);
        ___qtablewidgetitem272->setText(QApplication::translate("InputRZForm", "168", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem273 = sloteFluTable->verticalHeaderItem(168);
        ___qtablewidgetitem273->setText(QApplication::translate("InputRZForm", "169", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem274 = sloteFluTable->verticalHeaderItem(169);
        ___qtablewidgetitem274->setText(QApplication::translate("InputRZForm", "170", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem275 = sloteFluTable->verticalHeaderItem(170);
        ___qtablewidgetitem275->setText(QApplication::translate("InputRZForm", "171", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem276 = sloteFluTable->verticalHeaderItem(171);
        ___qtablewidgetitem276->setText(QApplication::translate("InputRZForm", "172", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem277 = sloteFluTable->verticalHeaderItem(172);
        ___qtablewidgetitem277->setText(QApplication::translate("InputRZForm", "173", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem278 = sloteFluTable->verticalHeaderItem(173);
        ___qtablewidgetitem278->setText(QApplication::translate("InputRZForm", "174", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem279 = sloteFluTable->verticalHeaderItem(174);
        ___qtablewidgetitem279->setText(QApplication::translate("InputRZForm", "175", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem280 = sloteFluTable->verticalHeaderItem(175);
        ___qtablewidgetitem280->setText(QApplication::translate("InputRZForm", "176", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem281 = sloteFluTable->verticalHeaderItem(176);
        ___qtablewidgetitem281->setText(QApplication::translate("InputRZForm", "177", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem282 = sloteFluTable->verticalHeaderItem(177);
        ___qtablewidgetitem282->setText(QApplication::translate("InputRZForm", "178", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem283 = sloteFluTable->verticalHeaderItem(178);
        ___qtablewidgetitem283->setText(QApplication::translate("InputRZForm", "179", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem284 = sloteFluTable->verticalHeaderItem(179);
        ___qtablewidgetitem284->setText(QApplication::translate("InputRZForm", "180", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem285 = sloteFluTable->verticalHeaderItem(180);
        ___qtablewidgetitem285->setText(QApplication::translate("InputRZForm", "181", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem286 = sloteFluTable->verticalHeaderItem(181);
        ___qtablewidgetitem286->setText(QApplication::translate("InputRZForm", "182", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem287 = sloteFluTable->verticalHeaderItem(182);
        ___qtablewidgetitem287->setText(QApplication::translate("InputRZForm", "183", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem288 = sloteFluTable->verticalHeaderItem(183);
        ___qtablewidgetitem288->setText(QApplication::translate("InputRZForm", "184", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem289 = sloteFluTable->verticalHeaderItem(184);
        ___qtablewidgetitem289->setText(QApplication::translate("InputRZForm", "185", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem290 = sloteFluTable->verticalHeaderItem(185);
        ___qtablewidgetitem290->setText(QApplication::translate("InputRZForm", "186", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem291 = sloteFluTable->verticalHeaderItem(186);
        ___qtablewidgetitem291->setText(QApplication::translate("InputRZForm", "187", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem292 = sloteFluTable->verticalHeaderItem(187);
        ___qtablewidgetitem292->setText(QApplication::translate("InputRZForm", "188", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem293 = sloteFluTable->verticalHeaderItem(188);
        ___qtablewidgetitem293->setText(QApplication::translate("InputRZForm", "189", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem294 = sloteFluTable->verticalHeaderItem(189);
        ___qtablewidgetitem294->setText(QApplication::translate("InputRZForm", "190", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem295 = sloteFluTable->verticalHeaderItem(190);
        ___qtablewidgetitem295->setText(QApplication::translate("InputRZForm", "191", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem296 = sloteFluTable->verticalHeaderItem(191);
        ___qtablewidgetitem296->setText(QApplication::translate("InputRZForm", "192", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem297 = sloteFluTable->verticalHeaderItem(192);
        ___qtablewidgetitem297->setText(QApplication::translate("InputRZForm", "193", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem298 = sloteFluTable->verticalHeaderItem(193);
        ___qtablewidgetitem298->setText(QApplication::translate("InputRZForm", "194", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem299 = sloteFluTable->verticalHeaderItem(194);
        ___qtablewidgetitem299->setText(QApplication::translate("InputRZForm", "195", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem300 = sloteFluTable->verticalHeaderItem(195);
        ___qtablewidgetitem300->setText(QApplication::translate("InputRZForm", "196", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem301 = sloteFluTable->verticalHeaderItem(196);
        ___qtablewidgetitem301->setText(QApplication::translate("InputRZForm", "197", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem302 = sloteFluTable->verticalHeaderItem(197);
        ___qtablewidgetitem302->setText(QApplication::translate("InputRZForm", "198", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem303 = sloteFluTable->verticalHeaderItem(198);
        ___qtablewidgetitem303->setText(QApplication::translate("InputRZForm", "199", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem304 = sloteFluTable->verticalHeaderItem(199);
        ___qtablewidgetitem304->setText(QApplication::translate("InputRZForm", "200", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(IOtab), QApplication::translate("InputRZForm", "I/O control", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ncaseLabel->setToolTip(QApplication::translate("InputRZForm", "Histories to run, defaults to 20000", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ncaseLabel->setWhatsThis(QApplication::translate("InputRZForm", "Histories to run, defaults to 20000", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ncaseLabel->setText(QApplication::translate("InputRZForm", "number of histories:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ncaseEdit->setToolTip(QApplication::translate("InputRZForm", "Histories to run, defaults to 20000", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ncaseEdit->setWhatsThis(QApplication::translate("InputRZForm", "Histories to run, defaults to 20000", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ncaseEdit->setText(QApplication::translate("InputRZForm", "20000", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxCPULabel->setToolTip(QApplication::translate("InputRZForm", "terminate cleanly as long as one batch has completed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxCPULabel->setText(QApplication::translate("InputRZForm", "maximum CPU hours allowed:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maxCPUEdit->setToolTip(QApplication::translate("InputRZForm", "terminate cleanly as long as one batch has completed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        maxCPUEdit->setText(QApplication::translate("InputRZForm", "60", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        statLabel->setToolTip(QApplication::translate("InputRZForm", "Finish the run if this accuracy is obtained at the end of a batch prior to the total number of histories being run.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        statLabel->setText(QApplication::translate("InputRZForm", "statistical accuracy sought:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        statEdit->setToolTip(QApplication::translate("InputRZForm", "Finish the run if this accuracy is obtained at the end of a batch prior to the total number of histories being run.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        statEdit->setText(QApplication::translate("InputRZForm", "0.1", Q_NULLPTR));
        kermaGroupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        kermaCheckBox->setToolTip(QApplication::translate("InputRZForm", "Score kerma and ratio kerma to dose", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        kermaCheckBox->setText(QApplication::translate("InputRZForm", "score kerma", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        randGroupBox->setToolTip(QApplication::translate("InputRZForm", "Which generator used is selected in the configuration file.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        randGroupBox->setTitle(QApplication::translate("InputRZForm", "Random Number Initialization", Q_NULLPTR));
        rand1Label->setText(QApplication::translate("InputRZForm", " 1st.", Q_NULLPTR));
        rand2Label->setText(QApplication::translate("InputRZForm", "2nd:", Q_NULLPTR));
        photregGroupBox->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        photregCheckBox->setToolTip(QApplication::translate("InputRZForm", "regeneration of parent photon after an interaction", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        photregCheckBox->setText(QApplication::translate("InputRZForm", "photon regeneration ", Q_NULLPTR));
        ifullGroupBox->setTitle(QApplication::translate("InputRZForm", "Type of calculation", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ifullLabel->setToolTip(QApplication::translate("InputRZForm", "Quantities to score.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ifullLabel->setText(QApplication::translate("InputRZForm", " ifull:", Q_NULLPTR));
        ifullComboBox->clear();
        ifullComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "dose and stoppers", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Aatt and Ascat", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Ap", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Afl and <s>g/w", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        ifullComboBox->setToolTip(QApplication::translate("InputRZForm", "Quantities to score", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        phdGroupBox->setTitle(QApplication::translate("InputRZForm", "Pulse height distribution inputs", Q_NULLPTR));
        SLOTELabel->setText(QApplication::translate("InputRZForm", "SLOTE :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SLOTEEdit->setToolTip(QApplication::translate("InputRZForm", "Defines output energy bins. If less than zero, input tops of individual energy bins in table below", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DELTAELabel->setText(QApplication::translate("InputRZForm", "DELTAE :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem305 = phdTable->horizontalHeaderItem(0);
        ___qtablewidgetitem305->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem306 = phdTable->horizontalHeaderItem(1);
        ___qtablewidgetitem306->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem307 = phdTable->verticalHeaderItem(0);
        ___qtablewidgetitem307->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem308 = phdTable->verticalHeaderItem(1);
        ___qtablewidgetitem308->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem309 = phdTable->verticalHeaderItem(2);
        ___qtablewidgetitem309->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem310 = phdTable->verticalHeaderItem(3);
        ___qtablewidgetitem310->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem311 = phdTable->verticalHeaderItem(4);
        ___qtablewidgetitem311->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem312 = phdTable->verticalHeaderItem(5);
        ___qtablewidgetitem312->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem313 = phdTable->verticalHeaderItem(6);
        ___qtablewidgetitem313->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem314 = phdTable->verticalHeaderItem(7);
        ___qtablewidgetitem314->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem315 = phdTable->verticalHeaderItem(8);
        ___qtablewidgetitem315->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem316 = phdTable->verticalHeaderItem(9);
        ___qtablewidgetitem316->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem317 = phdTable->verticalHeaderItem(10);
        ___qtablewidgetitem317->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem318 = phdTable->verticalHeaderItem(11);
        ___qtablewidgetitem318->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem319 = phdTable->verticalHeaderItem(12);
        ___qtablewidgetitem319->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem320 = phdTable->verticalHeaderItem(13);
        ___qtablewidgetitem320->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem321 = phdTable->verticalHeaderItem(14);
        ___qtablewidgetitem321->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem322 = phdTable->verticalHeaderItem(15);
        ___qtablewidgetitem322->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem323 = phdTable->verticalHeaderItem(16);
        ___qtablewidgetitem323->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem324 = phdTable->verticalHeaderItem(17);
        ___qtablewidgetitem324->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem325 = phdTable->verticalHeaderItem(18);
        ___qtablewidgetitem325->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem326 = phdTable->verticalHeaderItem(19);
        ___qtablewidgetitem326->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem327 = phdTable->verticalHeaderItem(20);
        ___qtablewidgetitem327->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem328 = phdTable->verticalHeaderItem(21);
        ___qtablewidgetitem328->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem329 = phdTable->verticalHeaderItem(22);
        ___qtablewidgetitem329->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem330 = phdTable->verticalHeaderItem(23);
        ___qtablewidgetitem330->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem331 = phdTable->verticalHeaderItem(24);
        ___qtablewidgetitem331->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem332 = phdTable->verticalHeaderItem(25);
        ___qtablewidgetitem332->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem333 = phdTable->verticalHeaderItem(26);
        ___qtablewidgetitem333->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem334 = phdTable->verticalHeaderItem(27);
        ___qtablewidgetitem334->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem335 = phdTable->verticalHeaderItem(28);
        ___qtablewidgetitem335->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem336 = phdTable->verticalHeaderItem(29);
        ___qtablewidgetitem336->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem337 = phdTable->verticalHeaderItem(30);
        ___qtablewidgetitem337->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem338 = phdTable->verticalHeaderItem(31);
        ___qtablewidgetitem338->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem339 = phdTable->verticalHeaderItem(32);
        ___qtablewidgetitem339->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem340 = phdTable->verticalHeaderItem(33);
        ___qtablewidgetitem340->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem341 = phdTable->verticalHeaderItem(34);
        ___qtablewidgetitem341->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem342 = phdTable->verticalHeaderItem(35);
        ___qtablewidgetitem342->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem343 = phdTable->verticalHeaderItem(36);
        ___qtablewidgetitem343->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem344 = phdTable->verticalHeaderItem(37);
        ___qtablewidgetitem344->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem345 = phdTable->verticalHeaderItem(38);
        ___qtablewidgetitem345->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem346 = phdTable->verticalHeaderItem(39);
        ___qtablewidgetitem346->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem347 = phdTable->verticalHeaderItem(40);
        ___qtablewidgetitem347->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem348 = phdTable->verticalHeaderItem(41);
        ___qtablewidgetitem348->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem349 = phdTable->verticalHeaderItem(42);
        ___qtablewidgetitem349->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem350 = phdTable->verticalHeaderItem(43);
        ___qtablewidgetitem350->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem351 = phdTable->verticalHeaderItem(44);
        ___qtablewidgetitem351->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem352 = phdTable->verticalHeaderItem(45);
        ___qtablewidgetitem352->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem353 = phdTable->verticalHeaderItem(46);
        ___qtablewidgetitem353->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem354 = phdTable->verticalHeaderItem(47);
        ___qtablewidgetitem354->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem355 = phdTable->verticalHeaderItem(48);
        ___qtablewidgetitem355->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem356 = phdTable->verticalHeaderItem(49);
        ___qtablewidgetitem356->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(MCtab), QApplication::translate("InputRZForm", "Monte Carlo", Q_NULLPTR));
        inputmethButtonGroup->setTitle(QApplication::translate("InputRZForm", "input method", Q_NULLPTR));
        groupRadioButton->setText(QApplication::translate("InputRZForm", "groups", Q_NULLPTR));
        individualRadioButton->setText(QApplication::translate("InputRZForm", "individual", Q_NULLPTR));
        cavityRadioButton->setText(QApplication::translate("InputRZForm", "cavity description", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ZFaceLabel->setToolTip(QApplication::translate("InputRZForm", "Start of first slab.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ZFaceLabel->setWhatsThis(QApplication::translate("InputRZForm", "Start of first slab.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ZFaceLabel->setText(QApplication::translate("InputRZForm", "Z of front face:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ZFaceEdit->setToolTip(QApplication::translate("InputRZForm", "Start of first slab.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        ZFaceEdit->setWhatsThis(QApplication::translate("InputRZForm", "Start of first slab.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        ZFaceEdit->setText(QApplication::translate("InputRZForm", "0", Q_NULLPTR));
        CavityInfoLabel->setText(QApplication::translate("InputRZForm", "<=== See cavity specification on next Tab", Q_NULLPTR));
        mediaGroupBox->setTitle(QApplication::translate("InputRZForm", "Media input", Q_NULLPTR));
        mediaLabel->setText(QApplication::translate("InputRZForm", "description by", Q_NULLPTR));
        mediaComboBox->clear();
        mediaComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "planes", Q_NULLPTR)
        );
        QTableWidgetItem *___qtablewidgetitem357 = mediaTable->horizontalHeaderItem(0);
        ___qtablewidgetitem357->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem358 = mediaTable->horizontalHeaderItem(1);
        ___qtablewidgetitem358->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem359 = mediaTable->horizontalHeaderItem(2);
        ___qtablewidgetitem359->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem360 = mediaTable->verticalHeaderItem(0);
        ___qtablewidgetitem360->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem361 = mediaTable->verticalHeaderItem(1);
        ___qtablewidgetitem361->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem362 = mediaTable->verticalHeaderItem(2);
        ___qtablewidgetitem362->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem363 = mediaTable->verticalHeaderItem(3);
        ___qtablewidgetitem363->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem364 = mediaTable->verticalHeaderItem(4);
        ___qtablewidgetitem364->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem365 = mediaTable->verticalHeaderItem(5);
        ___qtablewidgetitem365->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem366 = mediaTable->verticalHeaderItem(6);
        ___qtablewidgetitem366->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem367 = mediaTable->verticalHeaderItem(7);
        ___qtablewidgetitem367->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem368 = mediaTable->verticalHeaderItem(8);
        ___qtablewidgetitem368->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem369 = mediaTable->verticalHeaderItem(9);
        ___qtablewidgetitem369->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem370 = mediaTable->verticalHeaderItem(10);
        ___qtablewidgetitem370->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem371 = mediaTable->verticalHeaderItem(11);
        ___qtablewidgetitem371->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem372 = mediaTable->verticalHeaderItem(12);
        ___qtablewidgetitem372->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem373 = mediaTable->verticalHeaderItem(13);
        ___qtablewidgetitem373->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem374 = mediaTable->verticalHeaderItem(14);
        ___qtablewidgetitem374->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem375 = mediaTable->verticalHeaderItem(15);
        ___qtablewidgetitem375->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem376 = mediaTable->verticalHeaderItem(16);
        ___qtablewidgetitem376->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem377 = mediaTable->verticalHeaderItem(17);
        ___qtablewidgetitem377->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem378 = mediaTable->verticalHeaderItem(18);
        ___qtablewidgetitem378->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem379 = mediaTable->verticalHeaderItem(19);
        ___qtablewidgetitem379->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem380 = mediaTable->verticalHeaderItem(20);
        ___qtablewidgetitem380->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem381 = mediaTable->verticalHeaderItem(21);
        ___qtablewidgetitem381->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem382 = mediaTable->verticalHeaderItem(22);
        ___qtablewidgetitem382->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem383 = mediaTable->verticalHeaderItem(23);
        ___qtablewidgetitem383->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem384 = mediaTable->verticalHeaderItem(24);
        ___qtablewidgetitem384->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem385 = mediaTable->verticalHeaderItem(25);
        ___qtablewidgetitem385->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem386 = mediaTable->verticalHeaderItem(26);
        ___qtablewidgetitem386->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem387 = mediaTable->verticalHeaderItem(27);
        ___qtablewidgetitem387->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem388 = mediaTable->verticalHeaderItem(28);
        ___qtablewidgetitem388->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem389 = mediaTable->verticalHeaderItem(29);
        ___qtablewidgetitem389->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem390 = mediaTable->verticalHeaderItem(30);
        ___qtablewidgetitem390->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem391 = mediaTable->verticalHeaderItem(31);
        ___qtablewidgetitem391->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem392 = mediaTable->verticalHeaderItem(32);
        ___qtablewidgetitem392->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem393 = mediaTable->verticalHeaderItem(33);
        ___qtablewidgetitem393->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem394 = mediaTable->verticalHeaderItem(34);
        ___qtablewidgetitem394->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem395 = mediaTable->verticalHeaderItem(35);
        ___qtablewidgetitem395->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem396 = mediaTable->verticalHeaderItem(36);
        ___qtablewidgetitem396->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem397 = mediaTable->verticalHeaderItem(37);
        ___qtablewidgetitem397->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem398 = mediaTable->verticalHeaderItem(38);
        ___qtablewidgetitem398->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem399 = mediaTable->verticalHeaderItem(39);
        ___qtablewidgetitem399->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem400 = mediaTable->verticalHeaderItem(40);
        ___qtablewidgetitem400->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem401 = mediaTable->verticalHeaderItem(41);
        ___qtablewidgetitem401->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem402 = mediaTable->verticalHeaderItem(42);
        ___qtablewidgetitem402->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem403 = mediaTable->verticalHeaderItem(43);
        ___qtablewidgetitem403->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem404 = mediaTable->verticalHeaderItem(44);
        ___qtablewidgetitem404->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem405 = mediaTable->verticalHeaderItem(45);
        ___qtablewidgetitem405->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem406 = mediaTable->verticalHeaderItem(46);
        ___qtablewidgetitem406->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem407 = mediaTable->verticalHeaderItem(47);
        ___qtablewidgetitem407->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem408 = mediaTable->verticalHeaderItem(48);
        ___qtablewidgetitem408->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem409 = mediaTable->verticalHeaderItem(49);
        ___qtablewidgetitem409->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mediaTable->setToolTip(QApplication::translate("InputRZForm", "Assign media to the regions.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mediaTable->setWhatsThis(QApplication::translate("InputRZForm", "Assign media to the regions.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        GroupBox53->setToolTip(QApplication::translate("InputRZForm", "Define planes.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GroupBox53->setWhatsThis(QApplication::translate("InputRZForm", "Define planes.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        GroupBox53->setTitle(QApplication::translate("InputRZForm", "planes information", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem410 = geometryTable->horizontalHeaderItem(0);
        ___qtablewidgetitem410->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem411 = geometryTable->horizontalHeaderItem(1);
        ___qtablewidgetitem411->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem412 = geometryTable->verticalHeaderItem(0);
        ___qtablewidgetitem412->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem413 = geometryTable->verticalHeaderItem(1);
        ___qtablewidgetitem413->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem414 = geometryTable->verticalHeaderItem(2);
        ___qtablewidgetitem414->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem415 = geometryTable->verticalHeaderItem(3);
        ___qtablewidgetitem415->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem416 = geometryTable->verticalHeaderItem(4);
        ___qtablewidgetitem416->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem417 = geometryTable->verticalHeaderItem(5);
        ___qtablewidgetitem417->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem418 = geometryTable->verticalHeaderItem(6);
        ___qtablewidgetitem418->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem419 = geometryTable->verticalHeaderItem(7);
        ___qtablewidgetitem419->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem420 = geometryTable->verticalHeaderItem(8);
        ___qtablewidgetitem420->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem421 = geometryTable->verticalHeaderItem(9);
        ___qtablewidgetitem421->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem422 = geometryTable->verticalHeaderItem(10);
        ___qtablewidgetitem422->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem423 = geometryTable->verticalHeaderItem(11);
        ___qtablewidgetitem423->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem424 = geometryTable->verticalHeaderItem(12);
        ___qtablewidgetitem424->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem425 = geometryTable->verticalHeaderItem(13);
        ___qtablewidgetitem425->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem426 = geometryTable->verticalHeaderItem(14);
        ___qtablewidgetitem426->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem427 = geometryTable->verticalHeaderItem(15);
        ___qtablewidgetitem427->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem428 = geometryTable->verticalHeaderItem(16);
        ___qtablewidgetitem428->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem429 = geometryTable->verticalHeaderItem(17);
        ___qtablewidgetitem429->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem430 = geometryTable->verticalHeaderItem(18);
        ___qtablewidgetitem430->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem431 = geometryTable->verticalHeaderItem(19);
        ___qtablewidgetitem431->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem432 = geometryTable->verticalHeaderItem(20);
        ___qtablewidgetitem432->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem433 = geometryTable->verticalHeaderItem(21);
        ___qtablewidgetitem433->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem434 = geometryTable->verticalHeaderItem(22);
        ___qtablewidgetitem434->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem435 = geometryTable->verticalHeaderItem(23);
        ___qtablewidgetitem435->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem436 = geometryTable->verticalHeaderItem(24);
        ___qtablewidgetitem436->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem437 = geometryTable->verticalHeaderItem(25);
        ___qtablewidgetitem437->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem438 = geometryTable->verticalHeaderItem(26);
        ___qtablewidgetitem438->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem439 = geometryTable->verticalHeaderItem(27);
        ___qtablewidgetitem439->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem440 = geometryTable->verticalHeaderItem(28);
        ___qtablewidgetitem440->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem441 = geometryTable->verticalHeaderItem(29);
        ___qtablewidgetitem441->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem442 = geometryTable->verticalHeaderItem(30);
        ___qtablewidgetitem442->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem443 = geometryTable->verticalHeaderItem(31);
        ___qtablewidgetitem443->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem444 = geometryTable->verticalHeaderItem(32);
        ___qtablewidgetitem444->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem445 = geometryTable->verticalHeaderItem(33);
        ___qtablewidgetitem445->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem446 = geometryTable->verticalHeaderItem(34);
        ___qtablewidgetitem446->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem447 = geometryTable->verticalHeaderItem(35);
        ___qtablewidgetitem447->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem448 = geometryTable->verticalHeaderItem(36);
        ___qtablewidgetitem448->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem449 = geometryTable->verticalHeaderItem(37);
        ___qtablewidgetitem449->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem450 = geometryTable->verticalHeaderItem(38);
        ___qtablewidgetitem450->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem451 = geometryTable->verticalHeaderItem(39);
        ___qtablewidgetitem451->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem452 = geometryTable->verticalHeaderItem(40);
        ___qtablewidgetitem452->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem453 = geometryTable->verticalHeaderItem(41);
        ___qtablewidgetitem453->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem454 = geometryTable->verticalHeaderItem(42);
        ___qtablewidgetitem454->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem455 = geometryTable->verticalHeaderItem(43);
        ___qtablewidgetitem455->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem456 = geometryTable->verticalHeaderItem(44);
        ___qtablewidgetitem456->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem457 = geometryTable->verticalHeaderItem(45);
        ___qtablewidgetitem457->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem458 = geometryTable->verticalHeaderItem(46);
        ___qtablewidgetitem458->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem459 = geometryTable->verticalHeaderItem(47);
        ___qtablewidgetitem459->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem460 = geometryTable->verticalHeaderItem(48);
        ___qtablewidgetitem460->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem461 = geometryTable->verticalHeaderItem(49);
        ___qtablewidgetitem461->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GroupBox54->setToolTip(QApplication::translate("InputRZForm", "Input cylinder radii.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GroupBox54->setWhatsThis(QApplication::translate("InputRZForm", "Input cylinder radii.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        GroupBox54->setTitle(QApplication::translate("InputRZForm", "cylinder information", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem462 = cylTable->horizontalHeaderItem(0);
        ___qtablewidgetitem462->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem463 = cylTable->verticalHeaderItem(0);
        ___qtablewidgetitem463->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem464 = cylTable->verticalHeaderItem(1);
        ___qtablewidgetitem464->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem465 = cylTable->verticalHeaderItem(2);
        ___qtablewidgetitem465->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem466 = cylTable->verticalHeaderItem(3);
        ___qtablewidgetitem466->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem467 = cylTable->verticalHeaderItem(4);
        ___qtablewidgetitem467->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem468 = cylTable->verticalHeaderItem(5);
        ___qtablewidgetitem468->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem469 = cylTable->verticalHeaderItem(6);
        ___qtablewidgetitem469->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem470 = cylTable->verticalHeaderItem(7);
        ___qtablewidgetitem470->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem471 = cylTable->verticalHeaderItem(8);
        ___qtablewidgetitem471->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem472 = cylTable->verticalHeaderItem(9);
        ___qtablewidgetitem472->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem473 = cylTable->verticalHeaderItem(10);
        ___qtablewidgetitem473->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem474 = cylTable->verticalHeaderItem(11);
        ___qtablewidgetitem474->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem475 = cylTable->verticalHeaderItem(12);
        ___qtablewidgetitem475->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem476 = cylTable->verticalHeaderItem(13);
        ___qtablewidgetitem476->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem477 = cylTable->verticalHeaderItem(14);
        ___qtablewidgetitem477->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem478 = cylTable->verticalHeaderItem(15);
        ___qtablewidgetitem478->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem479 = cylTable->verticalHeaderItem(16);
        ___qtablewidgetitem479->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem480 = cylTable->verticalHeaderItem(17);
        ___qtablewidgetitem480->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem481 = cylTable->verticalHeaderItem(18);
        ___qtablewidgetitem481->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem482 = cylTable->verticalHeaderItem(19);
        ___qtablewidgetitem482->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem483 = cylTable->verticalHeaderItem(20);
        ___qtablewidgetitem483->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem484 = cylTable->verticalHeaderItem(21);
        ___qtablewidgetitem484->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem485 = cylTable->verticalHeaderItem(22);
        ___qtablewidgetitem485->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem486 = cylTable->verticalHeaderItem(23);
        ___qtablewidgetitem486->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem487 = cylTable->verticalHeaderItem(24);
        ___qtablewidgetitem487->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem488 = cylTable->verticalHeaderItem(25);
        ___qtablewidgetitem488->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem489 = cylTable->verticalHeaderItem(26);
        ___qtablewidgetitem489->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem490 = cylTable->verticalHeaderItem(27);
        ___qtablewidgetitem490->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem491 = cylTable->verticalHeaderItem(28);
        ___qtablewidgetitem491->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem492 = cylTable->verticalHeaderItem(29);
        ___qtablewidgetitem492->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem493 = cylTable->verticalHeaderItem(30);
        ___qtablewidgetitem493->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem494 = cylTable->verticalHeaderItem(31);
        ___qtablewidgetitem494->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem495 = cylTable->verticalHeaderItem(32);
        ___qtablewidgetitem495->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem496 = cylTable->verticalHeaderItem(33);
        ___qtablewidgetitem496->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem497 = cylTable->verticalHeaderItem(34);
        ___qtablewidgetitem497->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem498 = cylTable->verticalHeaderItem(35);
        ___qtablewidgetitem498->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem499 = cylTable->verticalHeaderItem(36);
        ___qtablewidgetitem499->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem500 = cylTable->verticalHeaderItem(37);
        ___qtablewidgetitem500->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem501 = cylTable->verticalHeaderItem(38);
        ___qtablewidgetitem501->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem502 = cylTable->verticalHeaderItem(39);
        ___qtablewidgetitem502->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem503 = cylTable->verticalHeaderItem(40);
        ___qtablewidgetitem503->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem504 = cylTable->verticalHeaderItem(41);
        ___qtablewidgetitem504->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem505 = cylTable->verticalHeaderItem(42);
        ___qtablewidgetitem505->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem506 = cylTable->verticalHeaderItem(43);
        ___qtablewidgetitem506->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem507 = cylTable->verticalHeaderItem(44);
        ___qtablewidgetitem507->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem508 = cylTable->verticalHeaderItem(45);
        ___qtablewidgetitem508->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem509 = cylTable->verticalHeaderItem(46);
        ___qtablewidgetitem509->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem510 = cylTable->verticalHeaderItem(47);
        ___qtablewidgetitem510->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem511 = cylTable->verticalHeaderItem(48);
        ___qtablewidgetitem511->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem512 = cylTable->verticalHeaderItem(49);
        ___qtablewidgetitem512->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cylTable->setToolTip(QApplication::translate("InputRZForm", "Input cylinder radii.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cylTable->setWhatsThis(QApplication::translate("InputRZForm", "Input cylinder radii.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(Gtab), QApplication::translate("InputRZForm", "Geometry", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cavityGroupBox->setToolTip(QApplication::translate("InputRZForm", "Define cavity geometry.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cavityGroupBox->setWhatsThis(QApplication::translate("InputRZForm", "Define cavity geometry.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cavityGroupBox->setTitle(QApplication::translate("InputRZForm", "Cavity input", Q_NULLPTR));
        ButtonGroup25->setTitle(QApplication::translate("InputRZForm", "chamber type", Q_NULLPTR));
        thimbleRadioButton->setText(QApplication::translate("InputRZForm", "thimble", Q_NULLPTR));
        parallelplateRadioButton->setText(QApplication::translate("InputRZForm", "parallel plate", Q_NULLPTR));
        wallLabel->setText(QApplication::translate("InputRZForm", "Wall thickness", Q_NULLPTR));
        wallthickEdit->setText(QApplication::translate("InputRZForm", "0.1", Q_NULLPTR));
        cavradLabel->setText(QApplication::translate("InputRZForm", "Cavity radius", Q_NULLPTR));
        cavradEdit->setText(QApplication::translate("InputRZForm", "1.0", Q_NULLPTR));
        cavlenLabel->setText(QApplication::translate("InputRZForm", "Cavity length", Q_NULLPTR));
        cavlenEdit->setText(QApplication::translate("InputRZForm", "2.0", Q_NULLPTR));
        electradLabel->setText(QApplication::translate("InputRZForm", "Electrode radius", Q_NULLPTR));
        electradEdit->setText(QApplication::translate("InputRZForm", "0.01", Q_NULLPTR));
        wallmaterialLabel->setText(QApplication::translate("InputRZForm", "Wall material", Q_NULLPTR));
        electrmatLabel->setText(QApplication::translate("InputRZForm", "Electrode material", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gr_indGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        gr_indGroupBox->setTitle(QApplication::translate("InputRZForm", "Group or individual input", Q_NULLPTR));
        GroupBox56->setTitle(QApplication::translate("InputRZForm", "Regions comprising cavity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem513 = cavTable->horizontalHeaderItem(0);
        ___qtablewidgetitem513->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem514 = cavTable->verticalHeaderItem(0);
        ___qtablewidgetitem514->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem515 = cavTable->verticalHeaderItem(1);
        ___qtablewidgetitem515->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem516 = cavTable->verticalHeaderItem(2);
        ___qtablewidgetitem516->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem517 = cavTable->verticalHeaderItem(3);
        ___qtablewidgetitem517->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem518 = cavTable->verticalHeaderItem(4);
        ___qtablewidgetitem518->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem519 = cavTable->verticalHeaderItem(5);
        ___qtablewidgetitem519->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem520 = cavTable->verticalHeaderItem(6);
        ___qtablewidgetitem520->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem521 = cavTable->verticalHeaderItem(7);
        ___qtablewidgetitem521->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem522 = cavTable->verticalHeaderItem(8);
        ___qtablewidgetitem522->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem523 = cavTable->verticalHeaderItem(9);
        ___qtablewidgetitem523->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem524 = cavTable->verticalHeaderItem(10);
        ___qtablewidgetitem524->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem525 = cavTable->verticalHeaderItem(11);
        ___qtablewidgetitem525->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem526 = cavTable->verticalHeaderItem(12);
        ___qtablewidgetitem526->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem527 = cavTable->verticalHeaderItem(13);
        ___qtablewidgetitem527->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem528 = cavTable->verticalHeaderItem(14);
        ___qtablewidgetitem528->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem529 = cavTable->verticalHeaderItem(15);
        ___qtablewidgetitem529->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem530 = cavTable->verticalHeaderItem(16);
        ___qtablewidgetitem530->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem531 = cavTable->verticalHeaderItem(17);
        ___qtablewidgetitem531->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem532 = cavTable->verticalHeaderItem(18);
        ___qtablewidgetitem532->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem533 = cavTable->verticalHeaderItem(19);
        ___qtablewidgetitem533->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem534 = cavTable->verticalHeaderItem(20);
        ___qtablewidgetitem534->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem535 = cavTable->verticalHeaderItem(21);
        ___qtablewidgetitem535->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem536 = cavTable->verticalHeaderItem(22);
        ___qtablewidgetitem536->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem537 = cavTable->verticalHeaderItem(23);
        ___qtablewidgetitem537->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem538 = cavTable->verticalHeaderItem(24);
        ___qtablewidgetitem538->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem539 = cavTable->verticalHeaderItem(25);
        ___qtablewidgetitem539->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem540 = cavTable->verticalHeaderItem(26);
        ___qtablewidgetitem540->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem541 = cavTable->verticalHeaderItem(27);
        ___qtablewidgetitem541->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem542 = cavTable->verticalHeaderItem(28);
        ___qtablewidgetitem542->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem543 = cavTable->verticalHeaderItem(29);
        ___qtablewidgetitem543->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem544 = cavTable->verticalHeaderItem(30);
        ___qtablewidgetitem544->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem545 = cavTable->verticalHeaderItem(31);
        ___qtablewidgetitem545->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem546 = cavTable->verticalHeaderItem(32);
        ___qtablewidgetitem546->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem547 = cavTable->verticalHeaderItem(33);
        ___qtablewidgetitem547->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem548 = cavTable->verticalHeaderItem(34);
        ___qtablewidgetitem548->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem549 = cavTable->verticalHeaderItem(35);
        ___qtablewidgetitem549->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem550 = cavTable->verticalHeaderItem(36);
        ___qtablewidgetitem550->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem551 = cavTable->verticalHeaderItem(37);
        ___qtablewidgetitem551->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem552 = cavTable->verticalHeaderItem(38);
        ___qtablewidgetitem552->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem553 = cavTable->verticalHeaderItem(39);
        ___qtablewidgetitem553->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem554 = cavTable->verticalHeaderItem(40);
        ___qtablewidgetitem554->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem555 = cavTable->verticalHeaderItem(41);
        ___qtablewidgetitem555->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem556 = cavTable->verticalHeaderItem(42);
        ___qtablewidgetitem556->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem557 = cavTable->verticalHeaderItem(43);
        ___qtablewidgetitem557->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem558 = cavTable->verticalHeaderItem(44);
        ___qtablewidgetitem558->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem559 = cavTable->verticalHeaderItem(45);
        ___qtablewidgetitem559->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem560 = cavTable->verticalHeaderItem(46);
        ___qtablewidgetitem560->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem561 = cavTable->verticalHeaderItem(47);
        ___qtablewidgetitem561->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem562 = cavTable->verticalHeaderItem(48);
        ___qtablewidgetitem562->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem563 = cavTable->verticalHeaderItem(49);
        ___qtablewidgetitem563->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(CItab), QApplication::translate("InputRZForm", "Cavity", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ELGroupBox->setToolTip(QApplication::translate("InputRZForm", "Specify upper and lower energy limits for all PEGSless data", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ELGroupBox->setTitle(QApplication::translate("InputRZForm", "energy limits (MeV)", Q_NULLPTR));
        AELabel->setText(QApplication::translate("InputRZForm", "AE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        AEEdit->setToolTip(QApplication::translate("InputRZForm", "minimum total e- energy for cross-sections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        APLabel->setText(QApplication::translate("InputRZForm", "AP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        APEdit->setToolTip(QApplication::translate("InputRZForm", "minimum photon energy for cross-sections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UELabel->setText(QApplication::translate("InputRZForm", "UE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UEEdit->setToolTip(QApplication::translate("InputRZForm", "maximum e- kinetic energy for cross-sections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        UPLabel->setText(QApplication::translate("InputRZForm", "UP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        UPEdit->setToolTip(QApplication::translate("InputRZForm", "maximum photon energy for cross-sections", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MDGroupBox->setToolTip(QApplication::translate("InputRZForm", "<html><head/><body><p>Use this if PEGSless media specified in a material data file. Additional media can be specified in the .egsinp file (see below).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MDGroupBox->setTitle(QApplication::translate("InputRZForm", "material data file name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MDFileButton->setToolTip(QApplication::translate("InputRZForm", "Browse to select a material data file.\n"
"Browsing starts in your $EGS_HOME/pegs4/data directory.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        MDFileButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        inpmediaGroupBox->setTitle(QApplication::translate("InputRZForm", "media defined in .egsinp file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        compositionGroupBox->setToolTip(QApplication::translate("InputRZForm", "specify medium composition", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        compositionGroupBox->setTitle(QApplication::translate("InputRZForm", "Medium composition", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem564 = pz_or_rhozTable->horizontalHeaderItem(0);
        ___qtablewidgetitem564->setText(QApplication::translate("InputRZForm", "Element", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem565 = pz_or_rhozTable->horizontalHeaderItem(1);
        ___qtablewidgetitem565->setText(QApplication::translate("InputRZForm", "Fraction by weight", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem566 = pz_or_rhozTable->verticalHeaderItem(0);
        ___qtablewidgetitem566->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem567 = pz_or_rhozTable->verticalHeaderItem(1);
        ___qtablewidgetitem567->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem568 = pz_or_rhozTable->verticalHeaderItem(2);
        ___qtablewidgetitem568->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem569 = pz_or_rhozTable->verticalHeaderItem(3);
        ___qtablewidgetitem569->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem570 = pz_or_rhozTable->verticalHeaderItem(4);
        ___qtablewidgetitem570->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem571 = pz_or_rhozTable->verticalHeaderItem(5);
        ___qtablewidgetitem571->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem572 = pz_or_rhozTable->verticalHeaderItem(6);
        ___qtablewidgetitem572->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem573 = pz_or_rhozTable->verticalHeaderItem(7);
        ___qtablewidgetitem573->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem574 = pz_or_rhozTable->verticalHeaderItem(8);
        ___qtablewidgetitem574->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem575 = pz_or_rhozTable->verticalHeaderItem(9);
        ___qtablewidgetitem575->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem576 = pz_or_rhozTable->verticalHeaderItem(10);
        ___qtablewidgetitem576->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem577 = pz_or_rhozTable->verticalHeaderItem(11);
        ___qtablewidgetitem577->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem578 = pz_or_rhozTable->verticalHeaderItem(12);
        ___qtablewidgetitem578->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem579 = pz_or_rhozTable->verticalHeaderItem(13);
        ___qtablewidgetitem579->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem580 = pz_or_rhozTable->verticalHeaderItem(14);
        ___qtablewidgetitem580->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem581 = pz_or_rhozTable->verticalHeaderItem(15);
        ___qtablewidgetitem581->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem582 = pz_or_rhozTable->verticalHeaderItem(16);
        ___qtablewidgetitem582->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem583 = pz_or_rhozTable->verticalHeaderItem(17);
        ___qtablewidgetitem583->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem584 = pz_or_rhozTable->verticalHeaderItem(18);
        ___qtablewidgetitem584->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem585 = pz_or_rhozTable->verticalHeaderItem(19);
        ___qtablewidgetitem585->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem586 = pz_or_rhozTable->verticalHeaderItem(20);
        ___qtablewidgetitem586->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem587 = pz_or_rhozTable->verticalHeaderItem(21);
        ___qtablewidgetitem587->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem588 = pz_or_rhozTable->verticalHeaderItem(22);
        ___qtablewidgetitem588->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem589 = pz_or_rhozTable->verticalHeaderItem(23);
        ___qtablewidgetitem589->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem590 = pz_or_rhozTable->verticalHeaderItem(24);
        ___qtablewidgetitem590->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem591 = pz_or_rhozTable->verticalHeaderItem(25);
        ___qtablewidgetitem591->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem592 = pz_or_rhozTable->verticalHeaderItem(26);
        ___qtablewidgetitem592->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem593 = pz_or_rhozTable->verticalHeaderItem(27);
        ___qtablewidgetitem593->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem594 = pz_or_rhozTable->verticalHeaderItem(28);
        ___qtablewidgetitem594->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem595 = pz_or_rhozTable->verticalHeaderItem(29);
        ___qtablewidgetitem595->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem596 = pz_or_rhozTable->verticalHeaderItem(30);
        ___qtablewidgetitem596->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem597 = pz_or_rhozTable->verticalHeaderItem(31);
        ___qtablewidgetitem597->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem598 = pz_or_rhozTable->verticalHeaderItem(32);
        ___qtablewidgetitem598->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem599 = pz_or_rhozTable->verticalHeaderItem(33);
        ___qtablewidgetitem599->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem600 = pz_or_rhozTable->verticalHeaderItem(34);
        ___qtablewidgetitem600->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem601 = pz_or_rhozTable->verticalHeaderItem(35);
        ___qtablewidgetitem601->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem602 = pz_or_rhozTable->verticalHeaderItem(36);
        ___qtablewidgetitem602->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem603 = pz_or_rhozTable->verticalHeaderItem(37);
        ___qtablewidgetitem603->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem604 = pz_or_rhozTable->verticalHeaderItem(38);
        ___qtablewidgetitem604->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem605 = pz_or_rhozTable->verticalHeaderItem(39);
        ___qtablewidgetitem605->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem606 = pz_or_rhozTable->verticalHeaderItem(40);
        ___qtablewidgetitem606->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem607 = pz_or_rhozTable->verticalHeaderItem(41);
        ___qtablewidgetitem607->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem608 = pz_or_rhozTable->verticalHeaderItem(42);
        ___qtablewidgetitem608->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem609 = pz_or_rhozTable->verticalHeaderItem(43);
        ___qtablewidgetitem609->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem610 = pz_or_rhozTable->verticalHeaderItem(44);
        ___qtablewidgetitem610->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem611 = pz_or_rhozTable->verticalHeaderItem(45);
        ___qtablewidgetitem611->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem612 = pz_or_rhozTable->verticalHeaderItem(46);
        ___qtablewidgetitem612->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem613 = pz_or_rhozTable->verticalHeaderItem(47);
        ___qtablewidgetitem613->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem614 = pz_or_rhozTable->verticalHeaderItem(48);
        ___qtablewidgetitem614->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem615 = pz_or_rhozTable->verticalHeaderItem(49);
        ___qtablewidgetitem615->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pz_or_rhozTable->setToolTip(QApplication::translate("InputRZForm", "Elements must be specified by their chemical symbol all uppercase.\n"
"For mixtures, composition is specified by fraction by weight of each element.\n"
"For compounds, composition is specified by stoichiometric index of each element.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        medNameGroupBox->setTitle(QApplication::translate("InputRZForm", "Medium name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        inpmediumComboBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        medTypeGroupBox->setTitle(QApplication::translate("InputRZForm", "Medium type", Q_NULLPTR));
        medTypeComboBox->clear();
        medTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "Element", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Compound", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Mixture", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        medTypeComboBox->setToolTip(QApplication::translate("InputRZForm", "Select 'Mixture' to specify composition by fraction by weight,\n"
"'Compound' to specify by stoichiometric index", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rhoGroupBox->setTitle(QApplication::translate("InputRZForm", "Mass density", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        rhoEdit->setToolTip(QApplication::translate("InputRZForm", "medium density in g/cm^3 or kg/cm^3", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        rhoScaleComboBox->clear();
        rhoScaleComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "g/cm^3", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "kg/cm^3", Q_NULLPTR)
        );
        medOptionsGroupBox->setTitle(QApplication::translate("InputRZForm", "Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DCcheckBox->setToolTip(QApplication::translate("InputRZForm", "Select to specify an ICRU density correction file (see below).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DCcheckBox->setText(QApplication::translate("InputRZForm", "ICRU density correction", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ICRUradCheckBox->setToolTip(QApplication::translate("InputRZForm", "Select to use ICRU corrections to brems cross-sections.\n"
"Otherwise, Koch-Motz (KM) corrections will be used. ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ICRUradCheckBox->setText(QApplication::translate("InputRZForm", "ICRU radiative stopping power", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        isGasCheckBox->setToolTip(QApplication::translate("InputRZForm", "Check this if the medium is a gas.\n"
"This will enable you to input the gas pressure of the medium.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        isGasCheckBox->setText(QApplication::translate("InputRZForm", "medium is a gas", Q_NULLPTR));
        gaspLabel->setText(QApplication::translate("InputRZForm", "gas pressure", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gaspEdit->setToolTip(QApplication::translate("InputRZForm", "If the medium is a gas, specify gas pressure (atm) here.\n"
"Defaults to 1 atm. if left blank or zero.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gaspUnits->setText(QApplication::translate("InputRZForm", "atm", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        DFgroupBox->setToolTip(QApplication::translate("InputRZForm", "Specify a density correction file which, when applied to calculated cross-sections,\n"
"results in agreement with stopping powers published in ICRU37.  Note that medium\n"
"composition and density as specified in the density correction file are used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DFgroupBox->setTitle(QApplication::translate("InputRZForm", "Density correction file", Q_NULLPTR));
        DFSearchLabel->setText(QApplication::translate("InputRZForm", "Look in", Q_NULLPTR));
        DFSearchComboBox->clear();
        DFSearchComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "EGS_HOME", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "HEN_HOUSE", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        DFSearchComboBox->setToolTip(QApplication::translate("InputRZForm", "Select in which directory to begin browsing for the density correction file.\n"
"Will start in /pegs4/density_corrections/ subdirectory off the directory selected here.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        DFEdit->setToolTip(QApplication::translate("InputRZForm", "Full name of density correction file.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        DFBrowse->setToolTip(QApplication::translate("InputRZForm", "Browse for density correction file.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        DFBrowse->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(MDTab), QApplication::translate("InputRZForm", "Media Definition", Q_NULLPTR));
        in_particleButtonGroup->setTitle(QApplication::translate("InputRZForm", "Incident particle", Q_NULLPTR));
        eRadioButton->setText(QApplication::translate("InputRZForm", "electron", Q_NULLPTR));
        phRadioButton->setText(QApplication::translate("InputRZForm", "photon", Q_NULLPTR));
        pRadioButton->setText(QApplication::translate("InputRZForm", "positron", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        chargedRadioButton->setToolTip(QApplication::translate("InputRZForm", "available only for source 21 and 22", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        chargedRadioButton->setText(QApplication::translate("InputRZForm", "charged", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        allRadioButton->setToolTip(QApplication::translate("InputRZForm", "available only for source 21 and 22", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        allRadioButton->setText(QApplication::translate("InputRZForm", "all", Q_NULLPTR));
        energyButtonGroup->setTitle(QApplication::translate("InputRZForm", "Incident energy", Q_NULLPTR));
        monoenergeticRadioButton->setText(QApplication::translate("InputRZForm", "monoenergetic", Q_NULLPTR));
        spectrumRadioButton->setText(QApplication::translate("InputRZForm", "spectrum", Q_NULLPTR));
        IniEgroupBox->setTitle(QApplication::translate("InputRZForm", "Incident kinetic E [MeV]", Q_NULLPTR));
        specfnameGroupBox->setTitle(QApplication::translate("InputRZForm", "Spectrum file name", Q_NULLPTR));
        specfnameComboBox->clear();
        specfnameComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "co60.spectrum", Q_NULLPTR)
        );
        specfnameButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        ioutspGroupBox->setTitle(QString());
        ioutspCheckBox->setText(QApplication::translate("InputRZForm", "Include spectrum in .egslst", Q_NULLPTR));
        sourceLabel->setText(QApplication::translate("InputRZForm", "source number", Q_NULLPTR));
        sourceComboBox->clear();
        sourceComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "0", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "1", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "2", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "3", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "4", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "10", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "11", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "12", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "13", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "14", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "15", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "16", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "20", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "21", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "22", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "23", Q_NULLPTR)
        );
        sourceoptionsGroupBox->setTitle(QApplication::translate("InputRZForm", "Source options", Q_NULLPTR));
        temp1Label->setText(QApplication::translate("InputRZForm", "temp1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        temp1Edit->setToolTip(QApplication::translate("InputRZForm", "change depending on source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        temp2Label->setText(QApplication::translate("InputRZForm", "temp2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        temp2Edit->setToolTip(QApplication::translate("InputRZForm", "change depending on source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        temp3Label->setText(QApplication::translate("InputRZForm", "temp3", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        temp3Edit->setToolTip(QApplication::translate("InputRZForm", "change depending on source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        temp4Label->setText(QApplication::translate("InputRZForm", "temp4", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        temp4Edit->setToolTip(QApplication::translate("InputRZForm", "change depending on source", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        temp5Label->setText(QApplication::translate("InputRZForm", "temp5", Q_NULLPTR));
        temp6Label->setText(QApplication::translate("InputRZForm", "temp6", Q_NULLPTR));
        temp7Label->setText(QApplication::translate("InputRZForm", "temp7", Q_NULLPTR));
        phasespaceGroupBox->setTitle(QApplication::translate("InputRZForm", "Phase space file", Q_NULLPTR));
        phasespaceComboBox->clear();
        phasespaceComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "dummy.file", Q_NULLPTR)
        );
        phasespacePushButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        src20GroupBox->setTitle(QApplication::translate("InputRZForm", "Radial Distribution Input", Q_NULLPTR));
        srcinpmodeButtonGroup->setTitle(QApplication::translate("InputRZForm", "Input mode", Q_NULLPTR));
        localRadioButton->setText(QApplication::translate("InputRZForm", "Local", Q_NULLPTR));
        externalRadioButton->setText(QApplication::translate("InputRZForm", "External", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem616 = raddistTable->horizontalHeaderItem(0);
        ___qtablewidgetitem616->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem617 = raddistTable->horizontalHeaderItem(1);
        ___qtablewidgetitem617->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem618 = raddistTable->verticalHeaderItem(0);
        ___qtablewidgetitem618->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem619 = raddistTable->verticalHeaderItem(1);
        ___qtablewidgetitem619->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem620 = raddistTable->verticalHeaderItem(2);
        ___qtablewidgetitem620->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem621 = raddistTable->verticalHeaderItem(3);
        ___qtablewidgetitem621->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem622 = raddistTable->verticalHeaderItem(4);
        ___qtablewidgetitem622->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem623 = raddistTable->verticalHeaderItem(5);
        ___qtablewidgetitem623->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem624 = raddistTable->verticalHeaderItem(6);
        ___qtablewidgetitem624->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem625 = raddistTable->verticalHeaderItem(7);
        ___qtablewidgetitem625->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem626 = raddistTable->verticalHeaderItem(8);
        ___qtablewidgetitem626->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem627 = raddistTable->verticalHeaderItem(9);
        ___qtablewidgetitem627->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem628 = raddistTable->verticalHeaderItem(10);
        ___qtablewidgetitem628->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem629 = raddistTable->verticalHeaderItem(11);
        ___qtablewidgetitem629->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem630 = raddistTable->verticalHeaderItem(12);
        ___qtablewidgetitem630->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem631 = raddistTable->verticalHeaderItem(13);
        ___qtablewidgetitem631->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem632 = raddistTable->verticalHeaderItem(14);
        ___qtablewidgetitem632->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem633 = raddistTable->verticalHeaderItem(15);
        ___qtablewidgetitem633->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem634 = raddistTable->verticalHeaderItem(16);
        ___qtablewidgetitem634->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem635 = raddistTable->verticalHeaderItem(17);
        ___qtablewidgetitem635->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem636 = raddistTable->verticalHeaderItem(18);
        ___qtablewidgetitem636->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem637 = raddistTable->verticalHeaderItem(19);
        ___qtablewidgetitem637->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem638 = raddistTable->verticalHeaderItem(20);
        ___qtablewidgetitem638->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem639 = raddistTable->verticalHeaderItem(21);
        ___qtablewidgetitem639->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem640 = raddistTable->verticalHeaderItem(22);
        ___qtablewidgetitem640->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem641 = raddistTable->verticalHeaderItem(23);
        ___qtablewidgetitem641->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem642 = raddistTable->verticalHeaderItem(24);
        ___qtablewidgetitem642->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem643 = raddistTable->verticalHeaderItem(25);
        ___qtablewidgetitem643->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem644 = raddistTable->verticalHeaderItem(26);
        ___qtablewidgetitem644->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem645 = raddistTable->verticalHeaderItem(27);
        ___qtablewidgetitem645->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem646 = raddistTable->verticalHeaderItem(28);
        ___qtablewidgetitem646->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem647 = raddistTable->verticalHeaderItem(29);
        ___qtablewidgetitem647->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem648 = raddistTable->verticalHeaderItem(30);
        ___qtablewidgetitem648->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem649 = raddistTable->verticalHeaderItem(31);
        ___qtablewidgetitem649->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem650 = raddistTable->verticalHeaderItem(32);
        ___qtablewidgetitem650->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem651 = raddistTable->verticalHeaderItem(33);
        ___qtablewidgetitem651->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem652 = raddistTable->verticalHeaderItem(34);
        ___qtablewidgetitem652->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem653 = raddistTable->verticalHeaderItem(35);
        ___qtablewidgetitem653->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem654 = raddistTable->verticalHeaderItem(36);
        ___qtablewidgetitem654->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem655 = raddistTable->verticalHeaderItem(37);
        ___qtablewidgetitem655->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem656 = raddistTable->verticalHeaderItem(38);
        ___qtablewidgetitem656->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem657 = raddistTable->verticalHeaderItem(39);
        ___qtablewidgetitem657->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem658 = raddistTable->verticalHeaderItem(40);
        ___qtablewidgetitem658->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem659 = raddistTable->verticalHeaderItem(41);
        ___qtablewidgetitem659->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem660 = raddistTable->verticalHeaderItem(42);
        ___qtablewidgetitem660->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem661 = raddistTable->verticalHeaderItem(43);
        ___qtablewidgetitem661->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem662 = raddistTable->verticalHeaderItem(44);
        ___qtablewidgetitem662->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem663 = raddistTable->verticalHeaderItem(45);
        ___qtablewidgetitem663->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem664 = raddistTable->verticalHeaderItem(46);
        ___qtablewidgetitem664->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem665 = raddistTable->verticalHeaderItem(47);
        ___qtablewidgetitem665->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem666 = raddistTable->verticalHeaderItem(48);
        ___qtablewidgetitem666->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem667 = raddistTable->verticalHeaderItem(49);
        ___qtablewidgetitem667->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        raddistfnameGroupBox->setTitle(QApplication::translate("InputRZForm", "radial distribution file name", Q_NULLPTR));
        raddistfnameComboBox->clear();
        raddistfnameComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "dummy.file", Q_NULLPTR)
        );
        raddistfnameButton->setText(QApplication::translate("InputRZForm", "...", Q_NULLPTR));
        ioutrdistGroupBox->setTitle(QString());
        ioutrdistCheckBox->setText(QApplication::translate("InputRZForm", "Include distrib. data in summary", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(SItab), QApplication::translate("InputRZForm", "Source", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PairAngSamplingGroupBox->setToolTip(QApplication::translate("InputRZForm", "If off, pairs set in motion at angle m/E. If Simple, leading term of angular dist. turned on. If KM, turns on 2BS from Koch and Motz", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        PairAngSamplingGroupBox->setTitle(QApplication::translate("InputRZForm", "Pair angular sampling", Q_NULLPTR));
        PairAngSamplingComboBox->clear();
        PairAngSamplingComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "Simple", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "KM", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        BremsAngSamplingGroupBox->setToolTip(QApplication::translate("InputRZForm", "If KM, complete modified Koch-Motz 2BS used. If Simple, only leading term of Koch-Motz distribution used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BremsAngSamplingGroupBox->setTitle(QApplication::translate("InputRZForm", " Brems angular sampling", Q_NULLPTR));
        BremsAngSamplingComboBox->clear();
        BremsAngSamplingComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "KM", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Simple", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        BremsXSectionGroupBox->setToolTip(QApplication::translate("InputRZForm", "If BH,  Bethe-Heitler brems. cross sections used. If NIST, NIST brems cross section used (basis for ICRU radiative stopping powers).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BremsXSectionGroupBox->setTitle(QApplication::translate("InputRZForm", "Brems cross sections", Q_NULLPTR));
        BremsXSectionComboBox->clear();
        BremsXSectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "BH", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "NIST", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        estep_algorithmGroupBox->setToolTip(QApplication::translate("InputRZForm", "Algorithm used to take into account lateral and longitudinal correlations in a condensed history step.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        estep_algorithmGroupBox->setTitle(QApplication::translate("InputRZForm", "Electron-step algorithm", Q_NULLPTR));
        estep_algorithmComboBox->clear();
        estep_algorithmComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "PRESTA-II", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "PRESTA-I", Q_NULLPTR)
        );
        EIIgroupBox->setTitle(QApplication::translate("InputRZForm", "Electron impact ionization", Q_NULLPTR));
        EIIcomboBox->clear();
        EIIcomboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "On", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "CASNATI", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "KOLBENSTVEDT", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "GRYZINSKI", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        BCAGroupBox->setToolTip(QApplication::translate("InputRZForm", "Two selections possible: EXACT, means crossing boundaries in a single scattering mode and PRESTA-I, boundaries crossed a la PRESTA, i.e. lateral correlations turned off and MS forced at boundaries. ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BCAGroupBox->setTitle(QApplication::translate("InputRZForm", "Boundary crossing algorithm", Q_NULLPTR));
        BCAComboBox->clear();
        BCAComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "EXACT", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "PRESTA-I", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GECUTGroupBox->setToolTip(QApplication::translate("InputRZForm", "Global electron transport cut off energy (in MeV, includes electron rest energy).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GECUTGroupBox->setTitle(QApplication::translate("InputRZForm", "Global ECUT", Q_NULLPTR));
        GECUTEdit->setText(QApplication::translate("InputRZForm", "0.521", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GPCUTGroupBox->setToolTip(QApplication::translate("InputRZForm", "Global photon transport cut off energy (in MeV).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GPCUTGroupBox->setTitle(QApplication::translate("InputRZForm", "Global PCUT", Q_NULLPTR));
        GPCUTEdit->setText(QApplication::translate("InputRZForm", "0.001", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GSMAXGroupBox->setToolTip(QApplication::translate("InputRZForm", "Global maximum step-size restriction for electron transport (in cm). If using default EGSnrc electron-step algorithm, no SMAX-restriction necessary.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GSMAXGroupBox->setTitle(QApplication::translate("InputRZForm", "Global SMAX", Q_NULLPTR));
        RayleighgroupBox->setTitle(QApplication::translate("InputRZForm", "Rayleigh scattering", Q_NULLPTR));
        RayleighcomboBox->clear();
        RayleighcomboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "Off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "On", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "custom", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "On in Regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off in Regions", Q_NULLPTR)
        );
        PEgroupBox->setTitle(QApplication::translate("InputRZForm", "PE angular sampling", Q_NULLPTR));
        PEcomboBox->clear();
        PEcomboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "On", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "On in Regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off in Regions", Q_NULLPTR)
        );
        BoundComptongroupBox->setTitle(QApplication::translate("InputRZForm", "Bound Compton", Q_NULLPTR));
        BoundComptoncomboBox->clear();
        BoundComptoncomboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "On", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "norej", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "simple", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "On in Regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off in Regions", Q_NULLPTR)
        );
        RelaxationgroupBox->setTitle(QApplication::translate("InputRZForm", "Atomic relaxations", Q_NULLPTR));
        RelaxationcomboBox->clear();
        RelaxationcomboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "On", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "On in Regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Off in Regions", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "eadl", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "simple", Q_NULLPTR)
        );
        ECUTCheckBox->setText(QApplication::translate("InputRZForm", "ECUT by regions", Q_NULLPTR));
        PCUTCheckBox->setText(QApplication::translate("InputRZForm", "PCUT by regions", Q_NULLPTR));
        SMAXCheckBox->setText(QApplication::translate("InputRZForm", "SMAX by regions", Q_NULLPTR));
        photonXSectiongroupBox->setTitle(QApplication::translate("InputRZForm", "Photon cross section library", Q_NULLPTR));
        photonXSectioncomboBox->clear();
        photonXSectioncomboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "PEGS4", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "XCOM", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "EPDL", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        photonXSectionOutCheckBox->setToolTip(QApplication::translate("InputRZForm", "If On, then a file $EGS_HOME/user_code/inputfile.xsections is output containing photon cross-section data used.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        photonXSectionOutCheckBox->setText(QApplication::translate("InputRZForm", "Photon cross-sections output", Q_NULLPTR));
        customFFgroupBox->setTitle(QApplication::translate("InputRZForm", "Custom Rayleigh Form Factors:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem668 = customFFTable->horizontalHeaderItem(0);
        ___qtablewidgetitem668->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem669 = customFFTable->horizontalHeaderItem(1);
        ___qtablewidgetitem669->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem670 = customFFTable->verticalHeaderItem(0);
        ___qtablewidgetitem670->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem671 = customFFTable->verticalHeaderItem(1);
        ___qtablewidgetitem671->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem672 = customFFTable->verticalHeaderItem(2);
        ___qtablewidgetitem672->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem673 = customFFTable->verticalHeaderItem(3);
        ___qtablewidgetitem673->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem674 = customFFTable->verticalHeaderItem(4);
        ___qtablewidgetitem674->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem675 = customFFTable->verticalHeaderItem(5);
        ___qtablewidgetitem675->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem676 = customFFTable->verticalHeaderItem(6);
        ___qtablewidgetitem676->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem677 = customFFTable->verticalHeaderItem(7);
        ___qtablewidgetitem677->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem678 = customFFTable->verticalHeaderItem(8);
        ___qtablewidgetitem678->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem679 = customFFTable->verticalHeaderItem(9);
        ___qtablewidgetitem679->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem680 = customFFTable->verticalHeaderItem(10);
        ___qtablewidgetitem680->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem681 = customFFTable->verticalHeaderItem(11);
        ___qtablewidgetitem681->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem682 = customFFTable->verticalHeaderItem(12);
        ___qtablewidgetitem682->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem683 = customFFTable->verticalHeaderItem(13);
        ___qtablewidgetitem683->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem684 = customFFTable->verticalHeaderItem(14);
        ___qtablewidgetitem684->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem685 = customFFTable->verticalHeaderItem(15);
        ___qtablewidgetitem685->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem686 = customFFTable->verticalHeaderItem(16);
        ___qtablewidgetitem686->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem687 = customFFTable->verticalHeaderItem(17);
        ___qtablewidgetitem687->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem688 = customFFTable->verticalHeaderItem(18);
        ___qtablewidgetitem688->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem689 = customFFTable->verticalHeaderItem(19);
        ___qtablewidgetitem689->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem690 = customFFTable->verticalHeaderItem(20);
        ___qtablewidgetitem690->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem691 = customFFTable->verticalHeaderItem(21);
        ___qtablewidgetitem691->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem692 = customFFTable->verticalHeaderItem(22);
        ___qtablewidgetitem692->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem693 = customFFTable->verticalHeaderItem(23);
        ___qtablewidgetitem693->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem694 = customFFTable->verticalHeaderItem(24);
        ___qtablewidgetitem694->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem695 = customFFTable->verticalHeaderItem(25);
        ___qtablewidgetitem695->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem696 = customFFTable->verticalHeaderItem(26);
        ___qtablewidgetitem696->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem697 = customFFTable->verticalHeaderItem(27);
        ___qtablewidgetitem697->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem698 = customFFTable->verticalHeaderItem(28);
        ___qtablewidgetitem698->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem699 = customFFTable->verticalHeaderItem(29);
        ___qtablewidgetitem699->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem700 = customFFTable->verticalHeaderItem(30);
        ___qtablewidgetitem700->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem701 = customFFTable->verticalHeaderItem(31);
        ___qtablewidgetitem701->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem702 = customFFTable->verticalHeaderItem(32);
        ___qtablewidgetitem702->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem703 = customFFTable->verticalHeaderItem(33);
        ___qtablewidgetitem703->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem704 = customFFTable->verticalHeaderItem(34);
        ___qtablewidgetitem704->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem705 = customFFTable->verticalHeaderItem(35);
        ___qtablewidgetitem705->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem706 = customFFTable->verticalHeaderItem(36);
        ___qtablewidgetitem706->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem707 = customFFTable->verticalHeaderItem(37);
        ___qtablewidgetitem707->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem708 = customFFTable->verticalHeaderItem(38);
        ___qtablewidgetitem708->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem709 = customFFTable->verticalHeaderItem(39);
        ___qtablewidgetitem709->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem710 = customFFTable->verticalHeaderItem(40);
        ___qtablewidgetitem710->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem711 = customFFTable->verticalHeaderItem(41);
        ___qtablewidgetitem711->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem712 = customFFTable->verticalHeaderItem(42);
        ___qtablewidgetitem712->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem713 = customFFTable->verticalHeaderItem(43);
        ___qtablewidgetitem713->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem714 = customFFTable->verticalHeaderItem(44);
        ___qtablewidgetitem714->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem715 = customFFTable->verticalHeaderItem(45);
        ___qtablewidgetitem715->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem716 = customFFTable->verticalHeaderItem(46);
        ___qtablewidgetitem716->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem717 = customFFTable->verticalHeaderItem(47);
        ___qtablewidgetitem717->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem718 = customFFTable->verticalHeaderItem(48);
        ___qtablewidgetitem718->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem719 = customFFTable->verticalHeaderItem(49);
        ___qtablewidgetitem719->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ESTEPELabel->setToolTip(QApplication::translate("InputRZForm", "Maximum fractional energy loss per step. Default is 0.25 (25%).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ESTEPELabel->setText(QApplication::translate("InputRZForm", "ESTEPE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ESTEPEEdit->setToolTip(QApplication::translate("InputRZForm", "Maximum fractional energy loss per step. Default is 0.25 (25%).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ESTEPEEdit->setText(QApplication::translate("InputRZForm", "0.25", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        XImaxLabel->setToolTip(QApplication::translate("InputRZForm", "Maximum first elastic scattering moment per step. NEVER use value greater than 1 as this is beyond the range of MS data available.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        XImaxLabel->setText(QApplication::translate("InputRZForm", "XImax", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        XImaxEdit->setToolTip(QApplication::translate("InputRZForm", "Maximum first elastic scattering moment per step. NEVER use value greater than 1 as this is beyond the range of MS data available.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        XImaxEdit->setText(QApplication::translate("InputRZForm", "0.5", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkinDepthLabel->setToolTip(QApplication::translate("InputRZForm", "distance from a boundary at which the algorithm will go into single scattering mode (in elastic MFP)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SkinDepthLabel->setText(QApplication::translate("InputRZForm", "Skin depth for BCA", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SkinDepthEdit->setToolTip(QApplication::translate("InputRZForm", "distance from a boundary at which the algorithm will go into single scattering mode (in elastic MFP)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SkinDepthEdit->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SpinCheckBox->setToolTip(QApplication::translate("InputRZForm", "Turns off/on spin effects for electron elastic scattering. ABSOLUTELY necessary for good backscattering calculations.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        SpinCheckBox->setText(QApplication::translate("InputRZForm", "Spin effects", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(MCTPtab), QApplication::translate("InputRZForm", "Transport Parameters", Q_NULLPTR));
        PhotonForcingGroupBox->setTitle(QString());
        PhotonForcingCheckBox->setText(QApplication::translate("InputRZForm", "Photon Forcing", Q_NULLPTR));
        StartForcingLabel->setText(QApplication::translate("InputRZForm", "start forcing", Q_NULLPTR));
        StopForcingLabel->setText(QApplication::translate("InputRZForm", "stop forcing", Q_NULLPTR));
        ExpTrafoCGroupBox->setTitle(QApplication::translate("InputRZForm", "Photon pathlength biasing", Q_NULLPTR));
        ExpTrafoCLabel->setText(QApplication::translate("InputRZForm", "biasing parameter C:", Q_NULLPTR));
        ExpTrafoCEdit->setText(QApplication::translate("InputRZForm", "0.0", Q_NULLPTR));
        RRGroupBox->setTitle(QApplication::translate("InputRZForm", "Russian Roulette (photons)", Q_NULLPTR));
        RRDepthLabel->setText(QApplication::translate("InputRZForm", "Z Depth:", Q_NULLPTR));
        RRDepthEdit->setText(QApplication::translate("InputRZForm", "0.0", Q_NULLPTR));
        RRFractionLabel->setText(QApplication::translate("InputRZForm", "Fraction:", Q_NULLPTR));
        RRFractionEdit->setText(QApplication::translate("InputRZForm", "0.0", Q_NULLPTR));
        photonSplitGroupBox->setTitle(QApplication::translate("InputRZForm", "Photon splitting", Q_NULLPTR));
        photonSplitLabel->setText(QApplication::translate("InputRZForm", "splitting number", Q_NULLPTR));
        CSEnhancementGroupBox->setTitle(QApplication::translate("InputRZForm", "Photon cross section enhancement", Q_NULLPTR));
        TextLabel8->setText(QApplication::translate("InputRZForm", "CS Enhancement factor", Q_NULLPTR));
        CSEnhancement_RegionsLabel1->setText(QApplication::translate("InputRZForm", "Regions to apply CS Enhancement", Q_NULLPTR));
        CSEnhancement_RegionsLabel2->setText(QApplication::translate("InputRZForm", " (DOSRZnrc only)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem720 = CSEnhancementTable->horizontalHeaderItem(0);
        ___qtablewidgetitem720->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem721 = CSEnhancementTable->horizontalHeaderItem(1);
        ___qtablewidgetitem721->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem722 = CSEnhancementTable->verticalHeaderItem(0);
        ___qtablewidgetitem722->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem723 = CSEnhancementTable->verticalHeaderItem(1);
        ___qtablewidgetitem723->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem724 = CSEnhancementTable->verticalHeaderItem(2);
        ___qtablewidgetitem724->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem725 = CSEnhancementTable->verticalHeaderItem(3);
        ___qtablewidgetitem725->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem726 = CSEnhancementTable->verticalHeaderItem(4);
        ___qtablewidgetitem726->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem727 = CSEnhancementTable->verticalHeaderItem(5);
        ___qtablewidgetitem727->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem728 = CSEnhancementTable->verticalHeaderItem(6);
        ___qtablewidgetitem728->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem729 = CSEnhancementTable->verticalHeaderItem(7);
        ___qtablewidgetitem729->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem730 = CSEnhancementTable->verticalHeaderItem(8);
        ___qtablewidgetitem730->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem731 = CSEnhancementTable->verticalHeaderItem(9);
        ___qtablewidgetitem731->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem732 = CSEnhancementTable->verticalHeaderItem(10);
        ___qtablewidgetitem732->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem733 = CSEnhancementTable->verticalHeaderItem(11);
        ___qtablewidgetitem733->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem734 = CSEnhancementTable->verticalHeaderItem(12);
        ___qtablewidgetitem734->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem735 = CSEnhancementTable->verticalHeaderItem(13);
        ___qtablewidgetitem735->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem736 = CSEnhancementTable->verticalHeaderItem(14);
        ___qtablewidgetitem736->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem737 = CSEnhancementTable->verticalHeaderItem(15);
        ___qtablewidgetitem737->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem738 = CSEnhancementTable->verticalHeaderItem(16);
        ___qtablewidgetitem738->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem739 = CSEnhancementTable->verticalHeaderItem(17);
        ___qtablewidgetitem739->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem740 = CSEnhancementTable->verticalHeaderItem(18);
        ___qtablewidgetitem740->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem741 = CSEnhancementTable->verticalHeaderItem(19);
        ___qtablewidgetitem741->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem742 = CSEnhancementTable->verticalHeaderItem(20);
        ___qtablewidgetitem742->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem743 = CSEnhancementTable->verticalHeaderItem(21);
        ___qtablewidgetitem743->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem744 = CSEnhancementTable->verticalHeaderItem(22);
        ___qtablewidgetitem744->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem745 = CSEnhancementTable->verticalHeaderItem(23);
        ___qtablewidgetitem745->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem746 = CSEnhancementTable->verticalHeaderItem(24);
        ___qtablewidgetitem746->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem747 = CSEnhancementTable->verticalHeaderItem(25);
        ___qtablewidgetitem747->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem748 = CSEnhancementTable->verticalHeaderItem(26);
        ___qtablewidgetitem748->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem749 = CSEnhancementTable->verticalHeaderItem(27);
        ___qtablewidgetitem749->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem750 = CSEnhancementTable->verticalHeaderItem(28);
        ___qtablewidgetitem750->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem751 = CSEnhancementTable->verticalHeaderItem(29);
        ___qtablewidgetitem751->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem752 = CSEnhancementTable->verticalHeaderItem(30);
        ___qtablewidgetitem752->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem753 = CSEnhancementTable->verticalHeaderItem(31);
        ___qtablewidgetitem753->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem754 = CSEnhancementTable->verticalHeaderItem(32);
        ___qtablewidgetitem754->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem755 = CSEnhancementTable->verticalHeaderItem(33);
        ___qtablewidgetitem755->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem756 = CSEnhancementTable->verticalHeaderItem(34);
        ___qtablewidgetitem756->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem757 = CSEnhancementTable->verticalHeaderItem(35);
        ___qtablewidgetitem757->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem758 = CSEnhancementTable->verticalHeaderItem(36);
        ___qtablewidgetitem758->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem759 = CSEnhancementTable->verticalHeaderItem(37);
        ___qtablewidgetitem759->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem760 = CSEnhancementTable->verticalHeaderItem(38);
        ___qtablewidgetitem760->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem761 = CSEnhancementTable->verticalHeaderItem(39);
        ___qtablewidgetitem761->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem762 = CSEnhancementTable->verticalHeaderItem(40);
        ___qtablewidgetitem762->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem763 = CSEnhancementTable->verticalHeaderItem(41);
        ___qtablewidgetitem763->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem764 = CSEnhancementTable->verticalHeaderItem(42);
        ___qtablewidgetitem764->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem765 = CSEnhancementTable->verticalHeaderItem(43);
        ___qtablewidgetitem765->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem766 = CSEnhancementTable->verticalHeaderItem(44);
        ___qtablewidgetitem766->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem767 = CSEnhancementTable->verticalHeaderItem(45);
        ___qtablewidgetitem767->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem768 = CSEnhancementTable->verticalHeaderItem(46);
        ___qtablewidgetitem768->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem769 = CSEnhancementTable->verticalHeaderItem(47);
        ___qtablewidgetitem769->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem770 = CSEnhancementTable->verticalHeaderItem(48);
        ___qtablewidgetitem770->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem771 = CSEnhancementTable->verticalHeaderItem(49);
        ___qtablewidgetitem771->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        ESAVEINGroupBox->setTitle(QString());
        eRangeRejCheckBox->setText(QApplication::translate("InputRZForm", "Electron Range Rejection", Q_NULLPTR));
        ESAVEINLabel->setText(QApplication::translate("InputRZForm", "ESAVEIN", Q_NULLPTR));
        BremsSplitGroupBox->setTitle(QString());
        BremsSplitTextLabel->setText(QApplication::translate("InputRZForm", "# of brems. per event", Q_NULLPTR));
        BremsSplitCheckBox->setText(QApplication::translate("InputRZForm", "Bremsstrahlung splitting", Q_NULLPTR));
        ChargedPartRRCheckBox->setText(QApplication::translate("InputRZForm", "Russian Roulette (charged particles )", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(VRtab), QApplication::translate("InputRZForm", "Variance Reduction", Q_NULLPTR));
        PCUTGroupBox->setTitle(QApplication::translate("InputRZForm", "PCUT by regions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem772 = PCUTTable->horizontalHeaderItem(0);
        ___qtablewidgetitem772->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem773 = PCUTTable->horizontalHeaderItem(1);
        ___qtablewidgetitem773->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem774 = PCUTTable->horizontalHeaderItem(2);
        ___qtablewidgetitem774->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem775 = PCUTTable->verticalHeaderItem(0);
        ___qtablewidgetitem775->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem776 = PCUTTable->verticalHeaderItem(1);
        ___qtablewidgetitem776->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem777 = PCUTTable->verticalHeaderItem(2);
        ___qtablewidgetitem777->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem778 = PCUTTable->verticalHeaderItem(3);
        ___qtablewidgetitem778->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem779 = PCUTTable->verticalHeaderItem(4);
        ___qtablewidgetitem779->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem780 = PCUTTable->verticalHeaderItem(5);
        ___qtablewidgetitem780->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem781 = PCUTTable->verticalHeaderItem(6);
        ___qtablewidgetitem781->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem782 = PCUTTable->verticalHeaderItem(7);
        ___qtablewidgetitem782->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem783 = PCUTTable->verticalHeaderItem(8);
        ___qtablewidgetitem783->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem784 = PCUTTable->verticalHeaderItem(9);
        ___qtablewidgetitem784->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem785 = PCUTTable->verticalHeaderItem(10);
        ___qtablewidgetitem785->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem786 = PCUTTable->verticalHeaderItem(11);
        ___qtablewidgetitem786->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem787 = PCUTTable->verticalHeaderItem(12);
        ___qtablewidgetitem787->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem788 = PCUTTable->verticalHeaderItem(13);
        ___qtablewidgetitem788->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem789 = PCUTTable->verticalHeaderItem(14);
        ___qtablewidgetitem789->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem790 = PCUTTable->verticalHeaderItem(15);
        ___qtablewidgetitem790->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem791 = PCUTTable->verticalHeaderItem(16);
        ___qtablewidgetitem791->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem792 = PCUTTable->verticalHeaderItem(17);
        ___qtablewidgetitem792->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem793 = PCUTTable->verticalHeaderItem(18);
        ___qtablewidgetitem793->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem794 = PCUTTable->verticalHeaderItem(19);
        ___qtablewidgetitem794->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        ECUTGroupBox->setTitle(QApplication::translate("InputRZForm", "ECUT by regions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem795 = ECUTTable->horizontalHeaderItem(0);
        ___qtablewidgetitem795->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem796 = ECUTTable->horizontalHeaderItem(1);
        ___qtablewidgetitem796->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem797 = ECUTTable->horizontalHeaderItem(2);
        ___qtablewidgetitem797->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem798 = ECUTTable->verticalHeaderItem(0);
        ___qtablewidgetitem798->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem799 = ECUTTable->verticalHeaderItem(1);
        ___qtablewidgetitem799->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem800 = ECUTTable->verticalHeaderItem(2);
        ___qtablewidgetitem800->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem801 = ECUTTable->verticalHeaderItem(3);
        ___qtablewidgetitem801->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem802 = ECUTTable->verticalHeaderItem(4);
        ___qtablewidgetitem802->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem803 = ECUTTable->verticalHeaderItem(5);
        ___qtablewidgetitem803->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem804 = ECUTTable->verticalHeaderItem(6);
        ___qtablewidgetitem804->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem805 = ECUTTable->verticalHeaderItem(7);
        ___qtablewidgetitem805->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem806 = ECUTTable->verticalHeaderItem(8);
        ___qtablewidgetitem806->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem807 = ECUTTable->verticalHeaderItem(9);
        ___qtablewidgetitem807->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem808 = ECUTTable->verticalHeaderItem(10);
        ___qtablewidgetitem808->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem809 = ECUTTable->verticalHeaderItem(11);
        ___qtablewidgetitem809->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem810 = ECUTTable->verticalHeaderItem(12);
        ___qtablewidgetitem810->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem811 = ECUTTable->verticalHeaderItem(13);
        ___qtablewidgetitem811->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem812 = ECUTTable->verticalHeaderItem(14);
        ___qtablewidgetitem812->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem813 = ECUTTable->verticalHeaderItem(15);
        ___qtablewidgetitem813->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem814 = ECUTTable->verticalHeaderItem(16);
        ___qtablewidgetitem814->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem815 = ECUTTable->verticalHeaderItem(17);
        ___qtablewidgetitem815->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem816 = ECUTTable->verticalHeaderItem(18);
        ___qtablewidgetitem816->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem817 = ECUTTable->verticalHeaderItem(19);
        ___qtablewidgetitem817->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        SMAXGroupBox->setTitle(QApplication::translate("InputRZForm", "SMAX by regions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem818 = SMAXTable->horizontalHeaderItem(0);
        ___qtablewidgetitem818->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem819 = SMAXTable->horizontalHeaderItem(1);
        ___qtablewidgetitem819->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem820 = SMAXTable->horizontalHeaderItem(2);
        ___qtablewidgetitem820->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem821 = SMAXTable->verticalHeaderItem(0);
        ___qtablewidgetitem821->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem822 = SMAXTable->verticalHeaderItem(1);
        ___qtablewidgetitem822->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem823 = SMAXTable->verticalHeaderItem(2);
        ___qtablewidgetitem823->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem824 = SMAXTable->verticalHeaderItem(3);
        ___qtablewidgetitem824->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem825 = SMAXTable->verticalHeaderItem(4);
        ___qtablewidgetitem825->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem826 = SMAXTable->verticalHeaderItem(5);
        ___qtablewidgetitem826->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem827 = SMAXTable->verticalHeaderItem(6);
        ___qtablewidgetitem827->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem828 = SMAXTable->verticalHeaderItem(7);
        ___qtablewidgetitem828->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem829 = SMAXTable->verticalHeaderItem(8);
        ___qtablewidgetitem829->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem830 = SMAXTable->verticalHeaderItem(9);
        ___qtablewidgetitem830->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem831 = SMAXTable->verticalHeaderItem(10);
        ___qtablewidgetitem831->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem832 = SMAXTable->verticalHeaderItem(11);
        ___qtablewidgetitem832->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem833 = SMAXTable->verticalHeaderItem(12);
        ___qtablewidgetitem833->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem834 = SMAXTable->verticalHeaderItem(13);
        ___qtablewidgetitem834->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem835 = SMAXTable->verticalHeaderItem(14);
        ___qtablewidgetitem835->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem836 = SMAXTable->verticalHeaderItem(15);
        ___qtablewidgetitem836->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem837 = SMAXTable->verticalHeaderItem(16);
        ___qtablewidgetitem837->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem838 = SMAXTable->verticalHeaderItem(17);
        ___qtablewidgetitem838->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem839 = SMAXTable->verticalHeaderItem(18);
        ___qtablewidgetitem839->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem840 = SMAXTable->verticalHeaderItem(19);
        ___qtablewidgetitem840->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BoundComptonGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BoundComptonGroupBox->setTitle(QApplication::translate("InputRZForm", "Bound Compton scattering", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem841 = BoundComptonTable->horizontalHeaderItem(0);
        ___qtablewidgetitem841->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem842 = BoundComptonTable->horizontalHeaderItem(1);
        ___qtablewidgetitem842->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem843 = BoundComptonTable->verticalHeaderItem(0);
        ___qtablewidgetitem843->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem844 = BoundComptonTable->verticalHeaderItem(1);
        ___qtablewidgetitem844->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem845 = BoundComptonTable->verticalHeaderItem(2);
        ___qtablewidgetitem845->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem846 = BoundComptonTable->verticalHeaderItem(3);
        ___qtablewidgetitem846->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem847 = BoundComptonTable->verticalHeaderItem(4);
        ___qtablewidgetitem847->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem848 = BoundComptonTable->verticalHeaderItem(5);
        ___qtablewidgetitem848->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem849 = BoundComptonTable->verticalHeaderItem(6);
        ___qtablewidgetitem849->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem850 = BoundComptonTable->verticalHeaderItem(7);
        ___qtablewidgetitem850->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem851 = BoundComptonTable->verticalHeaderItem(8);
        ___qtablewidgetitem851->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem852 = BoundComptonTable->verticalHeaderItem(9);
        ___qtablewidgetitem852->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem853 = BoundComptonTable->verticalHeaderItem(10);
        ___qtablewidgetitem853->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem854 = BoundComptonTable->verticalHeaderItem(11);
        ___qtablewidgetitem854->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem855 = BoundComptonTable->verticalHeaderItem(12);
        ___qtablewidgetitem855->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem856 = BoundComptonTable->verticalHeaderItem(13);
        ___qtablewidgetitem856->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem857 = BoundComptonTable->verticalHeaderItem(14);
        ___qtablewidgetitem857->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem858 = BoundComptonTable->verticalHeaderItem(15);
        ___qtablewidgetitem858->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem859 = BoundComptonTable->verticalHeaderItem(16);
        ___qtablewidgetitem859->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem860 = BoundComptonTable->verticalHeaderItem(17);
        ___qtablewidgetitem860->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem861 = BoundComptonTable->verticalHeaderItem(18);
        ___qtablewidgetitem861->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem862 = BoundComptonTable->verticalHeaderItem(19);
        ___qtablewidgetitem862->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RelaxationsGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RelaxationsGroupBox->setTitle(QApplication::translate("InputRZForm", "Atomic Relaxations", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem863 = RelaxationsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem863->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem864 = RelaxationsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem864->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem865 = RelaxationsTable->verticalHeaderItem(0);
        ___qtablewidgetitem865->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem866 = RelaxationsTable->verticalHeaderItem(1);
        ___qtablewidgetitem866->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem867 = RelaxationsTable->verticalHeaderItem(2);
        ___qtablewidgetitem867->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem868 = RelaxationsTable->verticalHeaderItem(3);
        ___qtablewidgetitem868->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem869 = RelaxationsTable->verticalHeaderItem(4);
        ___qtablewidgetitem869->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem870 = RelaxationsTable->verticalHeaderItem(5);
        ___qtablewidgetitem870->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem871 = RelaxationsTable->verticalHeaderItem(6);
        ___qtablewidgetitem871->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem872 = RelaxationsTable->verticalHeaderItem(7);
        ___qtablewidgetitem872->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem873 = RelaxationsTable->verticalHeaderItem(8);
        ___qtablewidgetitem873->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem874 = RelaxationsTable->verticalHeaderItem(9);
        ___qtablewidgetitem874->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem875 = RelaxationsTable->verticalHeaderItem(10);
        ___qtablewidgetitem875->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem876 = RelaxationsTable->verticalHeaderItem(11);
        ___qtablewidgetitem876->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem877 = RelaxationsTable->verticalHeaderItem(12);
        ___qtablewidgetitem877->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem878 = RelaxationsTable->verticalHeaderItem(13);
        ___qtablewidgetitem878->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem879 = RelaxationsTable->verticalHeaderItem(14);
        ___qtablewidgetitem879->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem880 = RelaxationsTable->verticalHeaderItem(15);
        ___qtablewidgetitem880->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem881 = RelaxationsTable->verticalHeaderItem(16);
        ___qtablewidgetitem881->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem882 = RelaxationsTable->verticalHeaderItem(17);
        ___qtablewidgetitem882->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem883 = RelaxationsTable->verticalHeaderItem(18);
        ___qtablewidgetitem883->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem884 = RelaxationsTable->verticalHeaderItem(19);
        ___qtablewidgetitem884->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PEAngSamGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        PEAngSamGroupBox->setTitle(QApplication::translate("InputRZForm", "PE ang. sampling", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem885 = PEAngSamplingTable->horizontalHeaderItem(0);
        ___qtablewidgetitem885->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem886 = PEAngSamplingTable->horizontalHeaderItem(1);
        ___qtablewidgetitem886->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem887 = PEAngSamplingTable->verticalHeaderItem(0);
        ___qtablewidgetitem887->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem888 = PEAngSamplingTable->verticalHeaderItem(1);
        ___qtablewidgetitem888->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem889 = PEAngSamplingTable->verticalHeaderItem(2);
        ___qtablewidgetitem889->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem890 = PEAngSamplingTable->verticalHeaderItem(3);
        ___qtablewidgetitem890->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem891 = PEAngSamplingTable->verticalHeaderItem(4);
        ___qtablewidgetitem891->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem892 = PEAngSamplingTable->verticalHeaderItem(5);
        ___qtablewidgetitem892->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem893 = PEAngSamplingTable->verticalHeaderItem(6);
        ___qtablewidgetitem893->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem894 = PEAngSamplingTable->verticalHeaderItem(7);
        ___qtablewidgetitem894->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem895 = PEAngSamplingTable->verticalHeaderItem(8);
        ___qtablewidgetitem895->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem896 = PEAngSamplingTable->verticalHeaderItem(9);
        ___qtablewidgetitem896->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem897 = PEAngSamplingTable->verticalHeaderItem(10);
        ___qtablewidgetitem897->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem898 = PEAngSamplingTable->verticalHeaderItem(11);
        ___qtablewidgetitem898->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem899 = PEAngSamplingTable->verticalHeaderItem(12);
        ___qtablewidgetitem899->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem900 = PEAngSamplingTable->verticalHeaderItem(13);
        ___qtablewidgetitem900->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem901 = PEAngSamplingTable->verticalHeaderItem(14);
        ___qtablewidgetitem901->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem902 = PEAngSamplingTable->verticalHeaderItem(15);
        ___qtablewidgetitem902->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem903 = PEAngSamplingTable->verticalHeaderItem(16);
        ___qtablewidgetitem903->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem904 = PEAngSamplingTable->verticalHeaderItem(17);
        ___qtablewidgetitem904->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem905 = PEAngSamplingTable->verticalHeaderItem(18);
        ___qtablewidgetitem905->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem906 = PEAngSamplingTable->verticalHeaderItem(19);
        ___qtablewidgetitem906->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RayleighGroupBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        RayleighGroupBox->setTitle(QApplication::translate("InputRZForm", "Rayleigh scattering", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem907 = RayleighTable->horizontalHeaderItem(0);
        ___qtablewidgetitem907->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem908 = RayleighTable->horizontalHeaderItem(1);
        ___qtablewidgetitem908->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem909 = RayleighTable->verticalHeaderItem(0);
        ___qtablewidgetitem909->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem910 = RayleighTable->verticalHeaderItem(1);
        ___qtablewidgetitem910->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem911 = RayleighTable->verticalHeaderItem(2);
        ___qtablewidgetitem911->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem912 = RayleighTable->verticalHeaderItem(3);
        ___qtablewidgetitem912->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem913 = RayleighTable->verticalHeaderItem(4);
        ___qtablewidgetitem913->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem914 = RayleighTable->verticalHeaderItem(5);
        ___qtablewidgetitem914->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem915 = RayleighTable->verticalHeaderItem(6);
        ___qtablewidgetitem915->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem916 = RayleighTable->verticalHeaderItem(7);
        ___qtablewidgetitem916->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem917 = RayleighTable->verticalHeaderItem(8);
        ___qtablewidgetitem917->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem918 = RayleighTable->verticalHeaderItem(9);
        ___qtablewidgetitem918->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem919 = RayleighTable->verticalHeaderItem(10);
        ___qtablewidgetitem919->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem920 = RayleighTable->verticalHeaderItem(11);
        ___qtablewidgetitem920->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem921 = RayleighTable->verticalHeaderItem(12);
        ___qtablewidgetitem921->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem922 = RayleighTable->verticalHeaderItem(13);
        ___qtablewidgetitem922->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem923 = RayleighTable->verticalHeaderItem(14);
        ___qtablewidgetitem923->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem924 = RayleighTable->verticalHeaderItem(15);
        ___qtablewidgetitem924->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem925 = RayleighTable->verticalHeaderItem(16);
        ___qtablewidgetitem925->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem926 = RayleighTable->verticalHeaderItem(17);
        ___qtablewidgetitem926->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem927 = RayleighTable->verticalHeaderItem(18);
        ___qtablewidgetitem927->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem928 = RayleighTable->verticalHeaderItem(19);
        ___qtablewidgetitem928->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(MCTPRegTab), QApplication::translate("InputRZForm", "Transport Parameters by Region", Q_NULLPTR));
        plotCheckBox->setText(QApplication::translate("InputRZForm", "Plotting", Q_NULLPTR));
        PlotGroupBox->setTitle(QString());
        LinePrnOutCheckBox->setText(QApplication::translate("InputRZForm", "Line printer output", Q_NULLPTR));
        ExtPlotOutCheckBox->setText(QApplication::translate("InputRZForm", "External plotter output", Q_NULLPTR));
        ExternalPlotTypeGroupBox->setTitle(QApplication::translate("InputRZForm", "External plot type", Q_NULLPTR));
        ExternalPlotTypeComboBox->clear();
        ExternalPlotTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "Point", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Histogram", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Both", Q_NULLPTR)
        );
        PlotRegionsGroupBox->setTitle(QApplication::translate("InputRZForm", "Define plot regions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem929 = PlotRegionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem929->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem930 = PlotRegionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem930->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem931 = PlotRegionsTable->verticalHeaderItem(0);
        ___qtablewidgetitem931->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem932 = PlotRegionsTable->verticalHeaderItem(1);
        ___qtablewidgetitem932->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem933 = PlotRegionsTable->verticalHeaderItem(2);
        ___qtablewidgetitem933->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem934 = PlotRegionsTable->verticalHeaderItem(3);
        ___qtablewidgetitem934->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem935 = PlotRegionsTable->verticalHeaderItem(4);
        ___qtablewidgetitem935->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem936 = PlotRegionsTable->verticalHeaderItem(5);
        ___qtablewidgetitem936->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem937 = PlotRegionsTable->verticalHeaderItem(6);
        ___qtablewidgetitem937->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem938 = PlotRegionsTable->verticalHeaderItem(7);
        ___qtablewidgetitem938->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem939 = PlotRegionsTable->verticalHeaderItem(8);
        ___qtablewidgetitem939->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem940 = PlotRegionsTable->verticalHeaderItem(9);
        ___qtablewidgetitem940->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem941 = PlotRegionsTable->verticalHeaderItem(10);
        ___qtablewidgetitem941->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem942 = PlotRegionsTable->verticalHeaderItem(11);
        ___qtablewidgetitem942->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem943 = PlotRegionsTable->verticalHeaderItem(12);
        ___qtablewidgetitem943->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem944 = PlotRegionsTable->verticalHeaderItem(13);
        ___qtablewidgetitem944->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem945 = PlotRegionsTable->verticalHeaderItem(14);
        ___qtablewidgetitem945->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem946 = PlotRegionsTable->verticalHeaderItem(15);
        ___qtablewidgetitem946->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem947 = PlotRegionsTable->verticalHeaderItem(16);
        ___qtablewidgetitem947->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem948 = PlotRegionsTable->verticalHeaderItem(17);
        ___qtablewidgetitem948->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem949 = PlotRegionsTable->verticalHeaderItem(18);
        ___qtablewidgetitem949->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem950 = PlotRegionsTable->verticalHeaderItem(19);
        ___qtablewidgetitem950->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem951 = PlotRegionsTable->verticalHeaderItem(20);
        ___qtablewidgetitem951->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem952 = PlotRegionsTable->verticalHeaderItem(21);
        ___qtablewidgetitem952->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem953 = PlotRegionsTable->verticalHeaderItem(22);
        ___qtablewidgetitem953->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem954 = PlotRegionsTable->verticalHeaderItem(23);
        ___qtablewidgetitem954->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem955 = PlotRegionsTable->verticalHeaderItem(24);
        ___qtablewidgetitem955->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem956 = PlotRegionsTable->verticalHeaderItem(25);
        ___qtablewidgetitem956->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem957 = PlotRegionsTable->verticalHeaderItem(26);
        ___qtablewidgetitem957->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem958 = PlotRegionsTable->verticalHeaderItem(27);
        ___qtablewidgetitem958->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem959 = PlotRegionsTable->verticalHeaderItem(28);
        ___qtablewidgetitem959->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem960 = PlotRegionsTable->verticalHeaderItem(29);
        ___qtablewidgetitem960->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem961 = PlotRegionsTable->verticalHeaderItem(30);
        ___qtablewidgetitem961->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem962 = PlotRegionsTable->verticalHeaderItem(31);
        ___qtablewidgetitem962->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem963 = PlotRegionsTable->verticalHeaderItem(32);
        ___qtablewidgetitem963->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem964 = PlotRegionsTable->verticalHeaderItem(33);
        ___qtablewidgetitem964->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem965 = PlotRegionsTable->verticalHeaderItem(34);
        ___qtablewidgetitem965->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem966 = PlotRegionsTable->verticalHeaderItem(35);
        ___qtablewidgetitem966->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem967 = PlotRegionsTable->verticalHeaderItem(36);
        ___qtablewidgetitem967->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem968 = PlotRegionsTable->verticalHeaderItem(37);
        ___qtablewidgetitem968->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem969 = PlotRegionsTable->verticalHeaderItem(38);
        ___qtablewidgetitem969->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem970 = PlotRegionsTable->verticalHeaderItem(39);
        ___qtablewidgetitem970->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem971 = PlotRegionsTable->verticalHeaderItem(40);
        ___qtablewidgetitem971->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem972 = PlotRegionsTable->verticalHeaderItem(41);
        ___qtablewidgetitem972->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem973 = PlotRegionsTable->verticalHeaderItem(42);
        ___qtablewidgetitem973->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem974 = PlotRegionsTable->verticalHeaderItem(43);
        ___qtablewidgetitem974->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem975 = PlotRegionsTable->verticalHeaderItem(44);
        ___qtablewidgetitem975->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem976 = PlotRegionsTable->verticalHeaderItem(45);
        ___qtablewidgetitem976->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem977 = PlotRegionsTable->verticalHeaderItem(46);
        ___qtablewidgetitem977->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem978 = PlotRegionsTable->verticalHeaderItem(47);
        ___qtablewidgetitem978->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem979 = PlotRegionsTable->verticalHeaderItem(48);
        ___qtablewidgetitem979->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem980 = PlotRegionsTable->verticalHeaderItem(49);
        ___qtablewidgetitem980->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        eminusPlotCheckBox->setText(QApplication::translate("InputRZForm", "Plots for electrons", Q_NULLPTR));
        eplusPlotCheckBox->setText(QApplication::translate("InputRZForm", "Plots for positrons", Q_NULLPTR));
        gammaPlotCheckBox->setText(QApplication::translate("InputRZForm", "Plots for photons", Q_NULLPTR));
        ePlotCheckBox->setText(QApplication::translate("InputRZForm", "Plots for e- and e+", Q_NULLPTR));
        DrawFluPlotsGroupBox->setTitle(QApplication::translate("InputRZForm", "Type of integral fluence to plot", Q_NULLPTR));
        DrawFluPlotsComboBox->clear();
        DrawFluPlotsComboBox->insertItems(0, QStringList()
         << QApplication::translate("InputRZForm", "Primaries and total", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Primaries", Q_NULLPTR)
         << QApplication::translate("InputRZForm", "Total", Q_NULLPTR)
        );
        SpecPlotGroupBox->setTitle(QApplication::translate("InputRZForm", "Spectral plot regions", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem981 = SpecPlotTable->horizontalHeaderItem(0);
        ___qtablewidgetitem981->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem982 = SpecPlotTable->horizontalHeaderItem(1);
        ___qtablewidgetitem982->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem983 = SpecPlotTable->verticalHeaderItem(0);
        ___qtablewidgetitem983->setText(QApplication::translate("InputRZForm", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem984 = SpecPlotTable->verticalHeaderItem(1);
        ___qtablewidgetitem984->setText(QApplication::translate("InputRZForm", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem985 = SpecPlotTable->verticalHeaderItem(2);
        ___qtablewidgetitem985->setText(QApplication::translate("InputRZForm", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem986 = SpecPlotTable->verticalHeaderItem(3);
        ___qtablewidgetitem986->setText(QApplication::translate("InputRZForm", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem987 = SpecPlotTable->verticalHeaderItem(4);
        ___qtablewidgetitem987->setText(QApplication::translate("InputRZForm", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem988 = SpecPlotTable->verticalHeaderItem(5);
        ___qtablewidgetitem988->setText(QApplication::translate("InputRZForm", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem989 = SpecPlotTable->verticalHeaderItem(6);
        ___qtablewidgetitem989->setText(QApplication::translate("InputRZForm", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem990 = SpecPlotTable->verticalHeaderItem(7);
        ___qtablewidgetitem990->setText(QApplication::translate("InputRZForm", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem991 = SpecPlotTable->verticalHeaderItem(8);
        ___qtablewidgetitem991->setText(QApplication::translate("InputRZForm", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem992 = SpecPlotTable->verticalHeaderItem(9);
        ___qtablewidgetitem992->setText(QApplication::translate("InputRZForm", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem993 = SpecPlotTable->verticalHeaderItem(10);
        ___qtablewidgetitem993->setText(QApplication::translate("InputRZForm", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem994 = SpecPlotTable->verticalHeaderItem(11);
        ___qtablewidgetitem994->setText(QApplication::translate("InputRZForm", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem995 = SpecPlotTable->verticalHeaderItem(12);
        ___qtablewidgetitem995->setText(QApplication::translate("InputRZForm", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem996 = SpecPlotTable->verticalHeaderItem(13);
        ___qtablewidgetitem996->setText(QApplication::translate("InputRZForm", "14", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem997 = SpecPlotTable->verticalHeaderItem(14);
        ___qtablewidgetitem997->setText(QApplication::translate("InputRZForm", "15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem998 = SpecPlotTable->verticalHeaderItem(15);
        ___qtablewidgetitem998->setText(QApplication::translate("InputRZForm", "16", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem999 = SpecPlotTable->verticalHeaderItem(16);
        ___qtablewidgetitem999->setText(QApplication::translate("InputRZForm", "17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1000 = SpecPlotTable->verticalHeaderItem(17);
        ___qtablewidgetitem1000->setText(QApplication::translate("InputRZForm", "18", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1001 = SpecPlotTable->verticalHeaderItem(18);
        ___qtablewidgetitem1001->setText(QApplication::translate("InputRZForm", "19", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1002 = SpecPlotTable->verticalHeaderItem(19);
        ___qtablewidgetitem1002->setText(QApplication::translate("InputRZForm", "20", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1003 = SpecPlotTable->verticalHeaderItem(20);
        ___qtablewidgetitem1003->setText(QApplication::translate("InputRZForm", "21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1004 = SpecPlotTable->verticalHeaderItem(21);
        ___qtablewidgetitem1004->setText(QApplication::translate("InputRZForm", "22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1005 = SpecPlotTable->verticalHeaderItem(22);
        ___qtablewidgetitem1005->setText(QApplication::translate("InputRZForm", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1006 = SpecPlotTable->verticalHeaderItem(23);
        ___qtablewidgetitem1006->setText(QApplication::translate("InputRZForm", "24", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1007 = SpecPlotTable->verticalHeaderItem(24);
        ___qtablewidgetitem1007->setText(QApplication::translate("InputRZForm", "25", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1008 = SpecPlotTable->verticalHeaderItem(25);
        ___qtablewidgetitem1008->setText(QApplication::translate("InputRZForm", "26", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1009 = SpecPlotTable->verticalHeaderItem(26);
        ___qtablewidgetitem1009->setText(QApplication::translate("InputRZForm", "27", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1010 = SpecPlotTable->verticalHeaderItem(27);
        ___qtablewidgetitem1010->setText(QApplication::translate("InputRZForm", "28", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1011 = SpecPlotTable->verticalHeaderItem(28);
        ___qtablewidgetitem1011->setText(QApplication::translate("InputRZForm", "29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1012 = SpecPlotTable->verticalHeaderItem(29);
        ___qtablewidgetitem1012->setText(QApplication::translate("InputRZForm", "30", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1013 = SpecPlotTable->verticalHeaderItem(30);
        ___qtablewidgetitem1013->setText(QApplication::translate("InputRZForm", "31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1014 = SpecPlotTable->verticalHeaderItem(31);
        ___qtablewidgetitem1014->setText(QApplication::translate("InputRZForm", "32", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1015 = SpecPlotTable->verticalHeaderItem(32);
        ___qtablewidgetitem1015->setText(QApplication::translate("InputRZForm", "33", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1016 = SpecPlotTable->verticalHeaderItem(33);
        ___qtablewidgetitem1016->setText(QApplication::translate("InputRZForm", "34", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1017 = SpecPlotTable->verticalHeaderItem(34);
        ___qtablewidgetitem1017->setText(QApplication::translate("InputRZForm", "35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1018 = SpecPlotTable->verticalHeaderItem(35);
        ___qtablewidgetitem1018->setText(QApplication::translate("InputRZForm", "36", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1019 = SpecPlotTable->verticalHeaderItem(36);
        ___qtablewidgetitem1019->setText(QApplication::translate("InputRZForm", "37", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1020 = SpecPlotTable->verticalHeaderItem(37);
        ___qtablewidgetitem1020->setText(QApplication::translate("InputRZForm", "38", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1021 = SpecPlotTable->verticalHeaderItem(38);
        ___qtablewidgetitem1021->setText(QApplication::translate("InputRZForm", "39", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1022 = SpecPlotTable->verticalHeaderItem(39);
        ___qtablewidgetitem1022->setText(QApplication::translate("InputRZForm", "40", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1023 = SpecPlotTable->verticalHeaderItem(40);
        ___qtablewidgetitem1023->setText(QApplication::translate("InputRZForm", "41", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1024 = SpecPlotTable->verticalHeaderItem(41);
        ___qtablewidgetitem1024->setText(QApplication::translate("InputRZForm", "42", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1025 = SpecPlotTable->verticalHeaderItem(42);
        ___qtablewidgetitem1025->setText(QApplication::translate("InputRZForm", "43", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1026 = SpecPlotTable->verticalHeaderItem(43);
        ___qtablewidgetitem1026->setText(QApplication::translate("InputRZForm", "44", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1027 = SpecPlotTable->verticalHeaderItem(44);
        ___qtablewidgetitem1027->setText(QApplication::translate("InputRZForm", "45", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1028 = SpecPlotTable->verticalHeaderItem(45);
        ___qtablewidgetitem1028->setText(QApplication::translate("InputRZForm", "46", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1029 = SpecPlotTable->verticalHeaderItem(46);
        ___qtablewidgetitem1029->setText(QApplication::translate("InputRZForm", "47", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1030 = SpecPlotTable->verticalHeaderItem(47);
        ___qtablewidgetitem1030->setText(QApplication::translate("InputRZForm", "48", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1031 = SpecPlotTable->verticalHeaderItem(48);
        ___qtablewidgetitem1031->setText(QApplication::translate("InputRZForm", "49", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1032 = SpecPlotTable->verticalHeaderItem(49);
        ___qtablewidgetitem1032->setText(QApplication::translate("InputRZForm", "50", Q_NULLPTR));
        TabWidgetRZ->setTabText(TabWidgetRZ->indexOf(PLOTtab), QApplication::translate("InputRZForm", "Plot Control", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InputRZForm: public Ui_InputRZForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTRZ_H
