//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSAction.h"

__attribute__((visibility("hidden")))
@interface BCSStringAction : BCSAction
{
}

- (void)performAction;	// IMP=0x000000000001fc51
- (void)performActionWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fb86
- (void)performDefaultAction;	// IMP=0x000000000001fa5f
- (id)defaultActionTargetApplicationBundleIdentifier;	// IMP=0x000000000001fa52
- (id)actionPickerItems;	// IMP=0x000000000001f8f4
- (id)actionIcon;	// IMP=0x000000000001f8d3
- (id)contentPreviewString;	// IMP=0x000000000001f8c1
- (id)shortDescription;	// IMP=0x000000000001f81c
- (id)localizedDefaultActionDescription;	// IMP=0x000000000001f7fd
- (id)initWithData:(id)arg1 codePayload:(id)arg2;	// IMP=0x000000000001f74a

@end
