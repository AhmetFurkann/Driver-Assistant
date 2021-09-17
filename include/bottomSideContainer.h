#ifndef BOTTOMSIDECONTAINER_H
#define BOTTOMSIDECONTAINER_H

#include <QtWidgets>

class BottomSideContainer : public QWidget{

public:
  QLabel *placeHolderLabel;
  QGridLayout *bSideLayout;
  explicit BottomSideContainer();
  ~BottomSideContainer();
};

#endif //BOTTOMSIDECONTAINER_H
