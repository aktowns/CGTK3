#include <gtk/gtk.h>

typedef void (*ApplicationActivateCastCB) (GtkApplication* arg1, void* arg2);

typedef void (*ButtonActivateCastCB) (GtkButton* arg1, void* arg2);
typedef void (*ButtonClickedCastCB) (GtkButton* arg1, void* arg2);

static inline GCallback applicationActivateCast(ApplicationActivateCastCB cb) {
  return G_CALLBACK(cb);
}

static inline GCallback buttonActivteCast(ButtonActivateCastCB cb) {
  return G_CALLBACK(cb);
}

static inline GCallback buttonClickedCast(ButtonClickedCastCB cb) {
  return G_CALLBACK(cb);
}
