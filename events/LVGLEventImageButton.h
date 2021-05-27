#ifndef LVGLEVENTIMAGEBUTTON_H
#define LVGLEVENTIMAGEBUTTON_H

#include "LVGLEvent.h"

class LVGLEventImageButton : public LVGLEvent {
 public:
  LVGLEventImageButton();
  void eventRun(lv_obj_t *obj) override;
  QStringList eventCode() override;
};

#endif  // LVGLEVENTIMAGEBUTTON_H
