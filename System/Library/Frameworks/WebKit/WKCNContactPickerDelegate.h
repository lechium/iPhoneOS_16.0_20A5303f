//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKCNContactPickerDelegate : NSObject
{
    struct WeakObjCPtr<id<CNContactPickerDelegate>> _contactPickerDelegate;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000036d69c
- (void).cxx_destruct;	// IMP=0x000000000036d68e
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x000000000036d663
- (id)initWithContactPickerDelegate:(id)arg1;	// IMP=0x000000000036d611

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
