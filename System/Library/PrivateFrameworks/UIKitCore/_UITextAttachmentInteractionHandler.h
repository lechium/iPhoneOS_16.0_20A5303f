//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTextAttachment;

__attribute__((visibility("hidden")))
@interface _UITextAttachmentInteractionHandler : NSObject
{
    NSTextAttachment *_textAttachment;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000071329
- (id)_image;	// IMP=0x0000000000071313
- (void)_saveToCameraRoll;	// IMP=0x00000000000712d8
- (void)_copyImage;	// IMP=0x0000000000071262
- (id)contextMenuConfiguration;	// IMP=0x0000000000070e83
- (id)defaultActionWithContextMenuInteraction:(id)arg1;	// IMP=0x0000000000070e7b
- (id)initWithTextAttachment:(id)arg1;	// IMP=0x0000000000070e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
