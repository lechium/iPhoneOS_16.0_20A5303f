//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHMatchResultBulletinContentDeliverer : NSObject
{
}

- (void)deliverContentForNoMatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000003a9fb
- (void)deliverContentForMatchedMediaItem:(id)arg1 imageData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a9f5
- (void)deliverContentForMatchedMediaItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003a9ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
