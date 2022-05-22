#ifndef DEBUG_H
#define DEBUG_H


#ifdef DEBUG

#include <QDebug>
#define db qDebug() << this <<
#define qw qWarning() << this <<

#else

#define db //
#define qw //

#endif
#endif // DEBUG_H
