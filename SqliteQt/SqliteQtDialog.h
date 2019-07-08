#ifndef SQLITEQTDIALOG_H
#define SQLITEQTDIALOG_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <QMessageBox>
#include <QDebug>


namespace Ui {
class SqliteQtDialog;
}

class SqliteQtDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SqliteQtDialog(QWidget *parent = nullptr);
    ~SqliteQtDialog();

private slots:
    void on_InsertButton_clicked();
    void on_DeleteButton_clicked();
    void on_ModifyButton_clicked();
    void on_SortButton_clicked();    
    void on_IdEdit_editingFinished();//显示数据库姓名和分数

private:
    void createDB(void);//创建数据库
    void createTable(void);//创建学生成绩表
    void queryTable(void); //查询数据表

private:
    Ui::SqliteQtDialog *ui;
    QSqlDatabase db; //建立qt和数据库的链接
    QSqlQueryModel model;//保存和遍历select结果
};

#endif // SQLITEQTDIALOG_H
