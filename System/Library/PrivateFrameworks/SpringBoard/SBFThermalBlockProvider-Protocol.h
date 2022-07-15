//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SBFThermalConditionObserver;

@protocol SBFThermalBlockProvider <NSObject>
- (void)removeThermalObserver:(id <SBFThermalConditionObserver>)arg1;
- (void)addThermalObserver:(id <SBFThermalConditionObserver>)arg1;
- (_Bool)isThermalBlocked;
@end
