/*
    This file is part of JQLibrary

    Copyright: Jason

    Contact email: 188080501@qq.com

    GNU Lesser General Public License Usage
    Alternatively, this file may be used under the terms of the GNU Lesser
    General Public License version 2.1 or version 3 as published by the Free
    Software Foundation and appearing in the file LICENSE.LGPLv21 and
    LICENSE.LGPLv3 included in the packaging of this file. Please review the
    following information to ensure the GNU Lesser General Public License
    requirements will be met: https://www.gnu.org/licenses/lgpl.html and
    http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
*/

#ifndef __JQLibrary_JQChecksum_h__
#define __JQLibrary_JQChecksum_h__

// Qt lib import
#include <QByteArray>

namespace JQChecksum
{

quint16 crc16ForModbus(const QByteArray &data);

quint16 crc16ForX25(const QByteArray &data);

quint32 crc32(const QByteArray &data);

}

#endif//__JQLibrary_JQChecksum_h__
