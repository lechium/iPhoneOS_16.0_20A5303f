//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/SNTestCase-Protocol.h>

@class SNTestContext, UIScrollView;

@protocol SNTestCaseScroll <SNTestCase>
@property(nonatomic, readonly) long long offset;
@property(nonatomic, readonly) long long iterations;
- (UIScrollView *)scrollViewWithContext:(SNTestContext *)arg1;

@optional
@property(nonatomic, readonly) long long numberOfScreens;
@property(nonatomic, readonly) unsigned long long scrollDirection;
@end

