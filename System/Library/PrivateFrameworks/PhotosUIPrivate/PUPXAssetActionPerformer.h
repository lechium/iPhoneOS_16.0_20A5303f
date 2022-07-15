//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetActionPerformer.h"

@class NSString, PXAssetActionPerformer;
@protocol PXActionPerformerDelegate;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionPerformer : PUAssetActionPerformer
{
    PXAssetActionPerformer *_underlyingActionPerformer;	// 8 = 0x8
    id <PXActionPerformerDelegate> _forwardingDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d8a93
@property(readonly, nonatomic) __weak id <PXActionPerformerDelegate> forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
- (id)undoManagerForActionPerformer:(id)arg1;	// IMP=0x00000000002d8a1b
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002d8935
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000002d886e
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00000000002d8716
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d86f9
- (unsigned long long)state;	// IMP=0x00000000002d86b3
- (id)initWithUnderlyingActionPerformer:(id)arg1;	// IMP=0x00000000002d835c
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;	// IMP=0x00000000002d82cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
