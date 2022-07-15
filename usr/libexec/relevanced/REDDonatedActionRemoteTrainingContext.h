//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/RERemoteTrainingContext.h>

@protocol REPredictionElementDonatedActionProvider;

@interface REDDonatedActionRemoteTrainingContext : RERemoteTrainingContext
{
    id <REPredictionElementDonatedActionProvider> _provider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000a79f
- (void)_didSetAttributeForRemoteTraining;	// IMP=0x001000000000a78e
- (void)_willSetAttributeForRemoteTraining;	// IMP=0x001000000000a77d
- (void)_didPerformRemoteTraining;	// IMP=0x001000000000a76c
- (void)_willPerformRemoteTraining;	// IMP=0x001000000000a75b
- (void)trainWithElement:(id)arg1 isPositiveEvent:(_Bool)arg2 interaction:(id)arg3;	// IMP=0x001000000000a640
- (id)initWithProcessName:(id)arg1 complimentaryActionProvider:(id)arg2;	// IMP=0x001000000000a5c8

@end
