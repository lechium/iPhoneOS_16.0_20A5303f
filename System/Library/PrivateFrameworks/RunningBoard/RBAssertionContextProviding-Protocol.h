//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBProcess, RBSystemState;
@protocol RBBundleProperties, RBEntitlementPossessing;

@protocol RBAssertionContextProviding <NSObject>
@property(readonly, nonatomic) id <RBEntitlementPossessing> targetEntitlements;
@property(readonly, nonatomic) id <RBEntitlementPossessing> originatorEntitlements;
@property(readonly, nonatomic) id <RBBundleProperties> originatorProperties;
@property(readonly, nonatomic) id <RBBundleProperties> targetProperties;
@property(readonly, nonatomic) RBSystemState *systemState;
@property(readonly, nonatomic) RBProcess *targetProcess;
@property(readonly, nonatomic) RBProcess *originatorProcess;
@end
