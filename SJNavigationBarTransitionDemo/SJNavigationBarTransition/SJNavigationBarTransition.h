//
//  SJNavigationBarTransition.h
//  SJNavigationBarTransition
//
//  Created by 如约科技 on 2017/7/10.
//  Copyright © 2017年 如约科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (z_extend)

/// 设置全局导航栏背景颜色（调用此方法设置背景颜色时，会清空之前设置的背景图片）
- (void)setNavigationBarBackgroundColor:(UIColor *)color;

/// 设置全局导航栏背景颜色和透明度
- (void)setNavigationBarBackgroundColor:(UIColor *)color backgroundAlpha:(CGFloat)alpha;

/// 设置全局导航栏背景图片
- (void)setNavigationBarBackgroundImage:(UIImage *)image;

/// 设置全局导航栏背景图片和透明度
- (void)setNavigationBarBackgroundImage:(UIImage *)image backgroundAlpha:(CGFloat)alpha;

/// 实时更新导航栏透明度
- (void)updateNavigationBarBackgroundAlpha:(CGFloat)alpha;

/// 设置导航栏在垂直方向上的位移
- (void)setNavigationBarTranslationY:(CGFloat)translationY;

@end

