#ifndef BSP_MPU6050_H_
#define BSP_MPU6050_H_

void MPU6050_I2C_Init();
void MPU6050_I2C_ByteWrite(u8 slaveAddr, u8* pBuffer, u8 writeAddr);
void MPU6050_I2C_BufferRead(u8 slaveAddr,u8* pBuffer, u8 readAddr, u16 NumByteToRead);

#endif /* BSP_MPU6050_H_ */
