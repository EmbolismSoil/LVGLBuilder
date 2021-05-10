#ifndef LVGLEVENTSCREEN_H
#define LVGLEVENTSCREEN_H
#include "LVGLEvent.h"

class LVGLEventScreen : public LVGLEvent {
 public:
  LVGLEventScreen();
  void eventRun(lv_obj_t* obj) override;
  QStringList objCode(const QString& objName) override;
  QString eventHeadCode() override;
  QStringList eventCode() override;
};

#endif  // LVGLEVENTSCREEN_H
