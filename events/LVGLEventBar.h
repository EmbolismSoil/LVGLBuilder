#ifndef LVGLEVENTBAR_H
#define LVGLEVENTBAR_H

#include "LVGLEvent.h"

class LVGLEventBar : public LVGLEvent {
 public:
  LVGLEventBar();
  void eventRun(lv_obj_t *obj) override;
  QStringList objCode(const QString& objName) override;
  QString eventHeadCode() override;
  QStringList eventCode() override;
};

#endif  // LVGLEVENTBAR_H
