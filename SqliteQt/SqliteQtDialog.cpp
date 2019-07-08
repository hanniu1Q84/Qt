#include "SqliteQtDialog.h"
#include "ui_SqliteQtDialog.h"

SqliteQtDialog::SqliteQtDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SqliteQtDialog)
{
    ui->setupUi(this);
    createDB();
    createTable();

}

SqliteQtDialog::~SqliteQtDialog()
{
    delete ui;
}

void SqliteQtDialog::on_InsertButton_clicked()
{
    //获取学号
    int id = ui->IdEdit->text().toInt();
    //获取姓名
    QString name = ui->NameEdit->text();
    //获取成绩
    double score = ui->ScoreEdit->text().toDouble();
    //构造sql语句
    QString insertSql = QString(
          "INSERT INTO Student VALUES(%1, '%2', %3);")
            .arg(id).arg(name).arg(score);
    qDebug() << insertSql;
    //执行sql语句
    QSqlQuery query;
    query.exec(insertSql);
    query.exec("commit");
    queryTable();
}

//删除，通过一个ID
void SqliteQtDialog::on_DeleteButton_clicked()
{
    int id = ui->IdEdit->text().toInt();
    //构造删除语句
    QString deleteSql = QString(
           "DELETE FROM Student WHERE id=%1").arg(id);
    QSqlQuery query;
    query.exec(deleteSql);
    //查询删除结果和显示
    queryTable();
}

void SqliteQtDialog::on_ModifyButton_clicked()
{
    QSqlQuery query/*("SELECT id,name FROM Student")*/;
    int id = ui->IdEdit->text().toInt();
    //showValue(id);
    //ui->NameEdit->setText(query.value(1).toChar());
    double score = ui->ScoreEdit->text().toDouble();
    QString modifySql = QString(
         "UPDATE Student SET score=%1 WHERE id=%2").
            arg(score).arg(id);
    qDebug() << modifySql;
    query.exec(modifySql);
    //查询和显示
    queryTable();
}

void SqliteQtDialog::on_SortButton_clicked()
{
    QSqlQuery query;
    //获取排序关键字
    QString value = ui->ValuecomboBox->currentText();
    //获取排序的方式
    QString condition;
    if(ui->CondcomboBox->currentIndex()){
        condition = "DESC";
    }
    else {
        condition = "ASC";
    }
    QString sortSql = QString(
            "SELECT * FROM Student ORDER BY %1 %2").
            arg(value).arg(condition);
   // query.exec(sortSql);
    //查询和显示
    //queryTable();
    model.setQuery(sortSql);
    ui->tableView->setModel(&model);
}

void SqliteQtDialog::createDB(void){//创建数据库
    //建立和SQlite数据库的链接
    db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库文件的名称
    db.setDatabaseName("menu.db");
    //打开数据库
    if(db.open() == false){
        QMessageBox::critical(this,"DataError",
                              db.lastError().text());
    }
}
void SqliteQtDialog::createTable(void){//创建学生成绩表
    //构建创建表的SQL语句
    QString createSql = QString("CREATE TABLE Student(\
                            id INT PRIMARY KEY NOT NULL,\
                            name TEXT NOT NULL,\
                            score REAL NOT NULL)");
    QSqlQuery query;
    query.exec(createSql);
    queryTable();
}
void SqliteQtDialog::queryTable(void){ //查询数据表
    QString str = QString("SELECT * FROM Student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}

void SqliteQtDialog::on_IdEdit_editingFinished()
{
    int a =ui->IdEdit->text().toInt();
    QString showValue = QString(
                "SELECT * FROM Student WHERE id LIKE (1%)%").arg(a);
    QSqlQuery query;
    query.exec(showValue);
    QString Name = query.value("name").toString();
    ui->NameEdit->setText(Name);
    //ui->ScoreEdit->setText(query.value(1).toReal());
}
