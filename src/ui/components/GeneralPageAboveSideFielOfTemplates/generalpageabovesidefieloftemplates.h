#ifndef GENERALPAGEABOVESIDEFIELOFTEMPLATES_H
#define GENERALPAGEABOVESIDEFIELOFTEMPLATES_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QToolBar>
#include <QLabel>
#include <QAction>
#include "newfile.h"
#include "resume.h"
#include "resumecoral.h"
#include "letter.h"
#include "projectproposal.h"
#include "brochure.h"


class Templates: public QWidget {
    Q_OBJECT

public:
    explicit Templates(QWidget *parent = nullptr);

private slots:
    void m_newFileItem ();
    void m_template1Item ();
    void m_template2Item ();
    void m_template3Item ();
    void m_template4Item ();
    void m_template5Item ();
    void m_templateGallery ();

private:
    QVBoxLayout *m_mainLayout;
    QHBoxLayout *m_topLayout;
    QPushButton *m_templatesHideButton;
    QPushButton *m_templateGalleryButton;
    QLabel *m_startNewDocumentLabel;
    QListWidget *m_templatesList;
    QHBoxLayout *m_lowLayout;
    QLabel *m_newFileDescriptionLabel;
    QLabel *m_template1DescriptionLabel;
    QLabel *m_template2DescriptionLabel;
    QLabel *m_template3DescriptionLabel;
    QLabel *m_template4DescriptionLabel;
    QLabel *m_template5DescriptionLabel;
    NewFile *m_newFileTemplate;
    Resume *m_resumeTemplate;
    ResumeCoral *m_resumeCoralTemplate;
    Letter *m_letterTemplate;
    ProjectProposal *m_projectProposalTemplate;
    Brochure *m_brochureTemplate;


};



#endif // GENERALPAGEABOVESIDEFIELOFTEMPLATES_H
