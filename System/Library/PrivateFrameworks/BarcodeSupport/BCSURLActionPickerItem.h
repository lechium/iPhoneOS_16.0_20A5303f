//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BCSActionPickerItem.h"

@class LSAppLink, LSApplicationRecord, NSURL;
@protocol BCSCodePayload;

__attribute__((visibility("hidden")))
@interface BCSURLActionPickerItem : BCSActionPickerItem
{
    NSURL *_url;	// 8 = 0x8
    LSApplicationRecord *_applicationRecord;	// 16 = 0x10
    _Bool _preferApplicationIcon;	// 24 = 0x18
    LSAppLink *_appLink;	// 32 = 0x20
    id <BCSCodePayload> _codePayload;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000256c5
@property(readonly, nonatomic) id <BCSCodePayload> codePayload; // @synthesize codePayload=_codePayload;
@property(readonly, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
- (_Bool)useInlineMenu;	// IMP=0x0000000000025634
- (id)actionURL;	// IMP=0x00000000000255ec
- (id)targetApplicationBundleIdentifier;	// IMP=0x0000000000025564
- (void)performAction;	// IMP=0x0000000000025550
- (void)performActionWithFBOptions:(id)arg1;	// IMP=0x000000000002512a
- (id)icon;	// IMP=0x0000000000024fe9
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4 preferApplicationIcon:(_Bool)arg5;	// IMP=0x0000000000024edf
- (id)initWithLabel:(id)arg1 action:(id)arg2 appLink:(id)arg3 codePayload:(id)arg4;	// IMP=0x0000000000024ebd
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4;	// IMP=0x0000000000024e9b
- (id)initWithLabel:(id)arg1 action:(id)arg2 url:(id)arg3 applicationRecord:(id)arg4 preferApplicationIcon:(_Bool)arg5;	// IMP=0x0000000000024dc6

@end
