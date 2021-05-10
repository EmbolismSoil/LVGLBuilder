#ifndef LVGLEVENTLINE_H
#define LVGLEVENTLINE_H

#include "LVGLEvent.h"

class LVGLEventLine : public LVGLEvent {
 public:
  LVGLEventLine();
  void eventRun(lv_obj_t *obj) override;
  QStringList objCode(const QString& objName) override;
  QString eventHeadCode() override;
  QStringList eventCode() override;
};

#endif  // LVGLEVENTLINE_H
