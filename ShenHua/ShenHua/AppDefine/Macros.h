//
//  Macros.h
//  ShenHua
//
//  Created by suzhiqiu on 15/7/5.
//  Copyright (c) 2015年 suzhiqiu. All rights reserved.
//

#ifndef ShenHua_Macros_h
#define ShenHua_Macros_h



#define APP_VERSION              [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"] //APP版本号
#define RGB(A,B,C)               [UIColor colorWithRed:A/255.0 green:B/255.0 blue:C/255.0 alpha:1.0]      //RGB值
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define PATH_OF_APPHOME          NSHomeDirectory()
#define PATH_OF_TEMP             NSTemporaryDirectory()
#define PATH_OF_DOCUMENT         [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

//ui全局定义
#define UI_NAVBAR_HEIGHT           44                                         //UINavgationbar高度
#define UI_TABBAR_HEIGHT           49                                         //tabbar高度
#define UI_STATUS_BAR_HEIGHT       20                                         //状态栏高度
//#define UI_STATUS_BAR_HEIGHT      ([[UIApplication sharedApplication] statusBarFrame].size.height) 开启热点变成40
#define UI_SCREEN_WIDTH            [UIScreen mainScreen].bounds.size.width    //屏幕宽度
#define UI_SCREEN_HEIGHT           [UIScreen mainScreen].bounds.size.height   //屏幕高度
#define UI_LABEL_HEIGHT            21                                         //默认label高度
#define UI_CELL_HEIGHT             44                                         //默认cell高度
#define PHONENUMBER_TAG            999                                        //拨打电话默认的tag数


//系统版本号比较 = >  >=   <   <=
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)


#define BASEVIEWCOLOR RGB(248,248,248)                                        //所有继承view的基础颜色



#endif
