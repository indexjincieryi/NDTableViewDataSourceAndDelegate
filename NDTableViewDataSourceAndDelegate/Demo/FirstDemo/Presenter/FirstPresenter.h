//
//  FirstPresenter.h
//  NDTableViewDataSourceAndDelegate
//
//  Created by NDMAC on 16/6/12.
//  Copyright © 2016年 NDEducation. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FirstModel;

@interface FirstPresenter : NSObject

@property (nonatomic,strong) NSMutableArray *dataArray;
@property (nonatomic, strong) NSDictionary *cellMap;

- (void)obtainMockData;

@end
