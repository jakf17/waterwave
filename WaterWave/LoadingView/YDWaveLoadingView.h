//
//  YDWaveLoadingView.h
//  WaterWave
//
//  Created by jakf_17 on 16/7/8.
//  Copyright © 2016年 jakf_17. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface YDWaveLoadingView : UIView

+ (instancetype)loadingView;

- (void)startLoading;

- (void)stopLoading;

@end
NS_ASSUME_NONNULL_END
