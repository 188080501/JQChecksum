## 一个CRC计算库，目前支持

* CRC16-Modbus

* CRC16-X25

* CRC32

## 使用方法
```
auto data = QByteArray::fromHex( "01 02 03 04 05" );
auto crc16ForModbus = JQChecksum::crc16ForModbus( data );
auto crc16ForX25 = JQChecksum::crc16ForX25( data );
auto crc32 = JQChecksum::crc32( data );

qDebug() << "crc16ForModbus:"   << crc16ForModbus   << QString::number( crc16ForModbus, 16 );
qDebug() << "crc16ForX25:"      << crc16ForX25      << QString::number( crc16ForX25, 16 );
qDebug() << "crc32:"            << crc32            << QString::number( crc32, 16 );
```
