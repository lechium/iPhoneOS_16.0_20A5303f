//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COStateManager, NSString;

__attribute__((visibility("hidden")))
@interface COStateManagerClientInterfaceMediator : NSObject
{
    COStateManager *_manager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009079
@property(readonly, nonatomic) __weak COStateManager *manager; // @synthesize manager=_manager;
- (void)mediaSystemLeaderDidChangeTo:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008ffd
- (void)changesObserved:(id)arg1 forPredicate:(id)arg2;	// IMP=0x0000000000008f86
- (id)initWithStateManager:(id)arg1;	// IMP=0x0000000000008f22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
