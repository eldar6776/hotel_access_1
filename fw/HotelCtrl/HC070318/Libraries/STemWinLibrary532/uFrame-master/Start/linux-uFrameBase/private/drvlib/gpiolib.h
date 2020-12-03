/*****************************************************************************/
/*许继电气股份有限公司                                     版权：2008-2015   */
/*****************************************************************************/
/* 本源代码及其相关文档为河南许昌许继电气股份有限公司独家所有，未经明文许    */
/* 可不得擅自修改或发布，否则将追究相关的法律责任。                          */
/*                                                                           */
/*                      河南许昌许继股份有限公司                             */
/*                      www.xjgc.com                                         */
/*                      (0374) 321 2924                                      */
/*                                                                           */
/*****************************************************************************/


/******************************************************************************
    项目名称    ：  SGE800计量智能终端平台
    文件名      ：  gpio.h
    描述        ：  本文件定义了IO操作模块的接口
    版本        ：  0.1
    作者        ：  路冉冉
    创建日期    ：  2009.12													 
******************************************************************************/


#ifndef _GPIOLIB_H
#define _GPIOLIB_H

/*************************************************
  宏定义
*************************************************/

#define GPIO_IOC_MAGIC 0xE0

#define SETI 	_IO(GPIO_IOC_MAGIC,  0)	//设置IO口为输入
#define SETO 	_IO(GPIO_IOC_MAGIC,  1)	//设置IO口为输出
#define OCLR 	_IO(GPIO_IOC_MAGIC,  2)	//设置参数arg对应I/O口为0(输出有效)
#define OSET 	_IO(GPIO_IOC_MAGIC,  3)	//设置参数arg对应I/O口为1(输出有效)
#define ODE 	_IO(GPIO_IOC_MAGIC,  4)	//设置为od门（输出有效）
#define ODD 	_IO(GPIO_IOC_MAGIC,  5)	//设置为od门（输出有效）
#define PUE 	_IO(GPIO_IOC_MAGIC,  6)	//使用上拉电阻
#define PUD 	_IO(GPIO_IOC_MAGIC,  7)	//禁用上拉电阻
#define IOGETI 	_IO(GPIO_IOC_MAGIC,  8)	//读取参数arg对应的I/O口的输入寄存器，并返回arg
#define IOGETO 	_IO(GPIO_IOC_MAGIC,  9)	//读取参数arg对应的I/O口的输出寄存器，并返回arg
#define IFE 	_IO(GPIO_IOC_MAGIC,  10)	//使能输入毛刺滤波
#define IFD 	_IO(GPIO_IOC_MAGIC,  11)	//禁止输入毛刺滤波

#endif  /* _GPIOLIB_H */
