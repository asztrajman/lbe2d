#include "Mouse.h"

void Mouse::setPosition(const QPoint& _pos) {
	oldPosition = newPosition;
	newPosition = _pos;
}

QPoint& Mouse::pressedCell(const QVector2D& _cellPixelSize) {
	_pressedCell.setX((int)newPosition.x()/_cellPixelSize.x());
	_pressedCell.setY((int)newPosition.y()/_cellPixelSize.y());
	return _pressedCell;
}

QVector2D& Mouse::deltaPosition() {
	_deltaPosition.setX(newPosition.x()-oldPosition.x());
	_deltaPosition.setY(newPosition.y()-oldPosition.y());
	return _deltaPosition;
}
