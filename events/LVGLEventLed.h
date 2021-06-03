#ifndef LVGLEVENTLED_H
#define LVGLEVENTLED_H

#include "LVGLEvent.h"

class LVGLEventLed : public LVGLEvent {
 public:
  LVGLEventLed();
  void eventRun(lv_obj_t *obj) override;
  QStringList eventCode() override;
};

#endif  // LVGLEVENTLED_H