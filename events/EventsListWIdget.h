#ifndef EVENTSLISTWIDGET_H
#define EVENTSLISTWIDGET_H

#include <QDialog>
class EventSelectWIdget;
class LVGLWidget;
class QListWidgetItem;

QT_BEGIN_NAMESPACE
namespace Ui {
class EventsListWIdget;
}
QT_END_NAMESPACE

class EventsListWIdget : public QDialog {
  Q_OBJECT

 public:
  EventsListWIdget(LVGLWidget *w, QWidget *parent = nullptr);
  ~EventsListWIdget();

  void setTextList(const QStringList &list);
  QStringList textList();

 private slots:
  void slotSelectWFinished();
  void on_ok_clicked();
  void on_cancel_clicked();
  void on_add_clicked();
  void on_remove_clicked();
  void slotEditItem(QListWidgetItem *item);
  void slotUpdateItem();

 private:
  Ui::EventsListWIdget *ui;
  EventSelectWIdget *m_selectW;
  QStringList m_resultlist;
  LVGLWidget *m_w;
  QListWidgetItem *m_edititem;
};
#endif  // EVENTSLISTWIDGET_H