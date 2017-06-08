//
//  DYBaseCellModel.h
//  DYPlayNews
//
//  Created by 袁斌 on 2017/6/6.
//  Copyright © 2017年 https://github.com/DefaultYuan . All rights reserved.
//

#import "DYBaseViewModel.h"
#import "UIImageView+WebCache.h"

@interface DYBaseCellModel<__covariant ObjectType> : DYBaseViewModel

- (instancetype)initWithEntity:(ObjectType)newsEntity;
- (NSURL *) fitSizeImageURLWithURL:(NSString *)url;

@property (nonatomic, readonly) ObjectType entity;
@end
