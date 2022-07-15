//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserActivity.h>

@class BSProcessHandle, NSArray, NSString;

@interface NSUserActivity (UISceneActivationConditions)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0010000000d2f9c4
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000d2f76b
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0010000000d2f704
@property(copy, nonatomic) NSString *targetContentIdentifier;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d2fa2b
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000d2f90c
- (void)_setOriginatingProcess:(id)arg1;	// IMP=0x001000000131d9dd
- (void)_setSourceApplication:(id)arg1;	// IMP=0x001000000131d9c7
@property(readonly, nonatomic) BSProcessHandle *_originatingProcess;
@property(readonly, nonatomic) NSString *_sourceApplication;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@end
