//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EMContentRepresentation.h>

@class NSString;

@interface EMContentRepresentation (EDMessagePersistence)
- (id)requestUpdatedRepresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x002000000003227e
- (id)requestRepresentationForItemWithObjectID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0020000000031f2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
