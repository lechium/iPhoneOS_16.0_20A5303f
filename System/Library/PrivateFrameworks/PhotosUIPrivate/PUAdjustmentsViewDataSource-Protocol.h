//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSIndexPath, PUAdjustmentInfo;

@protocol PUAdjustmentsViewDataSource <NSObject>
- (void)modifyValue:(double)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)setAdjustmentEnabled:(_Bool)arg1 atIndexPath:(NSIndexPath *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)endInteractiveChange;
- (void)beginInteractiveChange;
- (_Bool)canModifyAdjustmentAtIndexPath:(NSIndexPath *)arg1;
- (void)resetInfoAtIndexPath:(NSIndexPath *)arg1;
- (PUAdjustmentInfo *)infoForItemAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;

@optional
- (long long)numberOfItemsInAllSections;
@end
