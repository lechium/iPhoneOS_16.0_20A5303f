//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PUIDDisplayContextFactoryImpl : NSObject
{
}

- (void)createStreamsForDisplay:(id)arg1 context:(id)arg2;	// IMP=0x002000000001208e
- (Class)contextClass;	// IMP=0x001000000001207d
- (id)newDisplayContextForDisplay:(id)arg1 pointerRenderingScene:(id)arg2 systemPointerScene:(id)arg3;	// IMP=0x0010000000011c32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

