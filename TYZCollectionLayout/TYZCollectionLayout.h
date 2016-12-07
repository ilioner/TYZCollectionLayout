//
//  TYZCollectionLayout.h
//  TYZCollectionLayout
//
//  Created by Tywin on 2016/12/6.
//  Copyright © 2016年 Tywin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TYZCollectionLayout : UICollectionViewFlowLayout

@property (nonatomic, strong) UIDynamicAnimator *dynamicAnimator;

- (void)resetLayout;

@end
