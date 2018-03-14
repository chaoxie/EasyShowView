//
//  EasyAlertTypes.h
//  EasyShowViewDemo
//
//  Created by Mr_Chen on 2018/3/13.
//  Copyright © 2018年 chenliangloveyou. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * 添加一个item的样式，只有color和blod可选
 */
typedef NS_ENUM(NSInteger, AlertItemType) {
    AlertItemTypeBlack = 1,  // 黑色字体
    AlertItemTypeBlodBlack , // 黑色加粗字体
    AlertItemTypeBlue,       // 蓝色字体
    AlertItemTypeBlodBlue,   // 蓝色加粗字体
    AlertItemTypeRed   ,     // 红色字体
    AlertItemTypeBlodRed ,   // 红色加粗字体
    ShowStatusTextTypeCustom //自定义的一种自己，需要配置，如果不配置将会是第一种(黑色字体)
};

/**
 * alertView的动画形式
 */
typedef NS_ENUM(NSInteger , alertAnimationType) {
    alertAnimationTypeNone ,//无动画
    alertAnimationTypeFade,//alpha改变
    alertAnimationTypeBounce ,//抖动
    alertAnimationTypeZoom, //放大缩小
    alertAnimationTypePush ,//向上push
};


typedef NS_ENUM(NSInteger , alertViewType) {
    alertViewTypeAlert ,
    alertViewTypeActionSheet ,
    alertViewTypeSystemAlert ,
    alertViewTypeSystemActionSheet ,
};


typedef NS_ENUM(NSInteger, AlertActionSystemStyle) {
    AlertActionSystemStyleDefault = 0,
    AlertActionSystemStyleCancel,
    AlertActionSystemStyleDestructive
} ;


@class EasyAlertView ;
typedef void (^alertItemCallback)(EasyAlertView *showview);


@interface EasyAlertTypes : NSObject

@end
