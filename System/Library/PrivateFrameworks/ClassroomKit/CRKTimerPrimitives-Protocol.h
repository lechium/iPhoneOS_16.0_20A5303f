//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CRKCancelable;

@protocol CRKTimerPrimitives
- (id <CRKCancelable>)scheduleTimerWithIdentifier:(NSString *)arg1 timeInterval:(double)arg2 fireHandler:(void (^)(void))arg3;
@end

