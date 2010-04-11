/* This file is part of Clementine.

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EQUALISERSLIDER_H
#define EQUALISERSLIDER_H

#include <QWidget>

#include "ui_equalizerslider.h"

// Contains the slider and the label
class EqualizerSlider : public QWidget {
  Q_OBJECT

 public:
  EqualizerSlider(const QString& label, QWidget *parent = 0);

  int value() const;
  void set_value(int value);

 signals:
  void ValueChanged(int value);

 private:
  Ui::EqualizerSlider ui_;
};

#endif // EQUALISERSLIDER_H
