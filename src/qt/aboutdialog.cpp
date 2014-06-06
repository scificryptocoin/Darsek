#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "clientmodel.h"

#include "version.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    // Set current copyright year
    //ui->copyrightLabel->setText(
      //  tr("Copyright") + QString(" &copy; 2012-%1 ").arg(COPYRIGHT_YEAR) + tr("The Novacoin developers") + QString(",<br>") +
     //   tr("Copyright") + QString(" &copy; 2014-%1 ").arg(COPYRIGHT_YEAR) + tr("The Darsek developers"));
}

void AboutDialog::setModel(ClientModel *model)
{
    if(model)
    {
        ui->versionLabel->setText(model->formatFullVersion());
    }
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_buttonBox_accepted()
{
    close();
}
