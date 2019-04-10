#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

namespace Ui {
    class AboutDialog;
}
class ClientModel;

/** "About" dialog box */
class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

    void setModel(ClientModel *model);
private:
    Ui::AboutDialog *ui;

private slots:
    void on_buttonBox_accepted();
    //void on_versionLabel_linkActivated(const QString &link);
    //void on_label_linkActivated(const QString &link);
};

#endif // ABOUTDIALOG_H
