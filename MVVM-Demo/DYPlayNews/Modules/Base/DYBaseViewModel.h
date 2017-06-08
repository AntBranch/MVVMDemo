//
//  DYBaseViewModel.h
//  DYPlayNews
//
//  Created by 袁斌 on 2017/5/25.
//  Copyright © 2017年 https://github.com/DefaultYuan All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "DYCellProtocol.h"
#import "DYViewModelProtocol.h"
#import "DYCellRenderProtocol.h"
#import "UIView+DYY.h"

@interface DYBaseViewModel : NSObject<DYViewModelProtocol, DYCellRenderProtocol>

@property (nonatomic)  NSUInteger pageIndex;
@property (nonatomic) NSUInteger pageSize;
@property (nonatomic) NSArray *dataSource;
@property (nonatomic) NSString *topId;

@property (nonatomic) RACCommand *fetchDataCommand; /**< 请求 */
@end
